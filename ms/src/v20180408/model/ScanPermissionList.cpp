/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/ms/v20180408/model/ScanPermissionList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

ScanPermissionList::ScanPermissionList() :
    m_permissionListHasBeenSet(false)
{
}

CoreInternalOutcome ScanPermissionList::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("PermissionList") && !value["PermissionList"].IsNull())
    {
        if (!value["PermissionList"].IsArray())
            return CoreInternalOutcome(Error("response `ScanPermissionList.PermissionList` is not array type"));

        const Value &tmpValue = value["PermissionList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanPermissionInfo item;
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

void ScanPermissionList::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_permissionListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PermissionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionList.begin(); itr != m_permissionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ScanPermissionInfo> ScanPermissionList::GetPermissionList() const
{
    return m_permissionList;
}

void ScanPermissionList::SetPermissionList(const vector<ScanPermissionInfo>& _permissionList)
{
    m_permissionList = _permissionList;
    m_permissionListHasBeenSet = true;
}

bool ScanPermissionList::PermissionListHasBeenSet() const
{
    return m_permissionListHasBeenSet;
}

