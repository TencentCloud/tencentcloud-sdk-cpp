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

#include <tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

IVRKeyPressedElement::IVRKeyPressedElement() :
    m_keyHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_nodeLabelHasBeenSet(false),
    m_originalContentHasBeenSet(false),
    m_tTSPromptHasBeenSet(false)
{
}

CoreInternalOutcome IVRKeyPressedElement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IVRKeyPressedElement.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IVRKeyPressedElement.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IVRKeyPressedElement.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("NodeLabel") && !value["NodeLabel"].IsNull())
    {
        if (!value["NodeLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IVRKeyPressedElement.NodeLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeLabel = string(value["NodeLabel"].GetString());
        m_nodeLabelHasBeenSet = true;
    }

    if (value.HasMember("OriginalContent") && !value["OriginalContent"].IsNull())
    {
        if (!value["OriginalContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IVRKeyPressedElement.OriginalContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalContent = string(value["OriginalContent"].GetString());
        m_originalContentHasBeenSet = true;
    }

    if (value.HasMember("TTSPrompt") && !value["TTSPrompt"].IsNull())
    {
        if (!value["TTSPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IVRKeyPressedElement.TTSPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tTSPrompt = string(value["TTSPrompt"].GetString());
        m_tTSPromptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IVRKeyPressedElement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_nodeLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_originalContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalContent.c_str(), allocator).Move(), allocator);
    }

    if (m_tTSPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tTSPrompt.c_str(), allocator).Move(), allocator);
    }

}


string IVRKeyPressedElement::GetKey() const
{
    return m_key;
}

void IVRKeyPressedElement::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool IVRKeyPressedElement::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string IVRKeyPressedElement::GetLabel() const
{
    return m_label;
}

void IVRKeyPressedElement::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool IVRKeyPressedElement::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t IVRKeyPressedElement::GetTimestamp() const
{
    return m_timestamp;
}

void IVRKeyPressedElement::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool IVRKeyPressedElement::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string IVRKeyPressedElement::GetNodeLabel() const
{
    return m_nodeLabel;
}

void IVRKeyPressedElement::SetNodeLabel(const string& _nodeLabel)
{
    m_nodeLabel = _nodeLabel;
    m_nodeLabelHasBeenSet = true;
}

bool IVRKeyPressedElement::NodeLabelHasBeenSet() const
{
    return m_nodeLabelHasBeenSet;
}

string IVRKeyPressedElement::GetOriginalContent() const
{
    return m_originalContent;
}

void IVRKeyPressedElement::SetOriginalContent(const string& _originalContent)
{
    m_originalContent = _originalContent;
    m_originalContentHasBeenSet = true;
}

bool IVRKeyPressedElement::OriginalContentHasBeenSet() const
{
    return m_originalContentHasBeenSet;
}

string IVRKeyPressedElement::GetTTSPrompt() const
{
    return m_tTSPrompt;
}

void IVRKeyPressedElement::SetTTSPrompt(const string& _tTSPrompt)
{
    m_tTSPrompt = _tTSPrompt;
    m_tTSPromptHasBeenSet = true;
}

bool IVRKeyPressedElement::TTSPromptHasBeenSet() const
{
    return m_tTSPromptHasBeenSet;
}

