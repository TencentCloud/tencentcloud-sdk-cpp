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

#include <tencentcloud/ecm/v20190719/model/NetworkStorageRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

NetworkStorageRange::NetworkStorageRange() :
    m_maxBandwidthHasBeenSet(false),
    m_maxSystemDiskSizeHasBeenSet(false),
    m_minBandwidthHasBeenSet(false),
    m_minSystemDiskSizeHasBeenSet(false),
    m_maxDataDiskSizeHasBeenSet(false),
    m_minDataDiskSizeHasBeenSet(false),
    m_suggestBandwidthHasBeenSet(false),
    m_suggestDataDiskSizeHasBeenSet(false),
    m_suggestSystemDiskSizeHasBeenSet(false),
    m_maxVcpuHasBeenSet(false),
    m_minVcpuHasBeenSet(false),
    m_maxVcpuPerReqHasBeenSet(false),
    m_perBandwidthHasBeenSet(false),
    m_perDataDiskHasBeenSet(false),
    m_maxModuleNumHasBeenSet(false),
    m_cBSSupportedHasBeenSet(false),
    m_diskNumLimitHasBeenSet(false)
{
}

CoreInternalOutcome NetworkStorageRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxBandwidth") && !value["MaxBandwidth"].IsNull())
    {
        if (!value["MaxBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MaxBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidth = value["MaxBandwidth"].GetInt64();
        m_maxBandwidthHasBeenSet = true;
    }

    if (value.HasMember("MaxSystemDiskSize") && !value["MaxSystemDiskSize"].IsNull())
    {
        if (!value["MaxSystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MaxSystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSystemDiskSize = value["MaxSystemDiskSize"].GetInt64();
        m_maxSystemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MinBandwidth") && !value["MinBandwidth"].IsNull())
    {
        if (!value["MinBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MinBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minBandwidth = value["MinBandwidth"].GetInt64();
        m_minBandwidthHasBeenSet = true;
    }

    if (value.HasMember("MinSystemDiskSize") && !value["MinSystemDiskSize"].IsNull())
    {
        if (!value["MinSystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MinSystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSystemDiskSize = value["MinSystemDiskSize"].GetInt64();
        m_minSystemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxDataDiskSize") && !value["MaxDataDiskSize"].IsNull())
    {
        if (!value["MaxDataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MaxDataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDataDiskSize = value["MaxDataDiskSize"].GetInt64();
        m_maxDataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MinDataDiskSize") && !value["MinDataDiskSize"].IsNull())
    {
        if (!value["MinDataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MinDataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minDataDiskSize = value["MinDataDiskSize"].GetInt64();
        m_minDataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("SuggestBandwidth") && !value["SuggestBandwidth"].IsNull())
    {
        if (!value["SuggestBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.SuggestBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestBandwidth = value["SuggestBandwidth"].GetInt64();
        m_suggestBandwidthHasBeenSet = true;
    }

    if (value.HasMember("SuggestDataDiskSize") && !value["SuggestDataDiskSize"].IsNull())
    {
        if (!value["SuggestDataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.SuggestDataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestDataDiskSize = value["SuggestDataDiskSize"].GetInt64();
        m_suggestDataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("SuggestSystemDiskSize") && !value["SuggestSystemDiskSize"].IsNull())
    {
        if (!value["SuggestSystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.SuggestSystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suggestSystemDiskSize = value["SuggestSystemDiskSize"].GetInt64();
        m_suggestSystemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxVcpu") && !value["MaxVcpu"].IsNull())
    {
        if (!value["MaxVcpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MaxVcpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxVcpu = value["MaxVcpu"].GetInt64();
        m_maxVcpuHasBeenSet = true;
    }

    if (value.HasMember("MinVcpu") && !value["MinVcpu"].IsNull())
    {
        if (!value["MinVcpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MinVcpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minVcpu = value["MinVcpu"].GetInt64();
        m_minVcpuHasBeenSet = true;
    }

    if (value.HasMember("MaxVcpuPerReq") && !value["MaxVcpuPerReq"].IsNull())
    {
        if (!value["MaxVcpuPerReq"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MaxVcpuPerReq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxVcpuPerReq = value["MaxVcpuPerReq"].GetInt64();
        m_maxVcpuPerReqHasBeenSet = true;
    }

    if (value.HasMember("PerBandwidth") && !value["PerBandwidth"].IsNull())
    {
        if (!value["PerBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.PerBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_perBandwidth = value["PerBandwidth"].GetInt64();
        m_perBandwidthHasBeenSet = true;
    }

    if (value.HasMember("PerDataDisk") && !value["PerDataDisk"].IsNull())
    {
        if (!value["PerDataDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.PerDataDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_perDataDisk = value["PerDataDisk"].GetInt64();
        m_perDataDiskHasBeenSet = true;
    }

    if (value.HasMember("MaxModuleNum") && !value["MaxModuleNum"].IsNull())
    {
        if (!value["MaxModuleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.MaxModuleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxModuleNum = value["MaxModuleNum"].GetInt64();
        m_maxModuleNumHasBeenSet = true;
    }

    if (value.HasMember("CBSSupported") && !value["CBSSupported"].IsNull())
    {
        if (!value["CBSSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.CBSSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cBSSupported = value["CBSSupported"].GetBool();
        m_cBSSupportedHasBeenSet = true;
    }

    if (value.HasMember("DiskNumLimit") && !value["DiskNumLimit"].IsNull())
    {
        if (!value["DiskNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkStorageRange.DiskNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskNumLimit = value["DiskNumLimit"].GetInt64();
        m_diskNumLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkStorageRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidth, allocator);
    }

    if (m_maxSystemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSystemDiskSize, allocator);
    }

    if (m_minBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minBandwidth, allocator);
    }

    if (m_minSystemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSystemDiskSize, allocator);
    }

    if (m_maxDataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDataDiskSize, allocator);
    }

    if (m_minDataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDataDiskSize, allocator);
    }

    if (m_suggestBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestBandwidth, allocator);
    }

    if (m_suggestDataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestDataDiskSize, allocator);
    }

    if (m_suggestSystemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestSystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggestSystemDiskSize, allocator);
    }

    if (m_maxVcpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVcpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVcpu, allocator);
    }

    if (m_minVcpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinVcpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minVcpu, allocator);
    }

    if (m_maxVcpuPerReqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVcpuPerReq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVcpuPerReq, allocator);
    }

    if (m_perBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_perBandwidth, allocator);
    }

    if (m_perDataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerDataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_perDataDisk, allocator);
    }

    if (m_maxModuleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxModuleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxModuleNum, allocator);
    }

    if (m_cBSSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CBSSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cBSSupported, allocator);
    }

    if (m_diskNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskNumLimit, allocator);
    }

}


int64_t NetworkStorageRange::GetMaxBandwidth() const
{
    return m_maxBandwidth;
}

void NetworkStorageRange::SetMaxBandwidth(const int64_t& _maxBandwidth)
{
    m_maxBandwidth = _maxBandwidth;
    m_maxBandwidthHasBeenSet = true;
}

bool NetworkStorageRange::MaxBandwidthHasBeenSet() const
{
    return m_maxBandwidthHasBeenSet;
}

int64_t NetworkStorageRange::GetMaxSystemDiskSize() const
{
    return m_maxSystemDiskSize;
}

void NetworkStorageRange::SetMaxSystemDiskSize(const int64_t& _maxSystemDiskSize)
{
    m_maxSystemDiskSize = _maxSystemDiskSize;
    m_maxSystemDiskSizeHasBeenSet = true;
}

bool NetworkStorageRange::MaxSystemDiskSizeHasBeenSet() const
{
    return m_maxSystemDiskSizeHasBeenSet;
}

int64_t NetworkStorageRange::GetMinBandwidth() const
{
    return m_minBandwidth;
}

void NetworkStorageRange::SetMinBandwidth(const int64_t& _minBandwidth)
{
    m_minBandwidth = _minBandwidth;
    m_minBandwidthHasBeenSet = true;
}

bool NetworkStorageRange::MinBandwidthHasBeenSet() const
{
    return m_minBandwidthHasBeenSet;
}

int64_t NetworkStorageRange::GetMinSystemDiskSize() const
{
    return m_minSystemDiskSize;
}

void NetworkStorageRange::SetMinSystemDiskSize(const int64_t& _minSystemDiskSize)
{
    m_minSystemDiskSize = _minSystemDiskSize;
    m_minSystemDiskSizeHasBeenSet = true;
}

bool NetworkStorageRange::MinSystemDiskSizeHasBeenSet() const
{
    return m_minSystemDiskSizeHasBeenSet;
}

int64_t NetworkStorageRange::GetMaxDataDiskSize() const
{
    return m_maxDataDiskSize;
}

void NetworkStorageRange::SetMaxDataDiskSize(const int64_t& _maxDataDiskSize)
{
    m_maxDataDiskSize = _maxDataDiskSize;
    m_maxDataDiskSizeHasBeenSet = true;
}

bool NetworkStorageRange::MaxDataDiskSizeHasBeenSet() const
{
    return m_maxDataDiskSizeHasBeenSet;
}

int64_t NetworkStorageRange::GetMinDataDiskSize() const
{
    return m_minDataDiskSize;
}

void NetworkStorageRange::SetMinDataDiskSize(const int64_t& _minDataDiskSize)
{
    m_minDataDiskSize = _minDataDiskSize;
    m_minDataDiskSizeHasBeenSet = true;
}

bool NetworkStorageRange::MinDataDiskSizeHasBeenSet() const
{
    return m_minDataDiskSizeHasBeenSet;
}

int64_t NetworkStorageRange::GetSuggestBandwidth() const
{
    return m_suggestBandwidth;
}

void NetworkStorageRange::SetSuggestBandwidth(const int64_t& _suggestBandwidth)
{
    m_suggestBandwidth = _suggestBandwidth;
    m_suggestBandwidthHasBeenSet = true;
}

bool NetworkStorageRange::SuggestBandwidthHasBeenSet() const
{
    return m_suggestBandwidthHasBeenSet;
}

int64_t NetworkStorageRange::GetSuggestDataDiskSize() const
{
    return m_suggestDataDiskSize;
}

void NetworkStorageRange::SetSuggestDataDiskSize(const int64_t& _suggestDataDiskSize)
{
    m_suggestDataDiskSize = _suggestDataDiskSize;
    m_suggestDataDiskSizeHasBeenSet = true;
}

bool NetworkStorageRange::SuggestDataDiskSizeHasBeenSet() const
{
    return m_suggestDataDiskSizeHasBeenSet;
}

int64_t NetworkStorageRange::GetSuggestSystemDiskSize() const
{
    return m_suggestSystemDiskSize;
}

void NetworkStorageRange::SetSuggestSystemDiskSize(const int64_t& _suggestSystemDiskSize)
{
    m_suggestSystemDiskSize = _suggestSystemDiskSize;
    m_suggestSystemDiskSizeHasBeenSet = true;
}

bool NetworkStorageRange::SuggestSystemDiskSizeHasBeenSet() const
{
    return m_suggestSystemDiskSizeHasBeenSet;
}

int64_t NetworkStorageRange::GetMaxVcpu() const
{
    return m_maxVcpu;
}

void NetworkStorageRange::SetMaxVcpu(const int64_t& _maxVcpu)
{
    m_maxVcpu = _maxVcpu;
    m_maxVcpuHasBeenSet = true;
}

bool NetworkStorageRange::MaxVcpuHasBeenSet() const
{
    return m_maxVcpuHasBeenSet;
}

int64_t NetworkStorageRange::GetMinVcpu() const
{
    return m_minVcpu;
}

void NetworkStorageRange::SetMinVcpu(const int64_t& _minVcpu)
{
    m_minVcpu = _minVcpu;
    m_minVcpuHasBeenSet = true;
}

bool NetworkStorageRange::MinVcpuHasBeenSet() const
{
    return m_minVcpuHasBeenSet;
}

int64_t NetworkStorageRange::GetMaxVcpuPerReq() const
{
    return m_maxVcpuPerReq;
}

void NetworkStorageRange::SetMaxVcpuPerReq(const int64_t& _maxVcpuPerReq)
{
    m_maxVcpuPerReq = _maxVcpuPerReq;
    m_maxVcpuPerReqHasBeenSet = true;
}

bool NetworkStorageRange::MaxVcpuPerReqHasBeenSet() const
{
    return m_maxVcpuPerReqHasBeenSet;
}

int64_t NetworkStorageRange::GetPerBandwidth() const
{
    return m_perBandwidth;
}

void NetworkStorageRange::SetPerBandwidth(const int64_t& _perBandwidth)
{
    m_perBandwidth = _perBandwidth;
    m_perBandwidthHasBeenSet = true;
}

bool NetworkStorageRange::PerBandwidthHasBeenSet() const
{
    return m_perBandwidthHasBeenSet;
}

int64_t NetworkStorageRange::GetPerDataDisk() const
{
    return m_perDataDisk;
}

void NetworkStorageRange::SetPerDataDisk(const int64_t& _perDataDisk)
{
    m_perDataDisk = _perDataDisk;
    m_perDataDiskHasBeenSet = true;
}

bool NetworkStorageRange::PerDataDiskHasBeenSet() const
{
    return m_perDataDiskHasBeenSet;
}

int64_t NetworkStorageRange::GetMaxModuleNum() const
{
    return m_maxModuleNum;
}

void NetworkStorageRange::SetMaxModuleNum(const int64_t& _maxModuleNum)
{
    m_maxModuleNum = _maxModuleNum;
    m_maxModuleNumHasBeenSet = true;
}

bool NetworkStorageRange::MaxModuleNumHasBeenSet() const
{
    return m_maxModuleNumHasBeenSet;
}

bool NetworkStorageRange::GetCBSSupported() const
{
    return m_cBSSupported;
}

void NetworkStorageRange::SetCBSSupported(const bool& _cBSSupported)
{
    m_cBSSupported = _cBSSupported;
    m_cBSSupportedHasBeenSet = true;
}

bool NetworkStorageRange::CBSSupportedHasBeenSet() const
{
    return m_cBSSupportedHasBeenSet;
}

int64_t NetworkStorageRange::GetDiskNumLimit() const
{
    return m_diskNumLimit;
}

void NetworkStorageRange::SetDiskNumLimit(const int64_t& _diskNumLimit)
{
    m_diskNumLimit = _diskNumLimit;
    m_diskNumLimitHasBeenSet = true;
}

bool NetworkStorageRange::DiskNumLimitHasBeenSet() const
{
    return m_diskNumLimitHasBeenSet;
}

