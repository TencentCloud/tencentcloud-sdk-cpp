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

#include <tencentcloud/live/v20180801/model/SwitchAvatarEditingSceneResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SwitchAvatarEditingSceneResponse::SwitchAvatarEditingSceneResponse() :
    m_channelIdHasBeenSet(false),
    m_liveIdHasBeenSet(false)
{
}

CoreInternalOutcome SwitchAvatarEditingSceneResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ChannelId") && !rsp["ChannelId"].IsNull())
    {
        if (!rsp["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(rsp["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (rsp.HasMember("LiveId") && !rsp["LiveId"].IsNull())
    {
        if (!rsp["LiveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveId = string(rsp["LiveId"].GetString());
        m_liveIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SwitchAvatarEditingSceneResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_liveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveId.c_str(), allocator).Move(), allocator);
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


string SwitchAvatarEditingSceneResponse::GetChannelId() const
{
    return m_channelId;
}

bool SwitchAvatarEditingSceneResponse::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string SwitchAvatarEditingSceneResponse::GetLiveId() const
{
    return m_liveId;
}

bool SwitchAvatarEditingSceneResponse::LiveIdHasBeenSet() const
{
    return m_liveIdHasBeenSet;
}


