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

#include <tencentcloud/weilingwith/v20230427/model/SsoDepartmentsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SsoDepartmentsResult::SsoDepartmentsResult() :
    m_totalHasBeenSet(false),
    m_departmentsHasBeenSet(false)
{
}

CoreInternalOutcome SsoDepartmentsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SsoDepartmentsResult.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Departments") && !value["Departments"].IsNull())
    {
        if (!value["Departments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SsoDepartmentsResult.Departments` is not array type"));

        const rapidjson::Value &tmpValue = value["Departments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SsoDepartment item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_departments.push_back(item);
        }
        m_departmentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SsoDepartmentsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_departmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Departments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_departments.begin(); itr != m_departments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SsoDepartmentsResult::GetTotal() const
{
    return m_total;
}

void SsoDepartmentsResult::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool SsoDepartmentsResult::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<SsoDepartment> SsoDepartmentsResult::GetDepartments() const
{
    return m_departments;
}

void SsoDepartmentsResult::SetDepartments(const vector<SsoDepartment>& _departments)
{
    m_departments = _departments;
    m_departmentsHasBeenSet = true;
}

bool SsoDepartmentsResult::DepartmentsHasBeenSet() const
{
    return m_departmentsHasBeenSet;
}

