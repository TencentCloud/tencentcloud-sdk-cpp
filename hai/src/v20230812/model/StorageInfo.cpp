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

#include <tencentcloud/hai/v20230812/model/StorageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

StorageInfo::StorageInfo() :
    m_mountPathHasBeenSet(false),
    m_cOSStorageHasBeenSet(false)
{
}

CoreInternalOutcome StorageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("COSStorage") && !value["COSStorage"].IsNull())
    {
        if (!value["COSStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.COSStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cOSStorage.Deserialize(value["COSStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cOSStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cOSStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StorageInfo::GetMountPath() const
{
    return m_mountPath;
}

void StorageInfo::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool StorageInfo::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

COSStorage StorageInfo::GetCOSStorage() const
{
    return m_cOSStorage;
}

void StorageInfo::SetCOSStorage(const COSStorage& _cOSStorage)
{
    m_cOSStorage = _cOSStorage;
    m_cOSStorageHasBeenSet = true;
}

bool StorageInfo::COSStorageHasBeenSet() const
{
    return m_cOSStorageHasBeenSet;
}

