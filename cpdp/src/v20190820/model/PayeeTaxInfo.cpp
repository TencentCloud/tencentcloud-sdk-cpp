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

#include <tencentcloud/cpdp/v20190820/model/PayeeTaxInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeTaxInfo::PayeeTaxInfo() :
    m_taxTemplateInfoListHasBeenSet(false),
    m_taxpayerIdNoHasBeenSet(false),
    m_taxEntityTypeHasBeenSet(false),
    m_taxServiceProviderIdHasBeenSet(false)
{
}

CoreInternalOutcome PayeeTaxInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaxTemplateInfoList") && !value["TaxTemplateInfoList"].IsNull())
    {
        if (!value["TaxTemplateInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PayeeTaxInfo.TaxTemplateInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaxTemplateInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PayeeTaxTemplateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taxTemplateInfoList.push_back(item);
        }
        m_taxTemplateInfoListHasBeenSet = true;
    }

    if (value.HasMember("TaxpayerIdNo") && !value["TaxpayerIdNo"].IsNull())
    {
        if (!value["TaxpayerIdNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeTaxInfo.TaxpayerIdNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxpayerIdNo = string(value["TaxpayerIdNo"].GetString());
        m_taxpayerIdNoHasBeenSet = true;
    }

    if (value.HasMember("TaxEntityType") && !value["TaxEntityType"].IsNull())
    {
        if (!value["TaxEntityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeTaxInfo.TaxEntityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxEntityType = string(value["TaxEntityType"].GetString());
        m_taxEntityTypeHasBeenSet = true;
    }

    if (value.HasMember("TaxServiceProviderId") && !value["TaxServiceProviderId"].IsNull())
    {
        if (!value["TaxServiceProviderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeTaxInfo.TaxServiceProviderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxServiceProviderId = string(value["TaxServiceProviderId"].GetString());
        m_taxServiceProviderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeTaxInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taxTemplateInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxTemplateInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taxTemplateInfoList.begin(); itr != m_taxTemplateInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taxpayerIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxpayerIdNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxpayerIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_taxEntityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxEntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxEntityType.c_str(), allocator).Move(), allocator);
    }

    if (m_taxServiceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxServiceProviderId.c_str(), allocator).Move(), allocator);
    }

}


vector<PayeeTaxTemplateInfo> PayeeTaxInfo::GetTaxTemplateInfoList() const
{
    return m_taxTemplateInfoList;
}

void PayeeTaxInfo::SetTaxTemplateInfoList(const vector<PayeeTaxTemplateInfo>& _taxTemplateInfoList)
{
    m_taxTemplateInfoList = _taxTemplateInfoList;
    m_taxTemplateInfoListHasBeenSet = true;
}

bool PayeeTaxInfo::TaxTemplateInfoListHasBeenSet() const
{
    return m_taxTemplateInfoListHasBeenSet;
}

string PayeeTaxInfo::GetTaxpayerIdNo() const
{
    return m_taxpayerIdNo;
}

void PayeeTaxInfo::SetTaxpayerIdNo(const string& _taxpayerIdNo)
{
    m_taxpayerIdNo = _taxpayerIdNo;
    m_taxpayerIdNoHasBeenSet = true;
}

bool PayeeTaxInfo::TaxpayerIdNoHasBeenSet() const
{
    return m_taxpayerIdNoHasBeenSet;
}

string PayeeTaxInfo::GetTaxEntityType() const
{
    return m_taxEntityType;
}

void PayeeTaxInfo::SetTaxEntityType(const string& _taxEntityType)
{
    m_taxEntityType = _taxEntityType;
    m_taxEntityTypeHasBeenSet = true;
}

bool PayeeTaxInfo::TaxEntityTypeHasBeenSet() const
{
    return m_taxEntityTypeHasBeenSet;
}

string PayeeTaxInfo::GetTaxServiceProviderId() const
{
    return m_taxServiceProviderId;
}

void PayeeTaxInfo::SetTaxServiceProviderId(const string& _taxServiceProviderId)
{
    m_taxServiceProviderId = _taxServiceProviderId;
    m_taxServiceProviderIdHasBeenSet = true;
}

bool PayeeTaxInfo::TaxServiceProviderIdHasBeenSet() const
{
    return m_taxServiceProviderIdHasBeenSet;
}

