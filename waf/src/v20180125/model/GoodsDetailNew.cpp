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

#include <tencentcloud/waf/v20180125/model/GoodsDetailNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

GoodsDetailNew::GoodsDetailNew() :
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
    m_resourceIdHasBeenSet(false),
    m_microVersionHasBeenSet(false)
{
}

CoreInternalOutcome GoodsDetailNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("RealRegion") && !value["RealRegion"].IsNull())
    {
        if (!value["RealRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.RealRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realRegion = value["RealRegion"].GetInt64();
        m_realRegionHasBeenSet = true;
    }

    if (value.HasMember("LabelTypes") && !value["LabelTypes"].IsNull())
    {
        if (!value["LabelTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.LabelTypes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.LabelCounts` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("MicroVersion") && !value["MicroVersion"].IsNull())
    {
        if (!value["MicroVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetailNew.MicroVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microVersion = string(value["MicroVersion"].GetString());
        m_microVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GoodsDetailNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_microVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t GoodsDetailNew::GetTimeSpan() const
{
    return m_timeSpan;
}

void GoodsDetailNew::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool GoodsDetailNew::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string GoodsDetailNew::GetTimeUnit() const
{
    return m_timeUnit;
}

void GoodsDetailNew::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool GoodsDetailNew::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string GoodsDetailNew::GetSubProductCode() const
{
    return m_subProductCode;
}

void GoodsDetailNew::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool GoodsDetailNew::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

int64_t GoodsDetailNew::GetPid() const
{
    return m_pid;
}

void GoodsDetailNew::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool GoodsDetailNew::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string GoodsDetailNew::GetInstanceName() const
{
    return m_instanceName;
}

void GoodsDetailNew::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool GoodsDetailNew::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t GoodsDetailNew::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void GoodsDetailNew::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool GoodsDetailNew::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t GoodsDetailNew::GetRealRegion() const
{
    return m_realRegion;
}

void GoodsDetailNew::SetRealRegion(const int64_t& _realRegion)
{
    m_realRegion = _realRegion;
    m_realRegionHasBeenSet = true;
}

bool GoodsDetailNew::RealRegionHasBeenSet() const
{
    return m_realRegionHasBeenSet;
}

vector<string> GoodsDetailNew::GetLabelTypes() const
{
    return m_labelTypes;
}

void GoodsDetailNew::SetLabelTypes(const vector<string>& _labelTypes)
{
    m_labelTypes = _labelTypes;
    m_labelTypesHasBeenSet = true;
}

bool GoodsDetailNew::LabelTypesHasBeenSet() const
{
    return m_labelTypesHasBeenSet;
}

vector<int64_t> GoodsDetailNew::GetLabelCounts() const
{
    return m_labelCounts;
}

void GoodsDetailNew::SetLabelCounts(const vector<int64_t>& _labelCounts)
{
    m_labelCounts = _labelCounts;
    m_labelCountsHasBeenSet = true;
}

bool GoodsDetailNew::LabelCountsHasBeenSet() const
{
    return m_labelCountsHasBeenSet;
}

string GoodsDetailNew::GetCurDeadline() const
{
    return m_curDeadline;
}

void GoodsDetailNew::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool GoodsDetailNew::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

string GoodsDetailNew::GetInstanceId() const
{
    return m_instanceId;
}

void GoodsDetailNew::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GoodsDetailNew::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string GoodsDetailNew::GetResourceId() const
{
    return m_resourceId;
}

void GoodsDetailNew::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool GoodsDetailNew::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string GoodsDetailNew::GetMicroVersion() const
{
    return m_microVersion;
}

void GoodsDetailNew::SetMicroVersion(const string& _microVersion)
{
    m_microVersion = _microVersion;
    m_microVersionHasBeenSet = true;
}

bool GoodsDetailNew::MicroVersionHasBeenSet() const
{
    return m_microVersionHasBeenSet;
}

