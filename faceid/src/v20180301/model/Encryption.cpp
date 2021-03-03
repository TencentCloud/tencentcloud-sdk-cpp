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

#include <tencentcloud/faceid/v20180301/model/Encryption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

Encryption::Encryption() :
    m_ciphertextBlobHasBeenSet(false),
    m_encryptListHasBeenSet(false),
    m_ivHasBeenSet(false)
{
}

CoreInternalOutcome Encryption::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CiphertextBlob") && !value["CiphertextBlob"].IsNull())
    {
        if (!value["CiphertextBlob"].IsString())
        {
            return CoreInternalOutcome(Error("response `Encryption.CiphertextBlob` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ciphertextBlob = string(value["CiphertextBlob"].GetString());
        m_ciphertextBlobHasBeenSet = true;
    }

    if (value.HasMember("EncryptList") && !value["EncryptList"].IsNull())
    {
        if (!value["EncryptList"].IsArray())
            return CoreInternalOutcome(Error("response `Encryption.EncryptList` is not array type"));

        const Value &tmpValue = value["EncryptList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_encryptList.push_back((*itr).GetString());
        }
        m_encryptListHasBeenSet = true;
    }

    if (value.HasMember("Iv") && !value["Iv"].IsNull())
    {
        if (!value["Iv"].IsString())
        {
            return CoreInternalOutcome(Error("response `Encryption.Iv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iv = string(value["Iv"].GetString());
        m_ivHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Encryption::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ciphertextBlobHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CiphertextBlob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ciphertextBlob.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EncryptList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_encryptList.begin(); itr != m_encryptList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ivHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Iv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_iv.c_str(), allocator).Move(), allocator);
    }

}


string Encryption::GetCiphertextBlob() const
{
    return m_ciphertextBlob;
}

void Encryption::SetCiphertextBlob(const string& _ciphertextBlob)
{
    m_ciphertextBlob = _ciphertextBlob;
    m_ciphertextBlobHasBeenSet = true;
}

bool Encryption::CiphertextBlobHasBeenSet() const
{
    return m_ciphertextBlobHasBeenSet;
}

vector<string> Encryption::GetEncryptList() const
{
    return m_encryptList;
}

void Encryption::SetEncryptList(const vector<string>& _encryptList)
{
    m_encryptList = _encryptList;
    m_encryptListHasBeenSet = true;
}

bool Encryption::EncryptListHasBeenSet() const
{
    return m_encryptListHasBeenSet;
}

string Encryption::GetIv() const
{
    return m_iv;
}

void Encryption::SetIv(const string& _iv)
{
    m_iv = _iv;
    m_ivHasBeenSet = true;
}

bool Encryption::IvHasBeenSet() const
{
    return m_ivHasBeenSet;
}

