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

#include <tencentcloud/trtc/v20190722/model/AuditStorageParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AuditStorageParams::AuditStorageParams() :
    m_cloudAuditStorageHasBeenSet(false)
{
}

CoreInternalOutcome AuditStorageParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloudAuditStorage") && !value["CloudAuditStorage"].IsNull())
    {
        if (!value["CloudAuditStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuditStorageParams.CloudAuditStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudAuditStorage.Deserialize(value["CloudAuditStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudAuditStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditStorageParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloudAuditStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAuditStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudAuditStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


CloudAuditStorage AuditStorageParams::GetCloudAuditStorage() const
{
    return m_cloudAuditStorage;
}

void AuditStorageParams::SetCloudAuditStorage(const CloudAuditStorage& _cloudAuditStorage)
{
    m_cloudAuditStorage = _cloudAuditStorage;
    m_cloudAuditStorageHasBeenSet = true;
}

bool AuditStorageParams::CloudAuditStorageHasBeenSet() const
{
    return m_cloudAuditStorageHasBeenSet;
}

