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

#include <tencentcloud/monitor/v20180724/model/DimensionNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DimensionNew::DimensionNew() :
    m_keyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_operatorsHasBeenSet(false),
    m_isMultipleHasBeenSet(false),
    m_isMutableHasBeenSet(false),
    m_isVisibleHasBeenSet(false),
    m_canFilterPolicyHasBeenSet(false),
    m_canFilterHistoryHasBeenSet(false),
    m_canGroupByHasBeenSet(false),
    m_mustGroupByHasBeenSet(false),
    m_showValueReplaceHasBeenSet(false)
{
}

CoreInternalOutcome DimensionNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("Operators") && !value["Operators"].IsNull())
    {
        if (!value["Operators"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DimensionNew.Operators` is not array type"));

        const rapidjson::Value &tmpValue = value["Operators"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Operator item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operators.push_back(item);
        }
        m_operatorsHasBeenSet = true;
    }

    if (value.HasMember("IsMultiple") && !value["IsMultiple"].IsNull())
    {
        if (!value["IsMultiple"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.IsMultiple` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMultiple = value["IsMultiple"].GetBool();
        m_isMultipleHasBeenSet = true;
    }

    if (value.HasMember("IsMutable") && !value["IsMutable"].IsNull())
    {
        if (!value["IsMutable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.IsMutable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMutable = value["IsMutable"].GetBool();
        m_isMutableHasBeenSet = true;
    }

    if (value.HasMember("IsVisible") && !value["IsVisible"].IsNull())
    {
        if (!value["IsVisible"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.IsVisible` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVisible = value["IsVisible"].GetBool();
        m_isVisibleHasBeenSet = true;
    }

    if (value.HasMember("CanFilterPolicy") && !value["CanFilterPolicy"].IsNull())
    {
        if (!value["CanFilterPolicy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.CanFilterPolicy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canFilterPolicy = value["CanFilterPolicy"].GetBool();
        m_canFilterPolicyHasBeenSet = true;
    }

    if (value.HasMember("CanFilterHistory") && !value["CanFilterHistory"].IsNull())
    {
        if (!value["CanFilterHistory"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.CanFilterHistory` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canFilterHistory = value["CanFilterHistory"].GetBool();
        m_canFilterHistoryHasBeenSet = true;
    }

    if (value.HasMember("CanGroupBy") && !value["CanGroupBy"].IsNull())
    {
        if (!value["CanGroupBy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.CanGroupBy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canGroupBy = value["CanGroupBy"].GetBool();
        m_canGroupByHasBeenSet = true;
    }

    if (value.HasMember("MustGroupBy") && !value["MustGroupBy"].IsNull())
    {
        if (!value["MustGroupBy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.MustGroupBy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mustGroupBy = value["MustGroupBy"].GetBool();
        m_mustGroupByHasBeenSet = true;
    }

    if (value.HasMember("ShowValueReplace") && !value["ShowValueReplace"].IsNull())
    {
        if (!value["ShowValueReplace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimensionNew.ShowValueReplace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_showValueReplace = string(value["ShowValueReplace"].GetString());
        m_showValueReplaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

    if (m_operatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operators";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operators.begin(); itr != m_operators.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isMultipleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMultiple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMultiple, allocator);
    }

    if (m_isMutableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMutable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMutable, allocator);
    }

    if (m_isVisibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVisible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVisible, allocator);
    }

    if (m_canFilterPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanFilterPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canFilterPolicy, allocator);
    }

    if (m_canFilterHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanFilterHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canFilterHistory, allocator);
    }

    if (m_canGroupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanGroupBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canGroupBy, allocator);
    }

    if (m_mustGroupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MustGroupBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mustGroupBy, allocator);
    }

    if (m_showValueReplaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowValueReplace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_showValueReplace.c_str(), allocator).Move(), allocator);
    }

}


string DimensionNew::GetKey() const
{
    return m_key;
}

void DimensionNew::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DimensionNew::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DimensionNew::GetName() const
{
    return m_name;
}

void DimensionNew::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DimensionNew::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool DimensionNew::GetIsRequired() const
{
    return m_isRequired;
}

void DimensionNew::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool DimensionNew::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

vector<Operator> DimensionNew::GetOperators() const
{
    return m_operators;
}

void DimensionNew::SetOperators(const vector<Operator>& _operators)
{
    m_operators = _operators;
    m_operatorsHasBeenSet = true;
}

bool DimensionNew::OperatorsHasBeenSet() const
{
    return m_operatorsHasBeenSet;
}

bool DimensionNew::GetIsMultiple() const
{
    return m_isMultiple;
}

void DimensionNew::SetIsMultiple(const bool& _isMultiple)
{
    m_isMultiple = _isMultiple;
    m_isMultipleHasBeenSet = true;
}

bool DimensionNew::IsMultipleHasBeenSet() const
{
    return m_isMultipleHasBeenSet;
}

bool DimensionNew::GetIsMutable() const
{
    return m_isMutable;
}

void DimensionNew::SetIsMutable(const bool& _isMutable)
{
    m_isMutable = _isMutable;
    m_isMutableHasBeenSet = true;
}

bool DimensionNew::IsMutableHasBeenSet() const
{
    return m_isMutableHasBeenSet;
}

bool DimensionNew::GetIsVisible() const
{
    return m_isVisible;
}

void DimensionNew::SetIsVisible(const bool& _isVisible)
{
    m_isVisible = _isVisible;
    m_isVisibleHasBeenSet = true;
}

bool DimensionNew::IsVisibleHasBeenSet() const
{
    return m_isVisibleHasBeenSet;
}

bool DimensionNew::GetCanFilterPolicy() const
{
    return m_canFilterPolicy;
}

void DimensionNew::SetCanFilterPolicy(const bool& _canFilterPolicy)
{
    m_canFilterPolicy = _canFilterPolicy;
    m_canFilterPolicyHasBeenSet = true;
}

bool DimensionNew::CanFilterPolicyHasBeenSet() const
{
    return m_canFilterPolicyHasBeenSet;
}

bool DimensionNew::GetCanFilterHistory() const
{
    return m_canFilterHistory;
}

void DimensionNew::SetCanFilterHistory(const bool& _canFilterHistory)
{
    m_canFilterHistory = _canFilterHistory;
    m_canFilterHistoryHasBeenSet = true;
}

bool DimensionNew::CanFilterHistoryHasBeenSet() const
{
    return m_canFilterHistoryHasBeenSet;
}

bool DimensionNew::GetCanGroupBy() const
{
    return m_canGroupBy;
}

void DimensionNew::SetCanGroupBy(const bool& _canGroupBy)
{
    m_canGroupBy = _canGroupBy;
    m_canGroupByHasBeenSet = true;
}

bool DimensionNew::CanGroupByHasBeenSet() const
{
    return m_canGroupByHasBeenSet;
}

bool DimensionNew::GetMustGroupBy() const
{
    return m_mustGroupBy;
}

void DimensionNew::SetMustGroupBy(const bool& _mustGroupBy)
{
    m_mustGroupBy = _mustGroupBy;
    m_mustGroupByHasBeenSet = true;
}

bool DimensionNew::MustGroupByHasBeenSet() const
{
    return m_mustGroupByHasBeenSet;
}

string DimensionNew::GetShowValueReplace() const
{
    return m_showValueReplace;
}

void DimensionNew::SetShowValueReplace(const string& _showValueReplace)
{
    m_showValueReplace = _showValueReplace;
    m_showValueReplaceHasBeenSet = true;
}

bool DimensionNew::ShowValueReplaceHasBeenSet() const
{
    return m_showValueReplaceHasBeenSet;
}

