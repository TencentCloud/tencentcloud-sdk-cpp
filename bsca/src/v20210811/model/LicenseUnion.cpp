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

#include <tencentcloud/bsca/v20210811/model/LicenseUnion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

LicenseUnion::LicenseUnion() :
    m_licenseSummaryHasBeenSet(false),
    m_licenseDetailHasBeenSet(false)
{
}

CoreInternalOutcome LicenseUnion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseSummary") && !value["LicenseSummary"].IsNull())
    {
        if (!value["LicenseSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseUnion.LicenseSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_licenseSummary.Deserialize(value["LicenseSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseSummaryHasBeenSet = true;
    }

    if (value.HasMember("LicenseDetail") && !value["LicenseDetail"].IsNull())
    {
        if (!value["LicenseDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseUnion.LicenseDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_licenseDetail.Deserialize(value["LicenseDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_licenseDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseUnion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_licenseSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_licenseDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_licenseDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


LicenseSummary LicenseUnion::GetLicenseSummary() const
{
    return m_licenseSummary;
}

void LicenseUnion::SetLicenseSummary(const LicenseSummary& _licenseSummary)
{
    m_licenseSummary = _licenseSummary;
    m_licenseSummaryHasBeenSet = true;
}

bool LicenseUnion::LicenseSummaryHasBeenSet() const
{
    return m_licenseSummaryHasBeenSet;
}

LicenseDetail LicenseUnion::GetLicenseDetail() const
{
    return m_licenseDetail;
}

void LicenseUnion::SetLicenseDetail(const LicenseDetail& _licenseDetail)
{
    m_licenseDetail = _licenseDetail;
    m_licenseDetailHasBeenSet = true;
}

bool LicenseUnion::LicenseDetailHasBeenSet() const
{
    return m_licenseDetailHasBeenSet;
}

