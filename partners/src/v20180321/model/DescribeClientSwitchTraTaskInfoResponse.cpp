/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/partners/v20180321/model/DescribeClientSwitchTraTaskInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeClientSwitchTraTaskInfoResponse::DescribeClientSwitchTraTaskInfoResponse() :
    m_clientUinHasBeenSet(false),
    m_switchTypeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_switchUrlHasBeenSet(false),
    m_resultMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClientSwitchTraTaskInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClientUin") && !rsp["ClientUin"].IsNull())
    {
        if (!rsp["ClientUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = string(rsp["ClientUin"].GetString());
        m_clientUinHasBeenSet = true;
    }

    if (rsp.HasMember("SwitchType") && !rsp["SwitchType"].IsNull())
    {
        if (!rsp["SwitchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchType = string(rsp["SwitchType"].GetString());
        m_switchTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("SwitchUrl") && !rsp["SwitchUrl"].IsNull())
    {
        if (!rsp["SwitchUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitchUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switchUrl = string(rsp["SwitchUrl"].GetString());
        m_switchUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ResultMsg") && !rsp["ResultMsg"].IsNull())
    {
        if (!rsp["ResultMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultMsg = string(rsp["ResultMsg"].GetString());
        m_resultMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClientSwitchTraTaskInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_switchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchType.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_switchUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switchUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resultMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultMsg.c_str(), allocator).Move(), allocator);
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


string DescribeClientSwitchTraTaskInfoResponse::GetClientUin() const
{
    return m_clientUin;
}

bool DescribeClientSwitchTraTaskInfoResponse::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string DescribeClientSwitchTraTaskInfoResponse::GetSwitchType() const
{
    return m_switchType;
}

bool DescribeClientSwitchTraTaskInfoResponse::SwitchTypeHasBeenSet() const
{
    return m_switchTypeHasBeenSet;
}

string DescribeClientSwitchTraTaskInfoResponse::GetResult() const
{
    return m_result;
}

bool DescribeClientSwitchTraTaskInfoResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DescribeClientSwitchTraTaskInfoResponse::GetSwitchUrl() const
{
    return m_switchUrl;
}

bool DescribeClientSwitchTraTaskInfoResponse::SwitchUrlHasBeenSet() const
{
    return m_switchUrlHasBeenSet;
}

string DescribeClientSwitchTraTaskInfoResponse::GetResultMsg() const
{
    return m_resultMsg;
}

bool DescribeClientSwitchTraTaskInfoResponse::ResultMsgHasBeenSet() const
{
    return m_resultMsgHasBeenSet;
}


