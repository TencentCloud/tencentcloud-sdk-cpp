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

#include <tencentcloud/fmu/v20191213/model/LipColorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fmu::V20191213::Model;
using namespace std;

LipColorInfo::LipColorInfo() :
    m_rGBAHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_faceRectHasBeenSet(false),
    m_modelAlphaHasBeenSet(false)
{
}

CoreInternalOutcome LipColorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RGBA") && !value["RGBA"].IsNull())
    {
        if (!value["RGBA"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LipColorInfo.RGBA` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rGBA.Deserialize(value["RGBA"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rGBAHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LipColorInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("FaceRect") && !value["FaceRect"].IsNull())
    {
        if (!value["FaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LipColorInfo.FaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceRect.Deserialize(value["FaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceRectHasBeenSet = true;
    }

    if (value.HasMember("ModelAlpha") && !value["ModelAlpha"].IsNull())
    {
        if (!value["ModelAlpha"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LipColorInfo.ModelAlpha` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelAlpha = value["ModelAlpha"].GetInt64();
        m_modelAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LipColorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rGBAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RGBA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rGBA.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceRect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelAlpha, allocator);
    }

}


RGBAInfo LipColorInfo::GetRGBA() const
{
    return m_rGBA;
}

void LipColorInfo::SetRGBA(const RGBAInfo& _rGBA)
{
    m_rGBA = _rGBA;
    m_rGBAHasBeenSet = true;
}

bool LipColorInfo::RGBAHasBeenSet() const
{
    return m_rGBAHasBeenSet;
}

string LipColorInfo::GetModelId() const
{
    return m_modelId;
}

void LipColorInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool LipColorInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

FaceRect LipColorInfo::GetFaceRect() const
{
    return m_faceRect;
}

void LipColorInfo::SetFaceRect(const FaceRect& _faceRect)
{
    m_faceRect = _faceRect;
    m_faceRectHasBeenSet = true;
}

bool LipColorInfo::FaceRectHasBeenSet() const
{
    return m_faceRectHasBeenSet;
}

int64_t LipColorInfo::GetModelAlpha() const
{
    return m_modelAlpha;
}

void LipColorInfo::SetModelAlpha(const int64_t& _modelAlpha)
{
    m_modelAlpha = _modelAlpha;
    m_modelAlphaHasBeenSet = true;
}

bool LipColorInfo::ModelAlphaHasBeenSet() const
{
    return m_modelAlphaHasBeenSet;
}

