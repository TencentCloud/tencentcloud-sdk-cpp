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

#include <tencentcloud/trtc/v20190722/model/McuStorageParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuStorageParams::McuStorageParams() :
    m_cloudStorageHasBeenSet(false),
    m_mcuCloudVodHasBeenSet(false)
{
}

CoreInternalOutcome McuStorageParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudStorage") && !value["CloudStorage"].IsNull())
    {
        if (!value["CloudStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuStorageParams.CloudStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudStorage.Deserialize(value["CloudStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudStorageHasBeenSet = true;
    }

    if (value.HasMember("McuCloudVod") && !value["McuCloudVod"].IsNull())
    {
        if (!value["McuCloudVod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuStorageParams.McuCloudVod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mcuCloudVod.Deserialize(value["McuCloudVod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mcuCloudVodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuStorageParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mcuCloudVodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McuCloudVod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mcuCloudVod.ToJsonObject(value[key.c_str()], allocator);
    }

}


CloudStorage McuStorageParams::GetCloudStorage() const
{
    return m_cloudStorage;
}

void McuStorageParams::SetCloudStorage(const CloudStorage& _cloudStorage)
{
    m_cloudStorage = _cloudStorage;
    m_cloudStorageHasBeenSet = true;
}

bool McuStorageParams::CloudStorageHasBeenSet() const
{
    return m_cloudStorageHasBeenSet;
}

McuCloudVod McuStorageParams::GetMcuCloudVod() const
{
    return m_mcuCloudVod;
}

void McuStorageParams::SetMcuCloudVod(const McuCloudVod& _mcuCloudVod)
{
    m_mcuCloudVod = _mcuCloudVod;
    m_mcuCloudVodHasBeenSet = true;
}

bool McuStorageParams::McuCloudVodHasBeenSet() const
{
    return m_mcuCloudVodHasBeenSet;
}

