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

#include <tencentcloud/tione/v20211111/model/InferTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

InferTemplate::InferTemplate() :
    m_inferTemplateIdHasBeenSet(false),
    m_inferTemplateImageHasBeenSet(false)
{
}

CoreInternalOutcome InferTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InferTemplateId") && !value["InferTemplateId"].IsNull())
    {
        if (!value["InferTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferTemplate.InferTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inferTemplateId = string(value["InferTemplateId"].GetString());
        m_inferTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("InferTemplateImage") && !value["InferTemplateImage"].IsNull())
    {
        if (!value["InferTemplateImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferTemplate.InferTemplateImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inferTemplateImage = string(value["InferTemplateImage"].GetString());
        m_inferTemplateImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inferTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inferTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_inferTemplateImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferTemplateImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inferTemplateImage.c_str(), allocator).Move(), allocator);
    }

}


string InferTemplate::GetInferTemplateId() const
{
    return m_inferTemplateId;
}

void InferTemplate::SetInferTemplateId(const string& _inferTemplateId)
{
    m_inferTemplateId = _inferTemplateId;
    m_inferTemplateIdHasBeenSet = true;
}

bool InferTemplate::InferTemplateIdHasBeenSet() const
{
    return m_inferTemplateIdHasBeenSet;
}

string InferTemplate::GetInferTemplateImage() const
{
    return m_inferTemplateImage;
}

void InferTemplate::SetInferTemplateImage(const string& _inferTemplateImage)
{
    m_inferTemplateImage = _inferTemplateImage;
    m_inferTemplateImageHasBeenSet = true;
}

bool InferTemplate::InferTemplateImageHasBeenSet() const
{
    return m_inferTemplateImageHasBeenSet;
}

