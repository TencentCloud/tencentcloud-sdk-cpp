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

#include <tencentcloud/vrs/v20200824/model/DetectionEnvAndSoundQualityRespData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

DetectionEnvAndSoundQualityRespData::DetectionEnvAndSoundQualityRespData() :
    m_audioIdHasBeenSet(false),
    m_detectionCodeHasBeenSet(false),
    m_detectionMsgHasBeenSet(false),
    m_detectionTipHasBeenSet(false)
{
}

CoreInternalOutcome DetectionEnvAndSoundQualityRespData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioId") && !value["AudioId"].IsNull())
    {
        if (!value["AudioId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectionEnvAndSoundQualityRespData.AudioId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioId = string(value["AudioId"].GetString());
        m_audioIdHasBeenSet = true;
    }

    if (value.HasMember("DetectionCode") && !value["DetectionCode"].IsNull())
    {
        if (!value["DetectionCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectionEnvAndSoundQualityRespData.DetectionCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectionCode = value["DetectionCode"].GetInt64();
        m_detectionCodeHasBeenSet = true;
    }

    if (value.HasMember("DetectionMsg") && !value["DetectionMsg"].IsNull())
    {
        if (!value["DetectionMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectionEnvAndSoundQualityRespData.DetectionMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectionMsg = string(value["DetectionMsg"].GetString());
        m_detectionMsgHasBeenSet = true;
    }

    if (value.HasMember("DetectionTip") && !value["DetectionTip"].IsNull())
    {
        if (!value["DetectionTip"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectionEnvAndSoundQualityRespData.DetectionTip` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectionTip"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Words item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detectionTip.push_back(item);
        }
        m_detectionTipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectionEnvAndSoundQualityRespData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioId.c_str(), allocator).Move(), allocator);
    }

    if (m_detectionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectionCode, allocator);
    }

    if (m_detectionMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectionMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_detectionTipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionTip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detectionTip.begin(); itr != m_detectionTip.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DetectionEnvAndSoundQualityRespData::GetAudioId() const
{
    return m_audioId;
}

void DetectionEnvAndSoundQualityRespData::SetAudioId(const string& _audioId)
{
    m_audioId = _audioId;
    m_audioIdHasBeenSet = true;
}

bool DetectionEnvAndSoundQualityRespData::AudioIdHasBeenSet() const
{
    return m_audioIdHasBeenSet;
}

int64_t DetectionEnvAndSoundQualityRespData::GetDetectionCode() const
{
    return m_detectionCode;
}

void DetectionEnvAndSoundQualityRespData::SetDetectionCode(const int64_t& _detectionCode)
{
    m_detectionCode = _detectionCode;
    m_detectionCodeHasBeenSet = true;
}

bool DetectionEnvAndSoundQualityRespData::DetectionCodeHasBeenSet() const
{
    return m_detectionCodeHasBeenSet;
}

string DetectionEnvAndSoundQualityRespData::GetDetectionMsg() const
{
    return m_detectionMsg;
}

void DetectionEnvAndSoundQualityRespData::SetDetectionMsg(const string& _detectionMsg)
{
    m_detectionMsg = _detectionMsg;
    m_detectionMsgHasBeenSet = true;
}

bool DetectionEnvAndSoundQualityRespData::DetectionMsgHasBeenSet() const
{
    return m_detectionMsgHasBeenSet;
}

vector<Words> DetectionEnvAndSoundQualityRespData::GetDetectionTip() const
{
    return m_detectionTip;
}

void DetectionEnvAndSoundQualityRespData::SetDetectionTip(const vector<Words>& _detectionTip)
{
    m_detectionTip = _detectionTip;
    m_detectionTipHasBeenSet = true;
}

bool DetectionEnvAndSoundQualityRespData::DetectionTipHasBeenSet() const
{
    return m_detectionTipHasBeenSet;
}

