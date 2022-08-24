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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskAsrFullTextResultOutput::AiRecognitionTaskAsrFullTextResultOutput() :
    m_segmentSetHasBeenSet(false),
    m_segmentSetFileUrlHasBeenSet(false),
    m_segmentSetFileUrlExpireTimeHasBeenSet(false),
    m_subtitleSetHasBeenSet(false),
    m_subtitleUrlHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskAsrFullTextResultOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutput.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskAsrFullTextSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrl") && !value["SegmentSetFileUrl"].IsNull())
    {
        if (!value["SegmentSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutput.SegmentSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrl = string(value["SegmentSetFileUrl"].GetString());
        m_segmentSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrlExpireTime") && !value["SegmentSetFileUrlExpireTime"].IsNull())
    {
        if (!value["SegmentSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutput.SegmentSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrlExpireTime = string(value["SegmentSetFileUrlExpireTime"].GetString());
        m_segmentSetFileUrlExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("SubtitleSet") && !value["SubtitleSet"].IsNull())
    {
        if (!value["SubtitleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutput.SubtitleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubtitleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskAsrFullTextResultOutputSubtitleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subtitleSet.push_back(item);
        }
        m_subtitleSetHasBeenSet = true;
    }

    if (value.HasMember("SubtitleUrl") && !value["SubtitleUrl"].IsNull())
    {
        if (!value["SubtitleUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiRecognitionTaskAsrFullTextResultOutput.SubtitleUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleUrl = string(value["SubtitleUrl"].GetString());
        m_subtitleUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskAsrFullTextResultOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_segmentSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subtitleSet.begin(); itr != m_subtitleSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subtitleUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitleUrl.c_str(), allocator).Move(), allocator);
    }

}


vector<AiRecognitionTaskAsrFullTextSegmentItem> AiRecognitionTaskAsrFullTextResultOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiRecognitionTaskAsrFullTextResultOutput::SetSegmentSet(const vector<AiRecognitionTaskAsrFullTextSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutput::GetSegmentSetFileUrl() const
{
    return m_segmentSetFileUrl;
}

void AiRecognitionTaskAsrFullTextResultOutput::SetSegmentSetFileUrl(const string& _segmentSetFileUrl)
{
    m_segmentSetFileUrl = _segmentSetFileUrl;
    m_segmentSetFileUrlHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutput::SegmentSetFileUrlHasBeenSet() const
{
    return m_segmentSetFileUrlHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutput::GetSegmentSetFileUrlExpireTime() const
{
    return m_segmentSetFileUrlExpireTime;
}

void AiRecognitionTaskAsrFullTextResultOutput::SetSegmentSetFileUrlExpireTime(const string& _segmentSetFileUrlExpireTime)
{
    m_segmentSetFileUrlExpireTime = _segmentSetFileUrlExpireTime;
    m_segmentSetFileUrlExpireTimeHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutput::SegmentSetFileUrlExpireTimeHasBeenSet() const
{
    return m_segmentSetFileUrlExpireTimeHasBeenSet;
}

vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem> AiRecognitionTaskAsrFullTextResultOutput::GetSubtitleSet() const
{
    return m_subtitleSet;
}

void AiRecognitionTaskAsrFullTextResultOutput::SetSubtitleSet(const vector<AiRecognitionTaskAsrFullTextResultOutputSubtitleItem>& _subtitleSet)
{
    m_subtitleSet = _subtitleSet;
    m_subtitleSetHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutput::SubtitleSetHasBeenSet() const
{
    return m_subtitleSetHasBeenSet;
}

string AiRecognitionTaskAsrFullTextResultOutput::GetSubtitleUrl() const
{
    return m_subtitleUrl;
}

void AiRecognitionTaskAsrFullTextResultOutput::SetSubtitleUrl(const string& _subtitleUrl)
{
    m_subtitleUrl = _subtitleUrl;
    m_subtitleUrlHasBeenSet = true;
}

bool AiRecognitionTaskAsrFullTextResultOutput::SubtitleUrlHasBeenSet() const
{
    return m_subtitleUrlHasBeenSet;
}

