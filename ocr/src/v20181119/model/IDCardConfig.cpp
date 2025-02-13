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

#include <tencentcloud/ocr/v20181119/model/IDCardConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

IDCardConfig::IDCardConfig() :
    m_copyWarnHasBeenSet(false),
    m_borderCheckWarnHasBeenSet(false),
    m_reshootWarnHasBeenSet(false),
    m_detectPsWarnHasBeenSet(false),
    m_tempIdWarnHasBeenSet(false),
    m_invalidDateWarnHasBeenSet(false),
    m_reflectWarnHasBeenSet(false),
    m_cropPortraitHasBeenSet(false)
{
}

CoreInternalOutcome IDCardConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CopyWarn") && !value["CopyWarn"].IsNull())
    {
        if (!value["CopyWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.CopyWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_copyWarn = value["CopyWarn"].GetBool();
        m_copyWarnHasBeenSet = true;
    }

    if (value.HasMember("BorderCheckWarn") && !value["BorderCheckWarn"].IsNull())
    {
        if (!value["BorderCheckWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.BorderCheckWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_borderCheckWarn = value["BorderCheckWarn"].GetBool();
        m_borderCheckWarnHasBeenSet = true;
    }

    if (value.HasMember("ReshootWarn") && !value["ReshootWarn"].IsNull())
    {
        if (!value["ReshootWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.ReshootWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reshootWarn = value["ReshootWarn"].GetBool();
        m_reshootWarnHasBeenSet = true;
    }

    if (value.HasMember("DetectPsWarn") && !value["DetectPsWarn"].IsNull())
    {
        if (!value["DetectPsWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.DetectPsWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_detectPsWarn = value["DetectPsWarn"].GetBool();
        m_detectPsWarnHasBeenSet = true;
    }

    if (value.HasMember("TempIdWarn") && !value["TempIdWarn"].IsNull())
    {
        if (!value["TempIdWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.TempIdWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tempIdWarn = value["TempIdWarn"].GetBool();
        m_tempIdWarnHasBeenSet = true;
    }

    if (value.HasMember("InvalidDateWarn") && !value["InvalidDateWarn"].IsNull())
    {
        if (!value["InvalidDateWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.InvalidDateWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invalidDateWarn = value["InvalidDateWarn"].GetBool();
        m_invalidDateWarnHasBeenSet = true;
    }

    if (value.HasMember("ReflectWarn") && !value["ReflectWarn"].IsNull())
    {
        if (!value["ReflectWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.ReflectWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_reflectWarn = value["ReflectWarn"].GetBool();
        m_reflectWarnHasBeenSet = true;
    }

    if (value.HasMember("CropPortrait") && !value["CropPortrait"].IsNull())
    {
        if (!value["CropPortrait"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardConfig.CropPortrait` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cropPortrait = value["CropPortrait"].GetBool();
        m_cropPortraitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IDCardConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_copyWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyWarn, allocator);
    }

    if (m_borderCheckWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderCheckWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_borderCheckWarn, allocator);
    }

    if (m_reshootWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReshootWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reshootWarn, allocator);
    }

    if (m_detectPsWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectPsWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectPsWarn, allocator);
    }

    if (m_tempIdWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempIdWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tempIdWarn, allocator);
    }

    if (m_invalidDateWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidDateWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidDateWarn, allocator);
    }

    if (m_reflectWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReflectWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reflectWarn, allocator);
    }

    if (m_cropPortraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropPortrait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cropPortrait, allocator);
    }

}


bool IDCardConfig::GetCopyWarn() const
{
    return m_copyWarn;
}

void IDCardConfig::SetCopyWarn(const bool& _copyWarn)
{
    m_copyWarn = _copyWarn;
    m_copyWarnHasBeenSet = true;
}

bool IDCardConfig::CopyWarnHasBeenSet() const
{
    return m_copyWarnHasBeenSet;
}

bool IDCardConfig::GetBorderCheckWarn() const
{
    return m_borderCheckWarn;
}

void IDCardConfig::SetBorderCheckWarn(const bool& _borderCheckWarn)
{
    m_borderCheckWarn = _borderCheckWarn;
    m_borderCheckWarnHasBeenSet = true;
}

bool IDCardConfig::BorderCheckWarnHasBeenSet() const
{
    return m_borderCheckWarnHasBeenSet;
}

bool IDCardConfig::GetReshootWarn() const
{
    return m_reshootWarn;
}

void IDCardConfig::SetReshootWarn(const bool& _reshootWarn)
{
    m_reshootWarn = _reshootWarn;
    m_reshootWarnHasBeenSet = true;
}

bool IDCardConfig::ReshootWarnHasBeenSet() const
{
    return m_reshootWarnHasBeenSet;
}

bool IDCardConfig::GetDetectPsWarn() const
{
    return m_detectPsWarn;
}

void IDCardConfig::SetDetectPsWarn(const bool& _detectPsWarn)
{
    m_detectPsWarn = _detectPsWarn;
    m_detectPsWarnHasBeenSet = true;
}

bool IDCardConfig::DetectPsWarnHasBeenSet() const
{
    return m_detectPsWarnHasBeenSet;
}

bool IDCardConfig::GetTempIdWarn() const
{
    return m_tempIdWarn;
}

void IDCardConfig::SetTempIdWarn(const bool& _tempIdWarn)
{
    m_tempIdWarn = _tempIdWarn;
    m_tempIdWarnHasBeenSet = true;
}

bool IDCardConfig::TempIdWarnHasBeenSet() const
{
    return m_tempIdWarnHasBeenSet;
}

bool IDCardConfig::GetInvalidDateWarn() const
{
    return m_invalidDateWarn;
}

void IDCardConfig::SetInvalidDateWarn(const bool& _invalidDateWarn)
{
    m_invalidDateWarn = _invalidDateWarn;
    m_invalidDateWarnHasBeenSet = true;
}

bool IDCardConfig::InvalidDateWarnHasBeenSet() const
{
    return m_invalidDateWarnHasBeenSet;
}

bool IDCardConfig::GetReflectWarn() const
{
    return m_reflectWarn;
}

void IDCardConfig::SetReflectWarn(const bool& _reflectWarn)
{
    m_reflectWarn = _reflectWarn;
    m_reflectWarnHasBeenSet = true;
}

bool IDCardConfig::ReflectWarnHasBeenSet() const
{
    return m_reflectWarnHasBeenSet;
}

bool IDCardConfig::GetCropPortrait() const
{
    return m_cropPortrait;
}

void IDCardConfig::SetCropPortrait(const bool& _cropPortrait)
{
    m_cropPortrait = _cropPortrait;
    m_cropPortraitHasBeenSet = true;
}

bool IDCardConfig::CropPortraitHasBeenSet() const
{
    return m_cropPortraitHasBeenSet;
}

