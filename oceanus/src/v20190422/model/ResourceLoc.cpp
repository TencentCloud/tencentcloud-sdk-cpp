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

#include <tencentcloud/oceanus/v20190422/model/ResourceLoc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ResourceLoc::ResourceLoc() :
    m_storageTypeHasBeenSet(false),
    m_paramHasBeenSet(false)
{
}

CoreInternalOutcome ResourceLoc::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceLoc.StorageType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = value["StorageType"].GetInt64();
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceLoc.Param` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_param.Deserialize(value["Param"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paramHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceLoc::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageType, allocator);
    }

    if (m_paramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_param.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ResourceLoc::GetStorageType() const
{
    return m_storageType;
}

void ResourceLoc::SetStorageType(const int64_t& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ResourceLoc::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

ResourceLocParam ResourceLoc::GetParam() const
{
    return m_param;
}

void ResourceLoc::SetParam(const ResourceLocParam& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool ResourceLoc::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

