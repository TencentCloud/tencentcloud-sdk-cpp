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

#include <tencentcloud/teo/v20220901/model/CreateSharedCNAMERequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateSharedCNAMERequest::CreateSharedCNAMERequest() :
    m_zoneIdHasBeenSet(false),
    m_sharedCNAMEPrefixHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateSharedCNAMERequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedCNAMEPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedCNAMEPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sharedCNAMEPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSharedCNAMERequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateSharedCNAMERequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateSharedCNAMERequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateSharedCNAMERequest::GetSharedCNAMEPrefix() const
{
    return m_sharedCNAMEPrefix;
}

void CreateSharedCNAMERequest::SetSharedCNAMEPrefix(const string& _sharedCNAMEPrefix)
{
    m_sharedCNAMEPrefix = _sharedCNAMEPrefix;
    m_sharedCNAMEPrefixHasBeenSet = true;
}

bool CreateSharedCNAMERequest::SharedCNAMEPrefixHasBeenSet() const
{
    return m_sharedCNAMEPrefixHasBeenSet;
}

string CreateSharedCNAMERequest::GetDescription() const
{
    return m_description;
}

void CreateSharedCNAMERequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateSharedCNAMERequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


