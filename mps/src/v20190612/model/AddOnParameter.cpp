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

#include <tencentcloud/mps/v20190612/model/AddOnParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AddOnParameter::AddOnParameter() :
    m_imageSetHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

CoreInternalOutcome AddOnParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageSet") && !value["ImageSet"].IsNull())
    {
        if (!value["ImageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AddOnParameter.ImageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AddOnImageInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageSet.push_back(item);
        }
        m_imageSetHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnParameter.OutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputConfig.Deserialize(value["OutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddOnParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageSet.begin(); itr != m_imageSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<AddOnImageInput> AddOnParameter::GetImageSet() const
{
    return m_imageSet;
}

void AddOnParameter::SetImageSet(const vector<AddOnImageInput>& _imageSet)
{
    m_imageSet = _imageSet;
    m_imageSetHasBeenSet = true;
}

bool AddOnParameter::ImageSetHasBeenSet() const
{
    return m_imageSetHasBeenSet;
}

ImageProcessOutputConfig AddOnParameter::GetOutputConfig() const
{
    return m_outputConfig;
}

void AddOnParameter::SetOutputConfig(const ImageProcessOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool AddOnParameter::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

