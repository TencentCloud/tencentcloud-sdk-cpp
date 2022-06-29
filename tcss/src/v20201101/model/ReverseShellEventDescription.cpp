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

#include <tencentcloud/tcss/v20201101/model/ReverseShellEventDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ReverseShellEventDescription::ReverseShellEventDescription() :
    m_descriptionHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_dstAddressHasBeenSet(false),
    m_operationTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReverseShellEventDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellEventDescription.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellEventDescription.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellEventDescription.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("DstAddress") && !value["DstAddress"].IsNull())
    {
        if (!value["DstAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellEventDescription.DstAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAddress = string(value["DstAddress"].GetString());
        m_dstAddressHasBeenSet = true;
    }

    if (value.HasMember("OperationTime") && !value["OperationTime"].IsNull())
    {
        if (!value["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReverseShellEventDescription.OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(value["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReverseShellEventDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dstAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

}


string ReverseShellEventDescription::GetDescription() const
{
    return m_description;
}

void ReverseShellEventDescription::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ReverseShellEventDescription::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ReverseShellEventDescription::GetSolution() const
{
    return m_solution;
}

void ReverseShellEventDescription::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool ReverseShellEventDescription::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string ReverseShellEventDescription::GetRemark() const
{
    return m_remark;
}

void ReverseShellEventDescription::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ReverseShellEventDescription::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ReverseShellEventDescription::GetDstAddress() const
{
    return m_dstAddress;
}

void ReverseShellEventDescription::SetDstAddress(const string& _dstAddress)
{
    m_dstAddress = _dstAddress;
    m_dstAddressHasBeenSet = true;
}

bool ReverseShellEventDescription::DstAddressHasBeenSet() const
{
    return m_dstAddressHasBeenSet;
}

string ReverseShellEventDescription::GetOperationTime() const
{
    return m_operationTime;
}

void ReverseShellEventDescription::SetOperationTime(const string& _operationTime)
{
    m_operationTime = _operationTime;
    m_operationTimeHasBeenSet = true;
}

bool ReverseShellEventDescription::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

