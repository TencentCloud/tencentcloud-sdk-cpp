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

#include <tencentcloud/ocr/v20181119/model/CardWarnInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CardWarnInfo::CardWarnInfo() :
    m_borderCheckHasBeenSet(false),
    m_occlusionCheckHasBeenSet(false),
    m_copyCheckHasBeenSet(false),
    m_reshootCheckHasBeenSet(false),
    m_pSCheckHasBeenSet(false),
    m_blurCheckHasBeenSet(false),
    m_blurScoreHasBeenSet(false),
    m_electronCheckHasBeenSet(false)
{
}

CoreInternalOutcome CardWarnInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BorderCheck") && !value["BorderCheck"].IsNull())
    {
        if (!value["BorderCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.BorderCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_borderCheck = value["BorderCheck"].GetInt64();
        m_borderCheckHasBeenSet = true;
    }

    if (value.HasMember("OcclusionCheck") && !value["OcclusionCheck"].IsNull())
    {
        if (!value["OcclusionCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.OcclusionCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_occlusionCheck = value["OcclusionCheck"].GetInt64();
        m_occlusionCheckHasBeenSet = true;
    }

    if (value.HasMember("CopyCheck") && !value["CopyCheck"].IsNull())
    {
        if (!value["CopyCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.CopyCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_copyCheck = value["CopyCheck"].GetInt64();
        m_copyCheckHasBeenSet = true;
    }

    if (value.HasMember("ReshootCheck") && !value["ReshootCheck"].IsNull())
    {
        if (!value["ReshootCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.ReshootCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reshootCheck = value["ReshootCheck"].GetInt64();
        m_reshootCheckHasBeenSet = true;
    }

    if (value.HasMember("PSCheck") && !value["PSCheck"].IsNull())
    {
        if (!value["PSCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.PSCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pSCheck = value["PSCheck"].GetInt64();
        m_pSCheckHasBeenSet = true;
    }

    if (value.HasMember("BlurCheck") && !value["BlurCheck"].IsNull())
    {
        if (!value["BlurCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.BlurCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blurCheck = value["BlurCheck"].GetInt64();
        m_blurCheckHasBeenSet = true;
    }

    if (value.HasMember("BlurScore") && !value["BlurScore"].IsNull())
    {
        if (!value["BlurScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.BlurScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_blurScore = value["BlurScore"].GetDouble();
        m_blurScoreHasBeenSet = true;
    }

    if (value.HasMember("ElectronCheck") && !value["ElectronCheck"].IsNull())
    {
        if (!value["ElectronCheck"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CardWarnInfo.ElectronCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_electronCheck = value["ElectronCheck"].GetInt64();
        m_electronCheckHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CardWarnInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_borderCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_borderCheck, allocator);
    }

    if (m_occlusionCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcclusionCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_occlusionCheck, allocator);
    }

    if (m_copyCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyCheck, allocator);
    }

    if (m_reshootCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReshootCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reshootCheck, allocator);
    }

    if (m_pSCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PSCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pSCheck, allocator);
    }

    if (m_blurCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlurCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blurCheck, allocator);
    }

    if (m_blurScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlurScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blurScore, allocator);
    }

    if (m_electronCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_electronCheck, allocator);
    }

}


int64_t CardWarnInfo::GetBorderCheck() const
{
    return m_borderCheck;
}

void CardWarnInfo::SetBorderCheck(const int64_t& _borderCheck)
{
    m_borderCheck = _borderCheck;
    m_borderCheckHasBeenSet = true;
}

bool CardWarnInfo::BorderCheckHasBeenSet() const
{
    return m_borderCheckHasBeenSet;
}

int64_t CardWarnInfo::GetOcclusionCheck() const
{
    return m_occlusionCheck;
}

void CardWarnInfo::SetOcclusionCheck(const int64_t& _occlusionCheck)
{
    m_occlusionCheck = _occlusionCheck;
    m_occlusionCheckHasBeenSet = true;
}

bool CardWarnInfo::OcclusionCheckHasBeenSet() const
{
    return m_occlusionCheckHasBeenSet;
}

int64_t CardWarnInfo::GetCopyCheck() const
{
    return m_copyCheck;
}

void CardWarnInfo::SetCopyCheck(const int64_t& _copyCheck)
{
    m_copyCheck = _copyCheck;
    m_copyCheckHasBeenSet = true;
}

bool CardWarnInfo::CopyCheckHasBeenSet() const
{
    return m_copyCheckHasBeenSet;
}

int64_t CardWarnInfo::GetReshootCheck() const
{
    return m_reshootCheck;
}

void CardWarnInfo::SetReshootCheck(const int64_t& _reshootCheck)
{
    m_reshootCheck = _reshootCheck;
    m_reshootCheckHasBeenSet = true;
}

bool CardWarnInfo::ReshootCheckHasBeenSet() const
{
    return m_reshootCheckHasBeenSet;
}

int64_t CardWarnInfo::GetPSCheck() const
{
    return m_pSCheck;
}

void CardWarnInfo::SetPSCheck(const int64_t& _pSCheck)
{
    m_pSCheck = _pSCheck;
    m_pSCheckHasBeenSet = true;
}

bool CardWarnInfo::PSCheckHasBeenSet() const
{
    return m_pSCheckHasBeenSet;
}

int64_t CardWarnInfo::GetBlurCheck() const
{
    return m_blurCheck;
}

void CardWarnInfo::SetBlurCheck(const int64_t& _blurCheck)
{
    m_blurCheck = _blurCheck;
    m_blurCheckHasBeenSet = true;
}

bool CardWarnInfo::BlurCheckHasBeenSet() const
{
    return m_blurCheckHasBeenSet;
}

double CardWarnInfo::GetBlurScore() const
{
    return m_blurScore;
}

void CardWarnInfo::SetBlurScore(const double& _blurScore)
{
    m_blurScore = _blurScore;
    m_blurScoreHasBeenSet = true;
}

bool CardWarnInfo::BlurScoreHasBeenSet() const
{
    return m_blurScoreHasBeenSet;
}

int64_t CardWarnInfo::GetElectronCheck() const
{
    return m_electronCheck;
}

void CardWarnInfo::SetElectronCheck(const int64_t& _electronCheck)
{
    m_electronCheck = _electronCheck;
    m_electronCheckHasBeenSet = true;
}

bool CardWarnInfo::ElectronCheckHasBeenSet() const
{
    return m_electronCheckHasBeenSet;
}

