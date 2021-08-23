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

#include <tencentcloud/dayu/v20180709/model/CreateUnblockIpResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateUnblockIpResponse::CreateUnblockIpResponse() :
    m_ipHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_unblockTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateUnblockIpResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Ip") && !rsp["Ip"].IsNull())
    {
        if (!rsp["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(rsp["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (rsp.HasMember("ActionType") && !rsp["ActionType"].IsNull())
    {
        if (!rsp["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(rsp["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("UnblockTime") && !rsp["UnblockTime"].IsNull())
    {
        if (!rsp["UnblockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnblockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unblockTime = string(rsp["UnblockTime"].GetString());
        m_unblockTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateUnblockIpResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_unblockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnblockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unblockTime.c_str(), allocator).Move(), allocator);
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


string CreateUnblockIpResponse::GetIp() const
{
    return m_ip;
}

bool CreateUnblockIpResponse::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreateUnblockIpResponse::GetActionType() const
{
    return m_actionType;
}

bool CreateUnblockIpResponse::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string CreateUnblockIpResponse::GetUnblockTime() const
{
    return m_unblockTime;
}

bool CreateUnblockIpResponse::UnblockTimeHasBeenSet() const
{
    return m_unblockTimeHasBeenSet;
}


