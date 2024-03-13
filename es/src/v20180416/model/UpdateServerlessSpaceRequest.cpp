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

#include <tencentcloud/es/v20180416/model/UpdateServerlessSpaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateServerlessSpaceRequest::UpdateServerlessSpaceRequest() :
    m_spaceIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_kibanaPrivateAccessHasBeenSet(false),
    m_kibanaPublicAccessHasBeenSet(false),
    m_kibanaPublicAclHasBeenSet(false)
{
}

string UpdateServerlessSpaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kibanaPrivateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPublicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPublicAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kibanaPublicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_kibanaPublicAclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KibanaPublicAcl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kibanaPublicAcl.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateServerlessSpaceRequest::GetSpaceId() const
{
    return m_spaceId;
}

void UpdateServerlessSpaceRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool UpdateServerlessSpaceRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string UpdateServerlessSpaceRequest::GetSpaceName() const
{
    return m_spaceName;
}

void UpdateServerlessSpaceRequest::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool UpdateServerlessSpaceRequest::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

string UpdateServerlessSpaceRequest::GetKibanaPrivateAccess() const
{
    return m_kibanaPrivateAccess;
}

void UpdateServerlessSpaceRequest::SetKibanaPrivateAccess(const string& _kibanaPrivateAccess)
{
    m_kibanaPrivateAccess = _kibanaPrivateAccess;
    m_kibanaPrivateAccessHasBeenSet = true;
}

bool UpdateServerlessSpaceRequest::KibanaPrivateAccessHasBeenSet() const
{
    return m_kibanaPrivateAccessHasBeenSet;
}

string UpdateServerlessSpaceRequest::GetKibanaPublicAccess() const
{
    return m_kibanaPublicAccess;
}

void UpdateServerlessSpaceRequest::SetKibanaPublicAccess(const string& _kibanaPublicAccess)
{
    m_kibanaPublicAccess = _kibanaPublicAccess;
    m_kibanaPublicAccessHasBeenSet = true;
}

bool UpdateServerlessSpaceRequest::KibanaPublicAccessHasBeenSet() const
{
    return m_kibanaPublicAccessHasBeenSet;
}

EsAcl UpdateServerlessSpaceRequest::GetKibanaPublicAcl() const
{
    return m_kibanaPublicAcl;
}

void UpdateServerlessSpaceRequest::SetKibanaPublicAcl(const EsAcl& _kibanaPublicAcl)
{
    m_kibanaPublicAcl = _kibanaPublicAcl;
    m_kibanaPublicAclHasBeenSet = true;
}

bool UpdateServerlessSpaceRequest::KibanaPublicAclHasBeenSet() const
{
    return m_kibanaPublicAclHasBeenSet;
}


