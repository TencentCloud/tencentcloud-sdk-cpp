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

#include <tencentcloud/ccc/v20200210/model/IMSatisfaction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

IMSatisfaction::IMSatisfaction() :
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

CoreInternalOutcome IMSatisfaction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IMSatisfaction.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IMSatisfaction.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IMSatisfaction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

}


int64_t IMSatisfaction::GetId() const
{
    return m_id;
}

void IMSatisfaction::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IMSatisfaction::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IMSatisfaction::GetLabel() const
{
    return m_label;
}

void IMSatisfaction::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool IMSatisfaction::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

