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

#include <tencentcloud/teo/v20220901/model/ModifySharedCNAMERequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifySharedCNAMERequest::ModifySharedCNAMERequest() :
    m_zoneIdHasBeenSet(false),
    m_sharedCNAMEHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iPSSLSettingHasBeenSet(false)
{
}

string ModifySharedCNAMERequest::ToJsonString() const
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

    if (m_sharedCNAMEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedCNAME";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sharedCNAME.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iPSSLSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPSSLSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPSSLSetting.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySharedCNAMERequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifySharedCNAMERequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifySharedCNAMERequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifySharedCNAMERequest::GetSharedCNAME() const
{
    return m_sharedCNAME;
}

void ModifySharedCNAMERequest::SetSharedCNAME(const string& _sharedCNAME)
{
    m_sharedCNAME = _sharedCNAME;
    m_sharedCNAMEHasBeenSet = true;
}

bool ModifySharedCNAMERequest::SharedCNAMEHasBeenSet() const
{
    return m_sharedCNAMEHasBeenSet;
}

string ModifySharedCNAMERequest::GetDescription() const
{
    return m_description;
}

void ModifySharedCNAMERequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifySharedCNAMERequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

IPSSLSetting ModifySharedCNAMERequest::GetIPSSLSetting() const
{
    return m_iPSSLSetting;
}

void ModifySharedCNAMERequest::SetIPSSLSetting(const IPSSLSetting& _iPSSLSetting)
{
    m_iPSSLSetting = _iPSSLSetting;
    m_iPSSLSettingHasBeenSet = true;
}

bool ModifySharedCNAMERequest::IPSSLSettingHasBeenSet() const
{
    return m_iPSSLSettingHasBeenSet;
}


