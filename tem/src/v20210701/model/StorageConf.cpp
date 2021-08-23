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

#include <tencentcloud/tem/v20210701/model/StorageConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

StorageConf::StorageConf() :
    m_storageVolNameHasBeenSet(false),
    m_storageVolPathHasBeenSet(false),
    m_storageVolIpHasBeenSet(false)
{
}

CoreInternalOutcome StorageConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageVolName") && !value["StorageVolName"].IsNull())
    {
        if (!value["StorageVolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageConf.StorageVolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageVolName = string(value["StorageVolName"].GetString());
        m_storageVolNameHasBeenSet = true;
    }

    if (value.HasMember("StorageVolPath") && !value["StorageVolPath"].IsNull())
    {
        if (!value["StorageVolPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageConf.StorageVolPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageVolPath = string(value["StorageVolPath"].GetString());
        m_storageVolPathHasBeenSet = true;
    }

    if (value.HasMember("StorageVolIp") && !value["StorageVolIp"].IsNull())
    {
        if (!value["StorageVolIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageConf.StorageVolIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageVolIp = string(value["StorageVolIp"].GetString());
        m_storageVolIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageVolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageVolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageVolName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageVolPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageVolPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageVolPath.c_str(), allocator).Move(), allocator);
    }

    if (m_storageVolIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageVolIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageVolIp.c_str(), allocator).Move(), allocator);
    }

}


string StorageConf::GetStorageVolName() const
{
    return m_storageVolName;
}

void StorageConf::SetStorageVolName(const string& _storageVolName)
{
    m_storageVolName = _storageVolName;
    m_storageVolNameHasBeenSet = true;
}

bool StorageConf::StorageVolNameHasBeenSet() const
{
    return m_storageVolNameHasBeenSet;
}

string StorageConf::GetStorageVolPath() const
{
    return m_storageVolPath;
}

void StorageConf::SetStorageVolPath(const string& _storageVolPath)
{
    m_storageVolPath = _storageVolPath;
    m_storageVolPathHasBeenSet = true;
}

bool StorageConf::StorageVolPathHasBeenSet() const
{
    return m_storageVolPathHasBeenSet;
}

string StorageConf::GetStorageVolIp() const
{
    return m_storageVolIp;
}

void StorageConf::SetStorageVolIp(const string& _storageVolIp)
{
    m_storageVolIp = _storageVolIp;
    m_storageVolIpHasBeenSet = true;
}

bool StorageConf::StorageVolIpHasBeenSet() const
{
    return m_storageVolIpHasBeenSet;
}

