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

#include <tencentcloud/cdb/v20170320/model/ModifyCdbProxyAddressDescRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ModifyCdbProxyAddressDescRequest::ModifyCdbProxyAddressDescRequest() :
    m_proxyGroupIdHasBeenSet(false),
    m_proxyAddressIdHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

string ModifyCdbProxyAddressDescRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyAddressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyAddressId.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCdbProxyAddressDescRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyCdbProxyAddressDescRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyCdbProxyAddressDescRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ModifyCdbProxyAddressDescRequest::GetProxyAddressId() const
{
    return m_proxyAddressId;
}

void ModifyCdbProxyAddressDescRequest::SetProxyAddressId(const string& _proxyAddressId)
{
    m_proxyAddressId = _proxyAddressId;
    m_proxyAddressIdHasBeenSet = true;
}

bool ModifyCdbProxyAddressDescRequest::ProxyAddressIdHasBeenSet() const
{
    return m_proxyAddressIdHasBeenSet;
}

string ModifyCdbProxyAddressDescRequest::GetDesc() const
{
    return m_desc;
}

void ModifyCdbProxyAddressDescRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ModifyCdbProxyAddressDescRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}


