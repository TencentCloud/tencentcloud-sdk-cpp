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

#include <tencentcloud/ie/v20200304/model/MediaResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaResultInfo::MediaResultInfo() :
    m_durationHasBeenSet(false),
    m_resultVideoInfoSetHasBeenSet(false),
    m_resultAudioInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaResultInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ResultVideoInfoSet") && !value["ResultVideoInfoSet"].IsNull())
    {
        if (!value["ResultVideoInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaResultInfo.ResultVideoInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultVideoInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultVideoInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultVideoInfoSet.push_back(item);
        }
        m_resultVideoInfoSetHasBeenSet = true;
    }

    if (value.HasMember("ResultAudioInfoSet") && !value["ResultAudioInfoSet"].IsNull())
    {
        if (!value["ResultAudioInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaResultInfo.ResultAudioInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultAudioInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultAudioInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultAudioInfoSet.push_back(item);
        }
        m_resultAudioInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_resultVideoInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultVideoInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultVideoInfoSet.begin(); itr != m_resultVideoInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultAudioInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultAudioInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultAudioInfoSet.begin(); itr != m_resultAudioInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t MediaResultInfo::GetDuration() const
{
    return m_duration;
}

void MediaResultInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaResultInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<ResultVideoInfo> MediaResultInfo::GetResultVideoInfoSet() const
{
    return m_resultVideoInfoSet;
}

void MediaResultInfo::SetResultVideoInfoSet(const vector<ResultVideoInfo>& _resultVideoInfoSet)
{
    m_resultVideoInfoSet = _resultVideoInfoSet;
    m_resultVideoInfoSetHasBeenSet = true;
}

bool MediaResultInfo::ResultVideoInfoSetHasBeenSet() const
{
    return m_resultVideoInfoSetHasBeenSet;
}

vector<ResultAudioInfo> MediaResultInfo::GetResultAudioInfoSet() const
{
    return m_resultAudioInfoSet;
}

void MediaResultInfo::SetResultAudioInfoSet(const vector<ResultAudioInfo>& _resultAudioInfoSet)
{
    m_resultAudioInfoSet = _resultAudioInfoSet;
    m_resultAudioInfoSetHasBeenSet = true;
}

bool MediaResultInfo::ResultAudioInfoSetHasBeenSet() const
{
    return m_resultAudioInfoSetHasBeenSet;
}

