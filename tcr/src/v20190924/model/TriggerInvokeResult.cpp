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

#include <tencentcloud/tcr/v20190924/model/TriggerInvokeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TriggerInvokeResult::TriggerInvokeResult() :
    m_returnCodeHasBeenSet(false),
    m_returnMsgHasBeenSet(false)
{
}

CoreInternalOutcome TriggerInvokeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReturnCode") && !value["ReturnCode"].IsNull())
    {
        if (!value["ReturnCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokeResult.ReturnCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = value["ReturnCode"].GetInt64();
        m_returnCodeHasBeenSet = true;
    }

    if (value.HasMember("ReturnMsg") && !value["ReturnMsg"].IsNull())
    {
        if (!value["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerInvokeResult.ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(value["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerInvokeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t TriggerInvokeResult::GetReturnCode() const
{
    return m_returnCode;
}

void TriggerInvokeResult::SetReturnCode(const int64_t& _returnCode)
{
    m_returnCode = _returnCode;
    m_returnCodeHasBeenSet = true;
}

bool TriggerInvokeResult::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string TriggerInvokeResult::GetReturnMsg() const
{
    return m_returnMsg;
}

void TriggerInvokeResult::SetReturnMsg(const string& _returnMsg)
{
    m_returnMsg = _returnMsg;
    m_returnMsgHasBeenSet = true;
}

bool TriggerInvokeResult::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}

