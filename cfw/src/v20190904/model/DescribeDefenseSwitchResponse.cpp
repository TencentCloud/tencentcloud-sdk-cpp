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

#include <tencentcloud/cfw/v20190904/model/DescribeDefenseSwitchResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeDefenseSwitchResponse::DescribeDefenseSwitchResponse() :
    m_basicRuleSwitchHasBeenSet(false),
    m_baselineAllSwitchHasBeenSet(false),
    m_tiSwitchHasBeenSet(false),
    m_virtualPatchSwitchHasBeenSet(false),
    m_historyOpenHasBeenSet(false),
    m_returnCodeHasBeenSet(false),
    m_returnMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDefenseSwitchResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BasicRuleSwitch") && !rsp["BasicRuleSwitch"].IsNull())
    {
        if (!rsp["BasicRuleSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BasicRuleSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_basicRuleSwitch = rsp["BasicRuleSwitch"].GetInt64();
        m_basicRuleSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineAllSwitch") && !rsp["BaselineAllSwitch"].IsNull())
    {
        if (!rsp["BaselineAllSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineAllSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineAllSwitch = rsp["BaselineAllSwitch"].GetInt64();
        m_baselineAllSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("TiSwitch") && !rsp["TiSwitch"].IsNull())
    {
        if (!rsp["TiSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TiSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tiSwitch = rsp["TiSwitch"].GetInt64();
        m_tiSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("VirtualPatchSwitch") && !rsp["VirtualPatchSwitch"].IsNull())
    {
        if (!rsp["VirtualPatchSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualPatchSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPatchSwitch = rsp["VirtualPatchSwitch"].GetInt64();
        m_virtualPatchSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("HistoryOpen") && !rsp["HistoryOpen"].IsNull())
    {
        if (!rsp["HistoryOpen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistoryOpen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_historyOpen = rsp["HistoryOpen"].GetInt64();
        m_historyOpenHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnCode") && !rsp["ReturnCode"].IsNull())
    {
        if (!rsp["ReturnCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = rsp["ReturnCode"].GetInt64();
        m_returnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnMsg") && !rsp["ReturnMsg"].IsNull())
    {
        if (!rsp["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(rsp["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDefenseSwitchResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_basicRuleSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicRuleSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basicRuleSwitch, allocator);
    }

    if (m_baselineAllSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineAllSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineAllSwitch, allocator);
    }

    if (m_tiSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tiSwitch, allocator);
    }

    if (m_virtualPatchSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPatchSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_virtualPatchSwitch, allocator);
    }

    if (m_historyOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyOpen, allocator);
    }

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDefenseSwitchResponse::GetBasicRuleSwitch() const
{
    return m_basicRuleSwitch;
}

bool DescribeDefenseSwitchResponse::BasicRuleSwitchHasBeenSet() const
{
    return m_basicRuleSwitchHasBeenSet;
}

int64_t DescribeDefenseSwitchResponse::GetBaselineAllSwitch() const
{
    return m_baselineAllSwitch;
}

bool DescribeDefenseSwitchResponse::BaselineAllSwitchHasBeenSet() const
{
    return m_baselineAllSwitchHasBeenSet;
}

int64_t DescribeDefenseSwitchResponse::GetTiSwitch() const
{
    return m_tiSwitch;
}

bool DescribeDefenseSwitchResponse::TiSwitchHasBeenSet() const
{
    return m_tiSwitchHasBeenSet;
}

int64_t DescribeDefenseSwitchResponse::GetVirtualPatchSwitch() const
{
    return m_virtualPatchSwitch;
}

bool DescribeDefenseSwitchResponse::VirtualPatchSwitchHasBeenSet() const
{
    return m_virtualPatchSwitchHasBeenSet;
}

int64_t DescribeDefenseSwitchResponse::GetHistoryOpen() const
{
    return m_historyOpen;
}

bool DescribeDefenseSwitchResponse::HistoryOpenHasBeenSet() const
{
    return m_historyOpenHasBeenSet;
}

int64_t DescribeDefenseSwitchResponse::GetReturnCode() const
{
    return m_returnCode;
}

bool DescribeDefenseSwitchResponse::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string DescribeDefenseSwitchResponse::GetReturnMsg() const
{
    return m_returnMsg;
}

bool DescribeDefenseSwitchResponse::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}


