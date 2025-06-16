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

#include <tencentcloud/trtc/v20190722/model/TurnDetection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TurnDetection::TurnDetection() :
    m_semanticEagernessHasBeenSet(false)
{
}

CoreInternalOutcome TurnDetection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SemanticEagerness") && !value["SemanticEagerness"].IsNull())
    {
        if (!value["SemanticEagerness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TurnDetection.SemanticEagerness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_semanticEagerness = string(value["SemanticEagerness"].GetString());
        m_semanticEagernessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TurnDetection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_semanticEagernessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SemanticEagerness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_semanticEagerness.c_str(), allocator).Move(), allocator);
    }

}


string TurnDetection::GetSemanticEagerness() const
{
    return m_semanticEagerness;
}

void TurnDetection::SetSemanticEagerness(const string& _semanticEagerness)
{
    m_semanticEagerness = _semanticEagerness;
    m_semanticEagernessHasBeenSet = true;
}

bool TurnDetection::SemanticEagernessHasBeenSet() const
{
    return m_semanticEagernessHasBeenSet;
}

