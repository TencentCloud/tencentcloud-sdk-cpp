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

#include <tencentcloud/tse/v20201207/model/KongCertificatesList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongCertificatesList::KongCertificatesList() :
    m_totalHasBeenSet(false),
    m_certificatesListHasBeenSet(false),
    m_pagesHasBeenSet(false)
{
}

CoreInternalOutcome KongCertificatesList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesList.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("CertificatesList") && !value["CertificatesList"].IsNull())
    {
        if (!value["CertificatesList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongCertificatesList.CertificatesList` is not array type"));

        const rapidjson::Value &tmpValue = value["CertificatesList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KongCertificatesPreview item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_certificatesList.push_back(item);
        }
        m_certificatesListHasBeenSet = true;
    }

    if (value.HasMember("Pages") && !value["Pages"].IsNull())
    {
        if (!value["Pages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesList.Pages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pages = value["Pages"].GetInt64();
        m_pagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongCertificatesList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_certificatesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificatesList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_certificatesList.begin(); itr != m_certificatesList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pages, allocator);
    }

}


int64_t KongCertificatesList::GetTotal() const
{
    return m_total;
}

void KongCertificatesList::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool KongCertificatesList::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<KongCertificatesPreview> KongCertificatesList::GetCertificatesList() const
{
    return m_certificatesList;
}

void KongCertificatesList::SetCertificatesList(const vector<KongCertificatesPreview>& _certificatesList)
{
    m_certificatesList = _certificatesList;
    m_certificatesListHasBeenSet = true;
}

bool KongCertificatesList::CertificatesListHasBeenSet() const
{
    return m_certificatesListHasBeenSet;
}

int64_t KongCertificatesList::GetPages() const
{
    return m_pages;
}

void KongCertificatesList::SetPages(const int64_t& _pages)
{
    m_pages = _pages;
    m_pagesHasBeenSet = true;
}

bool KongCertificatesList::PagesHasBeenSet() const
{
    return m_pagesHasBeenSet;
}

