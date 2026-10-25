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

#include <tencentcloud/databuddy/v20260715/model/TagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TagInfo::TagInfo() :
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_labelValueIdHasBeenSet(false),
    m_labelValueHasBeenSet(false),
    m_isDeletedHasBeenSet(false),
    m_createCustomLabelHasBeenSet(false)
{
}

CoreInternalOutcome TagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("LabelValueId") && !value["LabelValueId"].IsNull())
    {
        if (!value["LabelValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.LabelValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValueId = string(value["LabelValueId"].GetString());
        m_labelValueIdHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("IsDeleted") && !value["IsDeleted"].IsNull())
    {
        if (!value["IsDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.IsDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDeleted = value["IsDeleted"].GetBool();
        m_isDeletedHasBeenSet = true;
    }

    if (value.HasMember("CreateCustomLabel") && !value["CreateCustomLabel"].IsNull())
    {
        if (!value["CreateCustomLabel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.CreateCustomLabel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_createCustomLabel = value["CreateCustomLabel"].GetBool();
        m_createCustomLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
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

    if (m_isDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDeleted, allocator);
    }

    if (m_createCustomLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateCustomLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createCustomLabel, allocator);
    }

}


string TagInfo::GetLabelId() const
{
    return m_labelId;
}

void TagInfo::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool TagInfo::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string TagInfo::GetLabelName() const
{
    return m_labelName;
}

void TagInfo::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool TagInfo::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

int64_t TagInfo::GetType() const
{
    return m_type;
}

void TagInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TagInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TagInfo::GetLabelValueId() const
{
    return m_labelValueId;
}

void TagInfo::SetLabelValueId(const string& _labelValueId)
{
    m_labelValueId = _labelValueId;
    m_labelValueIdHasBeenSet = true;
}

bool TagInfo::LabelValueIdHasBeenSet() const
{
    return m_labelValueIdHasBeenSet;
}

string TagInfo::GetLabelValue() const
{
    return m_labelValue;
}

void TagInfo::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool TagInfo::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

bool TagInfo::GetIsDeleted() const
{
    return m_isDeleted;
}

void TagInfo::SetIsDeleted(const bool& _isDeleted)
{
    m_isDeleted = _isDeleted;
    m_isDeletedHasBeenSet = true;
}

bool TagInfo::IsDeletedHasBeenSet() const
{
    return m_isDeletedHasBeenSet;
}

bool TagInfo::GetCreateCustomLabel() const
{
    return m_createCustomLabel;
}

void TagInfo::SetCreateCustomLabel(const bool& _createCustomLabel)
{
    m_createCustomLabel = _createCustomLabel;
    m_createCustomLabelHasBeenSet = true;
}

bool TagInfo::CreateCustomLabelHasBeenSet() const
{
    return m_createCustomLabelHasBeenSet;
}

