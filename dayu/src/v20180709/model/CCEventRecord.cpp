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

#include <tencentcloud/dayu/v20180709/model/CCEventRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CCEventRecord::CCEventRecord() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_reqQpsHasBeenSet(false),
    m_dropQpsHasBeenSet(false),
    m_attackStatusHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_domainListHasBeenSet(false),
    m_uriListHasBeenSet(false),
    m_attackipListHasBeenSet(false)
{
}

CoreInternalOutcome CCEventRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ReqQps") && !value["ReqQps"].IsNull())
    {
        if (!value["ReqQps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.ReqQps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqQps = value["ReqQps"].GetUint64();
        m_reqQpsHasBeenSet = true;
    }

    if (value.HasMember("DropQps") && !value["DropQps"].IsNull())
    {
        if (!value["DropQps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.DropQps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dropQps = value["DropQps"].GetUint64();
        m_dropQpsHasBeenSet = true;
    }

    if (value.HasMember("AttackStatus") && !value["AttackStatus"].IsNull())
    {
        if (!value["AttackStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.AttackStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackStatus = value["AttackStatus"].GetUint64();
        m_attackStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("DomainList") && !value["DomainList"].IsNull())
    {
        if (!value["DomainList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.DomainList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainList = string(value["DomainList"].GetString());
        m_domainListHasBeenSet = true;
    }

    if (value.HasMember("UriList") && !value["UriList"].IsNull())
    {
        if (!value["UriList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.UriList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uriList = string(value["UriList"].GetString());
        m_uriListHasBeenSet = true;
    }

    if (value.HasMember("AttackipList") && !value["AttackipList"].IsNull())
    {
        if (!value["AttackipList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCEventRecord.AttackipList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackipList = string(value["AttackipList"].GetString());
        m_attackipListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCEventRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reqQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqQps, allocator);
    }

    if (m_dropQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropQps, allocator);
    }

    if (m_attackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackStatus, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainList.c_str(), allocator).Move(), allocator);
    }

    if (m_uriListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UriList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uriList.c_str(), allocator).Move(), allocator);
    }

    if (m_attackipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackipList.c_str(), allocator).Move(), allocator);
    }

}


string CCEventRecord::GetBusiness() const
{
    return m_business;
}

void CCEventRecord::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CCEventRecord::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CCEventRecord::GetId() const
{
    return m_id;
}

void CCEventRecord::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CCEventRecord::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CCEventRecord::GetVip() const
{
    return m_vip;
}

void CCEventRecord::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CCEventRecord::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string CCEventRecord::GetStartTime() const
{
    return m_startTime;
}

void CCEventRecord::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CCEventRecord::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CCEventRecord::GetEndTime() const
{
    return m_endTime;
}

void CCEventRecord::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CCEventRecord::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t CCEventRecord::GetReqQps() const
{
    return m_reqQps;
}

void CCEventRecord::SetReqQps(const uint64_t& _reqQps)
{
    m_reqQps = _reqQps;
    m_reqQpsHasBeenSet = true;
}

bool CCEventRecord::ReqQpsHasBeenSet() const
{
    return m_reqQpsHasBeenSet;
}

uint64_t CCEventRecord::GetDropQps() const
{
    return m_dropQps;
}

void CCEventRecord::SetDropQps(const uint64_t& _dropQps)
{
    m_dropQps = _dropQps;
    m_dropQpsHasBeenSet = true;
}

bool CCEventRecord::DropQpsHasBeenSet() const
{
    return m_dropQpsHasBeenSet;
}

uint64_t CCEventRecord::GetAttackStatus() const
{
    return m_attackStatus;
}

void CCEventRecord::SetAttackStatus(const uint64_t& _attackStatus)
{
    m_attackStatus = _attackStatus;
    m_attackStatusHasBeenSet = true;
}

bool CCEventRecord::AttackStatusHasBeenSet() const
{
    return m_attackStatusHasBeenSet;
}

string CCEventRecord::GetResourceName() const
{
    return m_resourceName;
}

void CCEventRecord::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool CCEventRecord::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string CCEventRecord::GetDomainList() const
{
    return m_domainList;
}

void CCEventRecord::SetDomainList(const string& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool CCEventRecord::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

string CCEventRecord::GetUriList() const
{
    return m_uriList;
}

void CCEventRecord::SetUriList(const string& _uriList)
{
    m_uriList = _uriList;
    m_uriListHasBeenSet = true;
}

bool CCEventRecord::UriListHasBeenSet() const
{
    return m_uriListHasBeenSet;
}

string CCEventRecord::GetAttackipList() const
{
    return m_attackipList;
}

void CCEventRecord::SetAttackipList(const string& _attackipList)
{
    m_attackipList = _attackipList;
    m_attackipListHasBeenSet = true;
}

bool CCEventRecord::AttackipListHasBeenSet() const
{
    return m_attackipListHasBeenSet;
}

