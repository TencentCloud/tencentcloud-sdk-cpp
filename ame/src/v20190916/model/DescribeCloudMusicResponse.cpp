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

#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeCloudMusicResponse::DescribeCloudMusicResponse() :
    m_musicIdHasBeenSet(false),
    m_musicNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_musicUrlHasBeenSet(false),
    m_musicImageUrlHasBeenSet(false),
    m_singersHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudMusicResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MusicId") && !rsp["MusicId"].IsNull())
    {
        if (!rsp["MusicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicId = string(rsp["MusicId"].GetString());
        m_musicIdHasBeenSet = true;
    }

    if (rsp.HasMember("MusicName") && !rsp["MusicName"].IsNull())
    {
        if (!rsp["MusicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicName = string(rsp["MusicName"].GetString());
        m_musicNameHasBeenSet = true;
    }

    if (rsp.HasMember("Duration") && !rsp["Duration"].IsNull())
    {
        if (!rsp["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = rsp["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (rsp.HasMember("MusicUrl") && !rsp["MusicUrl"].IsNull())
    {
        if (!rsp["MusicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicUrl = string(rsp["MusicUrl"].GetString());
        m_musicUrlHasBeenSet = true;
    }

    if (rsp.HasMember("MusicImageUrl") && !rsp["MusicImageUrl"].IsNull())
    {
        if (!rsp["MusicImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MusicImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicImageUrl = string(rsp["MusicImageUrl"].GetString());
        m_musicImageUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Singers") && !rsp["Singers"].IsNull())
    {
        if (!rsp["Singers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Singers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Singers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_singers.push_back((*itr).GetString());
        }
        m_singersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudMusicResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_musicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicId.c_str(), allocator).Move(), allocator);
    }

    if (m_musicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_musicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_musicImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_singersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Singers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_singers.begin(); itr != m_singers.end(); ++itr)
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


string DescribeCloudMusicResponse::GetMusicId() const
{
    return m_musicId;
}

bool DescribeCloudMusicResponse::MusicIdHasBeenSet() const
{
    return m_musicIdHasBeenSet;
}

string DescribeCloudMusicResponse::GetMusicName() const
{
    return m_musicName;
}

bool DescribeCloudMusicResponse::MusicNameHasBeenSet() const
{
    return m_musicNameHasBeenSet;
}

int64_t DescribeCloudMusicResponse::GetDuration() const
{
    return m_duration;
}

bool DescribeCloudMusicResponse::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string DescribeCloudMusicResponse::GetMusicUrl() const
{
    return m_musicUrl;
}

bool DescribeCloudMusicResponse::MusicUrlHasBeenSet() const
{
    return m_musicUrlHasBeenSet;
}

string DescribeCloudMusicResponse::GetMusicImageUrl() const
{
    return m_musicImageUrl;
}

bool DescribeCloudMusicResponse::MusicImageUrlHasBeenSet() const
{
    return m_musicImageUrlHasBeenSet;
}

vector<string> DescribeCloudMusicResponse::GetSingers() const
{
    return m_singers;
}

bool DescribeCloudMusicResponse::SingersHasBeenSet() const
{
    return m_singersHasBeenSet;
}


