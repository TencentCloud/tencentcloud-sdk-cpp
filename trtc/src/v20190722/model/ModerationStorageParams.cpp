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

#include <tencentcloud/trtc/v20190722/model/ModerationStorageParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ModerationStorageParams::ModerationStorageParams() :
    m_cloudModerationStorageHasBeenSet(false)
{
}

CoreInternalOutcome ModerationStorageParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudModerationStorage") && !value["CloudModerationStorage"].IsNull())
    {
        if (!value["CloudModerationStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationStorageParams.CloudModerationStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudModerationStorage.Deserialize(value["CloudModerationStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudModerationStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModerationStorageParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudModerationStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudModerationStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudModerationStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


CloudModerationStorage ModerationStorageParams::GetCloudModerationStorage() const
{
    return m_cloudModerationStorage;
}

void ModerationStorageParams::SetCloudModerationStorage(const CloudModerationStorage& _cloudModerationStorage)
{
    m_cloudModerationStorage = _cloudModerationStorage;
    m_cloudModerationStorageHasBeenSet = true;
}

bool ModerationStorageParams::CloudModerationStorageHasBeenSet() const
{
    return m_cloudModerationStorageHasBeenSet;
}

