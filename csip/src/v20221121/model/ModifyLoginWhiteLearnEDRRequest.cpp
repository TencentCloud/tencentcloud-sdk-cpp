/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ModifyLoginWhiteLearnEDRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyLoginWhiteLearnEDRRequest::ModifyLoginWhiteLearnEDRRequest() :
    m_idHasBeenSet(false),
    m_placesHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_ruleAppIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_instanceIDsWithAppIdHasBeenSet(false),
    m_excludeInstanceIDsWithAppIdHasBeenSet(false),
    m_tagIDsHasBeenSet(false)
{
}

string ModifyLoginWhiteLearnEDRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_placesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Places";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_places.begin(); itr != m_places.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_ruleAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleAppId, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_instanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIDsWithAppId.begin(); itr != m_instanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeInstanceIDsWithAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIDsWithAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludeInstanceIDsWithAppId.begin(); itr != m_excludeInstanceIDsWithAppId.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyLoginWhiteLearnEDRRequest::GetId() const
{
    return m_id;
}

void ModifyLoginWhiteLearnEDRRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<LoginWhitePlaceInput> ModifyLoginWhiteLearnEDRRequest::GetPlaces() const
{
    return m_places;
}

void ModifyLoginWhiteLearnEDRRequest::SetPlaces(const vector<LoginWhitePlaceInput>& _places)
{
    m_places = _places;
    m_placesHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::PlacesHasBeenSet() const
{
    return m_placesHasBeenSet;
}

vector<string> ModifyLoginWhiteLearnEDRRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyLoginWhiteLearnEDRRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t ModifyLoginWhiteLearnEDRRequest::GetRuleAppId() const
{
    return m_ruleAppId;
}

void ModifyLoginWhiteLearnEDRRequest::SetRuleAppId(const uint64_t& _ruleAppId)
{
    m_ruleAppId = _ruleAppId;
    m_ruleAppIdHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::RuleAppIdHasBeenSet() const
{
    return m_ruleAppIdHasBeenSet;
}

string ModifyLoginWhiteLearnEDRRequest::GetRemark() const
{
    return m_remark;
}

void ModifyLoginWhiteLearnEDRRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ModifyLoginWhiteLearnEDRRequest::GetScope() const
{
    return m_scope;
}

void ModifyLoginWhiteLearnEDRRequest::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyLoginWhiteLearnEDRRequest::GetInstanceIDsWithAppId() const
{
    return m_instanceIDsWithAppId;
}

void ModifyLoginWhiteLearnEDRRequest::SetInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId)
{
    m_instanceIDsWithAppId = _instanceIDsWithAppId;
    m_instanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::InstanceIDsWithAppIdHasBeenSet() const
{
    return m_instanceIDsWithAppIdHasBeenSet;
}

vector<InstanceIDWithAppIdItem> ModifyLoginWhiteLearnEDRRequest::GetExcludeInstanceIDsWithAppId() const
{
    return m_excludeInstanceIDsWithAppId;
}

void ModifyLoginWhiteLearnEDRRequest::SetExcludeInstanceIDsWithAppId(const vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId)
{
    m_excludeInstanceIDsWithAppId = _excludeInstanceIDsWithAppId;
    m_excludeInstanceIDsWithAppIdHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::ExcludeInstanceIDsWithAppIdHasBeenSet() const
{
    return m_excludeInstanceIDsWithAppIdHasBeenSet;
}

vector<string> ModifyLoginWhiteLearnEDRRequest::GetTagIDs() const
{
    return m_tagIDs;
}

void ModifyLoginWhiteLearnEDRRequest::SetTagIDs(const vector<string>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool ModifyLoginWhiteLearnEDRRequest::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}


