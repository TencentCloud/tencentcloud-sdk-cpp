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

#include <tencentcloud/vod/v20180717/model/DomainCLSTargetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DomainCLSTargetInfo::DomainCLSTargetInfo() :
    m_domainHasBeenSet(false),
    m_chineseMainlandCLSTargetInfoHasBeenSet(false),
    m_outsideChineseMainlandCLSTargetInfoHasBeenSet(false)
{
}

CoreInternalOutcome DomainCLSTargetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCLSTargetInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("ChineseMainlandCLSTargetInfo") && !value["ChineseMainlandCLSTargetInfo"].IsNull())
    {
        if (!value["ChineseMainlandCLSTargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCLSTargetInfo.ChineseMainlandCLSTargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_chineseMainlandCLSTargetInfo.Deserialize(value["ChineseMainlandCLSTargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_chineseMainlandCLSTargetInfoHasBeenSet = true;
    }

    if (value.HasMember("OutsideChineseMainlandCLSTargetInfo") && !value["OutsideChineseMainlandCLSTargetInfo"].IsNull())
    {
        if (!value["OutsideChineseMainlandCLSTargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCLSTargetInfo.OutsideChineseMainlandCLSTargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outsideChineseMainlandCLSTargetInfo.Deserialize(value["OutsideChineseMainlandCLSTargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outsideChineseMainlandCLSTargetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainCLSTargetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_chineseMainlandCLSTargetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChineseMainlandCLSTargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chineseMainlandCLSTargetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outsideChineseMainlandCLSTargetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutsideChineseMainlandCLSTargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outsideChineseMainlandCLSTargetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DomainCLSTargetInfo::GetDomain() const
{
    return m_domain;
}

void DomainCLSTargetInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainCLSTargetInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

AreaCLSTargetInfo DomainCLSTargetInfo::GetChineseMainlandCLSTargetInfo() const
{
    return m_chineseMainlandCLSTargetInfo;
}

void DomainCLSTargetInfo::SetChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _chineseMainlandCLSTargetInfo)
{
    m_chineseMainlandCLSTargetInfo = _chineseMainlandCLSTargetInfo;
    m_chineseMainlandCLSTargetInfoHasBeenSet = true;
}

bool DomainCLSTargetInfo::ChineseMainlandCLSTargetInfoHasBeenSet() const
{
    return m_chineseMainlandCLSTargetInfoHasBeenSet;
}

AreaCLSTargetInfo DomainCLSTargetInfo::GetOutsideChineseMainlandCLSTargetInfo() const
{
    return m_outsideChineseMainlandCLSTargetInfo;
}

void DomainCLSTargetInfo::SetOutsideChineseMainlandCLSTargetInfo(const AreaCLSTargetInfo& _outsideChineseMainlandCLSTargetInfo)
{
    m_outsideChineseMainlandCLSTargetInfo = _outsideChineseMainlandCLSTargetInfo;
    m_outsideChineseMainlandCLSTargetInfoHasBeenSet = true;
}

bool DomainCLSTargetInfo::OutsideChineseMainlandCLSTargetInfoHasBeenSet() const
{
    return m_outsideChineseMainlandCLSTargetInfoHasBeenSet;
}

