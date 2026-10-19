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

#include <tencentcloud/cfw/v20190904/model/OverviewLogStorageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewLogStorageDetail::OverviewLogStorageDetail() :
    m_usedBytesHasBeenSet(false),
    m_totalBytesHasBeenSet(false),
    m_storageDayHasBeenSet(false),
    m_nDRStorageDayHasBeenSet(false),
    m_aclSizeHasBeenSet(false),
    m_idsSizeHasBeenSet(false),
    m_netFlowSizeHasBeenSet(false),
    m_operateSizeHasBeenSet(false),
    m_nDRRiskSizeHasBeenSet(false),
    m_nDRNetFlowSizeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_arrearsStopWritingHasBeenSet(false)
{
}

CoreInternalOutcome OverviewLogStorageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsedBytes") && !value["UsedBytes"].IsNull())
    {
        if (!value["UsedBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.UsedBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedBytes = value["UsedBytes"].GetInt64();
        m_usedBytesHasBeenSet = true;
    }

    if (value.HasMember("TotalBytes") && !value["TotalBytes"].IsNull())
    {
        if (!value["TotalBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.TotalBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBytes = value["TotalBytes"].GetInt64();
        m_totalBytesHasBeenSet = true;
    }

    if (value.HasMember("StorageDay") && !value["StorageDay"].IsNull())
    {
        if (!value["StorageDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.StorageDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageDay = value["StorageDay"].GetInt64();
        m_storageDayHasBeenSet = true;
    }

    if (value.HasMember("NDRStorageDay") && !value["NDRStorageDay"].IsNull())
    {
        if (!value["NDRStorageDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.NDRStorageDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRStorageDay = value["NDRStorageDay"].GetInt64();
        m_nDRStorageDayHasBeenSet = true;
    }

    if (value.HasMember("AclSize") && !value["AclSize"].IsNull())
    {
        if (!value["AclSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.AclSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aclSize = value["AclSize"].GetInt64();
        m_aclSizeHasBeenSet = true;
    }

    if (value.HasMember("IdsSize") && !value["IdsSize"].IsNull())
    {
        if (!value["IdsSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.IdsSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idsSize = value["IdsSize"].GetInt64();
        m_idsSizeHasBeenSet = true;
    }

    if (value.HasMember("NetFlowSize") && !value["NetFlowSize"].IsNull())
    {
        if (!value["NetFlowSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.NetFlowSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netFlowSize = value["NetFlowSize"].GetInt64();
        m_netFlowSizeHasBeenSet = true;
    }

    if (value.HasMember("OperateSize") && !value["OperateSize"].IsNull())
    {
        if (!value["OperateSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.OperateSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operateSize = value["OperateSize"].GetInt64();
        m_operateSizeHasBeenSet = true;
    }

    if (value.HasMember("NDRRiskSize") && !value["NDRRiskSize"].IsNull())
    {
        if (!value["NDRRiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.NDRRiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRRiskSize = value["NDRRiskSize"].GetInt64();
        m_nDRRiskSizeHasBeenSet = true;
    }

    if (value.HasMember("NDRNetFlowSize") && !value["NDRNetFlowSize"].IsNull())
    {
        if (!value["NDRNetFlowSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.NDRNetFlowSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRNetFlowSize = value["NDRNetFlowSize"].GetInt64();
        m_nDRNetFlowSizeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ArrearsStopWriting") && !value["ArrearsStopWriting"].IsNull())
    {
        if (!value["ArrearsStopWriting"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewLogStorageDetail.ArrearsStopWriting` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_arrearsStopWriting = value["ArrearsStopWriting"].GetInt64();
        m_arrearsStopWritingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewLogStorageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usedBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedBytes, allocator);
    }

    if (m_totalBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBytes, allocator);
    }

    if (m_storageDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageDay, allocator);
    }

    if (m_nDRStorageDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRStorageDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRStorageDay, allocator);
    }

    if (m_aclSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclSize, allocator);
    }

    if (m_idsSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdsSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idsSize, allocator);
    }

    if (m_netFlowSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetFlowSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netFlowSize, allocator);
    }

    if (m_operateSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateSize, allocator);
    }

    if (m_nDRRiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRRiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRRiskSize, allocator);
    }

    if (m_nDRNetFlowSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRNetFlowSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRNetFlowSize, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_arrearsStopWritingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrearsStopWriting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_arrearsStopWriting, allocator);
    }

}


int64_t OverviewLogStorageDetail::GetUsedBytes() const
{
    return m_usedBytes;
}

void OverviewLogStorageDetail::SetUsedBytes(const int64_t& _usedBytes)
{
    m_usedBytes = _usedBytes;
    m_usedBytesHasBeenSet = true;
}

bool OverviewLogStorageDetail::UsedBytesHasBeenSet() const
{
    return m_usedBytesHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetTotalBytes() const
{
    return m_totalBytes;
}

void OverviewLogStorageDetail::SetTotalBytes(const int64_t& _totalBytes)
{
    m_totalBytes = _totalBytes;
    m_totalBytesHasBeenSet = true;
}

bool OverviewLogStorageDetail::TotalBytesHasBeenSet() const
{
    return m_totalBytesHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetStorageDay() const
{
    return m_storageDay;
}

void OverviewLogStorageDetail::SetStorageDay(const int64_t& _storageDay)
{
    m_storageDay = _storageDay;
    m_storageDayHasBeenSet = true;
}

bool OverviewLogStorageDetail::StorageDayHasBeenSet() const
{
    return m_storageDayHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetNDRStorageDay() const
{
    return m_nDRStorageDay;
}

void OverviewLogStorageDetail::SetNDRStorageDay(const int64_t& _nDRStorageDay)
{
    m_nDRStorageDay = _nDRStorageDay;
    m_nDRStorageDayHasBeenSet = true;
}

bool OverviewLogStorageDetail::NDRStorageDayHasBeenSet() const
{
    return m_nDRStorageDayHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetAclSize() const
{
    return m_aclSize;
}

void OverviewLogStorageDetail::SetAclSize(const int64_t& _aclSize)
{
    m_aclSize = _aclSize;
    m_aclSizeHasBeenSet = true;
}

bool OverviewLogStorageDetail::AclSizeHasBeenSet() const
{
    return m_aclSizeHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetIdsSize() const
{
    return m_idsSize;
}

void OverviewLogStorageDetail::SetIdsSize(const int64_t& _idsSize)
{
    m_idsSize = _idsSize;
    m_idsSizeHasBeenSet = true;
}

bool OverviewLogStorageDetail::IdsSizeHasBeenSet() const
{
    return m_idsSizeHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetNetFlowSize() const
{
    return m_netFlowSize;
}

void OverviewLogStorageDetail::SetNetFlowSize(const int64_t& _netFlowSize)
{
    m_netFlowSize = _netFlowSize;
    m_netFlowSizeHasBeenSet = true;
}

bool OverviewLogStorageDetail::NetFlowSizeHasBeenSet() const
{
    return m_netFlowSizeHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetOperateSize() const
{
    return m_operateSize;
}

void OverviewLogStorageDetail::SetOperateSize(const int64_t& _operateSize)
{
    m_operateSize = _operateSize;
    m_operateSizeHasBeenSet = true;
}

bool OverviewLogStorageDetail::OperateSizeHasBeenSet() const
{
    return m_operateSizeHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetNDRRiskSize() const
{
    return m_nDRRiskSize;
}

void OverviewLogStorageDetail::SetNDRRiskSize(const int64_t& _nDRRiskSize)
{
    m_nDRRiskSize = _nDRRiskSize;
    m_nDRRiskSizeHasBeenSet = true;
}

bool OverviewLogStorageDetail::NDRRiskSizeHasBeenSet() const
{
    return m_nDRRiskSizeHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetNDRNetFlowSize() const
{
    return m_nDRNetFlowSize;
}

void OverviewLogStorageDetail::SetNDRNetFlowSize(const int64_t& _nDRNetFlowSize)
{
    m_nDRNetFlowSize = _nDRNetFlowSize;
    m_nDRNetFlowSizeHasBeenSet = true;
}

bool OverviewLogStorageDetail::NDRNetFlowSizeHasBeenSet() const
{
    return m_nDRNetFlowSizeHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetPayMode() const
{
    return m_payMode;
}

void OverviewLogStorageDetail::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool OverviewLogStorageDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t OverviewLogStorageDetail::GetArrearsStopWriting() const
{
    return m_arrearsStopWriting;
}

void OverviewLogStorageDetail::SetArrearsStopWriting(const int64_t& _arrearsStopWriting)
{
    m_arrearsStopWriting = _arrearsStopWriting;
    m_arrearsStopWritingHasBeenSet = true;
}

bool OverviewLogStorageDetail::ArrearsStopWritingHasBeenSet() const
{
    return m_arrearsStopWritingHasBeenSet;
}

