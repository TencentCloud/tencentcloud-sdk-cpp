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

#include <tencentcloud/vpc/v20170312/model/CreateCcnRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateCcnRequest::CreateCcnRequest() :
    m_ccnNameHasBeenSet(false),
    m_ccnDescriptionHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_bandwidthLimitTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateCcnRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnName.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthLimitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimitType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthLimitType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCcnRequest::GetCcnName() const
{
    return m_ccnName;
}

void CreateCcnRequest::SetCcnName(const string& _ccnName)
{
    m_ccnName = _ccnName;
    m_ccnNameHasBeenSet = true;
}

bool CreateCcnRequest::CcnNameHasBeenSet() const
{
    return m_ccnNameHasBeenSet;
}

string CreateCcnRequest::GetCcnDescription() const
{
    return m_ccnDescription;
}

void CreateCcnRequest::SetCcnDescription(const string& _ccnDescription)
{
    m_ccnDescription = _ccnDescription;
    m_ccnDescriptionHasBeenSet = true;
}

bool CreateCcnRequest::CcnDescriptionHasBeenSet() const
{
    return m_ccnDescriptionHasBeenSet;
}

string CreateCcnRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void CreateCcnRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool CreateCcnRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

string CreateCcnRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateCcnRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateCcnRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CreateCcnRequest::GetBandwidthLimitType() const
{
    return m_bandwidthLimitType;
}

void CreateCcnRequest::SetBandwidthLimitType(const string& _bandwidthLimitType)
{
    m_bandwidthLimitType = _bandwidthLimitType;
    m_bandwidthLimitTypeHasBeenSet = true;
}

bool CreateCcnRequest::BandwidthLimitTypeHasBeenSet() const
{
    return m_bandwidthLimitTypeHasBeenSet;
}

vector<Tag> CreateCcnRequest::GetTags() const
{
    return m_tags;
}

void CreateCcnRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCcnRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


