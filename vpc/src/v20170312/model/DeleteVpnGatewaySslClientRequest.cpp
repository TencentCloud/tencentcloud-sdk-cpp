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

#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewaySslClientRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DeleteVpnGatewaySslClientRequest::DeleteVpnGatewaySslClientRequest() :
    m_sslVpnClientIdHasBeenSet(false),
    m_sslVpnClientIdsHasBeenSet(false)
{
}

string DeleteVpnGatewaySslClientRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sslVpnClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVpnClientId.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnClientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnClientIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sslVpnClientIds.begin(); itr != m_sslVpnClientIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteVpnGatewaySslClientRequest::GetSslVpnClientId() const
{
    return m_sslVpnClientId;
}

void DeleteVpnGatewaySslClientRequest::SetSslVpnClientId(const string& _sslVpnClientId)
{
    m_sslVpnClientId = _sslVpnClientId;
    m_sslVpnClientIdHasBeenSet = true;
}

bool DeleteVpnGatewaySslClientRequest::SslVpnClientIdHasBeenSet() const
{
    return m_sslVpnClientIdHasBeenSet;
}

vector<string> DeleteVpnGatewaySslClientRequest::GetSslVpnClientIds() const
{
    return m_sslVpnClientIds;
}

void DeleteVpnGatewaySslClientRequest::SetSslVpnClientIds(const vector<string>& _sslVpnClientIds)
{
    m_sslVpnClientIds = _sslVpnClientIds;
    m_sslVpnClientIdsHasBeenSet = true;
}

bool DeleteVpnGatewaySslClientRequest::SslVpnClientIdsHasBeenSet() const
{
    return m_sslVpnClientIdsHasBeenSet;
}


