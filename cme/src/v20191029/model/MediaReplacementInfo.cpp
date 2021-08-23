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

#include <tencentcloud/cme/v20191029/model/MediaReplacementInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaReplacementInfo::MediaReplacementInfo() :
    m_mediaTypeHasBeenSet(false),
    m_materialIdHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_preprocessOperationHasBeenSet(false)
{
}

CoreInternalOutcome MediaReplacementInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaType") && !value["MediaType"].IsNull())
    {
        if (!value["MediaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaReplacementInfo.MediaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = string(value["MediaType"].GetString());
        m_mediaTypeHasBeenSet = true;
    }

    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaReplacementInfo.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("MediaUrl") && !value["MediaUrl"].IsNull())
    {
        if (!value["MediaUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaReplacementInfo.MediaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaUrl = string(value["MediaUrl"].GetString());
        m_mediaUrlHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaReplacementInfo.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("PreprocessOperation") && !value["PreprocessOperation"].IsNull())
    {
        if (!value["PreprocessOperation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaReplacementInfo.PreprocessOperation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_preprocessOperation.Deserialize(value["PreprocessOperation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_preprocessOperationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaReplacementInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaType.c_str(), allocator).Move(), allocator);
    }

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_preprocessOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreprocessOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_preprocessOperation.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaReplacementInfo::GetMediaType() const
{
    return m_mediaType;
}

void MediaReplacementInfo::SetMediaType(const string& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool MediaReplacementInfo::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

string MediaReplacementInfo::GetMaterialId() const
{
    return m_materialId;
}

void MediaReplacementInfo::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool MediaReplacementInfo::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string MediaReplacementInfo::GetMediaUrl() const
{
    return m_mediaUrl;
}

void MediaReplacementInfo::SetMediaUrl(const string& _mediaUrl)
{
    m_mediaUrl = _mediaUrl;
    m_mediaUrlHasBeenSet = true;
}

bool MediaReplacementInfo::MediaUrlHasBeenSet() const
{
    return m_mediaUrlHasBeenSet;
}

double MediaReplacementInfo::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void MediaReplacementInfo::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool MediaReplacementInfo::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

MediaPreprocessOperation MediaReplacementInfo::GetPreprocessOperation() const
{
    return m_preprocessOperation;
}

void MediaReplacementInfo::SetPreprocessOperation(const MediaPreprocessOperation& _preprocessOperation)
{
    m_preprocessOperation = _preprocessOperation;
    m_preprocessOperationHasBeenSet = true;
}

bool MediaReplacementInfo::PreprocessOperationHasBeenSet() const
{
    return m_preprocessOperationHasBeenSet;
}

