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

#include <tencentcloud/taf/v20200210/model/ManageDeviceRiskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

ManageDeviceRiskOutput::ManageDeviceRiskOutput() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome ManageDeviceRiskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManageDeviceRiskOutput.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManageDeviceRiskOutput.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ManageDeviceRiskOutput.Value` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_value.Deserialize(value["Value"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManageDeviceRiskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_value.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ManageDeviceRiskOutput::GetCode() const
{
    return m_code;
}

void ManageDeviceRiskOutput::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ManageDeviceRiskOutput::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ManageDeviceRiskOutput::GetMessage() const
{
    return m_message;
}

void ManageDeviceRiskOutput::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ManageDeviceRiskOutput::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

ManageDeviceRiskValueOutput ManageDeviceRiskOutput::GetValue() const
{
    return m_value;
}

void ManageDeviceRiskOutput::SetValue(const ManageDeviceRiskValueOutput& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ManageDeviceRiskOutput::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

