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

#include <tencentcloud/ft/v20200304/model/FaceMorphOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

FaceMorphOutput::FaceMorphOutput() :
    m_morphUrlHasBeenSet(false),
    m_morphMd5HasBeenSet(false),
    m_coverImageHasBeenSet(false)
{
}

CoreInternalOutcome FaceMorphOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MorphUrl") && !value["MorphUrl"].IsNull())
    {
        if (!value["MorphUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceMorphOutput.MorphUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_morphUrl = string(value["MorphUrl"].GetString());
        m_morphUrlHasBeenSet = true;
    }

    if (value.HasMember("MorphMd5") && !value["MorphMd5"].IsNull())
    {
        if (!value["MorphMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceMorphOutput.MorphMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_morphMd5 = string(value["MorphMd5"].GetString());
        m_morphMd5HasBeenSet = true;
    }

    if (value.HasMember("CoverImage") && !value["CoverImage"].IsNull())
    {
        if (!value["CoverImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceMorphOutput.CoverImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverImage = string(value["CoverImage"].GetString());
        m_coverImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceMorphOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_morphUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MorphUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_morphUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_morphMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MorphMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_morphMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_coverImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverImage.c_str(), allocator).Move(), allocator);
    }

}


string FaceMorphOutput::GetMorphUrl() const
{
    return m_morphUrl;
}

void FaceMorphOutput::SetMorphUrl(const string& _morphUrl)
{
    m_morphUrl = _morphUrl;
    m_morphUrlHasBeenSet = true;
}

bool FaceMorphOutput::MorphUrlHasBeenSet() const
{
    return m_morphUrlHasBeenSet;
}

string FaceMorphOutput::GetMorphMd5() const
{
    return m_morphMd5;
}

void FaceMorphOutput::SetMorphMd5(const string& _morphMd5)
{
    m_morphMd5 = _morphMd5;
    m_morphMd5HasBeenSet = true;
}

bool FaceMorphOutput::MorphMd5HasBeenSet() const
{
    return m_morphMd5HasBeenSet;
}

string FaceMorphOutput::GetCoverImage() const
{
    return m_coverImage;
}

void FaceMorphOutput::SetCoverImage(const string& _coverImage)
{
    m_coverImage = _coverImage;
    m_coverImageHasBeenSet = true;
}

bool FaceMorphOutput::CoverImageHasBeenSet() const
{
    return m_coverImageHasBeenSet;
}

