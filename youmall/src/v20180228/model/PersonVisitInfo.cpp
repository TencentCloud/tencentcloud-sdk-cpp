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

#include <tencentcloud/youmall/v20180228/model/PersonVisitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

PersonVisitInfo::PersonVisitInfo() :
    m_personIdHasBeenSet(false),
    m_visitIdHasBeenSet(false),
    m_inTimeHasBeenSet(false),
    m_capturedPictureHasBeenSet(false),
    m_maskTypeHasBeenSet(false),
    m_glassTypeHasBeenSet(false),
    m_hairTypeHasBeenSet(false),
    m_capturedPictureUrlHasBeenSet(false),
    m_sceneInfoHasBeenSet(false)
{
}

CoreInternalOutcome PersonVisitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.PersonId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_personId = value["PersonId"].GetUint64();
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("VisitId") && !value["VisitId"].IsNull())
    {
        if (!value["VisitId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.VisitId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_visitId = value["VisitId"].GetUint64();
        m_visitIdHasBeenSet = true;
    }

    if (value.HasMember("InTime") && !value["InTime"].IsNull())
    {
        if (!value["InTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.InTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inTime = value["InTime"].GetUint64();
        m_inTimeHasBeenSet = true;
    }

    if (value.HasMember("CapturedPicture") && !value["CapturedPicture"].IsNull())
    {
        if (!value["CapturedPicture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.CapturedPicture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capturedPicture = string(value["CapturedPicture"].GetString());
        m_capturedPictureHasBeenSet = true;
    }

    if (value.HasMember("MaskType") && !value["MaskType"].IsNull())
    {
        if (!value["MaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.MaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maskType = value["MaskType"].GetUint64();
        m_maskTypeHasBeenSet = true;
    }

    if (value.HasMember("GlassType") && !value["GlassType"].IsNull())
    {
        if (!value["GlassType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.GlassType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_glassType = value["GlassType"].GetUint64();
        m_glassTypeHasBeenSet = true;
    }

    if (value.HasMember("HairType") && !value["HairType"].IsNull())
    {
        if (!value["HairType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.HairType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hairType = value["HairType"].GetUint64();
        m_hairTypeHasBeenSet = true;
    }

    if (value.HasMember("CapturedPictureUrl") && !value["CapturedPictureUrl"].IsNull())
    {
        if (!value["CapturedPictureUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.CapturedPictureUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_capturedPictureUrl = string(value["CapturedPictureUrl"].GetString());
        m_capturedPictureUrlHasBeenSet = true;
    }

    if (value.HasMember("SceneInfo") && !value["SceneInfo"].IsNull())
    {
        if (!value["SceneInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonVisitInfo.SceneInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sceneInfo.Deserialize(value["SceneInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sceneInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonVisitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personId, allocator);
    }

    if (m_visitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visitId, allocator);
    }

    if (m_inTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inTime, allocator);
    }

    if (m_capturedPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapturedPicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capturedPicture.c_str(), allocator).Move(), allocator);
    }

    if (m_maskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maskType, allocator);
    }

    if (m_glassTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlassType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_glassType, allocator);
    }

    if (m_hairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HairType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hairType, allocator);
    }

    if (m_capturedPictureUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapturedPictureUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_capturedPictureUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sceneInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t PersonVisitInfo::GetPersonId() const
{
    return m_personId;
}

void PersonVisitInfo::SetPersonId(const uint64_t& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonVisitInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

uint64_t PersonVisitInfo::GetVisitId() const
{
    return m_visitId;
}

void PersonVisitInfo::SetVisitId(const uint64_t& _visitId)
{
    m_visitId = _visitId;
    m_visitIdHasBeenSet = true;
}

bool PersonVisitInfo::VisitIdHasBeenSet() const
{
    return m_visitIdHasBeenSet;
}

uint64_t PersonVisitInfo::GetInTime() const
{
    return m_inTime;
}

void PersonVisitInfo::SetInTime(const uint64_t& _inTime)
{
    m_inTime = _inTime;
    m_inTimeHasBeenSet = true;
}

bool PersonVisitInfo::InTimeHasBeenSet() const
{
    return m_inTimeHasBeenSet;
}

string PersonVisitInfo::GetCapturedPicture() const
{
    return m_capturedPicture;
}

void PersonVisitInfo::SetCapturedPicture(const string& _capturedPicture)
{
    m_capturedPicture = _capturedPicture;
    m_capturedPictureHasBeenSet = true;
}

bool PersonVisitInfo::CapturedPictureHasBeenSet() const
{
    return m_capturedPictureHasBeenSet;
}

uint64_t PersonVisitInfo::GetMaskType() const
{
    return m_maskType;
}

void PersonVisitInfo::SetMaskType(const uint64_t& _maskType)
{
    m_maskType = _maskType;
    m_maskTypeHasBeenSet = true;
}

bool PersonVisitInfo::MaskTypeHasBeenSet() const
{
    return m_maskTypeHasBeenSet;
}

uint64_t PersonVisitInfo::GetGlassType() const
{
    return m_glassType;
}

void PersonVisitInfo::SetGlassType(const uint64_t& _glassType)
{
    m_glassType = _glassType;
    m_glassTypeHasBeenSet = true;
}

bool PersonVisitInfo::GlassTypeHasBeenSet() const
{
    return m_glassTypeHasBeenSet;
}

uint64_t PersonVisitInfo::GetHairType() const
{
    return m_hairType;
}

void PersonVisitInfo::SetHairType(const uint64_t& _hairType)
{
    m_hairType = _hairType;
    m_hairTypeHasBeenSet = true;
}

bool PersonVisitInfo::HairTypeHasBeenSet() const
{
    return m_hairTypeHasBeenSet;
}

string PersonVisitInfo::GetCapturedPictureUrl() const
{
    return m_capturedPictureUrl;
}

void PersonVisitInfo::SetCapturedPictureUrl(const string& _capturedPictureUrl)
{
    m_capturedPictureUrl = _capturedPictureUrl;
    m_capturedPictureUrlHasBeenSet = true;
}

bool PersonVisitInfo::CapturedPictureUrlHasBeenSet() const
{
    return m_capturedPictureUrlHasBeenSet;
}

SceneInfo PersonVisitInfo::GetSceneInfo() const
{
    return m_sceneInfo;
}

void PersonVisitInfo::SetSceneInfo(const SceneInfo& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool PersonVisitInfo::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

