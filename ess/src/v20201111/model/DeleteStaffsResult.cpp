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

#include <tencentcloud/ess/v20201111/model/DeleteStaffsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DeleteStaffsResult::DeleteStaffsResult() :
    m_successEmployeeDataHasBeenSet(false),
    m_failedEmployeeDataHasBeenSet(false)
{
}

CoreInternalOutcome DeleteStaffsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SuccessEmployeeData") && !value["SuccessEmployeeData"].IsNull())
    {
        if (!value["SuccessEmployeeData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeleteStaffsResult.SuccessEmployeeData` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessEmployeeData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SuccessDeleteStaffData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_successEmployeeData.push_back(item);
        }
        m_successEmployeeDataHasBeenSet = true;
    }

    if (value.HasMember("FailedEmployeeData") && !value["FailedEmployeeData"].IsNull())
    {
        if (!value["FailedEmployeeData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeleteStaffsResult.FailedEmployeeData` is not array type"));

        const rapidjson::Value &tmpValue = value["FailedEmployeeData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FailedDeleteStaffData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failedEmployeeData.push_back(item);
        }
        m_failedEmployeeDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteStaffsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successEmployeeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessEmployeeData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_successEmployeeData.begin(); itr != m_successEmployeeData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failedEmployeeDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedEmployeeData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failedEmployeeData.begin(); itr != m_failedEmployeeData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SuccessDeleteStaffData> DeleteStaffsResult::GetSuccessEmployeeData() const
{
    return m_successEmployeeData;
}

void DeleteStaffsResult::SetSuccessEmployeeData(const vector<SuccessDeleteStaffData>& _successEmployeeData)
{
    m_successEmployeeData = _successEmployeeData;
    m_successEmployeeDataHasBeenSet = true;
}

bool DeleteStaffsResult::SuccessEmployeeDataHasBeenSet() const
{
    return m_successEmployeeDataHasBeenSet;
}

vector<FailedDeleteStaffData> DeleteStaffsResult::GetFailedEmployeeData() const
{
    return m_failedEmployeeData;
}

void DeleteStaffsResult::SetFailedEmployeeData(const vector<FailedDeleteStaffData>& _failedEmployeeData)
{
    m_failedEmployeeData = _failedEmployeeData;
    m_failedEmployeeDataHasBeenSet = true;
}

bool DeleteStaffsResult::FailedEmployeeDataHasBeenSet() const
{
    return m_failedEmployeeDataHasBeenSet;
}

