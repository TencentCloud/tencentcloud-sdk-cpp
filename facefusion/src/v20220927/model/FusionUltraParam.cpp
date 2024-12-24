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

#include <tencentcloud/facefusion/v20220927/model/FusionUltraParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

FusionUltraParam::FusionUltraParam() :
    m_warpRadioHasBeenSet(false),
    m_enhanceRadioHasBeenSet(false),
    m_mpRadioHasBeenSet(false),
    m_blurRadioHasBeenSet(false),
    m_teethEnhanceRadioHasBeenSet(false),
    m_makeupTransferRadioHasBeenSet(false)
{
}

CoreInternalOutcome FusionUltraParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WarpRadio") && !value["WarpRadio"].IsNull())
    {
        if (!value["WarpRadio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FusionUltraParam.WarpRadio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_warpRadio = value["WarpRadio"].GetDouble();
        m_warpRadioHasBeenSet = true;
    }

    if (value.HasMember("EnhanceRadio") && !value["EnhanceRadio"].IsNull())
    {
        if (!value["EnhanceRadio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FusionUltraParam.EnhanceRadio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_enhanceRadio = value["EnhanceRadio"].GetDouble();
        m_enhanceRadioHasBeenSet = true;
    }

    if (value.HasMember("MpRadio") && !value["MpRadio"].IsNull())
    {
        if (!value["MpRadio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FusionUltraParam.MpRadio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mpRadio = value["MpRadio"].GetDouble();
        m_mpRadioHasBeenSet = true;
    }

    if (value.HasMember("BlurRadio") && !value["BlurRadio"].IsNull())
    {
        if (!value["BlurRadio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FusionUltraParam.BlurRadio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_blurRadio = value["BlurRadio"].GetDouble();
        m_blurRadioHasBeenSet = true;
    }

    if (value.HasMember("TeethEnhanceRadio") && !value["TeethEnhanceRadio"].IsNull())
    {
        if (!value["TeethEnhanceRadio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FusionUltraParam.TeethEnhanceRadio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_teethEnhanceRadio = value["TeethEnhanceRadio"].GetDouble();
        m_teethEnhanceRadioHasBeenSet = true;
    }

    if (value.HasMember("MakeupTransferRadio") && !value["MakeupTransferRadio"].IsNull())
    {
        if (!value["MakeupTransferRadio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FusionUltraParam.MakeupTransferRadio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_makeupTransferRadio = value["MakeupTransferRadio"].GetDouble();
        m_makeupTransferRadioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FusionUltraParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_warpRadioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarpRadio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warpRadio, allocator);
    }

    if (m_enhanceRadioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceRadio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enhanceRadio, allocator);
    }

    if (m_mpRadioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpRadio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mpRadio, allocator);
    }

    if (m_blurRadioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlurRadio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blurRadio, allocator);
    }

    if (m_teethEnhanceRadioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeethEnhanceRadio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_teethEnhanceRadio, allocator);
    }

    if (m_makeupTransferRadioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeupTransferRadio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_makeupTransferRadio, allocator);
    }

}


double FusionUltraParam::GetWarpRadio() const
{
    return m_warpRadio;
}

void FusionUltraParam::SetWarpRadio(const double& _warpRadio)
{
    m_warpRadio = _warpRadio;
    m_warpRadioHasBeenSet = true;
}

bool FusionUltraParam::WarpRadioHasBeenSet() const
{
    return m_warpRadioHasBeenSet;
}

double FusionUltraParam::GetEnhanceRadio() const
{
    return m_enhanceRadio;
}

void FusionUltraParam::SetEnhanceRadio(const double& _enhanceRadio)
{
    m_enhanceRadio = _enhanceRadio;
    m_enhanceRadioHasBeenSet = true;
}

bool FusionUltraParam::EnhanceRadioHasBeenSet() const
{
    return m_enhanceRadioHasBeenSet;
}

double FusionUltraParam::GetMpRadio() const
{
    return m_mpRadio;
}

void FusionUltraParam::SetMpRadio(const double& _mpRadio)
{
    m_mpRadio = _mpRadio;
    m_mpRadioHasBeenSet = true;
}

bool FusionUltraParam::MpRadioHasBeenSet() const
{
    return m_mpRadioHasBeenSet;
}

double FusionUltraParam::GetBlurRadio() const
{
    return m_blurRadio;
}

void FusionUltraParam::SetBlurRadio(const double& _blurRadio)
{
    m_blurRadio = _blurRadio;
    m_blurRadioHasBeenSet = true;
}

bool FusionUltraParam::BlurRadioHasBeenSet() const
{
    return m_blurRadioHasBeenSet;
}

double FusionUltraParam::GetTeethEnhanceRadio() const
{
    return m_teethEnhanceRadio;
}

void FusionUltraParam::SetTeethEnhanceRadio(const double& _teethEnhanceRadio)
{
    m_teethEnhanceRadio = _teethEnhanceRadio;
    m_teethEnhanceRadioHasBeenSet = true;
}

bool FusionUltraParam::TeethEnhanceRadioHasBeenSet() const
{
    return m_teethEnhanceRadioHasBeenSet;
}

double FusionUltraParam::GetMakeupTransferRadio() const
{
    return m_makeupTransferRadio;
}

void FusionUltraParam::SetMakeupTransferRadio(const double& _makeupTransferRadio)
{
    m_makeupTransferRadio = _makeupTransferRadio;
    m_makeupTransferRadioHasBeenSet = true;
}

bool FusionUltraParam::MakeupTransferRadioHasBeenSet() const
{
    return m_makeupTransferRadioHasBeenSet;
}

