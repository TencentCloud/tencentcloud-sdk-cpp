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

#include <tencentcloud/wedata/v20250806/model/TriggerTableUpdateRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TriggerTableUpdateRecord::TriggerTableUpdateRecord() :
    m_tableQualifierHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updateVersionHasBeenSet(false),
    m_assetGuidHasBeenSet(false)
{
}

CoreInternalOutcome TriggerTableUpdateRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableQualifier") && !value["TableQualifier"].IsNull())
    {
        if (!value["TableQualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTableUpdateRecord.TableQualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableQualifier = string(value["TableQualifier"].GetString());
        m_tableQualifierHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTableUpdateRecord.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateVersion") && !value["UpdateVersion"].IsNull())
    {
        if (!value["UpdateVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTableUpdateRecord.UpdateVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateVersion = string(value["UpdateVersion"].GetString());
        m_updateVersionHasBeenSet = true;
    }

    if (value.HasMember("AssetGuid") && !value["AssetGuid"].IsNull())
    {
        if (!value["AssetGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerTableUpdateRecord.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerTableUpdateRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableQualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_assetGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetGuid.c_str(), allocator).Move(), allocator);
    }

}


string TriggerTableUpdateRecord::GetTableQualifier() const
{
    return m_tableQualifier;
}

void TriggerTableUpdateRecord::SetTableQualifier(const string& _tableQualifier)
{
    m_tableQualifier = _tableQualifier;
    m_tableQualifierHasBeenSet = true;
}

bool TriggerTableUpdateRecord::TableQualifierHasBeenSet() const
{
    return m_tableQualifierHasBeenSet;
}

string TriggerTableUpdateRecord::GetUpdateTime() const
{
    return m_updateTime;
}

void TriggerTableUpdateRecord::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TriggerTableUpdateRecord::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TriggerTableUpdateRecord::GetUpdateVersion() const
{
    return m_updateVersion;
}

void TriggerTableUpdateRecord::SetUpdateVersion(const string& _updateVersion)
{
    m_updateVersion = _updateVersion;
    m_updateVersionHasBeenSet = true;
}

bool TriggerTableUpdateRecord::UpdateVersionHasBeenSet() const
{
    return m_updateVersionHasBeenSet;
}

string TriggerTableUpdateRecord::GetAssetGuid() const
{
    return m_assetGuid;
}

void TriggerTableUpdateRecord::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool TriggerTableUpdateRecord::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}

