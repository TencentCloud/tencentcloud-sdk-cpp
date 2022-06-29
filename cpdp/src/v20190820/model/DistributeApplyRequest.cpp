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

#include <tencentcloud/cpdp/v20190820/model/DistributeApplyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeApplyRequest::DistributeApplyRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_outDistributeNoHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_developerNoHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string DistributeApplyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_outDistributeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutDistributeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outDistributeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_developerNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeveloperNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_developerNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DistributeApplyRequest::GetOpenId() const
{
    return m_openId;
}

void DistributeApplyRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DistributeApplyRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DistributeApplyRequest::GetOpenKey() const
{
    return m_openKey;
}

void DistributeApplyRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool DistributeApplyRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string DistributeApplyRequest::GetOutDistributeNo() const
{
    return m_outDistributeNo;
}

void DistributeApplyRequest::SetOutDistributeNo(const string& _outDistributeNo)
{
    m_outDistributeNo = _outDistributeNo;
    m_outDistributeNoHasBeenSet = true;
}

bool DistributeApplyRequest::OutDistributeNoHasBeenSet() const
{
    return m_outDistributeNoHasBeenSet;
}

vector<MultiApplyDetail> DistributeApplyRequest::GetDetails() const
{
    return m_details;
}

void DistributeApplyRequest::SetDetails(const vector<MultiApplyDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool DistributeApplyRequest::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

string DistributeApplyRequest::GetDeveloperNo() const
{
    return m_developerNo;
}

void DistributeApplyRequest::SetDeveloperNo(const string& _developerNo)
{
    m_developerNo = _developerNo;
    m_developerNoHasBeenSet = true;
}

bool DistributeApplyRequest::DeveloperNoHasBeenSet() const
{
    return m_developerNoHasBeenSet;
}

string DistributeApplyRequest::GetOrderNo() const
{
    return m_orderNo;
}

void DistributeApplyRequest::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool DistributeApplyRequest::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string DistributeApplyRequest::GetRemark() const
{
    return m_remark;
}

void DistributeApplyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DistributeApplyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DistributeApplyRequest::GetProfile() const
{
    return m_profile;
}

void DistributeApplyRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DistributeApplyRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


