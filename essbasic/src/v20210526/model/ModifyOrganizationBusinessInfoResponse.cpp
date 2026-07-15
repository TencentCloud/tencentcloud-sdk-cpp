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

#include <tencentcloud/essbasic/v20210526/model/ModifyOrganizationBusinessInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ModifyOrganizationBusinessInfoResponse::ModifyOrganizationBusinessInfoResponse() :
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_unfinishedCountHasBeenSet(false),
    m_flowIdsHasBeenSet(false),
    m_channelFlowIdsHasBeenSet(false)
{
}

CoreInternalOutcome ModifyOrganizationBusinessInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ErrorCode") && !rsp["ErrorCode"].IsNull())
    {
        if (!rsp["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = rsp["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessage") && !rsp["ErrorMessage"].IsNull())
    {
        if (!rsp["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(rsp["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (rsp.HasMember("UnfinishedCount") && !rsp["UnfinishedCount"].IsNull())
    {
        if (!rsp["UnfinishedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnfinishedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unfinishedCount = rsp["UnfinishedCount"].GetUint64();
        m_unfinishedCountHasBeenSet = true;
    }

    if (rsp.HasMember("FlowIds") && !rsp["FlowIds"].IsNull())
    {
        if (!rsp["FlowIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowIds.push_back((*itr).GetString());
        }
        m_flowIdsHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelFlowIds") && !rsp["ChannelFlowIds"].IsNull())
    {
        if (!rsp["ChannelFlowIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelFlowIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ChannelFlowIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelFlowIds.push_back((*itr).GetString());
        }
        m_channelFlowIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyOrganizationBusinessInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_unfinishedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnfinishedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unfinishedCount, allocator);
    }

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelFlowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelFlowIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelFlowIds.begin(); itr != m_channelFlowIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


int64_t ModifyOrganizationBusinessInfoResponse::GetErrorCode() const
{
    return m_errorCode;
}

bool ModifyOrganizationBusinessInfoResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string ModifyOrganizationBusinessInfoResponse::GetErrorMessage() const
{
    return m_errorMessage;
}

bool ModifyOrganizationBusinessInfoResponse::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

uint64_t ModifyOrganizationBusinessInfoResponse::GetUnfinishedCount() const
{
    return m_unfinishedCount;
}

bool ModifyOrganizationBusinessInfoResponse::UnfinishedCountHasBeenSet() const
{
    return m_unfinishedCountHasBeenSet;
}

vector<string> ModifyOrganizationBusinessInfoResponse::GetFlowIds() const
{
    return m_flowIds;
}

bool ModifyOrganizationBusinessInfoResponse::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

vector<string> ModifyOrganizationBusinessInfoResponse::GetChannelFlowIds() const
{
    return m_channelFlowIds;
}

bool ModifyOrganizationBusinessInfoResponse::ChannelFlowIdsHasBeenSet() const
{
    return m_channelFlowIdsHasBeenSet;
}


