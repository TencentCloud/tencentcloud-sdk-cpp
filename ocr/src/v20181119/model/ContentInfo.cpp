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

#include <tencentcloud/ocr/v20181119/model/ContentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ContentInfo::ContentInfo() :
    m_contentHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_isInCompleteHasBeenSet(false),
    m_isReflectHasBeenSet(false),
    m_isKeyInCompleteHasBeenSet(false),
    m_isKeyReflectHasBeenSet(false)
{
}

CoreInternalOutcome ContentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("IsInComplete") && !value["IsInComplete"].IsNull())
    {
        if (!value["IsInComplete"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.IsInComplete` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isInComplete = value["IsInComplete"].GetInt64();
        m_isInCompleteHasBeenSet = true;
    }

    if (value.HasMember("IsReflect") && !value["IsReflect"].IsNull())
    {
        if (!value["IsReflect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.IsReflect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isReflect = value["IsReflect"].GetInt64();
        m_isReflectHasBeenSet = true;
    }

    if (value.HasMember("IsKeyInComplete") && !value["IsKeyInComplete"].IsNull())
    {
        if (!value["IsKeyInComplete"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.IsKeyInComplete` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isKeyInComplete = value["IsKeyInComplete"].GetInt64();
        m_isKeyInCompleteHasBeenSet = true;
    }

    if (value.HasMember("IsKeyReflect") && !value["IsKeyReflect"].IsNull())
    {
        if (!value["IsKeyReflect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentInfo.IsKeyReflect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isKeyReflect = value["IsKeyReflect"].GetInt64();
        m_isKeyReflectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_isInCompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsInComplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isInComplete, allocator);
    }

    if (m_isReflectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReflect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReflect, allocator);
    }

    if (m_isKeyInCompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeyInComplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKeyInComplete, allocator);
    }

    if (m_isKeyReflectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeyReflect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKeyReflect, allocator);
    }

}


string ContentInfo::GetContent() const
{
    return m_content;
}

void ContentInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ContentInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ContentInfo::GetConfidence() const
{
    return m_confidence;
}

void ContentInfo::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool ContentInfo::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t ContentInfo::GetIsInComplete() const
{
    return m_isInComplete;
}

void ContentInfo::SetIsInComplete(const int64_t& _isInComplete)
{
    m_isInComplete = _isInComplete;
    m_isInCompleteHasBeenSet = true;
}

bool ContentInfo::IsInCompleteHasBeenSet() const
{
    return m_isInCompleteHasBeenSet;
}

int64_t ContentInfo::GetIsReflect() const
{
    return m_isReflect;
}

void ContentInfo::SetIsReflect(const int64_t& _isReflect)
{
    m_isReflect = _isReflect;
    m_isReflectHasBeenSet = true;
}

bool ContentInfo::IsReflectHasBeenSet() const
{
    return m_isReflectHasBeenSet;
}

int64_t ContentInfo::GetIsKeyInComplete() const
{
    return m_isKeyInComplete;
}

void ContentInfo::SetIsKeyInComplete(const int64_t& _isKeyInComplete)
{
    m_isKeyInComplete = _isKeyInComplete;
    m_isKeyInCompleteHasBeenSet = true;
}

bool ContentInfo::IsKeyInCompleteHasBeenSet() const
{
    return m_isKeyInCompleteHasBeenSet;
}

int64_t ContentInfo::GetIsKeyReflect() const
{
    return m_isKeyReflect;
}

void ContentInfo::SetIsKeyReflect(const int64_t& _isKeyReflect)
{
    m_isKeyReflect = _isKeyReflect;
    m_isKeyReflectHasBeenSet = true;
}

bool ContentInfo::IsKeyReflectHasBeenSet() const
{
    return m_isKeyReflectHasBeenSet;
}

