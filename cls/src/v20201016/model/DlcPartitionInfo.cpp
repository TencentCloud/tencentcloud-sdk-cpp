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

#include <tencentcloud/cls/v20201016/model/DlcPartitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DlcPartitionInfo::DlcPartitionInfo() :
    m_clsFieldHasBeenSet(false),
    m_dlcFieldHasBeenSet(false),
    m_dlcFieldTypeHasBeenSet(false)
{
}

CoreInternalOutcome DlcPartitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClsField") && !value["ClsField"].IsNull())
    {
        if (!value["ClsField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcPartitionInfo.ClsField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsField = string(value["ClsField"].GetString());
        m_clsFieldHasBeenSet = true;
    }

    if (value.HasMember("DlcField") && !value["DlcField"].IsNull())
    {
        if (!value["DlcField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcPartitionInfo.DlcField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcField = string(value["DlcField"].GetString());
        m_dlcFieldHasBeenSet = true;
    }

    if (value.HasMember("DlcFieldType") && !value["DlcFieldType"].IsNull())
    {
        if (!value["DlcFieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcPartitionInfo.DlcFieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcFieldType = string(value["DlcFieldType"].GetString());
        m_dlcFieldTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcPartitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clsFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsField.c_str(), allocator).Move(), allocator);
    }

    if (m_dlcFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlcField.c_str(), allocator).Move(), allocator);
    }

    if (m_dlcFieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcFieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlcFieldType.c_str(), allocator).Move(), allocator);
    }

}


string DlcPartitionInfo::GetClsField() const
{
    return m_clsField;
}

void DlcPartitionInfo::SetClsField(const string& _clsField)
{
    m_clsField = _clsField;
    m_clsFieldHasBeenSet = true;
}

bool DlcPartitionInfo::ClsFieldHasBeenSet() const
{
    return m_clsFieldHasBeenSet;
}

string DlcPartitionInfo::GetDlcField() const
{
    return m_dlcField;
}

void DlcPartitionInfo::SetDlcField(const string& _dlcField)
{
    m_dlcField = _dlcField;
    m_dlcFieldHasBeenSet = true;
}

bool DlcPartitionInfo::DlcFieldHasBeenSet() const
{
    return m_dlcFieldHasBeenSet;
}

string DlcPartitionInfo::GetDlcFieldType() const
{
    return m_dlcFieldType;
}

void DlcPartitionInfo::SetDlcFieldType(const string& _dlcFieldType)
{
    m_dlcFieldType = _dlcFieldType;
    m_dlcFieldTypeHasBeenSet = true;
}

bool DlcPartitionInfo::DlcFieldTypeHasBeenSet() const
{
    return m_dlcFieldTypeHasBeenSet;
}

