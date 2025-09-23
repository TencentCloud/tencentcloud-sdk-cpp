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

#include <tencentcloud/cfw/v20190904/model/DescribeLogStorageStatisticResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeLogStorageStatisticResponse::DescribeLogStorageStatisticResponse() :
    m_returnCodeHasBeenSet(false),
    m_returnMsgHasBeenSet(false),
    m_usedSizeHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_storageDayHasBeenSet(false),
    m_aclSizeHasBeenSet(false),
    m_idsSizeHasBeenSet(false),
    m_netFlowSizeHasBeenSet(false),
    m_operateSizeHasBeenSet(false),
    m_leftSizeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_timeHistogramHasBeenSet(false),
    m_timeHistogramShowHasBeenSet(false),
    m_arrearsStopWritingHasBeenSet(false),
    m_nDRNetFlowSizeHasBeenSet(false),
    m_nDRRiskSizeHasBeenSet(false),
    m_nDRStorageDayHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLogStorageStatisticResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReturnCode") && !rsp["ReturnCode"].IsNull())
    {
        if (!rsp["ReturnCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = rsp["ReturnCode"].GetInt64();
        m_returnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnMsg") && !rsp["ReturnMsg"].IsNull())
    {
        if (!rsp["ReturnMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReturnMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMsg = string(rsp["ReturnMsg"].GetString());
        m_returnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("UsedSize") && !rsp["UsedSize"].IsNull())
    {
        if (!rsp["UsedSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedSize = rsp["UsedSize"].GetInt64();
        m_usedSizeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalSize") && !rsp["TotalSize"].IsNull())
    {
        if (!rsp["TotalSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = rsp["TotalSize"].GetInt64();
        m_totalSizeHasBeenSet = true;
    }

    if (rsp.HasMember("StorageDay") && !rsp["StorageDay"].IsNull())
    {
        if (!rsp["StorageDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageDay = rsp["StorageDay"].GetInt64();
        m_storageDayHasBeenSet = true;
    }

    if (rsp.HasMember("AclSize") && !rsp["AclSize"].IsNull())
    {
        if (!rsp["AclSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aclSize = rsp["AclSize"].GetInt64();
        m_aclSizeHasBeenSet = true;
    }

    if (rsp.HasMember("IdsSize") && !rsp["IdsSize"].IsNull())
    {
        if (!rsp["IdsSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdsSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idsSize = rsp["IdsSize"].GetInt64();
        m_idsSizeHasBeenSet = true;
    }

    if (rsp.HasMember("NetFlowSize") && !rsp["NetFlowSize"].IsNull())
    {
        if (!rsp["NetFlowSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetFlowSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netFlowSize = rsp["NetFlowSize"].GetInt64();
        m_netFlowSizeHasBeenSet = true;
    }

    if (rsp.HasMember("OperateSize") && !rsp["OperateSize"].IsNull())
    {
        if (!rsp["OperateSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperateSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operateSize = rsp["OperateSize"].GetInt64();
        m_operateSizeHasBeenSet = true;
    }

    if (rsp.HasMember("LeftSize") && !rsp["LeftSize"].IsNull())
    {
        if (!rsp["LeftSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leftSize = rsp["LeftSize"].GetInt64();
        m_leftSizeHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = rsp["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("TimeHistogram") && !rsp["TimeHistogram"].IsNull())
    {
        if (!rsp["TimeHistogram"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeHistogram` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TimeHistogram"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StorageHistogram item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeHistogram.push_back(item);
        }
        m_timeHistogramHasBeenSet = true;
    }

    if (rsp.HasMember("TimeHistogramShow") && !rsp["TimeHistogramShow"].IsNull())
    {
        if (!rsp["TimeHistogramShow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimeHistogramShow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeHistogramShow.Deserialize(rsp["TimeHistogramShow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeHistogramShowHasBeenSet = true;
    }

    if (rsp.HasMember("ArrearsStopWriting") && !rsp["ArrearsStopWriting"].IsNull())
    {
        if (!rsp["ArrearsStopWriting"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArrearsStopWriting` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_arrearsStopWriting = rsp["ArrearsStopWriting"].GetInt64();
        m_arrearsStopWritingHasBeenSet = true;
    }

    if (rsp.HasMember("NDRNetFlowSize") && !rsp["NDRNetFlowSize"].IsNull())
    {
        if (!rsp["NDRNetFlowSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NDRNetFlowSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRNetFlowSize = rsp["NDRNetFlowSize"].GetInt64();
        m_nDRNetFlowSizeHasBeenSet = true;
    }

    if (rsp.HasMember("NDRRiskSize") && !rsp["NDRRiskSize"].IsNull())
    {
        if (!rsp["NDRRiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NDRRiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRRiskSize = rsp["NDRRiskSize"].GetInt64();
        m_nDRRiskSizeHasBeenSet = true;
    }

    if (rsp.HasMember("NDRStorageDay") && !rsp["NDRStorageDay"].IsNull())
    {
        if (!rsp["NDRStorageDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NDRStorageDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRStorageDay = rsp["NDRStorageDay"].GetInt64();
        m_nDRStorageDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLogStorageStatisticResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_returnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnCode, allocator);
    }

    if (m_returnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_usedSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedSize, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSize, allocator);
    }

    if (m_storageDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageDay, allocator);
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

    if (m_leftSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftSize, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_timeHistogramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeHistogram";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeHistogram.begin(); itr != m_timeHistogram.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timeHistogramShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeHistogramShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeHistogramShow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_arrearsStopWritingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrearsStopWriting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_arrearsStopWriting, allocator);
    }

    if (m_nDRNetFlowSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRNetFlowSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRNetFlowSize, allocator);
    }

    if (m_nDRRiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRRiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRRiskSize, allocator);
    }

    if (m_nDRStorageDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRStorageDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRStorageDay, allocator);
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


int64_t DescribeLogStorageStatisticResponse::GetReturnCode() const
{
    return m_returnCode;
}

bool DescribeLogStorageStatisticResponse::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string DescribeLogStorageStatisticResponse::GetReturnMsg() const
{
    return m_returnMsg;
}

bool DescribeLogStorageStatisticResponse::ReturnMsgHasBeenSet() const
{
    return m_returnMsgHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetUsedSize() const
{
    return m_usedSize;
}

bool DescribeLogStorageStatisticResponse::UsedSizeHasBeenSet() const
{
    return m_usedSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetTotalSize() const
{
    return m_totalSize;
}

bool DescribeLogStorageStatisticResponse::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetStorageDay() const
{
    return m_storageDay;
}

bool DescribeLogStorageStatisticResponse::StorageDayHasBeenSet() const
{
    return m_storageDayHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetAclSize() const
{
    return m_aclSize;
}

bool DescribeLogStorageStatisticResponse::AclSizeHasBeenSet() const
{
    return m_aclSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetIdsSize() const
{
    return m_idsSize;
}

bool DescribeLogStorageStatisticResponse::IdsSizeHasBeenSet() const
{
    return m_idsSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetNetFlowSize() const
{
    return m_netFlowSize;
}

bool DescribeLogStorageStatisticResponse::NetFlowSizeHasBeenSet() const
{
    return m_netFlowSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetOperateSize() const
{
    return m_operateSize;
}

bool DescribeLogStorageStatisticResponse::OperateSizeHasBeenSet() const
{
    return m_operateSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetLeftSize() const
{
    return m_leftSize;
}

bool DescribeLogStorageStatisticResponse::LeftSizeHasBeenSet() const
{
    return m_leftSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeLogStorageStatisticResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<StorageHistogram> DescribeLogStorageStatisticResponse::GetTimeHistogram() const
{
    return m_timeHistogram;
}

bool DescribeLogStorageStatisticResponse::TimeHistogramHasBeenSet() const
{
    return m_timeHistogramHasBeenSet;
}

StorageHistogramShow DescribeLogStorageStatisticResponse::GetTimeHistogramShow() const
{
    return m_timeHistogramShow;
}

bool DescribeLogStorageStatisticResponse::TimeHistogramShowHasBeenSet() const
{
    return m_timeHistogramShowHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetArrearsStopWriting() const
{
    return m_arrearsStopWriting;
}

bool DescribeLogStorageStatisticResponse::ArrearsStopWritingHasBeenSet() const
{
    return m_arrearsStopWritingHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetNDRNetFlowSize() const
{
    return m_nDRNetFlowSize;
}

bool DescribeLogStorageStatisticResponse::NDRNetFlowSizeHasBeenSet() const
{
    return m_nDRNetFlowSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetNDRRiskSize() const
{
    return m_nDRRiskSize;
}

bool DescribeLogStorageStatisticResponse::NDRRiskSizeHasBeenSet() const
{
    return m_nDRRiskSizeHasBeenSet;
}

int64_t DescribeLogStorageStatisticResponse::GetNDRStorageDay() const
{
    return m_nDRStorageDay;
}

bool DescribeLogStorageStatisticResponse::NDRStorageDayHasBeenSet() const
{
    return m_nDRStorageDayHasBeenSet;
}


