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

#include <tencentcloud/chc/v20230418/model/CreatePersonnelVisitWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreatePersonnelVisitWorkOrderRequest::CreatePersonnelVisitWorkOrderRequest() :
    m_personnelSetHasBeenSet(false),
    m_idcIdHasBeenSet(false),
    m_idcUnitIdSetHasBeenSet(false),
    m_enterStartTimeHasBeenSet(false),
    m_enterEndTimeHasBeenSet(false),
    m_visitReasonHasBeenSet(false),
    m_visitRemarkHasBeenSet(false)
{
}

string CreatePersonnelVisitWorkOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personnelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonnelSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_personnelSet.begin(); itr != m_personnelSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_idcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idcId, allocator);
    }

    if (m_idcUnitIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcUnitIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idcUnitIdSet.begin(); itr != m_idcUnitIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_enterStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enterEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_visitReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_visitReason.begin(); itr != m_visitReason.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_visitRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_visitRemark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Personnel> CreatePersonnelVisitWorkOrderRequest::GetPersonnelSet() const
{
    return m_personnelSet;
}

void CreatePersonnelVisitWorkOrderRequest::SetPersonnelSet(const vector<Personnel>& _personnelSet)
{
    m_personnelSet = _personnelSet;
    m_personnelSetHasBeenSet = true;
}

bool CreatePersonnelVisitWorkOrderRequest::PersonnelSetHasBeenSet() const
{
    return m_personnelSetHasBeenSet;
}

uint64_t CreatePersonnelVisitWorkOrderRequest::GetIdcId() const
{
    return m_idcId;
}

void CreatePersonnelVisitWorkOrderRequest::SetIdcId(const uint64_t& _idcId)
{
    m_idcId = _idcId;
    m_idcIdHasBeenSet = true;
}

bool CreatePersonnelVisitWorkOrderRequest::IdcIdHasBeenSet() const
{
    return m_idcIdHasBeenSet;
}

vector<uint64_t> CreatePersonnelVisitWorkOrderRequest::GetIdcUnitIdSet() const
{
    return m_idcUnitIdSet;
}

void CreatePersonnelVisitWorkOrderRequest::SetIdcUnitIdSet(const vector<uint64_t>& _idcUnitIdSet)
{
    m_idcUnitIdSet = _idcUnitIdSet;
    m_idcUnitIdSetHasBeenSet = true;
}

bool CreatePersonnelVisitWorkOrderRequest::IdcUnitIdSetHasBeenSet() const
{
    return m_idcUnitIdSetHasBeenSet;
}

string CreatePersonnelVisitWorkOrderRequest::GetEnterStartTime() const
{
    return m_enterStartTime;
}

void CreatePersonnelVisitWorkOrderRequest::SetEnterStartTime(const string& _enterStartTime)
{
    m_enterStartTime = _enterStartTime;
    m_enterStartTimeHasBeenSet = true;
}

bool CreatePersonnelVisitWorkOrderRequest::EnterStartTimeHasBeenSet() const
{
    return m_enterStartTimeHasBeenSet;
}

string CreatePersonnelVisitWorkOrderRequest::GetEnterEndTime() const
{
    return m_enterEndTime;
}

void CreatePersonnelVisitWorkOrderRequest::SetEnterEndTime(const string& _enterEndTime)
{
    m_enterEndTime = _enterEndTime;
    m_enterEndTimeHasBeenSet = true;
}

bool CreatePersonnelVisitWorkOrderRequest::EnterEndTimeHasBeenSet() const
{
    return m_enterEndTimeHasBeenSet;
}

vector<string> CreatePersonnelVisitWorkOrderRequest::GetVisitReason() const
{
    return m_visitReason;
}

void CreatePersonnelVisitWorkOrderRequest::SetVisitReason(const vector<string>& _visitReason)
{
    m_visitReason = _visitReason;
    m_visitReasonHasBeenSet = true;
}

bool CreatePersonnelVisitWorkOrderRequest::VisitReasonHasBeenSet() const
{
    return m_visitReasonHasBeenSet;
}

string CreatePersonnelVisitWorkOrderRequest::GetVisitRemark() const
{
    return m_visitRemark;
}

void CreatePersonnelVisitWorkOrderRequest::SetVisitRemark(const string& _visitRemark)
{
    m_visitRemark = _visitRemark;
    m_visitRemarkHasBeenSet = true;
}

bool CreatePersonnelVisitWorkOrderRequest::VisitRemarkHasBeenSet() const
{
    return m_visitRemarkHasBeenSet;
}


