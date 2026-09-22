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

#include <tencentcloud/mps/v20190612/model/AigcAudioExtraParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AigcAudioExtraParam::AigcAudioExtraParam() :
    m_resourceIdHasBeenSet(false),
    m_outputAudioFormatHasBeenSet(false)
{
}

CoreInternalOutcome AigcAudioExtraParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioExtraParam.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("OutputAudioFormat") && !value["OutputAudioFormat"].IsNull())
    {
        if (!value["OutputAudioFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioExtraParam.OutputAudioFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputAudioFormat = string(value["OutputAudioFormat"].GetString());
        m_outputAudioFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcAudioExtraParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputAudioFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputAudioFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputAudioFormat.c_str(), allocator).Move(), allocator);
    }

}


string AigcAudioExtraParam::GetResourceId() const
{
    return m_resourceId;
}

void AigcAudioExtraParam::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool AigcAudioExtraParam::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string AigcAudioExtraParam::GetOutputAudioFormat() const
{
    return m_outputAudioFormat;
}

void AigcAudioExtraParam::SetOutputAudioFormat(const string& _outputAudioFormat)
{
    m_outputAudioFormat = _outputAudioFormat;
    m_outputAudioFormatHasBeenSet = true;
}

bool AigcAudioExtraParam::OutputAudioFormatHasBeenSet() const
{
    return m_outputAudioFormatHasBeenSet;
}

