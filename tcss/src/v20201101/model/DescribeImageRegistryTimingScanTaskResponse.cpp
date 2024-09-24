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

#include <tencentcloud/tcss/v20201101/model/DescribeImageRegistryTimingScanTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeImageRegistryTimingScanTaskResponse::DescribeImageRegistryTimingScanTaskResponse() :
    m_enableHasBeenSet(false),
    m_scanTimeHasBeenSet(false),
    m_scanPeriodHasBeenSet(false),
    m_scanTypeHasBeenSet(false),
    m_allHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_latestHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_containerRunningHasBeenSet(false),
    m_scanScopeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_excludeImageAssetIdsHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_scanResultHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageRegistryTimingScanTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (rsp.HasMember("ScanTime") && !rsp["ScanTime"].IsNull())
    {
        if (!rsp["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(rsp["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanPeriod") && !rsp["ScanPeriod"].IsNull())
    {
        if (!rsp["ScanPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanPeriod = rsp["ScanPeriod"].GetUint64();
        m_scanPeriodHasBeenSet = true;
    }

    if (rsp.HasMember("ScanType") && !rsp["ScanType"].IsNull())
    {
        if (!rsp["ScanType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ScanType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scanType.push_back((*itr).GetString());
        }
        m_scanTypeHasBeenSet = true;
    }

    if (rsp.HasMember("All") && !rsp["All"].IsNull())
    {
        if (!rsp["All"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `All` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_all = rsp["All"].GetBool();
        m_allHasBeenSet = true;
    }

    if (rsp.HasMember("Images") && !rsp["Images"].IsNull())
    {
        if (!rsp["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Images` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_images.push_back(item);
        }
        m_imagesHasBeenSet = true;
    }

    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Id` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Id"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_id.push_back((*itr).GetUint64());
        }
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Latest") && !rsp["Latest"].IsNull())
    {
        if (!rsp["Latest"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Latest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_latest = rsp["Latest"].GetBool();
        m_latestHasBeenSet = true;
    }

    if (rsp.HasMember("ScanEndTime") && !rsp["ScanEndTime"].IsNull())
    {
        if (!rsp["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(rsp["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryType") && !rsp["RegistryType"].IsNull())
    {
        if (!rsp["RegistryType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegistryType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegistryType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_registryType.push_back((*itr).GetString());
        }
        m_registryTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerRunning") && !rsp["ContainerRunning"].IsNull())
    {
        if (!rsp["ContainerRunning"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerRunning` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containerRunning = rsp["ContainerRunning"].GetBool();
        m_containerRunningHasBeenSet = true;
    }

    if (rsp.HasMember("ScanScope") && !rsp["ScanScope"].IsNull())
    {
        if (!rsp["ScanScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanScope = rsp["ScanScope"].GetUint64();
        m_scanScopeHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Namespace` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Namespace"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespace.push_back((*itr).GetString());
        }
        m_namespaceHasBeenSet = true;
    }

    if (rsp.HasMember("ExcludeImageAssetIds") && !rsp["ExcludeImageAssetIds"].IsNull())
    {
        if (!rsp["ExcludeImageAssetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExcludeImageAssetIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExcludeImageAssetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeImageAssetIds.push_back((*itr).GetUint64());
        }
        m_excludeImageAssetIdsHasBeenSet = true;
    }

    if (rsp.HasMember("LastScanTime") && !rsp["LastScanTime"].IsNull())
    {
        if (!rsp["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(rsp["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ScanResult") && !rsp["ScanResult"].IsNull())
    {
        if (!rsp["ScanResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanResult = string(rsp["ScanResult"].GetString());
        m_scanResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageRegistryTimingScanTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanPeriod, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_all, allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_latestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latest, allocator);
    }

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryType.begin(); itr != m_registryType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_containerRunningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRunning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerRunning, allocator);
    }

    if (m_scanScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanScope, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespace.begin(); itr != m_namespace.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeImageAssetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImageAssetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImageAssetIds.begin(); itr != m_excludeImageAssetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanResult.c_str(), allocator).Move(), allocator);
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


bool DescribeImageRegistryTimingScanTaskResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeImageRegistryTimingScanTaskResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string DescribeImageRegistryTimingScanTaskResponse::GetScanTime() const
{
    return m_scanTime;
}

bool DescribeImageRegistryTimingScanTaskResponse::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

uint64_t DescribeImageRegistryTimingScanTaskResponse::GetScanPeriod() const
{
    return m_scanPeriod;
}

bool DescribeImageRegistryTimingScanTaskResponse::ScanPeriodHasBeenSet() const
{
    return m_scanPeriodHasBeenSet;
}

vector<string> DescribeImageRegistryTimingScanTaskResponse::GetScanType() const
{
    return m_scanType;
}

bool DescribeImageRegistryTimingScanTaskResponse::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

bool DescribeImageRegistryTimingScanTaskResponse::GetAll() const
{
    return m_all;
}

bool DescribeImageRegistryTimingScanTaskResponse::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<ImageInfo> DescribeImageRegistryTimingScanTaskResponse::GetImages() const
{
    return m_images;
}

bool DescribeImageRegistryTimingScanTaskResponse::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<uint64_t> DescribeImageRegistryTimingScanTaskResponse::GetId() const
{
    return m_id;
}

bool DescribeImageRegistryTimingScanTaskResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool DescribeImageRegistryTimingScanTaskResponse::GetLatest() const
{
    return m_latest;
}

bool DescribeImageRegistryTimingScanTaskResponse::LatestHasBeenSet() const
{
    return m_latestHasBeenSet;
}

string DescribeImageRegistryTimingScanTaskResponse::GetScanEndTime() const
{
    return m_scanEndTime;
}

bool DescribeImageRegistryTimingScanTaskResponse::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

vector<string> DescribeImageRegistryTimingScanTaskResponse::GetRegistryType() const
{
    return m_registryType;
}

bool DescribeImageRegistryTimingScanTaskResponse::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

bool DescribeImageRegistryTimingScanTaskResponse::GetContainerRunning() const
{
    return m_containerRunning;
}

bool DescribeImageRegistryTimingScanTaskResponse::ContainerRunningHasBeenSet() const
{
    return m_containerRunningHasBeenSet;
}

uint64_t DescribeImageRegistryTimingScanTaskResponse::GetScanScope() const
{
    return m_scanScope;
}

bool DescribeImageRegistryTimingScanTaskResponse::ScanScopeHasBeenSet() const
{
    return m_scanScopeHasBeenSet;
}

vector<string> DescribeImageRegistryTimingScanTaskResponse::GetNamespace() const
{
    return m_namespace;
}

bool DescribeImageRegistryTimingScanTaskResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<uint64_t> DescribeImageRegistryTimingScanTaskResponse::GetExcludeImageAssetIds() const
{
    return m_excludeImageAssetIds;
}

bool DescribeImageRegistryTimingScanTaskResponse::ExcludeImageAssetIdsHasBeenSet() const
{
    return m_excludeImageAssetIdsHasBeenSet;
}

string DescribeImageRegistryTimingScanTaskResponse::GetLastScanTime() const
{
    return m_lastScanTime;
}

bool DescribeImageRegistryTimingScanTaskResponse::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

string DescribeImageRegistryTimingScanTaskResponse::GetScanResult() const
{
    return m_scanResult;
}

bool DescribeImageRegistryTimingScanTaskResponse::ScanResultHasBeenSet() const
{
    return m_scanResultHasBeenSet;
}


