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

#include <tencentcloud/cngw/v20230418/model/AIGWUpstreamTLSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWUpstreamTLSConfig::AIGWUpstreamTLSConfig() :
    m_tLSVerifyHasBeenSet(false),
    m_clientCertIdHasBeenSet(false),
    m_upstreamCACertIdsHasBeenSet(false)
{
}

CoreInternalOutcome AIGWUpstreamTLSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TLSVerify") && !value["TLSVerify"].IsNull())
    {
        if (!value["TLSVerify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWUpstreamTLSConfig.TLSVerify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tLSVerify = value["TLSVerify"].GetBool();
        m_tLSVerifyHasBeenSet = true;
    }

    if (value.HasMember("ClientCertId") && !value["ClientCertId"].IsNull())
    {
        if (!value["ClientCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWUpstreamTLSConfig.ClientCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientCertId = string(value["ClientCertId"].GetString());
        m_clientCertIdHasBeenSet = true;
    }

    if (value.HasMember("UpstreamCACertIds") && !value["UpstreamCACertIds"].IsNull())
    {
        if (!value["UpstreamCACertIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWUpstreamTLSConfig.UpstreamCACertIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UpstreamCACertIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_upstreamCACertIds.push_back((*itr).GetString());
        }
        m_upstreamCACertIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWUpstreamTLSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tLSVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tLSVerify, allocator);
    }

    if (m_clientCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamCACertIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamCACertIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_upstreamCACertIds.begin(); itr != m_upstreamCACertIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool AIGWUpstreamTLSConfig::GetTLSVerify() const
{
    return m_tLSVerify;
}

void AIGWUpstreamTLSConfig::SetTLSVerify(const bool& _tLSVerify)
{
    m_tLSVerify = _tLSVerify;
    m_tLSVerifyHasBeenSet = true;
}

bool AIGWUpstreamTLSConfig::TLSVerifyHasBeenSet() const
{
    return m_tLSVerifyHasBeenSet;
}

string AIGWUpstreamTLSConfig::GetClientCertId() const
{
    return m_clientCertId;
}

void AIGWUpstreamTLSConfig::SetClientCertId(const string& _clientCertId)
{
    m_clientCertId = _clientCertId;
    m_clientCertIdHasBeenSet = true;
}

bool AIGWUpstreamTLSConfig::ClientCertIdHasBeenSet() const
{
    return m_clientCertIdHasBeenSet;
}

vector<string> AIGWUpstreamTLSConfig::GetUpstreamCACertIds() const
{
    return m_upstreamCACertIds;
}

void AIGWUpstreamTLSConfig::SetUpstreamCACertIds(const vector<string>& _upstreamCACertIds)
{
    m_upstreamCACertIds = _upstreamCACertIds;
    m_upstreamCACertIdsHasBeenSet = true;
}

bool AIGWUpstreamTLSConfig::UpstreamCACertIdsHasBeenSet() const
{
    return m_upstreamCACertIdsHasBeenSet;
}

