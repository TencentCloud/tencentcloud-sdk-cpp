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

#include <tencentcloud/es/v20180416/model/LogstashNodeTypeResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

LogstashNodeTypeResource::LogstashNodeTypeResource() :
    m_nodeTypeNameHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_nodeTypeInfoHasBeenSet(false),
    m_ssdAvailableHasBeenSet(false),
    m_ssdDiskSizeRangeHasBeenSet(false),
    m_sataAvailableHasBeenSet(false),
    m_sataDiskSizeRangeHasBeenSet(false),
    m_ssdSoldOutReasonHasBeenSet(false),
    m_sataSoldOutReasonHasBeenSet(false),
    m_localDiskInfoHasBeenSet(false),
    m_diskCountRangeHasBeenSet(false),
    m_hSsdAvailableHasBeenSet(false),
    m_hSsdSoldOutReasonHasBeenSet(false),
    m_hSsdDiskSizeRangeHasBeenSet(false),
    m_throughputAvailableHasBeenSet(false),
    m_throughputSoldOutReasonHasBeenSet(false),
    m_throughputDiskSizeRangeHasBeenSet(false),
    m_bigDataAvailableHasBeenSet(false),
    m_bigDataSoldOutReasonHasBeenSet(false),
    m_bigDataDiskSizeRangeHasBeenSet(false),
    m_highIOAvailableHasBeenSet(false),
    m_highIOSoldOutReasonHasBeenSet(false),
    m_highIODiskSizeRangeHasBeenSet(false),
    m_bssdAvailableHasBeenSet(false),
    m_bssdSoldOutReasonHasBeenSet(false),
    m_bssdDiskSizeRangeHasBeenSet(false),
    m_gpuInfoHasBeenSet(false)
{
}

CoreInternalOutcome LogstashNodeTypeResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeTypeName") && !value["NodeTypeName"].IsNull())
    {
        if (!value["NodeTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.NodeTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeTypeName = string(value["NodeTypeName"].GetString());
        m_nodeTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("NodeTypeInfo") && !value["NodeTypeInfo"].IsNull())
    {
        if (!value["NodeTypeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.NodeTypeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeTypeInfo.Deserialize(value["NodeTypeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeTypeInfoHasBeenSet = true;
    }

    if (value.HasMember("SsdAvailable") && !value["SsdAvailable"].IsNull())
    {
        if (!value["SsdAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.SsdAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ssdAvailable = value["SsdAvailable"].GetBool();
        m_ssdAvailableHasBeenSet = true;
    }

    if (value.HasMember("SsdDiskSizeRange") && !value["SsdDiskSizeRange"].IsNull())
    {
        if (!value["SsdDiskSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.SsdDiskSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ssdDiskSizeRange.Deserialize(value["SsdDiskSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ssdDiskSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("SataAvailable") && !value["SataAvailable"].IsNull())
    {
        if (!value["SataAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.SataAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sataAvailable = value["SataAvailable"].GetBool();
        m_sataAvailableHasBeenSet = true;
    }

    if (value.HasMember("SataDiskSizeRange") && !value["SataDiskSizeRange"].IsNull())
    {
        if (!value["SataDiskSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.SataDiskSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sataDiskSizeRange.Deserialize(value["SataDiskSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sataDiskSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("SsdSoldOutReason") && !value["SsdSoldOutReason"].IsNull())
    {
        if (!value["SsdSoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.SsdSoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssdSoldOutReason = string(value["SsdSoldOutReason"].GetString());
        m_ssdSoldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("SataSoldOutReason") && !value["SataSoldOutReason"].IsNull())
    {
        if (!value["SataSoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.SataSoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sataSoldOutReason = string(value["SataSoldOutReason"].GetString());
        m_sataSoldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("LocalDiskInfo") && !value["LocalDiskInfo"].IsNull())
    {
        if (!value["LocalDiskInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.LocalDiskInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_localDiskInfo.Deserialize(value["LocalDiskInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_localDiskInfoHasBeenSet = true;
    }

    if (value.HasMember("DiskCountRange") && !value["DiskCountRange"].IsNull())
    {
        if (!value["DiskCountRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.DiskCountRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diskCountRange.Deserialize(value["DiskCountRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskCountRangeHasBeenSet = true;
    }

    if (value.HasMember("HSsdAvailable") && !value["HSsdAvailable"].IsNull())
    {
        if (!value["HSsdAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.HSsdAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hSsdAvailable = value["HSsdAvailable"].GetBool();
        m_hSsdAvailableHasBeenSet = true;
    }

    if (value.HasMember("HSsdSoldOutReason") && !value["HSsdSoldOutReason"].IsNull())
    {
        if (!value["HSsdSoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.HSsdSoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hSsdSoldOutReason = string(value["HSsdSoldOutReason"].GetString());
        m_hSsdSoldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("HSsdDiskSizeRange") && !value["HSsdDiskSizeRange"].IsNull())
    {
        if (!value["HSsdDiskSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.HSsdDiskSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hSsdDiskSizeRange.Deserialize(value["HSsdDiskSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hSsdDiskSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("ThroughputAvailable") && !value["ThroughputAvailable"].IsNull())
    {
        if (!value["ThroughputAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.ThroughputAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_throughputAvailable = value["ThroughputAvailable"].GetBool();
        m_throughputAvailableHasBeenSet = true;
    }

    if (value.HasMember("ThroughputSoldOutReason") && !value["ThroughputSoldOutReason"].IsNull())
    {
        if (!value["ThroughputSoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.ThroughputSoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_throughputSoldOutReason = string(value["ThroughputSoldOutReason"].GetString());
        m_throughputSoldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("ThroughputDiskSizeRange") && !value["ThroughputDiskSizeRange"].IsNull())
    {
        if (!value["ThroughputDiskSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.ThroughputDiskSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_throughputDiskSizeRange.Deserialize(value["ThroughputDiskSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_throughputDiskSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("BigDataAvailable") && !value["BigDataAvailable"].IsNull())
    {
        if (!value["BigDataAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.BigDataAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bigDataAvailable = value["BigDataAvailable"].GetBool();
        m_bigDataAvailableHasBeenSet = true;
    }

    if (value.HasMember("BigDataSoldOutReason") && !value["BigDataSoldOutReason"].IsNull())
    {
        if (!value["BigDataSoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.BigDataSoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDataSoldOutReason = string(value["BigDataSoldOutReason"].GetString());
        m_bigDataSoldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("BigDataDiskSizeRange") && !value["BigDataDiskSizeRange"].IsNull())
    {
        if (!value["BigDataDiskSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.BigDataDiskSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bigDataDiskSizeRange.Deserialize(value["BigDataDiskSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bigDataDiskSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("HighIOAvailable") && !value["HighIOAvailable"].IsNull())
    {
        if (!value["HighIOAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.HighIOAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_highIOAvailable = value["HighIOAvailable"].GetBool();
        m_highIOAvailableHasBeenSet = true;
    }

    if (value.HasMember("HighIOSoldOutReason") && !value["HighIOSoldOutReason"].IsNull())
    {
        if (!value["HighIOSoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.HighIOSoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highIOSoldOutReason = string(value["HighIOSoldOutReason"].GetString());
        m_highIOSoldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("HighIODiskSizeRange") && !value["HighIODiskSizeRange"].IsNull())
    {
        if (!value["HighIODiskSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.HighIODiskSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highIODiskSizeRange.Deserialize(value["HighIODiskSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highIODiskSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("BssdAvailable") && !value["BssdAvailable"].IsNull())
    {
        if (!value["BssdAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.BssdAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bssdAvailable = value["BssdAvailable"].GetBool();
        m_bssdAvailableHasBeenSet = true;
    }

    if (value.HasMember("BssdSoldOutReason") && !value["BssdSoldOutReason"].IsNull())
    {
        if (!value["BssdSoldOutReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.BssdSoldOutReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bssdSoldOutReason = string(value["BssdSoldOutReason"].GetString());
        m_bssdSoldOutReasonHasBeenSet = true;
    }

    if (value.HasMember("BssdDiskSizeRange") && !value["BssdDiskSizeRange"].IsNull())
    {
        if (!value["BssdDiskSizeRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.BssdDiskSizeRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bssdDiskSizeRange.Deserialize(value["BssdDiskSizeRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bssdDiskSizeRangeHasBeenSet = true;
    }

    if (value.HasMember("GpuInfo") && !value["GpuInfo"].IsNull())
    {
        if (!value["GpuInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogstashNodeTypeResource.GpuInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gpuInfo.Deserialize(value["GpuInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gpuInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogstashNodeTypeResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_nodeTypeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTypeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeTypeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ssdAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsdAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ssdAvailable, allocator);
    }

    if (m_ssdDiskSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsdDiskSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ssdDiskSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sataAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SataAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sataAvailable, allocator);
    }

    if (m_sataDiskSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SataDiskSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sataDiskSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ssdSoldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsdSoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssdSoldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_sataSoldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SataSoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sataSoldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_localDiskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_localDiskInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskCountRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCountRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskCountRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hSsdAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HSsdAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hSsdAvailable, allocator);
    }

    if (m_hSsdSoldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HSsdSoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hSsdSoldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_hSsdDiskSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HSsdDiskSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hSsdDiskSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_throughputAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_throughputAvailable, allocator);
    }

    if (m_throughputSoldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputSoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_throughputSoldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_throughputDiskSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThroughputDiskSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_throughputDiskSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bigDataAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDataAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bigDataAvailable, allocator);
    }

    if (m_bigDataSoldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDataSoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigDataSoldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_bigDataDiskSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDataDiskSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bigDataDiskSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_highIOAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighIOAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highIOAvailable, allocator);
    }

    if (m_highIOSoldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighIOSoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highIOSoldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_highIODiskSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighIODiskSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highIODiskSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bssdAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BssdAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bssdAvailable, allocator);
    }

    if (m_bssdSoldOutReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BssdSoldOutReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bssdSoldOutReason.c_str(), allocator).Move(), allocator);
    }

    if (m_bssdDiskSizeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BssdDiskSizeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bssdDiskSizeRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gpuInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gpuInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LogstashNodeTypeResource::GetNodeTypeName() const
{
    return m_nodeTypeName;
}

void LogstashNodeTypeResource::SetNodeTypeName(const string& _nodeTypeName)
{
    m_nodeTypeName = _nodeTypeName;
    m_nodeTypeNameHasBeenSet = true;
}

bool LogstashNodeTypeResource::NodeTypeNameHasBeenSet() const
{
    return m_nodeTypeNameHasBeenSet;
}

bool LogstashNodeTypeResource::GetAvailable() const
{
    return m_available;
}

void LogstashNodeTypeResource::SetAvailable(const bool& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool LogstashNodeTypeResource::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

NodeTypeInfo LogstashNodeTypeResource::GetNodeTypeInfo() const
{
    return m_nodeTypeInfo;
}

void LogstashNodeTypeResource::SetNodeTypeInfo(const NodeTypeInfo& _nodeTypeInfo)
{
    m_nodeTypeInfo = _nodeTypeInfo;
    m_nodeTypeInfoHasBeenSet = true;
}

bool LogstashNodeTypeResource::NodeTypeInfoHasBeenSet() const
{
    return m_nodeTypeInfoHasBeenSet;
}

bool LogstashNodeTypeResource::GetSsdAvailable() const
{
    return m_ssdAvailable;
}

void LogstashNodeTypeResource::SetSsdAvailable(const bool& _ssdAvailable)
{
    m_ssdAvailable = _ssdAvailable;
    m_ssdAvailableHasBeenSet = true;
}

bool LogstashNodeTypeResource::SsdAvailableHasBeenSet() const
{
    return m_ssdAvailableHasBeenSet;
}

DiskSizeRange LogstashNodeTypeResource::GetSsdDiskSizeRange() const
{
    return m_ssdDiskSizeRange;
}

void LogstashNodeTypeResource::SetSsdDiskSizeRange(const DiskSizeRange& _ssdDiskSizeRange)
{
    m_ssdDiskSizeRange = _ssdDiskSizeRange;
    m_ssdDiskSizeRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::SsdDiskSizeRangeHasBeenSet() const
{
    return m_ssdDiskSizeRangeHasBeenSet;
}

bool LogstashNodeTypeResource::GetSataAvailable() const
{
    return m_sataAvailable;
}

void LogstashNodeTypeResource::SetSataAvailable(const bool& _sataAvailable)
{
    m_sataAvailable = _sataAvailable;
    m_sataAvailableHasBeenSet = true;
}

bool LogstashNodeTypeResource::SataAvailableHasBeenSet() const
{
    return m_sataAvailableHasBeenSet;
}

DiskSizeRange LogstashNodeTypeResource::GetSataDiskSizeRange() const
{
    return m_sataDiskSizeRange;
}

void LogstashNodeTypeResource::SetSataDiskSizeRange(const DiskSizeRange& _sataDiskSizeRange)
{
    m_sataDiskSizeRange = _sataDiskSizeRange;
    m_sataDiskSizeRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::SataDiskSizeRangeHasBeenSet() const
{
    return m_sataDiskSizeRangeHasBeenSet;
}

string LogstashNodeTypeResource::GetSsdSoldOutReason() const
{
    return m_ssdSoldOutReason;
}

void LogstashNodeTypeResource::SetSsdSoldOutReason(const string& _ssdSoldOutReason)
{
    m_ssdSoldOutReason = _ssdSoldOutReason;
    m_ssdSoldOutReasonHasBeenSet = true;
}

bool LogstashNodeTypeResource::SsdSoldOutReasonHasBeenSet() const
{
    return m_ssdSoldOutReasonHasBeenSet;
}

string LogstashNodeTypeResource::GetSataSoldOutReason() const
{
    return m_sataSoldOutReason;
}

void LogstashNodeTypeResource::SetSataSoldOutReason(const string& _sataSoldOutReason)
{
    m_sataSoldOutReason = _sataSoldOutReason;
    m_sataSoldOutReasonHasBeenSet = true;
}

bool LogstashNodeTypeResource::SataSoldOutReasonHasBeenSet() const
{
    return m_sataSoldOutReasonHasBeenSet;
}

LocalDiskInfo LogstashNodeTypeResource::GetLocalDiskInfo() const
{
    return m_localDiskInfo;
}

void LogstashNodeTypeResource::SetLocalDiskInfo(const LocalDiskInfo& _localDiskInfo)
{
    m_localDiskInfo = _localDiskInfo;
    m_localDiskInfoHasBeenSet = true;
}

bool LogstashNodeTypeResource::LocalDiskInfoHasBeenSet() const
{
    return m_localDiskInfoHasBeenSet;
}

DiskCountRange LogstashNodeTypeResource::GetDiskCountRange() const
{
    return m_diskCountRange;
}

void LogstashNodeTypeResource::SetDiskCountRange(const DiskCountRange& _diskCountRange)
{
    m_diskCountRange = _diskCountRange;
    m_diskCountRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::DiskCountRangeHasBeenSet() const
{
    return m_diskCountRangeHasBeenSet;
}

bool LogstashNodeTypeResource::GetHSsdAvailable() const
{
    return m_hSsdAvailable;
}

void LogstashNodeTypeResource::SetHSsdAvailable(const bool& _hSsdAvailable)
{
    m_hSsdAvailable = _hSsdAvailable;
    m_hSsdAvailableHasBeenSet = true;
}

bool LogstashNodeTypeResource::HSsdAvailableHasBeenSet() const
{
    return m_hSsdAvailableHasBeenSet;
}

string LogstashNodeTypeResource::GetHSsdSoldOutReason() const
{
    return m_hSsdSoldOutReason;
}

void LogstashNodeTypeResource::SetHSsdSoldOutReason(const string& _hSsdSoldOutReason)
{
    m_hSsdSoldOutReason = _hSsdSoldOutReason;
    m_hSsdSoldOutReasonHasBeenSet = true;
}

bool LogstashNodeTypeResource::HSsdSoldOutReasonHasBeenSet() const
{
    return m_hSsdSoldOutReasonHasBeenSet;
}

DiskSizeRange LogstashNodeTypeResource::GetHSsdDiskSizeRange() const
{
    return m_hSsdDiskSizeRange;
}

void LogstashNodeTypeResource::SetHSsdDiskSizeRange(const DiskSizeRange& _hSsdDiskSizeRange)
{
    m_hSsdDiskSizeRange = _hSsdDiskSizeRange;
    m_hSsdDiskSizeRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::HSsdDiskSizeRangeHasBeenSet() const
{
    return m_hSsdDiskSizeRangeHasBeenSet;
}

bool LogstashNodeTypeResource::GetThroughputAvailable() const
{
    return m_throughputAvailable;
}

void LogstashNodeTypeResource::SetThroughputAvailable(const bool& _throughputAvailable)
{
    m_throughputAvailable = _throughputAvailable;
    m_throughputAvailableHasBeenSet = true;
}

bool LogstashNodeTypeResource::ThroughputAvailableHasBeenSet() const
{
    return m_throughputAvailableHasBeenSet;
}

string LogstashNodeTypeResource::GetThroughputSoldOutReason() const
{
    return m_throughputSoldOutReason;
}

void LogstashNodeTypeResource::SetThroughputSoldOutReason(const string& _throughputSoldOutReason)
{
    m_throughputSoldOutReason = _throughputSoldOutReason;
    m_throughputSoldOutReasonHasBeenSet = true;
}

bool LogstashNodeTypeResource::ThroughputSoldOutReasonHasBeenSet() const
{
    return m_throughputSoldOutReasonHasBeenSet;
}

DiskSizeRange LogstashNodeTypeResource::GetThroughputDiskSizeRange() const
{
    return m_throughputDiskSizeRange;
}

void LogstashNodeTypeResource::SetThroughputDiskSizeRange(const DiskSizeRange& _throughputDiskSizeRange)
{
    m_throughputDiskSizeRange = _throughputDiskSizeRange;
    m_throughputDiskSizeRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::ThroughputDiskSizeRangeHasBeenSet() const
{
    return m_throughputDiskSizeRangeHasBeenSet;
}

bool LogstashNodeTypeResource::GetBigDataAvailable() const
{
    return m_bigDataAvailable;
}

void LogstashNodeTypeResource::SetBigDataAvailable(const bool& _bigDataAvailable)
{
    m_bigDataAvailable = _bigDataAvailable;
    m_bigDataAvailableHasBeenSet = true;
}

bool LogstashNodeTypeResource::BigDataAvailableHasBeenSet() const
{
    return m_bigDataAvailableHasBeenSet;
}

string LogstashNodeTypeResource::GetBigDataSoldOutReason() const
{
    return m_bigDataSoldOutReason;
}

void LogstashNodeTypeResource::SetBigDataSoldOutReason(const string& _bigDataSoldOutReason)
{
    m_bigDataSoldOutReason = _bigDataSoldOutReason;
    m_bigDataSoldOutReasonHasBeenSet = true;
}

bool LogstashNodeTypeResource::BigDataSoldOutReasonHasBeenSet() const
{
    return m_bigDataSoldOutReasonHasBeenSet;
}

DiskSizeRange LogstashNodeTypeResource::GetBigDataDiskSizeRange() const
{
    return m_bigDataDiskSizeRange;
}

void LogstashNodeTypeResource::SetBigDataDiskSizeRange(const DiskSizeRange& _bigDataDiskSizeRange)
{
    m_bigDataDiskSizeRange = _bigDataDiskSizeRange;
    m_bigDataDiskSizeRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::BigDataDiskSizeRangeHasBeenSet() const
{
    return m_bigDataDiskSizeRangeHasBeenSet;
}

bool LogstashNodeTypeResource::GetHighIOAvailable() const
{
    return m_highIOAvailable;
}

void LogstashNodeTypeResource::SetHighIOAvailable(const bool& _highIOAvailable)
{
    m_highIOAvailable = _highIOAvailable;
    m_highIOAvailableHasBeenSet = true;
}

bool LogstashNodeTypeResource::HighIOAvailableHasBeenSet() const
{
    return m_highIOAvailableHasBeenSet;
}

string LogstashNodeTypeResource::GetHighIOSoldOutReason() const
{
    return m_highIOSoldOutReason;
}

void LogstashNodeTypeResource::SetHighIOSoldOutReason(const string& _highIOSoldOutReason)
{
    m_highIOSoldOutReason = _highIOSoldOutReason;
    m_highIOSoldOutReasonHasBeenSet = true;
}

bool LogstashNodeTypeResource::HighIOSoldOutReasonHasBeenSet() const
{
    return m_highIOSoldOutReasonHasBeenSet;
}

DiskSizeRange LogstashNodeTypeResource::GetHighIODiskSizeRange() const
{
    return m_highIODiskSizeRange;
}

void LogstashNodeTypeResource::SetHighIODiskSizeRange(const DiskSizeRange& _highIODiskSizeRange)
{
    m_highIODiskSizeRange = _highIODiskSizeRange;
    m_highIODiskSizeRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::HighIODiskSizeRangeHasBeenSet() const
{
    return m_highIODiskSizeRangeHasBeenSet;
}

bool LogstashNodeTypeResource::GetBssdAvailable() const
{
    return m_bssdAvailable;
}

void LogstashNodeTypeResource::SetBssdAvailable(const bool& _bssdAvailable)
{
    m_bssdAvailable = _bssdAvailable;
    m_bssdAvailableHasBeenSet = true;
}

bool LogstashNodeTypeResource::BssdAvailableHasBeenSet() const
{
    return m_bssdAvailableHasBeenSet;
}

string LogstashNodeTypeResource::GetBssdSoldOutReason() const
{
    return m_bssdSoldOutReason;
}

void LogstashNodeTypeResource::SetBssdSoldOutReason(const string& _bssdSoldOutReason)
{
    m_bssdSoldOutReason = _bssdSoldOutReason;
    m_bssdSoldOutReasonHasBeenSet = true;
}

bool LogstashNodeTypeResource::BssdSoldOutReasonHasBeenSet() const
{
    return m_bssdSoldOutReasonHasBeenSet;
}

DiskSizeRange LogstashNodeTypeResource::GetBssdDiskSizeRange() const
{
    return m_bssdDiskSizeRange;
}

void LogstashNodeTypeResource::SetBssdDiskSizeRange(const DiskSizeRange& _bssdDiskSizeRange)
{
    m_bssdDiskSizeRange = _bssdDiskSizeRange;
    m_bssdDiskSizeRangeHasBeenSet = true;
}

bool LogstashNodeTypeResource::BssdDiskSizeRangeHasBeenSet() const
{
    return m_bssdDiskSizeRangeHasBeenSet;
}

GpuInfo LogstashNodeTypeResource::GetGpuInfo() const
{
    return m_gpuInfo;
}

void LogstashNodeTypeResource::SetGpuInfo(const GpuInfo& _gpuInfo)
{
    m_gpuInfo = _gpuInfo;
    m_gpuInfoHasBeenSet = true;
}

bool LogstashNodeTypeResource::GpuInfoHasBeenSet() const
{
    return m_gpuInfoHasBeenSet;
}

