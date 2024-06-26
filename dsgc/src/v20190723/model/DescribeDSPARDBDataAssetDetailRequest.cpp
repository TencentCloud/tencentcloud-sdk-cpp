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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPARDBDataAssetDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPARDBDataAssetDetailRequest::DescribeDSPARDBDataAssetDetailRequest() :
    m_dspaIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_creditScoreHasBeenSet(false)
{
}

string DescribeDSPARDBDataAssetDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_creditScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditScore";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creditScore.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPARDBDataAssetDetailRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPARDBDataAssetDetailRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPARDBDataAssetDetailRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPARDBDataAssetDetailRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DescribeDSPARDBDataAssetDetailRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DescribeDSPARDBDataAssetDetailRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

string DescribeDSPARDBDataAssetDetailRequest::GetCreditScore() const
{
    return m_creditScore;
}

void DescribeDSPARDBDataAssetDetailRequest::SetCreditScore(const string& _creditScore)
{
    m_creditScore = _creditScore;
    m_creditScoreHasBeenSet = true;
}

bool DescribeDSPARDBDataAssetDetailRequest::CreditScoreHasBeenSet() const
{
    return m_creditScoreHasBeenSet;
}


