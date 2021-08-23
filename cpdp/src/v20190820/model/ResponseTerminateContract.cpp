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

#include <tencentcloud/cpdp/v20190820/model/ResponseTerminateContract.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ResponseTerminateContract::ResponseTerminateContract() :
    m_externalReturnCodeHasBeenSet(false),
    m_externalReturnMessageHasBeenSet(false),
    m_externalReturnDataHasBeenSet(false)
{
}

CoreInternalOutcome ResponseTerminateContract::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalReturnCode") && !value["ExternalReturnCode"].IsNull())
    {
        if (!value["ExternalReturnCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseTerminateContract.ExternalReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnCode = string(value["ExternalReturnCode"].GetString());
        m_externalReturnCodeHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnMessage") && !value["ExternalReturnMessage"].IsNull())
    {
        if (!value["ExternalReturnMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseTerminateContract.ExternalReturnMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnMessage = string(value["ExternalReturnMessage"].GetString());
        m_externalReturnMessageHasBeenSet = true;
    }

    if (value.HasMember("ExternalReturnData") && !value["ExternalReturnData"].IsNull())
    {
        if (!value["ExternalReturnData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseTerminateContract.ExternalReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalReturnData = string(value["ExternalReturnData"].GetString());
        m_externalReturnDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResponseTerminateContract::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalReturnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnCode.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_externalReturnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalReturnData.c_str(), allocator).Move(), allocator);
    }

}


string ResponseTerminateContract::GetExternalReturnCode() const
{
    return m_externalReturnCode;
}

void ResponseTerminateContract::SetExternalReturnCode(const string& _externalReturnCode)
{
    m_externalReturnCode = _externalReturnCode;
    m_externalReturnCodeHasBeenSet = true;
}

bool ResponseTerminateContract::ExternalReturnCodeHasBeenSet() const
{
    return m_externalReturnCodeHasBeenSet;
}

string ResponseTerminateContract::GetExternalReturnMessage() const
{
    return m_externalReturnMessage;
}

void ResponseTerminateContract::SetExternalReturnMessage(const string& _externalReturnMessage)
{
    m_externalReturnMessage = _externalReturnMessage;
    m_externalReturnMessageHasBeenSet = true;
}

bool ResponseTerminateContract::ExternalReturnMessageHasBeenSet() const
{
    return m_externalReturnMessageHasBeenSet;
}

string ResponseTerminateContract::GetExternalReturnData() const
{
    return m_externalReturnData;
}

void ResponseTerminateContract::SetExternalReturnData(const string& _externalReturnData)
{
    m_externalReturnData = _externalReturnData;
    m_externalReturnDataHasBeenSet = true;
}

bool ResponseTerminateContract::ExternalReturnDataHasBeenSet() const
{
    return m_externalReturnDataHasBeenSet;
}

