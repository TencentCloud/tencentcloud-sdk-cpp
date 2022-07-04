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

#include <tencentcloud/ie/v20200304/model/MediaCuttingOutForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaCuttingOutForm::MediaCuttingOutForm() :
    m_typeHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_spriteRowCountHasBeenSet(false),
    m_spriteColumnCountHasBeenSet(false),
    m_spriteInfoHasBeenSet(false),
    m_dynamicInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaCuttingOutForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingOutForm.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FillType") && !value["FillType"].IsNull())
    {
        if (!value["FillType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingOutForm.FillType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fillType = string(value["FillType"].GetString());
        m_fillTypeHasBeenSet = true;
    }

    if (value.HasMember("SpriteRowCount") && !value["SpriteRowCount"].IsNull())
    {
        if (!value["SpriteRowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingOutForm.SpriteRowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spriteRowCount = value["SpriteRowCount"].GetInt64();
        m_spriteRowCountHasBeenSet = true;
    }

    if (value.HasMember("SpriteColumnCount") && !value["SpriteColumnCount"].IsNull())
    {
        if (!value["SpriteColumnCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingOutForm.SpriteColumnCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spriteColumnCount = value["SpriteColumnCount"].GetInt64();
        m_spriteColumnCountHasBeenSet = true;
    }

    if (value.HasMember("SpriteInfo") && !value["SpriteInfo"].IsNull())
    {
        if (!value["SpriteInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingOutForm.SpriteInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spriteInfo.Deserialize(value["SpriteInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spriteInfoHasBeenSet = true;
    }

    if (value.HasMember("DynamicInfo") && !value["DynamicInfo"].IsNull())
    {
        if (!value["DynamicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingOutForm.DynamicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dynamicInfo.Deserialize(value["DynamicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dynamicInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCuttingOutForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fillType.c_str(), allocator).Move(), allocator);
    }

    if (m_spriteRowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpriteRowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spriteRowCount, allocator);
    }

    if (m_spriteColumnCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpriteColumnCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spriteColumnCount, allocator);
    }

    if (m_spriteInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpriteInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spriteInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dynamicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaCuttingOutForm::GetType() const
{
    return m_type;
}

void MediaCuttingOutForm::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaCuttingOutForm::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MediaCuttingOutForm::GetFillType() const
{
    return m_fillType;
}

void MediaCuttingOutForm::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool MediaCuttingOutForm::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

int64_t MediaCuttingOutForm::GetSpriteRowCount() const
{
    return m_spriteRowCount;
}

void MediaCuttingOutForm::SetSpriteRowCount(const int64_t& _spriteRowCount)
{
    m_spriteRowCount = _spriteRowCount;
    m_spriteRowCountHasBeenSet = true;
}

bool MediaCuttingOutForm::SpriteRowCountHasBeenSet() const
{
    return m_spriteRowCountHasBeenSet;
}

int64_t MediaCuttingOutForm::GetSpriteColumnCount() const
{
    return m_spriteColumnCount;
}

void MediaCuttingOutForm::SetSpriteColumnCount(const int64_t& _spriteColumnCount)
{
    m_spriteColumnCount = _spriteColumnCount;
    m_spriteColumnCountHasBeenSet = true;
}

bool MediaCuttingOutForm::SpriteColumnCountHasBeenSet() const
{
    return m_spriteColumnCountHasBeenSet;
}

SpriteImageInfo MediaCuttingOutForm::GetSpriteInfo() const
{
    return m_spriteInfo;
}

void MediaCuttingOutForm::SetSpriteInfo(const SpriteImageInfo& _spriteInfo)
{
    m_spriteInfo = _spriteInfo;
    m_spriteInfoHasBeenSet = true;
}

bool MediaCuttingOutForm::SpriteInfoHasBeenSet() const
{
    return m_spriteInfoHasBeenSet;
}

DynamicImageInfo MediaCuttingOutForm::GetDynamicInfo() const
{
    return m_dynamicInfo;
}

void MediaCuttingOutForm::SetDynamicInfo(const DynamicImageInfo& _dynamicInfo)
{
    m_dynamicInfo = _dynamicInfo;
    m_dynamicInfoHasBeenSet = true;
}

bool MediaCuttingOutForm::DynamicInfoHasBeenSet() const
{
    return m_dynamicInfoHasBeenSet;
}

