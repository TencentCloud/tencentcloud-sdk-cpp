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

#include <tencentcloud/databuddy/v20260715/model/DataMaskLabelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

DataMaskLabelInfo::DataMaskLabelInfo() :
    m_labelIdHasBeenSet(false),
    m_labelNameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome DataMaskLabelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskLabelInfo.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskLabelInfo.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataMaskLabelInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataMaskLabelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string DataMaskLabelInfo::GetLabelId() const
{
    return m_labelId;
}

void DataMaskLabelInfo::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool DataMaskLabelInfo::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

string DataMaskLabelInfo::GetLabelName() const
{
    return m_labelName;
}

void DataMaskLabelInfo::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool DataMaskLabelInfo::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

int64_t DataMaskLabelInfo::GetType() const
{
    return m_type;
}

void DataMaskLabelInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataMaskLabelInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

