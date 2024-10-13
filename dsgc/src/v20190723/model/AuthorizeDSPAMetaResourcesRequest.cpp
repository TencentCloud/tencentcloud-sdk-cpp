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

#include <tencentcloud/dsgc/v20190723/model/AuthorizeDSPAMetaResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AuthorizeDSPAMetaResourcesRequest::AuthorizeDSPAMetaResourcesRequest() :
    m_dspaIdHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourcesAccountHasBeenSet(false),
    m_createDefaultTaskHasBeenSet(false),
    m_authRangeHasBeenSet(false)
{
}

string AuthorizeDSPAMetaResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcesAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourcesAccount.begin(); itr != m_resourcesAccount.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_createDefaultTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDefaultTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createDefaultTask, allocator);
    }

    if (m_authRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authRange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AuthorizeDSPAMetaResourcesRequest::GetDspaId() const
{
    return m_dspaId;
}

void AuthorizeDSPAMetaResourcesRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool AuthorizeDSPAMetaResourcesRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string AuthorizeDSPAMetaResourcesRequest::GetAuthType() const
{
    return m_authType;
}

void AuthorizeDSPAMetaResourcesRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AuthorizeDSPAMetaResourcesRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string AuthorizeDSPAMetaResourcesRequest::GetMetaType() const
{
    return m_metaType;
}

void AuthorizeDSPAMetaResourcesRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool AuthorizeDSPAMetaResourcesRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string AuthorizeDSPAMetaResourcesRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void AuthorizeDSPAMetaResourcesRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool AuthorizeDSPAMetaResourcesRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

vector<DspaResourceAccount> AuthorizeDSPAMetaResourcesRequest::GetResourcesAccount() const
{
    return m_resourcesAccount;
}

void AuthorizeDSPAMetaResourcesRequest::SetResourcesAccount(const vector<DspaResourceAccount>& _resourcesAccount)
{
    m_resourcesAccount = _resourcesAccount;
    m_resourcesAccountHasBeenSet = true;
}

bool AuthorizeDSPAMetaResourcesRequest::ResourcesAccountHasBeenSet() const
{
    return m_resourcesAccountHasBeenSet;
}

bool AuthorizeDSPAMetaResourcesRequest::GetCreateDefaultTask() const
{
    return m_createDefaultTask;
}

void AuthorizeDSPAMetaResourcesRequest::SetCreateDefaultTask(const bool& _createDefaultTask)
{
    m_createDefaultTask = _createDefaultTask;
    m_createDefaultTaskHasBeenSet = true;
}

bool AuthorizeDSPAMetaResourcesRequest::CreateDefaultTaskHasBeenSet() const
{
    return m_createDefaultTaskHasBeenSet;
}

string AuthorizeDSPAMetaResourcesRequest::GetAuthRange() const
{
    return m_authRange;
}

void AuthorizeDSPAMetaResourcesRequest::SetAuthRange(const string& _authRange)
{
    m_authRange = _authRange;
    m_authRangeHasBeenSet = true;
}

bool AuthorizeDSPAMetaResourcesRequest::AuthRangeHasBeenSet() const
{
    return m_authRangeHasBeenSet;
}


