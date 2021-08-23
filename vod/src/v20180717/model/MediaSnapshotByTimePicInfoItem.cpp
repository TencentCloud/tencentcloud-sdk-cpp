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

#include <tencentcloud/vod/v20180717/model/MediaSnapshotByTimePicInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaSnapshotByTimePicInfoItem::MediaSnapshotByTimePicInfoItem() :
    m_timeOffsetHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_waterMarkDefinitionHasBeenSet(false)
{
}

CoreInternalOutcome MediaSnapshotByTimePicInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSnapshotByTimePicInfoItem.TimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeOffset = value["TimeOffset"].GetDouble();
        m_timeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaSnapshotByTimePicInfoItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkDefinition") && !value["WaterMarkDefinition"].IsNull())
    {
        if (!value["WaterMarkDefinition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaSnapshotByTimePicInfoItem.WaterMarkDefinition` is not array type"));

        const rapidjson::Value &tmpValue = value["WaterMarkDefinition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_waterMarkDefinition.push_back((*itr).GetInt64());
        }
        m_waterMarkDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaSnapshotByTimePicInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOffset, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_waterMarkDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_waterMarkDefinition.begin(); itr != m_waterMarkDefinition.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


double MediaSnapshotByTimePicInfoItem::GetTimeOffset() const
{
    return m_timeOffset;
}

void MediaSnapshotByTimePicInfoItem::SetTimeOffset(const double& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool MediaSnapshotByTimePicInfoItem::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

string MediaSnapshotByTimePicInfoItem::GetUrl() const
{
    return m_url;
}

void MediaSnapshotByTimePicInfoItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MediaSnapshotByTimePicInfoItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<int64_t> MediaSnapshotByTimePicInfoItem::GetWaterMarkDefinition() const
{
    return m_waterMarkDefinition;
}

void MediaSnapshotByTimePicInfoItem::SetWaterMarkDefinition(const vector<int64_t>& _waterMarkDefinition)
{
    m_waterMarkDefinition = _waterMarkDefinition;
    m_waterMarkDefinitionHasBeenSet = true;
}

bool MediaSnapshotByTimePicInfoItem::WaterMarkDefinitionHasBeenSet() const
{
    return m_waterMarkDefinitionHasBeenSet;
}

