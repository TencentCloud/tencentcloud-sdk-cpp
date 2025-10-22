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

#include <tencentcloud/mps/v20190612/model/AiQualityControlTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiQualityControlTaskInput::AiQualityControlTaskInput() :
    m_definitionHasBeenSet(false),
    m_channelExtParaHasBeenSet(false)
{
}

CoreInternalOutcome AiQualityControlTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AiQualityControlTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("ChannelExtPara") && !value["ChannelExtPara"].IsNull())
    {
        if (!value["ChannelExtPara"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiQualityControlTaskInput.ChannelExtPara` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExtPara = string(value["ChannelExtPara"].GetString());
        m_channelExtParaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiQualityControlTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_channelExtParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExtPara";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExtPara.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AiQualityControlTaskInput::GetDefinition() const
{
    return m_definition;
}

void AiQualityControlTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AiQualityControlTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AiQualityControlTaskInput::GetChannelExtPara() const
{
    return m_channelExtPara;
}

void AiQualityControlTaskInput::SetChannelExtPara(const string& _channelExtPara)
{
    m_channelExtPara = _channelExtPara;
    m_channelExtParaHasBeenSet = true;
}

bool AiQualityControlTaskInput::ChannelExtParaHasBeenSet() const
{
    return m_channelExtParaHasBeenSet;
}

