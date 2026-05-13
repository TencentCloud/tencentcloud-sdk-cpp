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

#include <tencentcloud/csip/v20221121/model/DspmDictionary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmDictionary::DspmDictionary() :
    m_dictIdHasBeenSet(false),
    m_dictNameHasBeenSet(false)
{
}

CoreInternalOutcome DspmDictionary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DictId") && !value["DictId"].IsNull())
    {
        if (!value["DictId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDictionary.DictId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dictId = value["DictId"].GetUint64();
        m_dictIdHasBeenSet = true;
    }

    if (value.HasMember("DictName") && !value["DictName"].IsNull())
    {
        if (!value["DictName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmDictionary.DictName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dictName = string(value["DictName"].GetString());
        m_dictNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmDictionary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dictIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dictId, allocator);
    }

    if (m_dictNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dictName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DspmDictionary::GetDictId() const
{
    return m_dictId;
}

void DspmDictionary::SetDictId(const uint64_t& _dictId)
{
    m_dictId = _dictId;
    m_dictIdHasBeenSet = true;
}

bool DspmDictionary::DictIdHasBeenSet() const
{
    return m_dictIdHasBeenSet;
}

string DspmDictionary::GetDictName() const
{
    return m_dictName;
}

void DspmDictionary::SetDictName(const string& _dictName)
{
    m_dictName = _dictName;
    m_dictNameHasBeenSet = true;
}

bool DspmDictionary::DictNameHasBeenSet() const
{
    return m_dictNameHasBeenSet;
}

