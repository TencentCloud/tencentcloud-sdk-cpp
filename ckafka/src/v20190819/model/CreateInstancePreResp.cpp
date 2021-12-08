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

#include <tencentcloud/ckafka/v20190819/model/CreateInstancePreResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateInstancePreResp::CreateInstancePreResp() :
    m_returnCodeHasBeenSet(false),
    m_returnMessageHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_deleteRouteTimestampHasBeenSet(false)
{
}

CoreInternalOutcome CreateInstancePreResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReturnCode") && !value["ReturnCode"].IsNull())
    {
        if (!value["ReturnCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancePreResp.ReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = string(value["ReturnCode"].GetString());
        m_returnCodeHasBeenSet = true;
    }

    if (value.HasMember("ReturnMessage") && !value["ReturnMessage"].IsNull())
    {
        if (!value["ReturnMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancePreResp.ReturnMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMessage = string(value["ReturnMessage"].GetString());
        m_returnMessageHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancePreResp.Data` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_data.Deserialize(value["Data"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataHasBeenSet = true;
    }

    if (value.HasMember("DeleteRouteTimestamp") && !value["DeleteRouteTimestamp"].IsNull())
    {
        if (!value["DeleteRouteTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateInstancePreResp.DeleteRouteTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteRouteTimestamp = string(value["DeleteRouteTimestamp"].GetString());
        m_deleteRouteTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateInstancePreResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_returnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnCode.c_str(), allocator).Move(), allocator);
    }

    if (m_returnMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deleteRouteTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteRouteTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteRouteTimestamp.c_str(), allocator).Move(), allocator);
    }

}


string CreateInstancePreResp::GetReturnCode() const
{
    return m_returnCode;
}

void CreateInstancePreResp::SetReturnCode(const string& _returnCode)
{
    m_returnCode = _returnCode;
    m_returnCodeHasBeenSet = true;
}

bool CreateInstancePreResp::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string CreateInstancePreResp::GetReturnMessage() const
{
    return m_returnMessage;
}

void CreateInstancePreResp::SetReturnMessage(const string& _returnMessage)
{
    m_returnMessage = _returnMessage;
    m_returnMessageHasBeenSet = true;
}

bool CreateInstancePreResp::ReturnMessageHasBeenSet() const
{
    return m_returnMessageHasBeenSet;
}

CreateInstancePreData CreateInstancePreResp::GetData() const
{
    return m_data;
}

void CreateInstancePreResp::SetData(const CreateInstancePreData& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CreateInstancePreResp::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string CreateInstancePreResp::GetDeleteRouteTimestamp() const
{
    return m_deleteRouteTimestamp;
}

void CreateInstancePreResp::SetDeleteRouteTimestamp(const string& _deleteRouteTimestamp)
{
    m_deleteRouteTimestamp = _deleteRouteTimestamp;
    m_deleteRouteTimestampHasBeenSet = true;
}

bool CreateInstancePreResp::DeleteRouteTimestampHasBeenSet() const
{
    return m_deleteRouteTimestampHasBeenSet;
}

