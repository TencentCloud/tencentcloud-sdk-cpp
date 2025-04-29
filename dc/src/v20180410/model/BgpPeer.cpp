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

#include <tencentcloud/dc/v20180410/model/BgpPeer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

BgpPeer::BgpPeer() :
    m_cloudAsnHasBeenSet(false),
    m_asnHasBeenSet(false),
    m_authKeyHasBeenSet(false)
{
}

CoreInternalOutcome BgpPeer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudAsn") && !value["CloudAsn"].IsNull())
    {
        if (!value["CloudAsn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BgpPeer.CloudAsn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAsn = value["CloudAsn"].GetInt64();
        m_cloudAsnHasBeenSet = true;
    }

    if (value.HasMember("Asn") && !value["Asn"].IsNull())
    {
        if (!value["Asn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BgpPeer.Asn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asn = value["Asn"].GetInt64();
        m_asnHasBeenSet = true;
    }

    if (value.HasMember("AuthKey") && !value["AuthKey"].IsNull())
    {
        if (!value["AuthKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BgpPeer.AuthKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authKey = string(value["AuthKey"].GetString());
        m_authKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BgpPeer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudAsnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAsn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudAsn, allocator);
    }

    if (m_asnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asn, allocator);
    }

    if (m_authKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authKey.c_str(), allocator).Move(), allocator);
    }

}


int64_t BgpPeer::GetCloudAsn() const
{
    return m_cloudAsn;
}

void BgpPeer::SetCloudAsn(const int64_t& _cloudAsn)
{
    m_cloudAsn = _cloudAsn;
    m_cloudAsnHasBeenSet = true;
}

bool BgpPeer::CloudAsnHasBeenSet() const
{
    return m_cloudAsnHasBeenSet;
}

int64_t BgpPeer::GetAsn() const
{
    return m_asn;
}

void BgpPeer::SetAsn(const int64_t& _asn)
{
    m_asn = _asn;
    m_asnHasBeenSet = true;
}

bool BgpPeer::AsnHasBeenSet() const
{
    return m_asnHasBeenSet;
}

string BgpPeer::GetAuthKey() const
{
    return m_authKey;
}

void BgpPeer::SetAuthKey(const string& _authKey)
{
    m_authKey = _authKey;
    m_authKeyHasBeenSet = true;
}

bool BgpPeer::AuthKeyHasBeenSet() const
{
    return m_authKeyHasBeenSet;
}

