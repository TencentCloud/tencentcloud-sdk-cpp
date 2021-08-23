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

#include <tencentcloud/gme/v20180711/model/RealtimeSpeechConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

RealtimeSpeechConf::RealtimeSpeechConf() :
    m_statusHasBeenSet(false),
    m_qualityHasBeenSet(false)
{
}

CoreInternalOutcome RealtimeSpeechConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeSpeechConf.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Quality") && !value["Quality"].IsNull())
    {
        if (!value["Quality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealtimeSpeechConf.Quality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quality = string(value["Quality"].GetString());
        m_qualityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealtimeSpeechConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quality.c_str(), allocator).Move(), allocator);
    }

}


string RealtimeSpeechConf::GetStatus() const
{
    return m_status;
}

void RealtimeSpeechConf::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RealtimeSpeechConf::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RealtimeSpeechConf::GetQuality() const
{
    return m_quality;
}

void RealtimeSpeechConf::SetQuality(const string& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool RealtimeSpeechConf::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

