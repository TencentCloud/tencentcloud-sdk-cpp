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

#include <tencentcloud/csip/v20221121/model/AssetInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetInfoDetail::AssetInfoDetail() :
    m_appIDHasBeenSet(false),
    m_cVEIdHasBeenSet(false),
    m_isScanHasBeenSet(false),
    m_influenceAssetHasBeenSet(false),
    m_notRepairAssetHasBeenSet(false),
    m_notProtectAssetHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskPercentHasBeenSet(false),
    m_taskTimeHasBeenSet(false),
    m_scanTimeHasBeenSet(false)
{
}

CoreInternalOutcome AssetInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.AppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appID = string(value["AppID"].GetString());
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("CVEId") && !value["CVEId"].IsNull())
    {
        if (!value["CVEId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.CVEId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEId = string(value["CVEId"].GetString());
        m_cVEIdHasBeenSet = true;
    }

    if (value.HasMember("IsScan") && !value["IsScan"].IsNull())
    {
        if (!value["IsScan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.IsScan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isScan = value["IsScan"].GetInt64();
        m_isScanHasBeenSet = true;
    }

    if (value.HasMember("InfluenceAsset") && !value["InfluenceAsset"].IsNull())
    {
        if (!value["InfluenceAsset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.InfluenceAsset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_influenceAsset = value["InfluenceAsset"].GetInt64();
        m_influenceAssetHasBeenSet = true;
    }

    if (value.HasMember("NotRepairAsset") && !value["NotRepairAsset"].IsNull())
    {
        if (!value["NotRepairAsset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.NotRepairAsset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notRepairAsset = value["NotRepairAsset"].GetInt64();
        m_notRepairAssetHasBeenSet = true;
    }

    if (value.HasMember("NotProtectAsset") && !value["NotProtectAsset"].IsNull())
    {
        if (!value["NotProtectAsset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.NotProtectAsset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notProtectAsset = value["NotProtectAsset"].GetInt64();
        m_notProtectAssetHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskPercent") && !value["TaskPercent"].IsNull())
    {
        if (!value["TaskPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.TaskPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPercent = value["TaskPercent"].GetInt64();
        m_taskPercentHasBeenSet = true;
    }

    if (value.HasMember("TaskTime") && !value["TaskTime"].IsNull())
    {
        if (!value["TaskTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.TaskTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTime = value["TaskTime"].GetInt64();
        m_taskTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetInfoDetail.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appID.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEId.c_str(), allocator).Move(), allocator);
    }

    if (m_isScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isScan, allocator);
    }

    if (m_influenceAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfluenceAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_influenceAsset, allocator);
    }

    if (m_notRepairAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotRepairAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notRepairAsset, allocator);
    }

    if (m_notProtectAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotProtectAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notProtectAsset, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPercent, allocator);
    }

    if (m_taskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTime, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

}


string AssetInfoDetail::GetAppID() const
{
    return m_appID;
}

void AssetInfoDetail::SetAppID(const string& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AssetInfoDetail::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AssetInfoDetail::GetCVEId() const
{
    return m_cVEId;
}

void AssetInfoDetail::SetCVEId(const string& _cVEId)
{
    m_cVEId = _cVEId;
    m_cVEIdHasBeenSet = true;
}

bool AssetInfoDetail::CVEIdHasBeenSet() const
{
    return m_cVEIdHasBeenSet;
}

int64_t AssetInfoDetail::GetIsScan() const
{
    return m_isScan;
}

void AssetInfoDetail::SetIsScan(const int64_t& _isScan)
{
    m_isScan = _isScan;
    m_isScanHasBeenSet = true;
}

bool AssetInfoDetail::IsScanHasBeenSet() const
{
    return m_isScanHasBeenSet;
}

int64_t AssetInfoDetail::GetInfluenceAsset() const
{
    return m_influenceAsset;
}

void AssetInfoDetail::SetInfluenceAsset(const int64_t& _influenceAsset)
{
    m_influenceAsset = _influenceAsset;
    m_influenceAssetHasBeenSet = true;
}

bool AssetInfoDetail::InfluenceAssetHasBeenSet() const
{
    return m_influenceAssetHasBeenSet;
}

int64_t AssetInfoDetail::GetNotRepairAsset() const
{
    return m_notRepairAsset;
}

void AssetInfoDetail::SetNotRepairAsset(const int64_t& _notRepairAsset)
{
    m_notRepairAsset = _notRepairAsset;
    m_notRepairAssetHasBeenSet = true;
}

bool AssetInfoDetail::NotRepairAssetHasBeenSet() const
{
    return m_notRepairAssetHasBeenSet;
}

int64_t AssetInfoDetail::GetNotProtectAsset() const
{
    return m_notProtectAsset;
}

void AssetInfoDetail::SetNotProtectAsset(const int64_t& _notProtectAsset)
{
    m_notProtectAsset = _notProtectAsset;
    m_notProtectAssetHasBeenSet = true;
}

bool AssetInfoDetail::NotProtectAssetHasBeenSet() const
{
    return m_notProtectAssetHasBeenSet;
}

string AssetInfoDetail::GetTaskId() const
{
    return m_taskId;
}

void AssetInfoDetail::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AssetInfoDetail::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t AssetInfoDetail::GetTaskPercent() const
{
    return m_taskPercent;
}

void AssetInfoDetail::SetTaskPercent(const int64_t& _taskPercent)
{
    m_taskPercent = _taskPercent;
    m_taskPercentHasBeenSet = true;
}

bool AssetInfoDetail::TaskPercentHasBeenSet() const
{
    return m_taskPercentHasBeenSet;
}

int64_t AssetInfoDetail::GetTaskTime() const
{
    return m_taskTime;
}

void AssetInfoDetail::SetTaskTime(const int64_t& _taskTime)
{
    m_taskTime = _taskTime;
    m_taskTimeHasBeenSet = true;
}

bool AssetInfoDetail::TaskTimeHasBeenSet() const
{
    return m_taskTimeHasBeenSet;
}

string AssetInfoDetail::GetScanTime() const
{
    return m_scanTime;
}

void AssetInfoDetail::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool AssetInfoDetail::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

