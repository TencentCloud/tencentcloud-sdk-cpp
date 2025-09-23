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

#include <tencentcloud/cfw/v20190904/model/StorageHistogram.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

StorageHistogram::StorageHistogram() :
    m_aclSizeHasBeenSet(false),
    m_idsSizeHasBeenSet(false),
    m_netFlowSizeHasBeenSet(false),
    m_operateSizeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_nDRNetflowSizeHasBeenSet(false),
    m_nDRRiskSizeHasBeenSet(false)
{
}

CoreInternalOutcome StorageHistogram::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AclSize") && !value["AclSize"].IsNull())
    {
        if (!value["AclSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageHistogram.AclSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aclSize = value["AclSize"].GetInt64();
        m_aclSizeHasBeenSet = true;
    }

    if (value.HasMember("IdsSize") && !value["IdsSize"].IsNull())
    {
        if (!value["IdsSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageHistogram.IdsSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idsSize = value["IdsSize"].GetInt64();
        m_idsSizeHasBeenSet = true;
    }

    if (value.HasMember("NetFlowSize") && !value["NetFlowSize"].IsNull())
    {
        if (!value["NetFlowSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageHistogram.NetFlowSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netFlowSize = value["NetFlowSize"].GetInt64();
        m_netFlowSizeHasBeenSet = true;
    }

    if (value.HasMember("OperateSize") && !value["OperateSize"].IsNull())
    {
        if (!value["OperateSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageHistogram.OperateSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operateSize = value["OperateSize"].GetInt64();
        m_operateSizeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageHistogram.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("NDRNetflowSize") && !value["NDRNetflowSize"].IsNull())
    {
        if (!value["NDRNetflowSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageHistogram.NDRNetflowSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRNetflowSize = value["NDRNetflowSize"].GetInt64();
        m_nDRNetflowSizeHasBeenSet = true;
    }

    if (value.HasMember("NDRRiskSize") && !value["NDRRiskSize"].IsNull())
    {
        if (!value["NDRRiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageHistogram.NDRRiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nDRRiskSize = value["NDRRiskSize"].GetInt64();
        m_nDRRiskSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageHistogram::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_nDRNetflowSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRNetflowSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRNetflowSize, allocator);
    }

    if (m_nDRRiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NDRRiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nDRRiskSize, allocator);
    }

}


int64_t StorageHistogram::GetAclSize() const
{
    return m_aclSize;
}

void StorageHistogram::SetAclSize(const int64_t& _aclSize)
{
    m_aclSize = _aclSize;
    m_aclSizeHasBeenSet = true;
}

bool StorageHistogram::AclSizeHasBeenSet() const
{
    return m_aclSizeHasBeenSet;
}

int64_t StorageHistogram::GetIdsSize() const
{
    return m_idsSize;
}

void StorageHistogram::SetIdsSize(const int64_t& _idsSize)
{
    m_idsSize = _idsSize;
    m_idsSizeHasBeenSet = true;
}

bool StorageHistogram::IdsSizeHasBeenSet() const
{
    return m_idsSizeHasBeenSet;
}

int64_t StorageHistogram::GetNetFlowSize() const
{
    return m_netFlowSize;
}

void StorageHistogram::SetNetFlowSize(const int64_t& _netFlowSize)
{
    m_netFlowSize = _netFlowSize;
    m_netFlowSizeHasBeenSet = true;
}

bool StorageHistogram::NetFlowSizeHasBeenSet() const
{
    return m_netFlowSizeHasBeenSet;
}

int64_t StorageHistogram::GetOperateSize() const
{
    return m_operateSize;
}

void StorageHistogram::SetOperateSize(const int64_t& _operateSize)
{
    m_operateSize = _operateSize;
    m_operateSizeHasBeenSet = true;
}

bool StorageHistogram::OperateSizeHasBeenSet() const
{
    return m_operateSizeHasBeenSet;
}

string StorageHistogram::GetTime() const
{
    return m_time;
}

void StorageHistogram::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool StorageHistogram::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t StorageHistogram::GetNDRNetflowSize() const
{
    return m_nDRNetflowSize;
}

void StorageHistogram::SetNDRNetflowSize(const int64_t& _nDRNetflowSize)
{
    m_nDRNetflowSize = _nDRNetflowSize;
    m_nDRNetflowSizeHasBeenSet = true;
}

bool StorageHistogram::NDRNetflowSizeHasBeenSet() const
{
    return m_nDRNetflowSizeHasBeenSet;
}

int64_t StorageHistogram::GetNDRRiskSize() const
{
    return m_nDRRiskSize;
}

void StorageHistogram::SetNDRRiskSize(const int64_t& _nDRRiskSize)
{
    m_nDRRiskSize = _nDRRiskSize;
    m_nDRRiskSizeHasBeenSet = true;
}

bool StorageHistogram::NDRRiskSizeHasBeenSet() const
{
    return m_nDRRiskSizeHasBeenSet;
}

