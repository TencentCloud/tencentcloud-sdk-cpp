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

#include <tencentcloud/cpdp/v20190820/model/CreateCloudSubMerchantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateCloudSubMerchantRequest::CreateCloudSubMerchantRequest() :
    m_midasAppIdHasBeenSet(false),
    m_parentAppIdHasBeenSet(false),
    m_subMchNameHasBeenSet(false),
    m_subMchDescriptionHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_subMchShortNameHasBeenSet(false),
    m_outSubMerchantIdHasBeenSet(false)
{
}

string CreateCloudSubMerchantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMchName.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMchDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchShortName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMchShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_outSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outSubMerchantId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudSubMerchantRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void CreateCloudSubMerchantRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string CreateCloudSubMerchantRequest::GetParentAppId() const
{
    return m_parentAppId;
}

void CreateCloudSubMerchantRequest::SetParentAppId(const string& _parentAppId)
{
    m_parentAppId = _parentAppId;
    m_parentAppIdHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::ParentAppIdHasBeenSet() const
{
    return m_parentAppIdHasBeenSet;
}

string CreateCloudSubMerchantRequest::GetSubMchName() const
{
    return m_subMchName;
}

void CreateCloudSubMerchantRequest::SetSubMchName(const string& _subMchName)
{
    m_subMchName = _subMchName;
    m_subMchNameHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::SubMchNameHasBeenSet() const
{
    return m_subMchNameHasBeenSet;
}

string CreateCloudSubMerchantRequest::GetSubMchDescription() const
{
    return m_subMchDescription;
}

void CreateCloudSubMerchantRequest::SetSubMchDescription(const string& _subMchDescription)
{
    m_subMchDescription = _subMchDescription;
    m_subMchDescriptionHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::SubMchDescriptionHasBeenSet() const
{
    return m_subMchDescriptionHasBeenSet;
}

string CreateCloudSubMerchantRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void CreateCloudSubMerchantRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string CreateCloudSubMerchantRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateCloudSubMerchantRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateCloudSubMerchantRequest::GetSubMchShortName() const
{
    return m_subMchShortName;
}

void CreateCloudSubMerchantRequest::SetSubMchShortName(const string& _subMchShortName)
{
    m_subMchShortName = _subMchShortName;
    m_subMchShortNameHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::SubMchShortNameHasBeenSet() const
{
    return m_subMchShortNameHasBeenSet;
}

string CreateCloudSubMerchantRequest::GetOutSubMerchantId() const
{
    return m_outSubMerchantId;
}

void CreateCloudSubMerchantRequest::SetOutSubMerchantId(const string& _outSubMerchantId)
{
    m_outSubMerchantId = _outSubMerchantId;
    m_outSubMerchantIdHasBeenSet = true;
}

bool CreateCloudSubMerchantRequest::OutSubMerchantIdHasBeenSet() const
{
    return m_outSubMerchantIdHasBeenSet;
}


