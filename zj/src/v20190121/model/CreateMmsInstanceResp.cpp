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

#include <tencentcloud/zj/v20190121/model/CreateMmsInstanceResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

CreateMmsInstanceResp::CreateMmsInstanceResp() :
    m_returnCodeHasBeenSet(false),
    m_returnMsgHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateMmsInstanceResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReturnCode") && !value["ReturnCode"].IsNull())
    {
        if (!value["ReturnCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CreateMmsInstanceResp.ReturnCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = value["ReturnCode"].GetInt64();
        m_returnCodeHasBeenSet = true;
    }

    if (value.HasMember("ReturnMsg") && !value["ReturnMsg"].IsNull())
    {
        if (!value["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateMmsInstanceResp.ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(value["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CreateMmsInstanceResp.InstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetInt64();
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateMmsInstanceResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_returnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnCode, allocator);
    }

    if (m_returnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

}


int64_t CreateMmsInstanceResp::GetReturnCode() const
{
    return m_returnCode;
}

void CreateMmsInstanceResp::SetReturnCode(const int64_t& _returnCode)
{
    m_returnCode = _returnCode;
    m_returnCodeHasBeenSet = true;
}

bool CreateMmsInstanceResp::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string CreateMmsInstanceResp::GetReturnMsg() const
{
    return m_returnMsg;
}

void CreateMmsInstanceResp::SetReturnMsg(const string& _returnMsg)
{
    m_returnMsg = _returnMsg;
    m_returnMsgHasBeenSet = true;
}

bool CreateMmsInstanceResp::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}

int64_t CreateMmsInstanceResp::GetInstanceId() const
{
    return m_instanceId;
}

void CreateMmsInstanceResp::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateMmsInstanceResp::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

