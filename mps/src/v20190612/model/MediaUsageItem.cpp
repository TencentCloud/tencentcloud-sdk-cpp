/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/MediaUsageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaUsageItem::MediaUsageItem() :
    m_inputImageCountHasBeenSet(false),
    m_inputSecondsHasBeenSet(false),
    m_outputSecondsHasBeenSet(false),
    m_totalSecondsHasBeenSet(false)
{
}

CoreInternalOutcome MediaUsageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputImageCount") && !value["InputImageCount"].IsNull())
    {
        if (!value["InputImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaUsageItem.InputImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputImageCount = value["InputImageCount"].GetInt64();
        m_inputImageCountHasBeenSet = true;
    }

    if (value.HasMember("InputSeconds") && !value["InputSeconds"].IsNull())
    {
        if (!value["InputSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaUsageItem.InputSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputSeconds = value["InputSeconds"].GetInt64();
        m_inputSecondsHasBeenSet = true;
    }

    if (value.HasMember("OutputSeconds") && !value["OutputSeconds"].IsNull())
    {
        if (!value["OutputSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaUsageItem.OutputSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputSeconds = value["OutputSeconds"].GetInt64();
        m_outputSecondsHasBeenSet = true;
    }

    if (value.HasMember("TotalSeconds") && !value["TotalSeconds"].IsNull())
    {
        if (!value["TotalSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaUsageItem.TotalSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSeconds = value["TotalSeconds"].GetInt64();
        m_totalSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaUsageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputImageCount, allocator);
    }

    if (m_inputSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputSeconds, allocator);
    }

    if (m_outputSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputSeconds, allocator);
    }

    if (m_totalSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSeconds, allocator);
    }

}


int64_t MediaUsageItem::GetInputImageCount() const
{
    return m_inputImageCount;
}

void MediaUsageItem::SetInputImageCount(const int64_t& _inputImageCount)
{
    m_inputImageCount = _inputImageCount;
    m_inputImageCountHasBeenSet = true;
}

bool MediaUsageItem::InputImageCountHasBeenSet() const
{
    return m_inputImageCountHasBeenSet;
}

int64_t MediaUsageItem::GetInputSeconds() const
{
    return m_inputSeconds;
}

void MediaUsageItem::SetInputSeconds(const int64_t& _inputSeconds)
{
    m_inputSeconds = _inputSeconds;
    m_inputSecondsHasBeenSet = true;
}

bool MediaUsageItem::InputSecondsHasBeenSet() const
{
    return m_inputSecondsHasBeenSet;
}

int64_t MediaUsageItem::GetOutputSeconds() const
{
    return m_outputSeconds;
}

void MediaUsageItem::SetOutputSeconds(const int64_t& _outputSeconds)
{
    m_outputSeconds = _outputSeconds;
    m_outputSecondsHasBeenSet = true;
}

bool MediaUsageItem::OutputSecondsHasBeenSet() const
{
    return m_outputSecondsHasBeenSet;
}

int64_t MediaUsageItem::GetTotalSeconds() const
{
    return m_totalSeconds;
}

void MediaUsageItem::SetTotalSeconds(const int64_t& _totalSeconds)
{
    m_totalSeconds = _totalSeconds;
    m_totalSecondsHasBeenSet = true;
}

bool MediaUsageItem::TotalSecondsHasBeenSet() const
{
    return m_totalSecondsHasBeenSet;
}

