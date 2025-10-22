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

#include <tencentcloud/teo/v20220901/model/CNAMEDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CNAMEDetail::CNAMEDetail() :
    m_isFakeHasBeenSet(false),
    m_ownershipVerificationHasBeenSet(false)
{
}

CoreInternalOutcome CNAMEDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsFake") && !value["IsFake"].IsNull())
    {
        if (!value["IsFake"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAMEDetail.IsFake` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFake = value["IsFake"].GetInt64();
        m_isFakeHasBeenSet = true;
    }

    if (value.HasMember("OwnershipVerification") && !value["OwnershipVerification"].IsNull())
    {
        if (!value["OwnershipVerification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNAMEDetail.OwnershipVerification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownershipVerification.Deserialize(value["OwnershipVerification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownershipVerificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAMEDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isFakeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFake";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFake, allocator);
    }

    if (m_ownershipVerificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnershipVerification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownershipVerification.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t CNAMEDetail::GetIsFake() const
{
    return m_isFake;
}

void CNAMEDetail::SetIsFake(const int64_t& _isFake)
{
    m_isFake = _isFake;
    m_isFakeHasBeenSet = true;
}

bool CNAMEDetail::IsFakeHasBeenSet() const
{
    return m_isFakeHasBeenSet;
}

OwnershipVerification CNAMEDetail::GetOwnershipVerification() const
{
    return m_ownershipVerification;
}

void CNAMEDetail::SetOwnershipVerification(const OwnershipVerification& _ownershipVerification)
{
    m_ownershipVerification = _ownershipVerification;
    m_ownershipVerificationHasBeenSet = true;
}

bool CNAMEDetail::OwnershipVerificationHasBeenSet() const
{
    return m_ownershipVerificationHasBeenSet;
}

