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

#include <tencentcloud/ga2/v20250115/model/GlobalAcceleratorSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

GlobalAcceleratorSet::GlobalAcceleratorSet() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_ddosIdHasBeenSet(false),
    m_listenerCountsHasBeenSet(false),
    m_acceleratorAreaCountsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_crossBorderTypeHasBeenSet(false),
    m_tagSetHasBeenSet(false)
{
}

CoreInternalOutcome GlobalAcceleratorSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalAcceleratorId") && !value["GlobalAcceleratorId"].IsNull())
    {
        if (!value["GlobalAcceleratorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.GlobalAcceleratorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalAcceleratorId = string(value["GlobalAcceleratorId"].GetString());
        m_globalAcceleratorIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("DdosId") && !value["DdosId"].IsNull())
    {
        if (!value["DdosId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.DdosId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ddosId = string(value["DdosId"].GetString());
        m_ddosIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerCounts") && !value["ListenerCounts"].IsNull())
    {
        if (!value["ListenerCounts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.ListenerCounts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerCounts = value["ListenerCounts"].GetUint64();
        m_listenerCountsHasBeenSet = true;
    }

    if (value.HasMember("AcceleratorAreaCounts") && !value["AcceleratorAreaCounts"].IsNull())
    {
        if (!value["AcceleratorAreaCounts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.AcceleratorAreaCounts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_acceleratorAreaCounts = value["AcceleratorAreaCounts"].GetUint64();
        m_acceleratorAreaCountsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("CrossBorderType") && !value["CrossBorderType"].IsNull())
    {
        if (!value["CrossBorderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.CrossBorderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossBorderType = string(value["CrossBorderType"].GetString());
        m_crossBorderTypeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GlobalAcceleratorSet.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalAcceleratorSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_ddosIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ddosId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerCounts, allocator);
    }

    if (m_acceleratorAreaCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceleratorAreaCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_acceleratorAreaCounts, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBorderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBorderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossBorderType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GlobalAcceleratorSet::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void GlobalAcceleratorSet::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool GlobalAcceleratorSet::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string GlobalAcceleratorSet::GetName() const
{
    return m_name;
}

void GlobalAcceleratorSet::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GlobalAcceleratorSet::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GlobalAcceleratorSet::GetDescription() const
{
    return m_description;
}

void GlobalAcceleratorSet::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GlobalAcceleratorSet::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GlobalAcceleratorSet::GetCreateTime() const
{
    return m_createTime;
}

void GlobalAcceleratorSet::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GlobalAcceleratorSet::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GlobalAcceleratorSet::GetState() const
{
    return m_state;
}

void GlobalAcceleratorSet::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool GlobalAcceleratorSet::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string GlobalAcceleratorSet::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void GlobalAcceleratorSet::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool GlobalAcceleratorSet::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string GlobalAcceleratorSet::GetDdosId() const
{
    return m_ddosId;
}

void GlobalAcceleratorSet::SetDdosId(const string& _ddosId)
{
    m_ddosId = _ddosId;
    m_ddosIdHasBeenSet = true;
}

bool GlobalAcceleratorSet::DdosIdHasBeenSet() const
{
    return m_ddosIdHasBeenSet;
}

uint64_t GlobalAcceleratorSet::GetListenerCounts() const
{
    return m_listenerCounts;
}

void GlobalAcceleratorSet::SetListenerCounts(const uint64_t& _listenerCounts)
{
    m_listenerCounts = _listenerCounts;
    m_listenerCountsHasBeenSet = true;
}

bool GlobalAcceleratorSet::ListenerCountsHasBeenSet() const
{
    return m_listenerCountsHasBeenSet;
}

uint64_t GlobalAcceleratorSet::GetAcceleratorAreaCounts() const
{
    return m_acceleratorAreaCounts;
}

void GlobalAcceleratorSet::SetAcceleratorAreaCounts(const uint64_t& _acceleratorAreaCounts)
{
    m_acceleratorAreaCounts = _acceleratorAreaCounts;
    m_acceleratorAreaCountsHasBeenSet = true;
}

bool GlobalAcceleratorSet::AcceleratorAreaCountsHasBeenSet() const
{
    return m_acceleratorAreaCountsHasBeenSet;
}

string GlobalAcceleratorSet::GetStatus() const
{
    return m_status;
}

void GlobalAcceleratorSet::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GlobalAcceleratorSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GlobalAcceleratorSet::GetCname() const
{
    return m_cname;
}

void GlobalAcceleratorSet::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool GlobalAcceleratorSet::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

string GlobalAcceleratorSet::GetCrossBorderType() const
{
    return m_crossBorderType;
}

void GlobalAcceleratorSet::SetCrossBorderType(const string& _crossBorderType)
{
    m_crossBorderType = _crossBorderType;
    m_crossBorderTypeHasBeenSet = true;
}

bool GlobalAcceleratorSet::CrossBorderTypeHasBeenSet() const
{
    return m_crossBorderTypeHasBeenSet;
}

vector<Tag> GlobalAcceleratorSet::GetTagSet() const
{
    return m_tagSet;
}

void GlobalAcceleratorSet::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool GlobalAcceleratorSet::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

