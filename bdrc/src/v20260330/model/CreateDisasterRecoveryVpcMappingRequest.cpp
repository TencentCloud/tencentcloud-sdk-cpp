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

#include <tencentcloud/bdrc/v20260330/model/CreateDisasterRecoveryVpcMappingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateDisasterRecoveryVpcMappingRequest::CreateDisasterRecoveryVpcMappingRequest() :
    m_sourceVpcIdHasBeenSet(false),
    m_sourceSubnetIdHasBeenSet(false),
    m_targetVpcIdHasBeenSet(false),
    m_targetSubnetIdHasBeenSet(false),
    m_sitePairIdHasBeenSet(false)
{
}

string CreateDisasterRecoveryVpcMappingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDisasterRecoveryVpcMappingRequest::GetSourceVpcId() const
{
    return m_sourceVpcId;
}

void CreateDisasterRecoveryVpcMappingRequest::SetSourceVpcId(const string& _sourceVpcId)
{
    m_sourceVpcId = _sourceVpcId;
    m_sourceVpcIdHasBeenSet = true;
}

bool CreateDisasterRecoveryVpcMappingRequest::SourceVpcIdHasBeenSet() const
{
    return m_sourceVpcIdHasBeenSet;
}

string CreateDisasterRecoveryVpcMappingRequest::GetSourceSubnetId() const
{
    return m_sourceSubnetId;
}

void CreateDisasterRecoveryVpcMappingRequest::SetSourceSubnetId(const string& _sourceSubnetId)
{
    m_sourceSubnetId = _sourceSubnetId;
    m_sourceSubnetIdHasBeenSet = true;
}

bool CreateDisasterRecoveryVpcMappingRequest::SourceSubnetIdHasBeenSet() const
{
    return m_sourceSubnetIdHasBeenSet;
}

string CreateDisasterRecoveryVpcMappingRequest::GetTargetVpcId() const
{
    return m_targetVpcId;
}

void CreateDisasterRecoveryVpcMappingRequest::SetTargetVpcId(const string& _targetVpcId)
{
    m_targetVpcId = _targetVpcId;
    m_targetVpcIdHasBeenSet = true;
}

bool CreateDisasterRecoveryVpcMappingRequest::TargetVpcIdHasBeenSet() const
{
    return m_targetVpcIdHasBeenSet;
}

string CreateDisasterRecoveryVpcMappingRequest::GetTargetSubnetId() const
{
    return m_targetSubnetId;
}

void CreateDisasterRecoveryVpcMappingRequest::SetTargetSubnetId(const string& _targetSubnetId)
{
    m_targetSubnetId = _targetSubnetId;
    m_targetSubnetIdHasBeenSet = true;
}

bool CreateDisasterRecoveryVpcMappingRequest::TargetSubnetIdHasBeenSet() const
{
    return m_targetSubnetIdHasBeenSet;
}

string CreateDisasterRecoveryVpcMappingRequest::GetSitePairId() const
{
    return m_sitePairId;
}

void CreateDisasterRecoveryVpcMappingRequest::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool CreateDisasterRecoveryVpcMappingRequest::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}


