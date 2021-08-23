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

#include <tencentcloud/cme/v20191029/model/VideoEditTemplateMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoEditTemplateMaterial::VideoEditTemplateMaterial() :
    m_aspectRatioHasBeenSet(false),
    m_slotSetHasBeenSet(false),
    m_previewVideoUrlHasBeenSet(false)
{
}

CoreInternalOutcome VideoEditTemplateMaterial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditTemplateMaterial.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("SlotSet") && !value["SlotSet"].IsNull())
    {
        if (!value["SlotSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoEditTemplateMaterial.SlotSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SlotSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlotInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slotSet.push_back(item);
        }
        m_slotSetHasBeenSet = true;
    }

    if (value.HasMember("PreviewVideoUrl") && !value["PreviewVideoUrl"].IsNull())
    {
        if (!value["PreviewVideoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditTemplateMaterial.PreviewVideoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewVideoUrl = string(value["PreviewVideoUrl"].GetString());
        m_previewVideoUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEditTemplateMaterial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_slotSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slotSet.begin(); itr != m_slotSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_previewVideoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewVideoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewVideoUrl.c_str(), allocator).Move(), allocator);
    }

}


string VideoEditTemplateMaterial::GetAspectRatio() const
{
    return m_aspectRatio;
}

void VideoEditTemplateMaterial::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool VideoEditTemplateMaterial::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

vector<SlotInfo> VideoEditTemplateMaterial::GetSlotSet() const
{
    return m_slotSet;
}

void VideoEditTemplateMaterial::SetSlotSet(const vector<SlotInfo>& _slotSet)
{
    m_slotSet = _slotSet;
    m_slotSetHasBeenSet = true;
}

bool VideoEditTemplateMaterial::SlotSetHasBeenSet() const
{
    return m_slotSetHasBeenSet;
}

string VideoEditTemplateMaterial::GetPreviewVideoUrl() const
{
    return m_previewVideoUrl;
}

void VideoEditTemplateMaterial::SetPreviewVideoUrl(const string& _previewVideoUrl)
{
    m_previewVideoUrl = _previewVideoUrl;
    m_previewVideoUrlHasBeenSet = true;
}

bool VideoEditTemplateMaterial::PreviewVideoUrlHasBeenSet() const
{
    return m_previewVideoUrlHasBeenSet;
}

