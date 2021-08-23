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

#include <tencentcloud/sslpod/v20190605/model/DashboardResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

DashboardResult::DashboardResult() :
    m_securityLevelPieHasBeenSet(false),
    m_certBrandsPieHasBeenSet(false),
    m_certValidTimePieHasBeenSet(false),
    m_certTypePieHasBeenSet(false),
    m_sSLBugsLoopholeHistogramHasBeenSet(false),
    m_complianceHistogramHasBeenSet(false)
{
}

CoreInternalOutcome DashboardResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecurityLevelPie") && !value["SecurityLevelPie"].IsNull())
    {
        if (!value["SecurityLevelPie"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardResult.SecurityLevelPie` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityLevelPie"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChartNameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityLevelPie.push_back(item);
        }
        m_securityLevelPieHasBeenSet = true;
    }

    if (value.HasMember("CertBrandsPie") && !value["CertBrandsPie"].IsNull())
    {
        if (!value["CertBrandsPie"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardResult.CertBrandsPie` is not array type"));

        const rapidjson::Value &tmpValue = value["CertBrandsPie"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChartNameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certBrandsPie.push_back(item);
        }
        m_certBrandsPieHasBeenSet = true;
    }

    if (value.HasMember("CertValidTimePie") && !value["CertValidTimePie"].IsNull())
    {
        if (!value["CertValidTimePie"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardResult.CertValidTimePie` is not array type"));

        const rapidjson::Value &tmpValue = value["CertValidTimePie"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChartNameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certValidTimePie.push_back(item);
        }
        m_certValidTimePieHasBeenSet = true;
    }

    if (value.HasMember("CertTypePie") && !value["CertTypePie"].IsNull())
    {
        if (!value["CertTypePie"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardResult.CertTypePie` is not array type"));

        const rapidjson::Value &tmpValue = value["CertTypePie"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChartNameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certTypePie.push_back(item);
        }
        m_certTypePieHasBeenSet = true;
    }

    if (value.HasMember("SSLBugsLoopholeHistogram") && !value["SSLBugsLoopholeHistogram"].IsNull())
    {
        if (!value["SSLBugsLoopholeHistogram"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardResult.SSLBugsLoopholeHistogram` is not array type"));

        const rapidjson::Value &tmpValue = value["SSLBugsLoopholeHistogram"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChartHistogram item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sSLBugsLoopholeHistogram.push_back(item);
        }
        m_sSLBugsLoopholeHistogramHasBeenSet = true;
    }

    if (value.HasMember("ComplianceHistogram") && !value["ComplianceHistogram"].IsNull())
    {
        if (!value["ComplianceHistogram"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardResult.ComplianceHistogram` is not array type"));

        const rapidjson::Value &tmpValue = value["ComplianceHistogram"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChartHistogram item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_complianceHistogram.push_back(item);
        }
        m_complianceHistogramHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DashboardResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securityLevelPieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityLevelPie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityLevelPie.begin(); itr != m_securityLevelPie.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certBrandsPieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertBrandsPie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certBrandsPie.begin(); itr != m_certBrandsPie.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certValidTimePieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertValidTimePie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certValidTimePie.begin(); itr != m_certValidTimePie.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certTypePieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertTypePie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certTypePie.begin(); itr != m_certTypePie.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sSLBugsLoopholeHistogramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLBugsLoopholeHistogram";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sSLBugsLoopholeHistogram.begin(); itr != m_sSLBugsLoopholeHistogram.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_complianceHistogramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceHistogram";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_complianceHistogram.begin(); itr != m_complianceHistogram.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ChartNameValue> DashboardResult::GetSecurityLevelPie() const
{
    return m_securityLevelPie;
}

void DashboardResult::SetSecurityLevelPie(const vector<ChartNameValue>& _securityLevelPie)
{
    m_securityLevelPie = _securityLevelPie;
    m_securityLevelPieHasBeenSet = true;
}

bool DashboardResult::SecurityLevelPieHasBeenSet() const
{
    return m_securityLevelPieHasBeenSet;
}

vector<ChartNameValue> DashboardResult::GetCertBrandsPie() const
{
    return m_certBrandsPie;
}

void DashboardResult::SetCertBrandsPie(const vector<ChartNameValue>& _certBrandsPie)
{
    m_certBrandsPie = _certBrandsPie;
    m_certBrandsPieHasBeenSet = true;
}

bool DashboardResult::CertBrandsPieHasBeenSet() const
{
    return m_certBrandsPieHasBeenSet;
}

vector<ChartNameValue> DashboardResult::GetCertValidTimePie() const
{
    return m_certValidTimePie;
}

void DashboardResult::SetCertValidTimePie(const vector<ChartNameValue>& _certValidTimePie)
{
    m_certValidTimePie = _certValidTimePie;
    m_certValidTimePieHasBeenSet = true;
}

bool DashboardResult::CertValidTimePieHasBeenSet() const
{
    return m_certValidTimePieHasBeenSet;
}

vector<ChartNameValue> DashboardResult::GetCertTypePie() const
{
    return m_certTypePie;
}

void DashboardResult::SetCertTypePie(const vector<ChartNameValue>& _certTypePie)
{
    m_certTypePie = _certTypePie;
    m_certTypePieHasBeenSet = true;
}

bool DashboardResult::CertTypePieHasBeenSet() const
{
    return m_certTypePieHasBeenSet;
}

vector<ChartHistogram> DashboardResult::GetSSLBugsLoopholeHistogram() const
{
    return m_sSLBugsLoopholeHistogram;
}

void DashboardResult::SetSSLBugsLoopholeHistogram(const vector<ChartHistogram>& _sSLBugsLoopholeHistogram)
{
    m_sSLBugsLoopholeHistogram = _sSLBugsLoopholeHistogram;
    m_sSLBugsLoopholeHistogramHasBeenSet = true;
}

bool DashboardResult::SSLBugsLoopholeHistogramHasBeenSet() const
{
    return m_sSLBugsLoopholeHistogramHasBeenSet;
}

vector<ChartHistogram> DashboardResult::GetComplianceHistogram() const
{
    return m_complianceHistogram;
}

void DashboardResult::SetComplianceHistogram(const vector<ChartHistogram>& _complianceHistogram)
{
    m_complianceHistogram = _complianceHistogram;
    m_complianceHistogramHasBeenSet = true;
}

bool DashboardResult::ComplianceHistogramHasBeenSet() const
{
    return m_complianceHistogramHasBeenSet;
}

