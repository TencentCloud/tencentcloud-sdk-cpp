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

#include <tencentcloud/csip/v20221121/model/DescribeVulScanPeriodicResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeVulScanPeriodicResponse::DescribeVulScanPeriodicResponse() :
    m_statusHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_assetRangeHasBeenSet(false),
    m_assetListHasBeenSet(false),
    m_cycleValueHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_allowSyncHasBeenSet(false),
    m_enableSyncHasBeenSet(false),
    m_adminInfoHasBeenSet(false),
    m_tagIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulScanPeriodicResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("VulCategory") && !rsp["VulCategory"].IsNull())
    {
        if (!rsp["VulCategory"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulCategory` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VulCategory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vulCategory.push_back((*itr).GetString());
        }
        m_vulCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Level` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Level"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_level.push_back((*itr).GetString());
        }
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("Method") && !rsp["Method"].IsNull())
    {
        if (!rsp["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(rsp["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (rsp.HasMember("CycleType") && !rsp["CycleType"].IsNull())
    {
        if (!rsp["CycleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CycleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = rsp["CycleType"].GetUint64();
        m_cycleTypeHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AssetRange") && !rsp["AssetRange"].IsNull())
    {
        if (!rsp["AssetRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetRange = rsp["AssetRange"].GetInt64();
        m_assetRangeHasBeenSet = true;
    }

    if (rsp.HasMember("AssetList") && !rsp["AssetList"].IsNull())
    {
        if (!rsp["AssetList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assetList.push_back((*itr).GetString());
        }
        m_assetListHasBeenSet = true;
    }

    if (rsp.HasMember("CycleValue") && !rsp["CycleValue"].IsNull())
    {
        if (!rsp["CycleValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CycleValue` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CycleValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cycleValue.push_back((*itr).GetUint64());
        }
        m_cycleValueHasBeenSet = true;
    }

    if (rsp.HasMember("Timeout") && !rsp["Timeout"].IsNull())
    {
        if (!rsp["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = rsp["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (rsp.HasMember("AllowSync") && !rsp["AllowSync"].IsNull())
    {
        if (!rsp["AllowSync"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllowSync` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allowSync = rsp["AllowSync"].GetUint64();
        m_allowSyncHasBeenSet = true;
    }

    if (rsp.HasMember("EnableSync") && !rsp["EnableSync"].IsNull())
    {
        if (!rsp["EnableSync"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableSync` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableSync = rsp["EnableSync"].GetUint64();
        m_enableSyncHasBeenSet = true;
    }

    if (rsp.HasMember("AdminInfo") && !rsp["AdminInfo"].IsNull())
    {
        if (!rsp["AdminInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdminInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_adminInfo.Deserialize(rsp["AdminInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_adminInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TagIds") && !rsp["TagIds"].IsNull())
    {
        if (!rsp["TagIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIds.push_back((*itr).GetUint64());
        }
        m_tagIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulScanPeriodicResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulCategory.begin(); itr != m_vulCategory.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_level.begin(); itr != m_level.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleType, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetRange, allocator);
    }

    if (m_assetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assetList.begin(); itr != m_assetList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cycleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleValue.begin(); itr != m_cycleValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_allowSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowSync, allocator);
    }

    if (m_enableSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSync, allocator);
    }

    if (m_adminInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_adminInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIds.begin(); itr != m_tagIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeVulScanPeriodicResponse::GetStatus() const
{
    return m_status;
}

bool DescribeVulScanPeriodicResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeVulScanPeriodicResponse::GetVulCategory() const
{
    return m_vulCategory;
}

bool DescribeVulScanPeriodicResponse::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

vector<string> DescribeVulScanPeriodicResponse::GetLevel() const
{
    return m_level;
}

bool DescribeVulScanPeriodicResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeVulScanPeriodicResponse::GetMethod() const
{
    return m_method;
}

bool DescribeVulScanPeriodicResponse::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t DescribeVulScanPeriodicResponse::GetCycleType() const
{
    return m_cycleType;
}

bool DescribeVulScanPeriodicResponse::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string DescribeVulScanPeriodicResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeVulScanPeriodicResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeVulScanPeriodicResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeVulScanPeriodicResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeVulScanPeriodicResponse::GetAssetRange() const
{
    return m_assetRange;
}

bool DescribeVulScanPeriodicResponse::AssetRangeHasBeenSet() const
{
    return m_assetRangeHasBeenSet;
}

vector<string> DescribeVulScanPeriodicResponse::GetAssetList() const
{
    return m_assetList;
}

bool DescribeVulScanPeriodicResponse::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}

vector<uint64_t> DescribeVulScanPeriodicResponse::GetCycleValue() const
{
    return m_cycleValue;
}

bool DescribeVulScanPeriodicResponse::CycleValueHasBeenSet() const
{
    return m_cycleValueHasBeenSet;
}

uint64_t DescribeVulScanPeriodicResponse::GetTimeout() const
{
    return m_timeout;
}

bool DescribeVulScanPeriodicResponse::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t DescribeVulScanPeriodicResponse::GetAllowSync() const
{
    return m_allowSync;
}

bool DescribeVulScanPeriodicResponse::AllowSyncHasBeenSet() const
{
    return m_allowSyncHasBeenSet;
}

uint64_t DescribeVulScanPeriodicResponse::GetEnableSync() const
{
    return m_enableSync;
}

bool DescribeVulScanPeriodicResponse::EnableSyncHasBeenSet() const
{
    return m_enableSyncHasBeenSet;
}

AccountBriefInfo DescribeVulScanPeriodicResponse::GetAdminInfo() const
{
    return m_adminInfo;
}

bool DescribeVulScanPeriodicResponse::AdminInfoHasBeenSet() const
{
    return m_adminInfoHasBeenSet;
}

vector<uint64_t> DescribeVulScanPeriodicResponse::GetTagIds() const
{
    return m_tagIds;
}

bool DescribeVulScanPeriodicResponse::TagIdsHasBeenSet() const
{
    return m_tagIdsHasBeenSet;
}


