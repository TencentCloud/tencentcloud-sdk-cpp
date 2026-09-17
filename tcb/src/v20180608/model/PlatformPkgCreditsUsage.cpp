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

#include <tencentcloud/tcb/v20180608/model/PlatformPkgCreditsUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PlatformPkgCreditsUsage::PlatformPkgCreditsUsage() :
    m_platformIdHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_creditsValueHasBeenSet(false),
    m_metricUsageDetailHasBeenSet(false),
    m_deductValueHasBeenSet(false),
    m_packageDeductValueHasBeenSet(false),
    m_reportValueHasBeenSet(false)
{
}

CoreInternalOutcome PlatformPkgCreditsUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlatformId") && !value["PlatformId"].IsNull())
    {
        if (!value["PlatformId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformPkgCreditsUsage.PlatformId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformId = string(value["PlatformId"].GetString());
        m_platformIdHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformPkgCreditsUsage.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("CreditsValue") && !value["CreditsValue"].IsNull())
    {
        if (!value["CreditsValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformPkgCreditsUsage.CreditsValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditsValue = value["CreditsValue"].GetDouble();
        m_creditsValueHasBeenSet = true;
    }

    if (value.HasMember("MetricUsageDetail") && !value["MetricUsageDetail"].IsNull())
    {
        if (!value["MetricUsageDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlatformPkgCreditsUsage.MetricUsageDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricUsageDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricUsageDetail.push_back(item);
        }
        m_metricUsageDetailHasBeenSet = true;
    }

    if (value.HasMember("DeductValue") && !value["DeductValue"].IsNull())
    {
        if (!value["DeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformPkgCreditsUsage.DeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_deductValue = value["DeductValue"].GetDouble();
        m_deductValueHasBeenSet = true;
    }

    if (value.HasMember("PackageDeductValue") && !value["PackageDeductValue"].IsNull())
    {
        if (!value["PackageDeductValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformPkgCreditsUsage.PackageDeductValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageDeductValue = value["PackageDeductValue"].GetDouble();
        m_packageDeductValueHasBeenSet = true;
    }

    if (value.HasMember("ReportValue") && !value["ReportValue"].IsNull())
    {
        if (!value["ReportValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformPkgCreditsUsage.ReportValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reportValue = value["ReportValue"].GetDouble();
        m_reportValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformPkgCreditsUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_creditsValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditsValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditsValue, allocator);
    }

    if (m_metricUsageDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricUsageDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricUsageDetail.begin(); itr != m_metricUsageDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductValue, allocator);
    }

    if (m_packageDeductValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageDeductValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageDeductValue, allocator);
    }

    if (m_reportValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportValue, allocator);
    }

}


string PlatformPkgCreditsUsage::GetPlatformId() const
{
    return m_platformId;
}

void PlatformPkgCreditsUsage::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool PlatformPkgCreditsUsage::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string PlatformPkgCreditsUsage::GetModule() const
{
    return m_module;
}

void PlatformPkgCreditsUsage::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool PlatformPkgCreditsUsage::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

double PlatformPkgCreditsUsage::GetCreditsValue() const
{
    return m_creditsValue;
}

void PlatformPkgCreditsUsage::SetCreditsValue(const double& _creditsValue)
{
    m_creditsValue = _creditsValue;
    m_creditsValueHasBeenSet = true;
}

bool PlatformPkgCreditsUsage::CreditsValueHasBeenSet() const
{
    return m_creditsValueHasBeenSet;
}

vector<MetricUsage> PlatformPkgCreditsUsage::GetMetricUsageDetail() const
{
    return m_metricUsageDetail;
}

void PlatformPkgCreditsUsage::SetMetricUsageDetail(const vector<MetricUsage>& _metricUsageDetail)
{
    m_metricUsageDetail = _metricUsageDetail;
    m_metricUsageDetailHasBeenSet = true;
}

bool PlatformPkgCreditsUsage::MetricUsageDetailHasBeenSet() const
{
    return m_metricUsageDetailHasBeenSet;
}

double PlatformPkgCreditsUsage::GetDeductValue() const
{
    return m_deductValue;
}

void PlatformPkgCreditsUsage::SetDeductValue(const double& _deductValue)
{
    m_deductValue = _deductValue;
    m_deductValueHasBeenSet = true;
}

bool PlatformPkgCreditsUsage::DeductValueHasBeenSet() const
{
    return m_deductValueHasBeenSet;
}

double PlatformPkgCreditsUsage::GetPackageDeductValue() const
{
    return m_packageDeductValue;
}

void PlatformPkgCreditsUsage::SetPackageDeductValue(const double& _packageDeductValue)
{
    m_packageDeductValue = _packageDeductValue;
    m_packageDeductValueHasBeenSet = true;
}

bool PlatformPkgCreditsUsage::PackageDeductValueHasBeenSet() const
{
    return m_packageDeductValueHasBeenSet;
}

double PlatformPkgCreditsUsage::GetReportValue() const
{
    return m_reportValue;
}

void PlatformPkgCreditsUsage::SetReportValue(const double& _reportValue)
{
    m_reportValue = _reportValue;
    m_reportValueHasBeenSet = true;
}

bool PlatformPkgCreditsUsage::ReportValueHasBeenSet() const
{
    return m_reportValueHasBeenSet;
}

