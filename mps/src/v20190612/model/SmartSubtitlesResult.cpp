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

#include <tencentcloud/mps/v20190612/model/SmartSubtitlesResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitlesResult::SmartSubtitlesResult() :
    m_typeHasBeenSet(false),
    m_asrFullTextTaskHasBeenSet(false),
    m_transTextTaskHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitlesResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitlesResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AsrFullTextTask") && !value["AsrFullTextTask"].IsNull())
    {
        if (!value["AsrFullTextTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitlesResult.AsrFullTextTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrFullTextTask.Deserialize(value["AsrFullTextTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrFullTextTaskHasBeenSet = true;
    }

    if (value.HasMember("TransTextTask") && !value["TransTextTask"].IsNull())
    {
        if (!value["TransTextTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitlesResult.TransTextTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transTextTask.Deserialize(value["TransTextTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transTextTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartSubtitlesResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_asrFullTextTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrFullTextTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrFullTextTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transTextTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransTextTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transTextTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SmartSubtitlesResult::GetType() const
{
    return m_type;
}

void SmartSubtitlesResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SmartSubtitlesResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

SmartSubtitleTaskAsrFullTextResult SmartSubtitlesResult::GetAsrFullTextTask() const
{
    return m_asrFullTextTask;
}

void SmartSubtitlesResult::SetAsrFullTextTask(const SmartSubtitleTaskAsrFullTextResult& _asrFullTextTask)
{
    m_asrFullTextTask = _asrFullTextTask;
    m_asrFullTextTaskHasBeenSet = true;
}

bool SmartSubtitlesResult::AsrFullTextTaskHasBeenSet() const
{
    return m_asrFullTextTaskHasBeenSet;
}

SmartSubtitleTaskTransTextResult SmartSubtitlesResult::GetTransTextTask() const
{
    return m_transTextTask;
}

void SmartSubtitlesResult::SetTransTextTask(const SmartSubtitleTaskTransTextResult& _transTextTask)
{
    m_transTextTask = _transTextTask;
    m_transTextTaskHasBeenSet = true;
}

bool SmartSubtitlesResult::TransTextTaskHasBeenSet() const
{
    return m_transTextTaskHasBeenSet;
}

