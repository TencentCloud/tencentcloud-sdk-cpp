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

#include <tencentcloud/tdai/v20250717/model/DescribeChatDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

DescribeChatDetailResponse::DescribeChatDetailResponse() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_lastStreamingTokenIdHasBeenSet(false),
    m_streamingCountHasBeenSet(false),
    m_streamingsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeChatDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("OwnerUin") && !rsp["OwnerUin"].IsNull())
    {
        if (!rsp["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(rsp["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ChatId") && !rsp["ChatId"].IsNull())
    {
        if (!rsp["ChatId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chatId = string(rsp["ChatId"].GetString());
        m_chatIdHasBeenSet = true;
    }

    if (rsp.HasMember("LastStreamingTokenId") && !rsp["LastStreamingTokenId"].IsNull())
    {
        if (!rsp["LastStreamingTokenId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LastStreamingTokenId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastStreamingTokenId = rsp["LastStreamingTokenId"].GetInt64();
        m_lastStreamingTokenIdHasBeenSet = true;
    }

    if (rsp.HasMember("StreamingCount") && !rsp["StreamingCount"].IsNull())
    {
        if (!rsp["StreamingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamingCount = rsp["StreamingCount"].GetInt64();
        m_streamingCountHasBeenSet = true;
    }

    if (rsp.HasMember("Streamings") && !rsp["Streamings"].IsNull())
    {
        if (!rsp["Streamings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Streamings` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Streamings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChatDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_streamings.push_back(item);
        }
        m_streamingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeChatDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastStreamingTokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStreamingTokenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastStreamingTokenId, allocator);
    }

    if (m_streamingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamingCount, allocator);
    }

    if (m_streamingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Streamings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamings.begin(); itr != m_streamings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


int64_t DescribeChatDetailResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeChatDetailResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeChatDetailResponse::GetUin() const
{
    return m_uin;
}

bool DescribeChatDetailResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeChatDetailResponse::GetOwnerUin() const
{
    return m_ownerUin;
}

bool DescribeChatDetailResponse::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string DescribeChatDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeChatDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeChatDetailResponse::GetChatId() const
{
    return m_chatId;
}

bool DescribeChatDetailResponse::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

int64_t DescribeChatDetailResponse::GetLastStreamingTokenId() const
{
    return m_lastStreamingTokenId;
}

bool DescribeChatDetailResponse::LastStreamingTokenIdHasBeenSet() const
{
    return m_lastStreamingTokenIdHasBeenSet;
}

int64_t DescribeChatDetailResponse::GetStreamingCount() const
{
    return m_streamingCount;
}

bool DescribeChatDetailResponse::StreamingCountHasBeenSet() const
{
    return m_streamingCountHasBeenSet;
}

vector<ChatDetail> DescribeChatDetailResponse::GetStreamings() const
{
    return m_streamings;
}

bool DescribeChatDetailResponse::StreamingsHasBeenSet() const
{
    return m_streamingsHasBeenSet;
}


