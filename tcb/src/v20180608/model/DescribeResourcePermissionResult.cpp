/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tcb/v20180608/model/DescribeResourcePermissionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeResourcePermissionResult::DescribeResourcePermissionResult() :
    m_totalCountHasBeenSet(false),
    m_permissionListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourcePermissionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeResourcePermissionResult.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("PermissionList") && !value["PermissionList"].IsNull())
    {
        if (!value["PermissionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeResourcePermissionResult.PermissionList` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourcePermission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissionList.push_back(item);
        }
        m_permissionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeResourcePermissionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_permissionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionList.begin(); itr != m_permissionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeResourcePermissionResult::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeResourcePermissionResult::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeResourcePermissionResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ResourcePermission> DescribeResourcePermissionResult::GetPermissionList() const
{
    return m_permissionList;
}

void DescribeResourcePermissionResult::SetPermissionList(const vector<ResourcePermission>& _permissionList)
{
    m_permissionList = _permissionList;
    m_permissionListHasBeenSet = true;
}

bool DescribeResourcePermissionResult::PermissionListHasBeenSet() const
{
    return m_permissionListHasBeenSet;
}

