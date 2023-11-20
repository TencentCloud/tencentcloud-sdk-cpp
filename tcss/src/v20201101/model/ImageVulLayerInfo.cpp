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

#include <tencentcloud/tcss/v20201101/model/ImageVulLayerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageVulLayerInfo::ImageVulLayerInfo() :
    m_layerIdHasBeenSet(false),
    m_layerCmdHasBeenSet(false)
{
}

CoreInternalOutcome ImageVulLayerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayerId") && !value["LayerId"].IsNull())
    {
        if (!value["LayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulLayerInfo.LayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerId = string(value["LayerId"].GetString());
        m_layerIdHasBeenSet = true;
    }

    if (value.HasMember("LayerCmd") && !value["LayerCmd"].IsNull())
    {
        if (!value["LayerCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulLayerInfo.LayerCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerCmd = string(value["LayerCmd"].GetString());
        m_layerCmdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageVulLayerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerId.c_str(), allocator).Move(), allocator);
    }

    if (m_layerCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerCmd.c_str(), allocator).Move(), allocator);
    }

}


string ImageVulLayerInfo::GetLayerId() const
{
    return m_layerId;
}

void ImageVulLayerInfo::SetLayerId(const string& _layerId)
{
    m_layerId = _layerId;
    m_layerIdHasBeenSet = true;
}

bool ImageVulLayerInfo::LayerIdHasBeenSet() const
{
    return m_layerIdHasBeenSet;
}

string ImageVulLayerInfo::GetLayerCmd() const
{
    return m_layerCmd;
}

void ImageVulLayerInfo::SetLayerCmd(const string& _layerCmd)
{
    m_layerCmd = _layerCmd;
    m_layerCmdHasBeenSet = true;
}

bool ImageVulLayerInfo::LayerCmdHasBeenSet() const
{
    return m_layerCmdHasBeenSet;
}

