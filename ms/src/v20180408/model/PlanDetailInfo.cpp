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

#include <tencentcloud/ms/v20180408/model/PlanDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

PlanDetailInfo::PlanDetailInfo() :
    m_isDefaultHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_planInfoHasBeenSet(false)
{
}

CoreInternalOutcome PlanDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanDetailInfo.IsDefault` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetUint64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanDetailInfo.PlanId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_planId = value["PlanId"].GetUint64();
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("PlanName") && !value["PlanName"].IsNull())
    {
        if (!value["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanDetailInfo.PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(value["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (value.HasMember("PlanInfo") && !value["PlanInfo"].IsNull())
    {
        if (!value["PlanInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlanDetailInfo.PlanInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_planInfo.Deserialize(value["PlanInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_planInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlanDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planId, allocator);
    }

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_planInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_planInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t PlanDetailInfo::GetIsDefault() const
{
    return m_isDefault;
}

void PlanDetailInfo::SetIsDefault(const uint64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool PlanDetailInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

uint64_t PlanDetailInfo::GetPlanId() const
{
    return m_planId;
}

void PlanDetailInfo::SetPlanId(const uint64_t& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool PlanDetailInfo::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string PlanDetailInfo::GetPlanName() const
{
    return m_planName;
}

void PlanDetailInfo::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool PlanDetailInfo::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

PlanInfo PlanDetailInfo::GetPlanInfo() const
{
    return m_planInfo;
}

void PlanDetailInfo::SetPlanInfo(const PlanInfo& _planInfo)
{
    m_planInfo = _planInfo;
    m_planInfoHasBeenSet = true;
}

bool PlanDetailInfo::PlanInfoHasBeenSet() const
{
    return m_planInfoHasBeenSet;
}

