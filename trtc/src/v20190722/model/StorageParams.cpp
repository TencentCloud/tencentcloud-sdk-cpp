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

#include <tencentcloud/trtc/v20190722/model/StorageParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StorageParams::StorageParams() :
    m_cloudStorageHasBeenSet(false),
    m_cloudVodHasBeenSet(false)
{
}

CoreInternalOutcome StorageParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudStorage") && !value["CloudStorage"].IsNull())
    {
        if (!value["CloudStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageParams.CloudStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudStorage.Deserialize(value["CloudStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudStorageHasBeenSet = true;
    }

    if (value.HasMember("CloudVod") && !value["CloudVod"].IsNull())
    {
        if (!value["CloudVod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageParams.CloudVod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudVod.Deserialize(value["CloudVod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudVodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cloudVodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudVod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudVod.ToJsonObject(value[key.c_str()], allocator);
    }

}


CloudStorage StorageParams::GetCloudStorage() const
{
    return m_cloudStorage;
}

void StorageParams::SetCloudStorage(const CloudStorage& _cloudStorage)
{
    m_cloudStorage = _cloudStorage;
    m_cloudStorageHasBeenSet = true;
}

bool StorageParams::CloudStorageHasBeenSet() const
{
    return m_cloudStorageHasBeenSet;
}

CloudVod StorageParams::GetCloudVod() const
{
    return m_cloudVod;
}

void StorageParams::SetCloudVod(const CloudVod& _cloudVod)
{
    m_cloudVod = _cloudVod;
    m_cloudVodHasBeenSet = true;
}

bool StorageParams::CloudVodHasBeenSet() const
{
    return m_cloudVodHasBeenSet;
}

