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

#include <tencentcloud/databuddy/v20260715/model/FieldTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FieldTagInfo::FieldTagInfo() :
    m_fieldNameHasBeenSet(false),
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_labelTypeHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_labelValueIdHasBeenSet(false),
    m_labelValueHasBeenSet(false)
{
}

CoreInternalOutcome FieldTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTagInfo.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTagInfo.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTagInfo.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("LabelType") && !value["LabelType"].IsNull())
    {
        if (!value["LabelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTagInfo.LabelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_labelType = value["LabelType"].GetInt64();
        m_labelTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTagInfo.FieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = string(value["FieldType"].GetString());
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("LabelValueId") && !value["LabelValueId"].IsNull())
    {
        if (!value["LabelValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTagInfo.LabelValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValueId = string(value["LabelValueId"].GetString());
        m_labelValueIdHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTagInfo.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_labelType, allocator);
    }

    if (m_fieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValueId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelValue.c_str(), allocator).Move(), allocator);
    }

}


string FieldTagInfo::GetFieldName() const
{
    return m_fieldName;
}

void FieldTagInfo::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool FieldTagInfo::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string FieldTagInfo::GetLabelId() const
{
    return m_labelId;
}

void FieldTagInfo::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool FieldTagInfo::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string FieldTagInfo::GetLabelName() const
{
    return m_labelName;
}

void FieldTagInfo::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool FieldTagInfo::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

int64_t FieldTagInfo::GetLabelType() const
{
    return m_labelType;
}

void FieldTagInfo::SetLabelType(const int64_t& _labelType)
{
    m_labelType = _labelType;
    m_labelTypeHasBeenSet = true;
}

bool FieldTagInfo::LabelTypeHasBeenSet() const
{
    return m_labelTypeHasBeenSet;
}

string FieldTagInfo::GetFieldType() const
{
    return m_fieldType;
}

void FieldTagInfo::SetFieldType(const string& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool FieldTagInfo::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

string FieldTagInfo::GetLabelValueId() const
{
    return m_labelValueId;
}

void FieldTagInfo::SetLabelValueId(const string& _labelValueId)
{
    m_labelValueId = _labelValueId;
    m_labelValueIdHasBeenSet = true;
}

bool FieldTagInfo::LabelValueIdHasBeenSet() const
{
    return m_labelValueIdHasBeenSet;
}

string FieldTagInfo::GetLabelValue() const
{
    return m_labelValue;
}

void FieldTagInfo::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool FieldTagInfo::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

