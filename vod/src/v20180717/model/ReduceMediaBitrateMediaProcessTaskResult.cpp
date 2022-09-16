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

#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateMediaProcessTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ReduceMediaBitrateMediaProcessTaskResult::ReduceMediaBitrateMediaProcessTaskResult() :
    m_typeHasBeenSet(false),
    m_transcodeTaskHasBeenSet(false),
    m_adaptiveDynamicStreamingTaskHasBeenSet(false)
{
}

CoreInternalOutcome ReduceMediaBitrateMediaProcessTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateMediaProcessTaskResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TranscodeTask") && !value["TranscodeTask"].IsNull())
    {
        if (!value["TranscodeTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateMediaProcessTaskResult.TranscodeTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transcodeTask.Deserialize(value["TranscodeTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transcodeTaskHasBeenSet = true;
    }

    if (value.HasMember("AdaptiveDynamicStreamingTask") && !value["AdaptiveDynamicStreamingTask"].IsNull())
    {
        if (!value["AdaptiveDynamicStreamingTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReduceMediaBitrateMediaProcessTaskResult.AdaptiveDynamicStreamingTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adaptiveDynamicStreamingTask.Deserialize(value["AdaptiveDynamicStreamingTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adaptiveDynamicStreamingTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReduceMediaBitrateMediaProcessTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_transcodeTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transcodeTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adaptiveDynamicStreamingTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveDynamicStreamingTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adaptiveDynamicStreamingTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ReduceMediaBitrateMediaProcessTaskResult::GetType() const
{
    return m_type;
}

void ReduceMediaBitrateMediaProcessTaskResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ReduceMediaBitrateMediaProcessTaskResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ReduceMediaBitrateTranscodeResult ReduceMediaBitrateMediaProcessTaskResult::GetTranscodeTask() const
{
    return m_transcodeTask;
}

void ReduceMediaBitrateMediaProcessTaskResult::SetTranscodeTask(const ReduceMediaBitrateTranscodeResult& _transcodeTask)
{
    m_transcodeTask = _transcodeTask;
    m_transcodeTaskHasBeenSet = true;
}

bool ReduceMediaBitrateMediaProcessTaskResult::TranscodeTaskHasBeenSet() const
{
    return m_transcodeTaskHasBeenSet;
}

ReduceMediaBitrateAdaptiveDynamicStreamingResult ReduceMediaBitrateMediaProcessTaskResult::GetAdaptiveDynamicStreamingTask() const
{
    return m_adaptiveDynamicStreamingTask;
}

void ReduceMediaBitrateMediaProcessTaskResult::SetAdaptiveDynamicStreamingTask(const ReduceMediaBitrateAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask)
{
    m_adaptiveDynamicStreamingTask = _adaptiveDynamicStreamingTask;
    m_adaptiveDynamicStreamingTaskHasBeenSet = true;
}

bool ReduceMediaBitrateMediaProcessTaskResult::AdaptiveDynamicStreamingTaskHasBeenSet() const
{
    return m_adaptiveDynamicStreamingTaskHasBeenSet;
}

