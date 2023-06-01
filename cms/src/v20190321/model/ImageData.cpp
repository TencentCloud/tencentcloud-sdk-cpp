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

#include <tencentcloud/cms/v20190321/model/ImageData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

ImageData::ImageData() :
    m_evilTypeHasBeenSet(false),
    m_hotDetectHasBeenSet(false),
    m_evilFlagHasBeenSet(false),
    m_codeDetectHasBeenSet(false),
    m_polityDetectHasBeenSet(false),
    m_illegalDetectHasBeenSet(false),
    m_pornDetectHasBeenSet(false),
    m_terrorDetectHasBeenSet(false),
    m_oCRDetectHasBeenSet(false),
    m_logoDetectHasBeenSet(false),
    m_similarHasBeenSet(false),
    m_phoneDetectHasBeenSet(false)
{
}

CoreInternalOutcome ImageData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("HotDetect") && !value["HotDetect"].IsNull())
    {
        if (!value["HotDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.HotDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hotDetect.Deserialize(value["HotDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hotDetectHasBeenSet = true;
    }

    if (value.HasMember("EvilFlag") && !value["EvilFlag"].IsNull())
    {
        if (!value["EvilFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.EvilFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = value["EvilFlag"].GetInt64();
        m_evilFlagHasBeenSet = true;
    }

    if (value.HasMember("CodeDetect") && !value["CodeDetect"].IsNull())
    {
        if (!value["CodeDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.CodeDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeDetect.Deserialize(value["CodeDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeDetectHasBeenSet = true;
    }

    if (value.HasMember("PolityDetect") && !value["PolityDetect"].IsNull())
    {
        if (!value["PolityDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.PolityDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polityDetect.Deserialize(value["PolityDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polityDetectHasBeenSet = true;
    }

    if (value.HasMember("IllegalDetect") && !value["IllegalDetect"].IsNull())
    {
        if (!value["IllegalDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.IllegalDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_illegalDetect.Deserialize(value["IllegalDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_illegalDetectHasBeenSet = true;
    }

    if (value.HasMember("PornDetect") && !value["PornDetect"].IsNull())
    {
        if (!value["PornDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.PornDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornDetect.Deserialize(value["PornDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornDetectHasBeenSet = true;
    }

    if (value.HasMember("TerrorDetect") && !value["TerrorDetect"].IsNull())
    {
        if (!value["TerrorDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.TerrorDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorDetect.Deserialize(value["TerrorDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorDetectHasBeenSet = true;
    }

    if (value.HasMember("OCRDetect") && !value["OCRDetect"].IsNull())
    {
        if (!value["OCRDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.OCRDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oCRDetect.Deserialize(value["OCRDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oCRDetectHasBeenSet = true;
    }

    if (value.HasMember("LogoDetect") && !value["LogoDetect"].IsNull())
    {
        if (!value["LogoDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.LogoDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logoDetect.Deserialize(value["LogoDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logoDetectHasBeenSet = true;
    }

    if (value.HasMember("Similar") && !value["Similar"].IsNull())
    {
        if (!value["Similar"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.Similar` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_similar.Deserialize(value["Similar"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_similarHasBeenSet = true;
    }

    if (value.HasMember("PhoneDetect") && !value["PhoneDetect"].IsNull())
    {
        if (!value["PhoneDetect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageData.PhoneDetect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_phoneDetect.Deserialize(value["PhoneDetect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_phoneDetectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_hotDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hotDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_evilFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilFlag, allocator);
    }

    if (m_codeDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_polityDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolityDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_polityDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_illegalDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IllegalDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_illegalDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oCRDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OCRDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oCRDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logoDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoDetect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_similarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_similar.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_phoneDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_phoneDetect.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ImageData::GetEvilType() const
{
    return m_evilType;
}

void ImageData::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool ImageData::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

ImageHotDetect ImageData::GetHotDetect() const
{
    return m_hotDetect;
}

void ImageData::SetHotDetect(const ImageHotDetect& _hotDetect)
{
    m_hotDetect = _hotDetect;
    m_hotDetectHasBeenSet = true;
}

bool ImageData::HotDetectHasBeenSet() const
{
    return m_hotDetectHasBeenSet;
}

int64_t ImageData::GetEvilFlag() const
{
    return m_evilFlag;
}

void ImageData::SetEvilFlag(const int64_t& _evilFlag)
{
    m_evilFlag = _evilFlag;
    m_evilFlagHasBeenSet = true;
}

bool ImageData::EvilFlagHasBeenSet() const
{
    return m_evilFlagHasBeenSet;
}

CodeDetect ImageData::GetCodeDetect() const
{
    return m_codeDetect;
}

void ImageData::SetCodeDetect(const CodeDetect& _codeDetect)
{
    m_codeDetect = _codeDetect;
    m_codeDetectHasBeenSet = true;
}

bool ImageData::CodeDetectHasBeenSet() const
{
    return m_codeDetectHasBeenSet;
}

ImagePolityDetect ImageData::GetPolityDetect() const
{
    return m_polityDetect;
}

void ImageData::SetPolityDetect(const ImagePolityDetect& _polityDetect)
{
    m_polityDetect = _polityDetect;
    m_polityDetectHasBeenSet = true;
}

bool ImageData::PolityDetectHasBeenSet() const
{
    return m_polityDetectHasBeenSet;
}

ImageIllegalDetect ImageData::GetIllegalDetect() const
{
    return m_illegalDetect;
}

void ImageData::SetIllegalDetect(const ImageIllegalDetect& _illegalDetect)
{
    m_illegalDetect = _illegalDetect;
    m_illegalDetectHasBeenSet = true;
}

bool ImageData::IllegalDetectHasBeenSet() const
{
    return m_illegalDetectHasBeenSet;
}

ImagePornDetect ImageData::GetPornDetect() const
{
    return m_pornDetect;
}

void ImageData::SetPornDetect(const ImagePornDetect& _pornDetect)
{
    m_pornDetect = _pornDetect;
    m_pornDetectHasBeenSet = true;
}

bool ImageData::PornDetectHasBeenSet() const
{
    return m_pornDetectHasBeenSet;
}

ImageTerrorDetect ImageData::GetTerrorDetect() const
{
    return m_terrorDetect;
}

void ImageData::SetTerrorDetect(const ImageTerrorDetect& _terrorDetect)
{
    m_terrorDetect = _terrorDetect;
    m_terrorDetectHasBeenSet = true;
}

bool ImageData::TerrorDetectHasBeenSet() const
{
    return m_terrorDetectHasBeenSet;
}

OCRDetect ImageData::GetOCRDetect() const
{
    return m_oCRDetect;
}

void ImageData::SetOCRDetect(const OCRDetect& _oCRDetect)
{
    m_oCRDetect = _oCRDetect;
    m_oCRDetectHasBeenSet = true;
}

bool ImageData::OCRDetectHasBeenSet() const
{
    return m_oCRDetectHasBeenSet;
}

LogoDetail ImageData::GetLogoDetect() const
{
    return m_logoDetect;
}

void ImageData::SetLogoDetect(const LogoDetail& _logoDetect)
{
    m_logoDetect = _logoDetect;
    m_logoDetectHasBeenSet = true;
}

bool ImageData::LogoDetectHasBeenSet() const
{
    return m_logoDetectHasBeenSet;
}

Similar ImageData::GetSimilar() const
{
    return m_similar;
}

void ImageData::SetSimilar(const Similar& _similar)
{
    m_similar = _similar;
    m_similarHasBeenSet = true;
}

bool ImageData::SimilarHasBeenSet() const
{
    return m_similarHasBeenSet;
}

PhoneDetect ImageData::GetPhoneDetect() const
{
    return m_phoneDetect;
}

void ImageData::SetPhoneDetect(const PhoneDetect& _phoneDetect)
{
    m_phoneDetect = _phoneDetect;
    m_phoneDetectHasBeenSet = true;
}

bool ImageData::PhoneDetectHasBeenSet() const
{
    return m_phoneDetectHasBeenSet;
}

