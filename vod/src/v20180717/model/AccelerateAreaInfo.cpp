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

#include <tencentcloud/vod/v20180717/model/AccelerateAreaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AccelerateAreaInfo::AccelerateAreaInfo() :
    m_areaHasBeenSet(false),
    m_tencentDisableReasonHasBeenSet(false),
    m_tencentEdgeDomainHasBeenSet(false)
{
}

CoreInternalOutcome AccelerateAreaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerateAreaInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("TencentDisableReason") && !value["TencentDisableReason"].IsNull())
    {
        if (!value["TencentDisableReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerateAreaInfo.TencentDisableReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentDisableReason = string(value["TencentDisableReason"].GetString());
        m_tencentDisableReasonHasBeenSet = true;
    }

    if (value.HasMember("TencentEdgeDomain") && !value["TencentEdgeDomain"].IsNull())
    {
        if (!value["TencentEdgeDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccelerateAreaInfo.TencentEdgeDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentEdgeDomain = string(value["TencentEdgeDomain"].GetString());
        m_tencentEdgeDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccelerateAreaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentDisableReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentDisableReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentDisableReason.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentEdgeDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentEdgeDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentEdgeDomain.c_str(), allocator).Move(), allocator);
    }

}


string AccelerateAreaInfo::GetArea() const
{
    return m_area;
}

void AccelerateAreaInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool AccelerateAreaInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string AccelerateAreaInfo::GetTencentDisableReason() const
{
    return m_tencentDisableReason;
}

void AccelerateAreaInfo::SetTencentDisableReason(const string& _tencentDisableReason)
{
    m_tencentDisableReason = _tencentDisableReason;
    m_tencentDisableReasonHasBeenSet = true;
}

bool AccelerateAreaInfo::TencentDisableReasonHasBeenSet() const
{
    return m_tencentDisableReasonHasBeenSet;
}

string AccelerateAreaInfo::GetTencentEdgeDomain() const
{
    return m_tencentEdgeDomain;
}

void AccelerateAreaInfo::SetTencentEdgeDomain(const string& _tencentEdgeDomain)
{
    m_tencentEdgeDomain = _tencentEdgeDomain;
    m_tencentEdgeDomainHasBeenSet = true;
}

bool AccelerateAreaInfo::TencentEdgeDomainHasBeenSet() const
{
    return m_tencentEdgeDomainHasBeenSet;
}

