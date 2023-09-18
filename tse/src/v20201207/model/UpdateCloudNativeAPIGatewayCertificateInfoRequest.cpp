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

#include <tencentcloud/tse/v20201207/model/UpdateCloudNativeAPIGatewayCertificateInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

UpdateCloudNativeAPIGatewayCertificateInfoRequest::UpdateCloudNativeAPIGatewayCertificateInfoRequest() :
    m_gatewayIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_bindDomainsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string UpdateCloudNativeAPIGatewayCertificateInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_bindDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindDomains.begin(); itr != m_bindDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateCloudNativeAPIGatewayCertificateInfoRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void UpdateCloudNativeAPIGatewayCertificateInfoRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool UpdateCloudNativeAPIGatewayCertificateInfoRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string UpdateCloudNativeAPIGatewayCertificateInfoRequest::GetId() const
{
    return m_id;
}

void UpdateCloudNativeAPIGatewayCertificateInfoRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateCloudNativeAPIGatewayCertificateInfoRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> UpdateCloudNativeAPIGatewayCertificateInfoRequest::GetBindDomains() const
{
    return m_bindDomains;
}

void UpdateCloudNativeAPIGatewayCertificateInfoRequest::SetBindDomains(const vector<string>& _bindDomains)
{
    m_bindDomains = _bindDomains;
    m_bindDomainsHasBeenSet = true;
}

bool UpdateCloudNativeAPIGatewayCertificateInfoRequest::BindDomainsHasBeenSet() const
{
    return m_bindDomainsHasBeenSet;
}

string UpdateCloudNativeAPIGatewayCertificateInfoRequest::GetName() const
{
    return m_name;
}

void UpdateCloudNativeAPIGatewayCertificateInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateCloudNativeAPIGatewayCertificateInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


