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

#include <tencentcloud/faceid/v20180301/model/BlackListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

BlackListItem::BlackListItem() :
    m_modelIdHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_faceScoreHasBeenSet(false),
    m_backgroundScoreHasBeenSet(false)
{
}

CoreInternalOutcome BlackListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlackListItem.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlackListItem.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("FaceScore") && !value["FaceScore"].IsNull())
    {
        if (!value["FaceScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlackListItem.FaceScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceScore = string(value["FaceScore"].GetString());
        m_faceScoreHasBeenSet = true;
    }

    if (value.HasMember("BackgroundScore") && !value["BackgroundScore"].IsNull())
    {
        if (!value["BackgroundScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlackListItem.BackgroundScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundScore = string(value["BackgroundScore"].GetString());
        m_backgroundScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlackListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_faceScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceScore.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundScore.c_str(), allocator).Move(), allocator);
    }

}


string BlackListItem::GetModelId() const
{
    return m_modelId;
}

void BlackListItem::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool BlackListItem::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string BlackListItem::GetModelType() const
{
    return m_modelType;
}

void BlackListItem::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool BlackListItem::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string BlackListItem::GetFaceScore() const
{
    return m_faceScore;
}

void BlackListItem::SetFaceScore(const string& _faceScore)
{
    m_faceScore = _faceScore;
    m_faceScoreHasBeenSet = true;
}

bool BlackListItem::FaceScoreHasBeenSet() const
{
    return m_faceScoreHasBeenSet;
}

string BlackListItem::GetBackgroundScore() const
{
    return m_backgroundScore;
}

void BlackListItem::SetBackgroundScore(const string& _backgroundScore)
{
    m_backgroundScore = _backgroundScore;
    m_backgroundScoreHasBeenSet = true;
}

bool BlackListItem::BackgroundScoreHasBeenSet() const
{
    return m_backgroundScoreHasBeenSet;
}

