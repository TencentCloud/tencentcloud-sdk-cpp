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

#include <tencentcloud/tokenhub/v20260322/model/ModelSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModelSpec::ModelSpec() :
    m_tPMHasBeenSet(false),
    m_qPMHasBeenSet(false),
    m_maxInputTokenHasBeenSet(false),
    m_maxOutputTokenHasBeenSet(false),
    m_contextLengthHasBeenSet(false),
    m_concurrencyHasBeenSet(false),
    m_inputDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome ModelSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TPM") && !value["TPM"].IsNull())
    {
        if (!value["TPM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSpec.TPM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPM = string(value["TPM"].GetString());
        m_tPMHasBeenSet = true;
    }

    if (value.HasMember("QPM") && !value["QPM"].IsNull())
    {
        if (!value["QPM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSpec.QPM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qPM = string(value["QPM"].GetString());
        m_qPMHasBeenSet = true;
    }

    if (value.HasMember("MaxInputToken") && !value["MaxInputToken"].IsNull())
    {
        if (!value["MaxInputToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSpec.MaxInputToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxInputToken = string(value["MaxInputToken"].GetString());
        m_maxInputTokenHasBeenSet = true;
    }

    if (value.HasMember("MaxOutputToken") && !value["MaxOutputToken"].IsNull())
    {
        if (!value["MaxOutputToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSpec.MaxOutputToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxOutputToken = string(value["MaxOutputToken"].GetString());
        m_maxOutputTokenHasBeenSet = true;
    }

    if (value.HasMember("ContextLength") && !value["ContextLength"].IsNull())
    {
        if (!value["ContextLength"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSpec.ContextLength` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contextLength = string(value["ContextLength"].GetString());
        m_contextLengthHasBeenSet = true;
    }

    if (value.HasMember("Concurrency") && !value["Concurrency"].IsNull())
    {
        if (!value["Concurrency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSpec.Concurrency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_concurrency = string(value["Concurrency"].GetString());
        m_concurrencyHasBeenSet = true;
    }

    if (value.HasMember("InputDescription") && !value["InputDescription"].IsNull())
    {
        if (!value["InputDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSpec.InputDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputDescription = string(value["InputDescription"].GetString());
        m_inputDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPM.c_str(), allocator).Move(), allocator);
    }

    if (m_qPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qPM.c_str(), allocator).Move(), allocator);
    }

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

    if (m_concurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_concurrency.c_str(), allocator).Move(), allocator);
    }

    if (m_inputDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputDescription.c_str(), allocator).Move(), allocator);
    }

}


string ModelSpec::GetTPM() const
{
    return m_tPM;
}

void ModelSpec::SetTPM(const string& _tPM)
{
    m_tPM = _tPM;
    m_tPMHasBeenSet = true;
}

bool ModelSpec::TPMHasBeenSet() const
{
    return m_tPMHasBeenSet;
}

string ModelSpec::GetQPM() const
{
    return m_qPM;
}

void ModelSpec::SetQPM(const string& _qPM)
{
    m_qPM = _qPM;
    m_qPMHasBeenSet = true;
}

bool ModelSpec::QPMHasBeenSet() const
{
    return m_qPMHasBeenSet;
}

string ModelSpec::GetMaxInputToken() const
{
    return m_maxInputToken;
}

void ModelSpec::SetMaxInputToken(const string& _maxInputToken)
{
    m_maxInputToken = _maxInputToken;
    m_maxInputTokenHasBeenSet = true;
}

bool ModelSpec::MaxInputTokenHasBeenSet() const
{
    return m_maxInputTokenHasBeenSet;
}

string ModelSpec::GetMaxOutputToken() const
{
    return m_maxOutputToken;
}

void ModelSpec::SetMaxOutputToken(const string& _maxOutputToken)
{
    m_maxOutputToken = _maxOutputToken;
    m_maxOutputTokenHasBeenSet = true;
}

bool ModelSpec::MaxOutputTokenHasBeenSet() const
{
    return m_maxOutputTokenHasBeenSet;
}

string ModelSpec::GetContextLength() const
{
    return m_contextLength;
}

void ModelSpec::SetContextLength(const string& _contextLength)
{
    m_contextLength = _contextLength;
    m_contextLengthHasBeenSet = true;
}

bool ModelSpec::ContextLengthHasBeenSet() const
{
    return m_contextLengthHasBeenSet;
}

string ModelSpec::GetConcurrency() const
{
    return m_concurrency;
}

void ModelSpec::SetConcurrency(const string& _concurrency)
{
    m_concurrency = _concurrency;
    m_concurrencyHasBeenSet = true;
}

bool ModelSpec::ConcurrencyHasBeenSet() const
{
    return m_concurrencyHasBeenSet;
}

string ModelSpec::GetInputDescription() const
{
    return m_inputDescription;
}

void ModelSpec::SetInputDescription(const string& _inputDescription)
{
    m_inputDescription = _inputDescription;
    m_inputDescriptionHasBeenSet = true;
}

bool ModelSpec::InputDescriptionHasBeenSet() const
{
    return m_inputDescriptionHasBeenSet;
}

