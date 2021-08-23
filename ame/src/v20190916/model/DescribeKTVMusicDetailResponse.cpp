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

#include <tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

DescribeKTVMusicDetailResponse::DescribeKTVMusicDetailResponse() :
    m_kTVMusicBaseInfoHasBeenSet(false),
    m_playTokenHasBeenSet(false),
    m_lyricsUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKTVMusicDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KTVMusicBaseInfo") && !rsp["KTVMusicBaseInfo"].IsNull())
    {
        if (!rsp["KTVMusicBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMusicBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kTVMusicBaseInfo.Deserialize(rsp["KTVMusicBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kTVMusicBaseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("PlayToken") && !rsp["PlayToken"].IsNull())
    {
        if (!rsp["PlayToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playToken = string(rsp["PlayToken"].GetString());
        m_playTokenHasBeenSet = true;
    }

    if (rsp.HasMember("LyricsUrl") && !rsp["LyricsUrl"].IsNull())
    {
        if (!rsp["LyricsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LyricsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lyricsUrl = string(rsp["LyricsUrl"].GetString());
        m_lyricsUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKTVMusicDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_kTVMusicBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KTVMusicBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kTVMusicBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_playTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playToken.c_str(), allocator).Move(), allocator);
    }

    if (m_lyricsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LyricsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lyricsUrl.c_str(), allocator).Move(), allocator);
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


KTVMusicBaseInfo DescribeKTVMusicDetailResponse::GetKTVMusicBaseInfo() const
{
    return m_kTVMusicBaseInfo;
}

bool DescribeKTVMusicDetailResponse::KTVMusicBaseInfoHasBeenSet() const
{
    return m_kTVMusicBaseInfoHasBeenSet;
}

string DescribeKTVMusicDetailResponse::GetPlayToken() const
{
    return m_playToken;
}

bool DescribeKTVMusicDetailResponse::PlayTokenHasBeenSet() const
{
    return m_playTokenHasBeenSet;
}

string DescribeKTVMusicDetailResponse::GetLyricsUrl() const
{
    return m_lyricsUrl;
}

bool DescribeKTVMusicDetailResponse::LyricsUrlHasBeenSet() const
{
    return m_lyricsUrlHasBeenSet;
}


