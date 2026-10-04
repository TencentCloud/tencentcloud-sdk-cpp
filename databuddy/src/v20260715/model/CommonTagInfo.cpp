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

#include <tencentcloud/databuddy/v20260715/model/CommonTagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CommonTagInfo::CommonTagInfo() :
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_labelValueIdHasBeenSet(false),
    m_labelValueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_deletedHasBeenSet(false)
{
}

CoreInternalOutcome CommonTagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTagInfo.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTagInfo.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("LabelValueId") && !value["LabelValueId"].IsNull())
    {
        if (!value["LabelValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTagInfo.LabelValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValueId = string(value["LabelValueId"].GetString());
        m_labelValueIdHasBeenSet = true;
    }

    if (value.HasMember("LabelValue") && !value["LabelValue"].IsNull())
    {
        if (!value["LabelValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTagInfo.LabelValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelValue = string(value["LabelValue"].GetString());
        m_labelValueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTagInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonTagInfo.Deleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetBool();
        m_deletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonTagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

}


string CommonTagInfo::GetLabelId() const
{
    return m_labelId;
}

void CommonTagInfo::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool CommonTagInfo::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string CommonTagInfo::GetLabelName() const
{
    return m_labelName;
}

void CommonTagInfo::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool CommonTagInfo::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

string CommonTagInfo::GetLabelValueId() const
{
    return m_labelValueId;
}

void CommonTagInfo::SetLabelValueId(const string& _labelValueId)
{
    m_labelValueId = _labelValueId;
    m_labelValueIdHasBeenSet = true;
}

bool CommonTagInfo::LabelValueIdHasBeenSet() const
{
    return m_labelValueIdHasBeenSet;
}

string CommonTagInfo::GetLabelValue() const
{
    return m_labelValue;
}

void CommonTagInfo::SetLabelValue(const string& _labelValue)
{
    m_labelValue = _labelValue;
    m_labelValueHasBeenSet = true;
}

bool CommonTagInfo::LabelValueHasBeenSet() const
{
    return m_labelValueHasBeenSet;
}

int64_t CommonTagInfo::GetType() const
{
    return m_type;
}

void CommonTagInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CommonTagInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool CommonTagInfo::GetDeleted() const
{
    return m_deleted;
}

void CommonTagInfo::SetDeleted(const bool& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool CommonTagInfo::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

