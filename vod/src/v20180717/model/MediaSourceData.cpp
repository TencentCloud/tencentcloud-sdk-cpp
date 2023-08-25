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

#include <tencentcloud/vod/v20180717/model/MediaSourceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaSourceData::MediaSourceData() :
    m_sourceTypeHasBeenSet(false),
    m_sourceContextHasBeenSet(false),
    m_liveRecordInfoHasBeenSet(false),
    m_trtcRecordInfoHasBeenSet(false),
    m_webPageRecordInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaSourceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSourceData.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceContext") && !value["SourceContext"].IsNull())
    {
        if (!value["SourceContext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSourceData.SourceContext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContext = string(value["SourceContext"].GetString());
        m_sourceContextHasBeenSet = true;
    }

    if (value.HasMember("LiveRecordInfo") && !value["LiveRecordInfo"].IsNull())
    {
        if (!value["LiveRecordInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSourceData.LiveRecordInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveRecordInfo.Deserialize(value["LiveRecordInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveRecordInfoHasBeenSet = true;
    }

    if (value.HasMember("TrtcRecordInfo") && !value["TrtcRecordInfo"].IsNull())
    {
        if (!value["TrtcRecordInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSourceData.TrtcRecordInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trtcRecordInfo.Deserialize(value["TrtcRecordInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trtcRecordInfoHasBeenSet = true;
    }

    if (value.HasMember("WebPageRecordInfo") && !value["WebPageRecordInfo"].IsNull())
    {
        if (!value["WebPageRecordInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSourceData.WebPageRecordInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webPageRecordInfo.Deserialize(value["WebPageRecordInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webPageRecordInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSourceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContext.c_str(), allocator).Move(), allocator);
    }

    if (m_liveRecordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveRecordInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveRecordInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trtcRecordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrtcRecordInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trtcRecordInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webPageRecordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebPageRecordInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webPageRecordInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaSourceData::GetSourceType() const
{
    return m_sourceType;
}

void MediaSourceData::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool MediaSourceData::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string MediaSourceData::GetSourceContext() const
{
    return m_sourceContext;
}

void MediaSourceData::SetSourceContext(const string& _sourceContext)
{
    m_sourceContext = _sourceContext;
    m_sourceContextHasBeenSet = true;
}

bool MediaSourceData::SourceContextHasBeenSet() const
{
    return m_sourceContextHasBeenSet;
}

LiveRecordInfo MediaSourceData::GetLiveRecordInfo() const
{
    return m_liveRecordInfo;
}

void MediaSourceData::SetLiveRecordInfo(const LiveRecordInfo& _liveRecordInfo)
{
    m_liveRecordInfo = _liveRecordInfo;
    m_liveRecordInfoHasBeenSet = true;
}

bool MediaSourceData::LiveRecordInfoHasBeenSet() const
{
    return m_liveRecordInfoHasBeenSet;
}

TrtcRecordInfo MediaSourceData::GetTrtcRecordInfo() const
{
    return m_trtcRecordInfo;
}

void MediaSourceData::SetTrtcRecordInfo(const TrtcRecordInfo& _trtcRecordInfo)
{
    m_trtcRecordInfo = _trtcRecordInfo;
    m_trtcRecordInfoHasBeenSet = true;
}

bool MediaSourceData::TrtcRecordInfoHasBeenSet() const
{
    return m_trtcRecordInfoHasBeenSet;
}

WebPageRecordInfo MediaSourceData::GetWebPageRecordInfo() const
{
    return m_webPageRecordInfo;
}

void MediaSourceData::SetWebPageRecordInfo(const WebPageRecordInfo& _webPageRecordInfo)
{
    m_webPageRecordInfo = _webPageRecordInfo;
    m_webPageRecordInfoHasBeenSet = true;
}

bool MediaSourceData::WebPageRecordInfoHasBeenSet() const
{
    return m_webPageRecordInfoHasBeenSet;
}

