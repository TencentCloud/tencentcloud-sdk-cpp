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

#include <tencentcloud/cpdp/v20190820/model/CreateCloudSubMerchantResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateCloudSubMerchantResponse::CreateCloudSubMerchantResponse() :
    m_subAppIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_channelAppIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateCloudSubMerchantResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SubAppId") && !rsp["SubAppId"].IsNull())
    {
        if (!rsp["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(rsp["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelSubMerchantId") && !rsp["ChannelSubMerchantId"].IsNull())
    {
        if (!rsp["ChannelSubMerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSubMerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubMerchantId = string(rsp["ChannelSubMerchantId"].GetString());
        m_channelSubMerchantIdHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelAppId") && !rsp["ChannelAppId"].IsNull())
    {
        if (!rsp["ChannelAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelAppId = string(rsp["ChannelAppId"].GetString());
        m_channelAppIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateCloudSubMerchantResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_channelAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelAppId.c_str(), allocator).Move(), allocator);
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


string CreateCloudSubMerchantResponse::GetSubAppId() const
{
    return m_subAppId;
}

bool CreateCloudSubMerchantResponse::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateCloudSubMerchantResponse::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

bool CreateCloudSubMerchantResponse::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

int64_t CreateCloudSubMerchantResponse::GetLevel() const
{
    return m_level;
}

bool CreateCloudSubMerchantResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string CreateCloudSubMerchantResponse::GetChannelAppId() const
{
    return m_channelAppId;
}

bool CreateCloudSubMerchantResponse::ChannelAppIdHasBeenSet() const
{
    return m_channelAppIdHasBeenSet;
}


