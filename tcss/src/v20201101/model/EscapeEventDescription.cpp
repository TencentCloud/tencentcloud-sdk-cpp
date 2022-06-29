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

#include <tencentcloud/tcss/v20201101/model/EscapeEventDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

EscapeEventDescription::EscapeEventDescription() :
    m_descriptionHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_operationTimeHasBeenSet(false)
{
}

CoreInternalOutcome EscapeEventDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventDescription.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventDescription.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventDescription.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("OperationTime") && !value["OperationTime"].IsNull())
    {
        if (!value["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EscapeEventDescription.OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(value["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EscapeEventDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

}


string EscapeEventDescription::GetDescription() const
{
    return m_description;
}

void EscapeEventDescription::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EscapeEventDescription::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string EscapeEventDescription::GetSolution() const
{
    return m_solution;
}

void EscapeEventDescription::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool EscapeEventDescription::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string EscapeEventDescription::GetRemark() const
{
    return m_remark;
}

void EscapeEventDescription::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool EscapeEventDescription::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string EscapeEventDescription::GetOperationTime() const
{
    return m_operationTime;
}

void EscapeEventDescription::SetOperationTime(const string& _operationTime)
{
    m_operationTime = _operationTime;
    m_operationTimeHasBeenSet = true;
}

bool EscapeEventDescription::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

