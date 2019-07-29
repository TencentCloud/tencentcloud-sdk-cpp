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

#include <tencentcloud/iottid/v20190411/model/TidKeysInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iottid::V20190411::Model;
using namespace rapidjson;
using namespace std;

TidKeysInfo::TidKeysInfo() :
    m_tidHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_pskHasBeenSet(false)
{
}

CoreInternalOutcome TidKeysInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsString())
        {
            return CoreInternalOutcome(Error("response `TidKeysInfo.Tid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tid = string(value["Tid"].GetString());
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("PublicKey") && !value["PublicKey"].IsNull())
    {
        if (!value["PublicKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `TidKeysInfo.PublicKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicKey = string(value["PublicKey"].GetString());
        m_publicKeyHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `TidKeysInfo.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("Psk") && !value["Psk"].IsNull())
    {
        if (!value["Psk"].IsString())
        {
            return CoreInternalOutcome(Error("response `TidKeysInfo.Psk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psk = string(value["Psk"].GetString());
        m_pskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TidKeysInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_pskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Psk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_psk.c_str(), allocator).Move(), allocator);
    }

}


string TidKeysInfo::GetTid() const
{
    return m_tid;
}

void TidKeysInfo::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool TidKeysInfo::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string TidKeysInfo::GetPublicKey() const
{
    return m_publicKey;
}

void TidKeysInfo::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool TidKeysInfo::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string TidKeysInfo::GetPrivateKey() const
{
    return m_privateKey;
}

void TidKeysInfo::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool TidKeysInfo::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string TidKeysInfo::GetPsk() const
{
    return m_psk;
}

void TidKeysInfo::SetPsk(const string& _psk)
{
    m_psk = _psk;
    m_pskHasBeenSet = true;
}

bool TidKeysInfo::PskHasBeenSet() const
{
    return m_pskHasBeenSet;
}

