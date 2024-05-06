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

#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyRiskCenterRiskStatusRequest::ModifyRiskCenterRiskStatusRequest() :
    m_riskStatusKeysHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ModifyRiskCenterRiskStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_riskStatusKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatusKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskStatusKeys.begin(); itr != m_riskStatusKeys.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<RiskCenterStatusKey> ModifyRiskCenterRiskStatusRequest::GetRiskStatusKeys() const
{
    return m_riskStatusKeys;
}

void ModifyRiskCenterRiskStatusRequest::SetRiskStatusKeys(const vector<RiskCenterStatusKey>& _riskStatusKeys)
{
    m_riskStatusKeys = _riskStatusKeys;
    m_riskStatusKeysHasBeenSet = true;
}

bool ModifyRiskCenterRiskStatusRequest::RiskStatusKeysHasBeenSet() const
{
    return m_riskStatusKeysHasBeenSet;
}

uint64_t ModifyRiskCenterRiskStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyRiskCenterRiskStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRiskCenterRiskStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifyRiskCenterRiskStatusRequest::GetType() const
{
    return m_type;
}

void ModifyRiskCenterRiskStatusRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyRiskCenterRiskStatusRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ModifyRiskCenterRiskStatusRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyRiskCenterRiskStatusRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyRiskCenterRiskStatusRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


