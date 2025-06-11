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

#include <tencentcloud/mps/v20190612/model/ImageEraseLogoConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageEraseLogoConfig::ImageEraseLogoConfig() :
    m_switchHasBeenSet(false),
    m_imageAreaBoxesHasBeenSet(false),
    m_detectTypesHasBeenSet(false)
{
}

CoreInternalOutcome ImageEraseLogoConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEraseLogoConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ImageAreaBoxes") && !value["ImageAreaBoxes"].IsNull())
    {
        if (!value["ImageAreaBoxes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageEraseLogoConfig.ImageAreaBoxes` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageAreaBoxes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageAreaBoxInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageAreaBoxes.push_back(item);
        }
        m_imageAreaBoxesHasBeenSet = true;
    }

    if (value.HasMember("DetectTypes") && !value["DetectTypes"].IsNull())
    {
        if (!value["DetectTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageEraseLogoConfig.DetectTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectTypes.push_back((*itr).GetString());
        }
        m_detectTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageEraseLogoConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_imageAreaBoxesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageAreaBoxes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageAreaBoxes.begin(); itr != m_imageAreaBoxes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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


string ImageEraseLogoConfig::GetSwitch() const
{
    return m_switch;
}

void ImageEraseLogoConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ImageEraseLogoConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<ImageAreaBoxInfo> ImageEraseLogoConfig::GetImageAreaBoxes() const
{
    return m_imageAreaBoxes;
}

void ImageEraseLogoConfig::SetImageAreaBoxes(const vector<ImageAreaBoxInfo>& _imageAreaBoxes)
{
    m_imageAreaBoxes = _imageAreaBoxes;
    m_imageAreaBoxesHasBeenSet = true;
}

bool ImageEraseLogoConfig::ImageAreaBoxesHasBeenSet() const
{
    return m_imageAreaBoxesHasBeenSet;
}

vector<string> ImageEraseLogoConfig::GetDetectTypes() const
{
    return m_detectTypes;
}

void ImageEraseLogoConfig::SetDetectTypes(const vector<string>& _detectTypes)
{
    m_detectTypes = _detectTypes;
    m_detectTypesHasBeenSet = true;
}

bool ImageEraseLogoConfig::DetectTypesHasBeenSet() const
{
    return m_detectTypesHasBeenSet;
}

