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

#include <tencentcloud/teo/v20220106/model/Https.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

Https::Https() :
    m_http2HasBeenSet(false),
    m_ocspStaplingHasBeenSet(false),
    m_tlsVersionHasBeenSet(false),
    m_hstsHasBeenSet(false)
{
}

CoreInternalOutcome Https::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Http2") && !value["Http2"].IsNull())
    {
        if (!value["Http2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Http2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_http2 = string(value["Http2"].GetString());
        m_http2HasBeenSet = true;
    }

    if (value.HasMember("OcspStapling") && !value["OcspStapling"].IsNull())
    {
        if (!value["OcspStapling"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Https.OcspStapling` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocspStapling = string(value["OcspStapling"].GetString());
        m_ocspStaplingHasBeenSet = true;
    }

    if (value.HasMember("TlsVersion") && !value["TlsVersion"].IsNull())
    {
        if (!value["TlsVersion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Https.TlsVersion` is not array type"));

        const rapidjson::Value &tmpValue = value["TlsVersion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tlsVersion.push_back((*itr).GetString());
        }
        m_tlsVersionHasBeenSet = true;
    }

    if (value.HasMember("Hsts") && !value["Hsts"].IsNull())
    {
        if (!value["Hsts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Https.Hsts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hsts.Deserialize(value["Hsts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hstsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Https::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_http2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_http2.c_str(), allocator).Move(), allocator);
    }

    if (m_ocspStaplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcspStapling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocspStapling.c_str(), allocator).Move(), allocator);
    }

    if (m_tlsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TlsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tlsVersion.begin(); itr != m_tlsVersion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hstsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hsts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hsts.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Https::GetHttp2() const
{
    return m_http2;
}

void Https::SetHttp2(const string& _http2)
{
    m_http2 = _http2;
    m_http2HasBeenSet = true;
}

bool Https::Http2HasBeenSet() const
{
    return m_http2HasBeenSet;
}

string Https::GetOcspStapling() const
{
    return m_ocspStapling;
}

void Https::SetOcspStapling(const string& _ocspStapling)
{
    m_ocspStapling = _ocspStapling;
    m_ocspStaplingHasBeenSet = true;
}

bool Https::OcspStaplingHasBeenSet() const
{
    return m_ocspStaplingHasBeenSet;
}

vector<string> Https::GetTlsVersion() const
{
    return m_tlsVersion;
}

void Https::SetTlsVersion(const vector<string>& _tlsVersion)
{
    m_tlsVersion = _tlsVersion;
    m_tlsVersionHasBeenSet = true;
}

bool Https::TlsVersionHasBeenSet() const
{
    return m_tlsVersionHasBeenSet;
}

Hsts Https::GetHsts() const
{
    return m_hsts;
}

void Https::SetHsts(const Hsts& _hsts)
{
    m_hsts = _hsts;
    m_hstsHasBeenSet = true;
}

bool Https::HstsHasBeenSet() const
{
    return m_hstsHasBeenSet;
}

