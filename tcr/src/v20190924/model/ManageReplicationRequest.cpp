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

#include <tencentcloud/tcr/v20190924/model/ManageReplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

ManageReplicationRequest::ManageReplicationRequest() :
    m_sourceRegistryIdHasBeenSet(false),
    m_destinationRegistryIdHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationRegionIdHasBeenSet(false)
{
}

string ManageReplicationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceRegistryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceRegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceRegistryId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegistryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationRegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_destinationRegistryId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationRegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_destinationRegionId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ManageReplicationRequest::GetSourceRegistryId() const
{
    return m_sourceRegistryId;
}

void ManageReplicationRequest::SetSourceRegistryId(const string& _sourceRegistryId)
{
    m_sourceRegistryId = _sourceRegistryId;
    m_sourceRegistryIdHasBeenSet = true;
}

bool ManageReplicationRequest::SourceRegistryIdHasBeenSet() const
{
    return m_sourceRegistryIdHasBeenSet;
}

string ManageReplicationRequest::GetDestinationRegistryId() const
{
    return m_destinationRegistryId;
}

void ManageReplicationRequest::SetDestinationRegistryId(const string& _destinationRegistryId)
{
    m_destinationRegistryId = _destinationRegistryId;
    m_destinationRegistryIdHasBeenSet = true;
}

bool ManageReplicationRequest::DestinationRegistryIdHasBeenSet() const
{
    return m_destinationRegistryIdHasBeenSet;
}

ReplicationRule ManageReplicationRequest::GetRule() const
{
    return m_rule;
}

void ManageReplicationRequest::SetRule(const ReplicationRule& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ManageReplicationRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string ManageReplicationRequest::GetDescription() const
{
    return m_description;
}

void ManageReplicationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ManageReplicationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ManageReplicationRequest::GetDestinationRegionId() const
{
    return m_destinationRegionId;
}

void ManageReplicationRequest::SetDestinationRegionId(const uint64_t& _destinationRegionId)
{
    m_destinationRegionId = _destinationRegionId;
    m_destinationRegionIdHasBeenSet = true;
}

bool ManageReplicationRequest::DestinationRegionIdHasBeenSet() const
{
    return m_destinationRegionIdHasBeenSet;
}


