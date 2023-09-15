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

#include <tencentcloud/essbasic/v20210526/model/Permission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

Permission::Permission() :
    m_nameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_hideHasBeenSet(false),
    m_dataLabelHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_dataRangeHasBeenSet(false),
    m_dataToHasBeenSet(false),
    m_parentKeyHasBeenSet(false),
    m_isCheckedHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome Permission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Hide") && !value["Hide"].IsNull())
    {
        if (!value["Hide"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.Hide` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hide = value["Hide"].GetInt64();
        m_hideHasBeenSet = true;
    }

    if (value.HasMember("DataLabel") && !value["DataLabel"].IsNull())
    {
        if (!value["DataLabel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.DataLabel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataLabel = value["DataLabel"].GetInt64();
        m_dataLabelHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.DataType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = value["DataType"].GetInt64();
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("DataRange") && !value["DataRange"].IsNull())
    {
        if (!value["DataRange"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.DataRange` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataRange = value["DataRange"].GetInt64();
        m_dataRangeHasBeenSet = true;
    }

    if (value.HasMember("DataTo") && !value["DataTo"].IsNull())
    {
        if (!value["DataTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.DataTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTo = string(value["DataTo"].GetString());
        m_dataToHasBeenSet = true;
    }

    if (value.HasMember("ParentKey") && !value["ParentKey"].IsNull())
    {
        if (!value["ParentKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.ParentKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentKey = string(value["ParentKey"].GetString());
        m_parentKeyHasBeenSet = true;
    }

    if (value.HasMember("IsChecked") && !value["IsChecked"].IsNull())
    {
        if (!value["IsChecked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Permission.IsChecked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isChecked = value["IsChecked"].GetBool();
        m_isCheckedHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Permission.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Permission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Permission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_hideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hide, allocator);
    }

    if (m_dataLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataLabel, allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataType, allocator);
    }

    if (m_dataRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRange, allocator);
    }

    if (m_dataToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTo.c_str(), allocator).Move(), allocator);
    }

    if (m_parentKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentKey.c_str(), allocator).Move(), allocator);
    }

    if (m_isCheckedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChecked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isChecked, allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Permission::GetName() const
{
    return m_name;
}

void Permission::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Permission::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Permission::GetKey() const
{
    return m_key;
}

void Permission::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool Permission::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t Permission::GetType() const
{
    return m_type;
}

void Permission::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Permission::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t Permission::GetHide() const
{
    return m_hide;
}

void Permission::SetHide(const int64_t& _hide)
{
    m_hide = _hide;
    m_hideHasBeenSet = true;
}

bool Permission::HideHasBeenSet() const
{
    return m_hideHasBeenSet;
}

int64_t Permission::GetDataLabel() const
{
    return m_dataLabel;
}

void Permission::SetDataLabel(const int64_t& _dataLabel)
{
    m_dataLabel = _dataLabel;
    m_dataLabelHasBeenSet = true;
}

bool Permission::DataLabelHasBeenSet() const
{
    return m_dataLabelHasBeenSet;
}

int64_t Permission::GetDataType() const
{
    return m_dataType;
}

void Permission::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool Permission::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

int64_t Permission::GetDataRange() const
{
    return m_dataRange;
}

void Permission::SetDataRange(const int64_t& _dataRange)
{
    m_dataRange = _dataRange;
    m_dataRangeHasBeenSet = true;
}

bool Permission::DataRangeHasBeenSet() const
{
    return m_dataRangeHasBeenSet;
}

string Permission::GetDataTo() const
{
    return m_dataTo;
}

void Permission::SetDataTo(const string& _dataTo)
{
    m_dataTo = _dataTo;
    m_dataToHasBeenSet = true;
}

bool Permission::DataToHasBeenSet() const
{
    return m_dataToHasBeenSet;
}

string Permission::GetParentKey() const
{
    return m_parentKey;
}

void Permission::SetParentKey(const string& _parentKey)
{
    m_parentKey = _parentKey;
    m_parentKeyHasBeenSet = true;
}

bool Permission::ParentKeyHasBeenSet() const
{
    return m_parentKeyHasBeenSet;
}

bool Permission::GetIsChecked() const
{
    return m_isChecked;
}

void Permission::SetIsChecked(const bool& _isChecked)
{
    m_isChecked = _isChecked;
    m_isCheckedHasBeenSet = true;
}

bool Permission::IsCheckedHasBeenSet() const
{
    return m_isCheckedHasBeenSet;
}

vector<Permission> Permission::GetChildren() const
{
    return m_children;
}

void Permission::SetChildren(const vector<Permission>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool Permission::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

