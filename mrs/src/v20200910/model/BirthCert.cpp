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

#include <tencentcloud/mrs/v20200910/model/BirthCert.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BirthCert::BirthCert() :
    m_neonatalInfoHasBeenSet(false),
    m_motherInfoHasBeenSet(false),
    m_fatherInfoHasBeenSet(false),
    m_issueInfoHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome BirthCert::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NeonatalInfo") && !value["NeonatalInfo"].IsNull())
    {
        if (!value["NeonatalInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BirthCert.NeonatalInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_neonatalInfo.Deserialize(value["NeonatalInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_neonatalInfoHasBeenSet = true;
    }

    if (value.HasMember("MotherInfo") && !value["MotherInfo"].IsNull())
    {
        if (!value["MotherInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BirthCert.MotherInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_motherInfo.Deserialize(value["MotherInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_motherInfoHasBeenSet = true;
    }

    if (value.HasMember("FatherInfo") && !value["FatherInfo"].IsNull())
    {
        if (!value["FatherInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BirthCert.FatherInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fatherInfo.Deserialize(value["FatherInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fatherInfoHasBeenSet = true;
    }

    if (value.HasMember("IssueInfo") && !value["IssueInfo"].IsNull())
    {
        if (!value["IssueInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BirthCert.IssueInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_issueInfo.Deserialize(value["IssueInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_issueInfoHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BirthCert.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BirthCert::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_neonatalInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeonatalInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_neonatalInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_motherInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotherInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_motherInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fatherInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FatherInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fatherInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_issueInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_issueInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


NeonatalInfo BirthCert::GetNeonatalInfo() const
{
    return m_neonatalInfo;
}

void BirthCert::SetNeonatalInfo(const NeonatalInfo& _neonatalInfo)
{
    m_neonatalInfo = _neonatalInfo;
    m_neonatalInfoHasBeenSet = true;
}

bool BirthCert::NeonatalInfoHasBeenSet() const
{
    return m_neonatalInfoHasBeenSet;
}

ParentInfo BirthCert::GetMotherInfo() const
{
    return m_motherInfo;
}

void BirthCert::SetMotherInfo(const ParentInfo& _motherInfo)
{
    m_motherInfo = _motherInfo;
    m_motherInfoHasBeenSet = true;
}

bool BirthCert::MotherInfoHasBeenSet() const
{
    return m_motherInfoHasBeenSet;
}

ParentInfo BirthCert::GetFatherInfo() const
{
    return m_fatherInfo;
}

void BirthCert::SetFatherInfo(const ParentInfo& _fatherInfo)
{
    m_fatherInfo = _fatherInfo;
    m_fatherInfoHasBeenSet = true;
}

bool BirthCert::FatherInfoHasBeenSet() const
{
    return m_fatherInfoHasBeenSet;
}

IssueInfo BirthCert::GetIssueInfo() const
{
    return m_issueInfo;
}

void BirthCert::SetIssueInfo(const IssueInfo& _issueInfo)
{
    m_issueInfo = _issueInfo;
    m_issueInfoHasBeenSet = true;
}

bool BirthCert::IssueInfoHasBeenSet() const
{
    return m_issueInfoHasBeenSet;
}

int64_t BirthCert::GetPage() const
{
    return m_page;
}

void BirthCert::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool BirthCert::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

