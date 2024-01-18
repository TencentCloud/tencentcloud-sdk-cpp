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

#include <tencentcloud/trocket/v20230308/model/CreateMQTTInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

CreateMQTTInstanceRequest::CreateMQTTInstanceRequest() :
    m_instanceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_vpcListHasBeenSet(false),
    m_enablePublicHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_ipRulesHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_timeSpanHasBeenSet(false)
{
}

string CreateMQTTInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vpcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcList.begin(); itr != m_vpcList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enablePublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePublic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePublic, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_ipRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipRules.begin(); itr != m_ipRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMQTTInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateMQTTInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateMQTTInstanceRequest::GetName() const
{
    return m_name;
}

void CreateMQTTInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateMQTTInstanceRequest::GetSkuCode() const
{
    return m_skuCode;
}

void CreateMQTTInstanceRequest::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

string CreateMQTTInstanceRequest::GetRemark() const
{
    return m_remark;
}

void CreateMQTTInstanceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<Tag> CreateMQTTInstanceRequest::GetTagList() const
{
    return m_tagList;
}

void CreateMQTTInstanceRequest::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

vector<VpcInfo> CreateMQTTInstanceRequest::GetVpcList() const
{
    return m_vpcList;
}

void CreateMQTTInstanceRequest::SetVpcList(const vector<VpcInfo>& _vpcList)
{
    m_vpcList = _vpcList;
    m_vpcListHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::VpcListHasBeenSet() const
{
    return m_vpcListHasBeenSet;
}

bool CreateMQTTInstanceRequest::GetEnablePublic() const
{
    return m_enablePublic;
}

void CreateMQTTInstanceRequest::SetEnablePublic(const bool& _enablePublic)
{
    m_enablePublic = _enablePublic;
    m_enablePublicHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::EnablePublicHasBeenSet() const
{
    return m_enablePublicHasBeenSet;
}

int64_t CreateMQTTInstanceRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateMQTTInstanceRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

vector<IpRule> CreateMQTTInstanceRequest::GetIpRules() const
{
    return m_ipRules;
}

void CreateMQTTInstanceRequest::SetIpRules(const vector<IpRule>& _ipRules)
{
    m_ipRules = _ipRules;
    m_ipRulesHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::IpRulesHasBeenSet() const
{
    return m_ipRulesHasBeenSet;
}

int64_t CreateMQTTInstanceRequest::GetRenewFlag() const
{
    return m_renewFlag;
}

void CreateMQTTInstanceRequest::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t CreateMQTTInstanceRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateMQTTInstanceRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateMQTTInstanceRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}


