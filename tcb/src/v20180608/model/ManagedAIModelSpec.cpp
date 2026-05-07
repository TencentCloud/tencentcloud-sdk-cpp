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

#include <tencentcloud/tcb/v20180608/model/ManagedAIModelSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ManagedAIModelSpec::ManagedAIModelSpec() :
    m_maxInputTokenHasBeenSet(false),
    m_maxOutputTokenHasBeenSet(false),
    m_contextLengthHasBeenSet(false)
{
}

CoreInternalOutcome ManagedAIModelSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxInputToken") && !value["MaxInputToken"].IsNull())
    {
        if (!value["MaxInputToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelSpec.MaxInputToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxInputToken = string(value["MaxInputToken"].GetString());
        m_maxInputTokenHasBeenSet = true;
    }

    if (value.HasMember("MaxOutputToken") && !value["MaxOutputToken"].IsNull())
    {
        if (!value["MaxOutputToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelSpec.MaxOutputToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxOutputToken = string(value["MaxOutputToken"].GetString());
        m_maxOutputTokenHasBeenSet = true;
    }

    if (value.HasMember("ContextLength") && !value["ContextLength"].IsNull())
    {
        if (!value["ContextLength"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagedAIModelSpec.ContextLength` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextLength = string(value["ContextLength"].GetString());
        m_contextLengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagedAIModelSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxInputTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInputToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxInputToken.c_str(), allocator).Move(), allocator);
    }

    if (m_maxOutputTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxOutputToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxOutputToken.c_str(), allocator).Move(), allocator);
    }

    if (m_contextLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contextLength.c_str(), allocator).Move(), allocator);
    }

}


string ManagedAIModelSpec::GetMaxInputToken() const
{
    return m_maxInputToken;
}

void ManagedAIModelSpec::SetMaxInputToken(const string& _maxInputToken)
{
    m_maxInputToken = _maxInputToken;
    m_maxInputTokenHasBeenSet = true;
}

bool ManagedAIModelSpec::MaxInputTokenHasBeenSet() const
{
    return m_maxInputTokenHasBeenSet;
}

string ManagedAIModelSpec::GetMaxOutputToken() const
{
    return m_maxOutputToken;
}

void ManagedAIModelSpec::SetMaxOutputToken(const string& _maxOutputToken)
{
    m_maxOutputToken = _maxOutputToken;
    m_maxOutputTokenHasBeenSet = true;
}

bool ManagedAIModelSpec::MaxOutputTokenHasBeenSet() const
{
    return m_maxOutputTokenHasBeenSet;
}

string ManagedAIModelSpec::GetContextLength() const
{
    return m_contextLength;
}

void ManagedAIModelSpec::SetContextLength(const string& _contextLength)
{
    m_contextLength = _contextLength;
    m_contextLengthHasBeenSet = true;
}

bool ManagedAIModelSpec::ContextLengthHasBeenSet() const
{
    return m_contextLengthHasBeenSet;
}

