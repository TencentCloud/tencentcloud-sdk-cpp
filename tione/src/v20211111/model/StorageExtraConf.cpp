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

#include <tencentcloud/tione/v20211111/model/StorageExtraConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

StorageExtraConf::StorageExtraConf() :
    m_cFSStorageTypeHasBeenSet(false),
    m_cFSProtocolHasBeenSet(false)
{
}

CoreInternalOutcome StorageExtraConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CFSStorageType") && !value["CFSStorageType"].IsNull())
    {
        if (!value["CFSStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageExtraConf.CFSStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFSStorageType = string(value["CFSStorageType"].GetString());
        m_cFSStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("CFSProtocol") && !value["CFSProtocol"].IsNull())
    {
        if (!value["CFSProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageExtraConf.CFSProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFSProtocol = string(value["CFSProtocol"].GetString());
        m_cFSProtocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageExtraConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cFSStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFSStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_cFSProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFSProtocol.c_str(), allocator).Move(), allocator);
    }

}


string StorageExtraConf::GetCFSStorageType() const
{
    return m_cFSStorageType;
}

void StorageExtraConf::SetCFSStorageType(const string& _cFSStorageType)
{
    m_cFSStorageType = _cFSStorageType;
    m_cFSStorageTypeHasBeenSet = true;
}

bool StorageExtraConf::CFSStorageTypeHasBeenSet() const
{
    return m_cFSStorageTypeHasBeenSet;
}

string StorageExtraConf::GetCFSProtocol() const
{
    return m_cFSProtocol;
}

void StorageExtraConf::SetCFSProtocol(const string& _cFSProtocol)
{
    m_cFSProtocol = _cFSProtocol;
    m_cFSProtocolHasBeenSet = true;
}

bool StorageExtraConf::CFSProtocolHasBeenSet() const
{
    return m_cFSProtocolHasBeenSet;
}

