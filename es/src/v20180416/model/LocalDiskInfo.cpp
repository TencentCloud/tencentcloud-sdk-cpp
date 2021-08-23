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

#include <tencentcloud/es/v20180416/model/LocalDiskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

LocalDiskInfo::LocalDiskInfo() :
    m_localDiskTypeHasBeenSet(false),
    m_localDiskSizeHasBeenSet(false),
    m_localDiskCountHasBeenSet(false)
{
}

CoreInternalOutcome LocalDiskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalDiskType") && !value["LocalDiskType"].IsNull())
    {
        if (!value["LocalDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalDiskInfo.LocalDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localDiskType = string(value["LocalDiskType"].GetString());
        m_localDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("LocalDiskSize") && !value["LocalDiskSize"].IsNull())
    {
        if (!value["LocalDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalDiskInfo.LocalDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localDiskSize = value["LocalDiskSize"].GetUint64();
        m_localDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("LocalDiskCount") && !value["LocalDiskCount"].IsNull())
    {
        if (!value["LocalDiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LocalDiskInfo.LocalDiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localDiskCount = value["LocalDiskCount"].GetUint64();
        m_localDiskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalDiskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_localDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localDiskSize, allocator);
    }

    if (m_localDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localDiskCount, allocator);
    }

}


string LocalDiskInfo::GetLocalDiskType() const
{
    return m_localDiskType;
}

void LocalDiskInfo::SetLocalDiskType(const string& _localDiskType)
{
    m_localDiskType = _localDiskType;
    m_localDiskTypeHasBeenSet = true;
}

bool LocalDiskInfo::LocalDiskTypeHasBeenSet() const
{
    return m_localDiskTypeHasBeenSet;
}

uint64_t LocalDiskInfo::GetLocalDiskSize() const
{
    return m_localDiskSize;
}

void LocalDiskInfo::SetLocalDiskSize(const uint64_t& _localDiskSize)
{
    m_localDiskSize = _localDiskSize;
    m_localDiskSizeHasBeenSet = true;
}

bool LocalDiskInfo::LocalDiskSizeHasBeenSet() const
{
    return m_localDiskSizeHasBeenSet;
}

uint64_t LocalDiskInfo::GetLocalDiskCount() const
{
    return m_localDiskCount;
}

void LocalDiskInfo::SetLocalDiskCount(const uint64_t& _localDiskCount)
{
    m_localDiskCount = _localDiskCount;
    m_localDiskCountHasBeenSet = true;
}

bool LocalDiskInfo::LocalDiskCountHasBeenSet() const
{
    return m_localDiskCountHasBeenSet;
}

