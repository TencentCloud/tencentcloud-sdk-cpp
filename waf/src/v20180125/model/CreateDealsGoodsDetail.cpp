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

#include <tencentcloud/waf/v20180125/model/CreateDealsGoodsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreateDealsGoodsDetail::CreateDealsGoodsDetail() :
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_realRegionHasBeenSet(false),
    m_labelTypesHasBeenSet(false),
    m_labelCountsHasBeenSet(false),
    m_curDeadlineHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateDealsGoodsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("RealRegion") && !value["RealRegion"].IsNull())
    {
        if (!value["RealRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.RealRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realRegion = value["RealRegion"].GetInt64();
        m_realRegionHasBeenSet = true;
    }

    if (value.HasMember("LabelTypes") && !value["LabelTypes"].IsNull())
    {
        if (!value["LabelTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.LabelTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelTypes.push_back((*itr).GetString());
        }
        m_labelTypesHasBeenSet = true;
    }

    if (value.HasMember("LabelCounts") && !value["LabelCounts"].IsNull())
    {
        if (!value["LabelCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.LabelCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelCounts.push_back((*itr).GetInt64());
        }
        m_labelCountsHasBeenSet = true;
    }

    if (value.HasMember("CurDeadline") && !value["CurDeadline"].IsNull())
    {
        if (!value["CurDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDealsGoodsDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDealsGoodsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_realRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realRegion, allocator);
    }

    if (m_labelTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelTypes.begin(); itr != m_labelTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelCounts.begin(); itr != m_labelCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_curDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


int64_t CreateDealsGoodsDetail::GetTimeSpan() const
{
    return m_timeSpan;
}

void CreateDealsGoodsDetail::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CreateDealsGoodsDetail::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CreateDealsGoodsDetail::GetTimeUnit() const
{
    return m_timeUnit;
}

void CreateDealsGoodsDetail::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CreateDealsGoodsDetail::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string CreateDealsGoodsDetail::GetSubProductCode() const
{
    return m_subProductCode;
}

void CreateDealsGoodsDetail::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool CreateDealsGoodsDetail::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

int64_t CreateDealsGoodsDetail::GetPid() const
{
    return m_pid;
}

void CreateDealsGoodsDetail::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool CreateDealsGoodsDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string CreateDealsGoodsDetail::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDealsGoodsDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDealsGoodsDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t CreateDealsGoodsDetail::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDealsGoodsDetail::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDealsGoodsDetail::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t CreateDealsGoodsDetail::GetRealRegion() const
{
    return m_realRegion;
}

void CreateDealsGoodsDetail::SetRealRegion(const int64_t& _realRegion)
{
    m_realRegion = _realRegion;
    m_realRegionHasBeenSet = true;
}

bool CreateDealsGoodsDetail::RealRegionHasBeenSet() const
{
    return m_realRegionHasBeenSet;
}

vector<string> CreateDealsGoodsDetail::GetLabelTypes() const
{
    return m_labelTypes;
}

void CreateDealsGoodsDetail::SetLabelTypes(const vector<string>& _labelTypes)
{
    m_labelTypes = _labelTypes;
    m_labelTypesHasBeenSet = true;
}

bool CreateDealsGoodsDetail::LabelTypesHasBeenSet() const
{
    return m_labelTypesHasBeenSet;
}

vector<int64_t> CreateDealsGoodsDetail::GetLabelCounts() const
{
    return m_labelCounts;
}

void CreateDealsGoodsDetail::SetLabelCounts(const vector<int64_t>& _labelCounts)
{
    m_labelCounts = _labelCounts;
    m_labelCountsHasBeenSet = true;
}

bool CreateDealsGoodsDetail::LabelCountsHasBeenSet() const
{
    return m_labelCountsHasBeenSet;
}

string CreateDealsGoodsDetail::GetCurDeadline() const
{
    return m_curDeadline;
}

void CreateDealsGoodsDetail::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool CreateDealsGoodsDetail::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

string CreateDealsGoodsDetail::GetInstanceId() const
{
    return m_instanceId;
}

void CreateDealsGoodsDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateDealsGoodsDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateDealsGoodsDetail::GetResourceId() const
{
    return m_resourceId;
}

void CreateDealsGoodsDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateDealsGoodsDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

