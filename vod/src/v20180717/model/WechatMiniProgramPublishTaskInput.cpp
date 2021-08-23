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

#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

WechatMiniProgramPublishTaskInput::WechatMiniProgramPublishTaskInput() :
    m_sourceDefinitionHasBeenSet(false)
{
}

CoreInternalOutcome WechatMiniProgramPublishTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceDefinition") && !value["SourceDefinition"].IsNull())
    {
        if (!value["SourceDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WechatMiniProgramPublishTaskInput.SourceDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceDefinition = value["SourceDefinition"].GetUint64();
        m_sourceDefinitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WechatMiniProgramPublishTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceDefinition, allocator);
    }

}


uint64_t WechatMiniProgramPublishTaskInput::GetSourceDefinition() const
{
    return m_sourceDefinition;
}

void WechatMiniProgramPublishTaskInput::SetSourceDefinition(const uint64_t& _sourceDefinition)
{
    m_sourceDefinition = _sourceDefinition;
    m_sourceDefinitionHasBeenSet = true;
}

bool WechatMiniProgramPublishTaskInput::SourceDefinitionHasBeenSet() const
{
    return m_sourceDefinitionHasBeenSet;
}

