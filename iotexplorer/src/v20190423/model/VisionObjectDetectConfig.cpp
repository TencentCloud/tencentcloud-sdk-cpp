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

#include <tencentcloud/iotexplorer/v20190423/model/VisionObjectDetectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VisionObjectDetectConfig::VisionObjectDetectConfig() :
    m_detectTypesHasBeenSet(false)
{
}

CoreInternalOutcome VisionObjectDetectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectTypes") && !value["DetectTypes"].IsNull())
    {
        if (!value["DetectTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VisionObjectDetectConfig.DetectTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectTypes.push_back((*itr).GetString());
        }
        m_detectTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VisionObjectDetectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectTypes.begin(); itr != m_detectTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> VisionObjectDetectConfig::GetDetectTypes() const
{
    return m_detectTypes;
}

void VisionObjectDetectConfig::SetDetectTypes(const vector<string>& _detectTypes)
{
    m_detectTypes = _detectTypes;
    m_detectTypesHasBeenSet = true;
}

bool VisionObjectDetectConfig::DetectTypesHasBeenSet() const
{
    return m_detectTypesHasBeenSet;
}

