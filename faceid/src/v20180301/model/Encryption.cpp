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
using namespace std;

Encryption::Encryption() :
    m_encryptListHasBeenSet(false),
    m_ciphertextBlobHasBeenSet(false),
    m_ivHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

CoreInternalOutcome Encryption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncryptList") && !value["EncryptList"].IsNull())
    {
        if (!value["EncryptList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Encryption.EncryptList` is not array type"));

        const rapidjson::Value &tmpValue = value["EncryptList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_encryptList.push_back((*itr).GetString());
        }
        m_encryptListHasBeenSet = true;
    }

    if (value.HasMember("CiphertextBlob") && !value["CiphertextBlob"].IsNull())
    {
        if (!value["CiphertextBlob"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Encryption.CiphertextBlob` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ciphertextBlob = string(value["CiphertextBlob"].GetString());
        m_ciphertextBlobHasBeenSet = true;
    }

    if (value.HasMember("Iv") && !value["Iv"].IsNull())
    {
        if (!value["Iv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Encryption.Iv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iv = string(value["Iv"].GetString());
        m_ivHasBeenSet = true;
    }

    if (value.HasMember("Algorithm") && !value["Algorithm"].IsNull())
    {
        if (!value["Algorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Encryption.Algorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_algorithm = string(value["Algorithm"].GetString());
        m_algorithmHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Encryption.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagList.push_back((*itr).GetString());
        }
        m_tagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Encryption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_encryptList.begin(); itr != m_encryptList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ciphertextBlobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiphertextBlob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ciphertextBlob.c_str(), allocator).Move(), allocator);
    }

    if (m_ivHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iv.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

string Encryption::GetAlgorithm() const
{
    return m_algorithm;
}

void Encryption::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool Encryption::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

vector<string> Encryption::GetTagList() const
{
    return m_tagList;
}

void Encryption::SetTagList(const vector<string>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool Encryption::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

