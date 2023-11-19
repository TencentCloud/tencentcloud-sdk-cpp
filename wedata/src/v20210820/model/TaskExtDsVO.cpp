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

#include <tencentcloud/wedata/v20210820/model/TaskExtDsVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskExtDsVO::TaskExtDsVO() :
    m_taskIdHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_dryRunExtAttributesHasBeenSet(false),
    m_dryRunParameterHasBeenSet(false)
{
}

CoreInternalOutcome TaskExtDsVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskExtDsVO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskExtDsVO.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfoDs item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("DryRunExtAttributes") && !value["DryRunExtAttributes"].IsNull())
    {
        if (!value["DryRunExtAttributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskExtDsVO.DryRunExtAttributes` is not array type"));

        const rapidjson::Value &tmpValue = value["DryRunExtAttributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeItemDsVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dryRunExtAttributes.push_back(item);
        }
        m_dryRunExtAttributesHasBeenSet = true;
    }

    if (value.HasMember("DryRunParameter") && !value["DryRunParameter"].IsNull())
    {
        if (!value["DryRunParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskExtDsVO.DryRunParameter` is not array type"));

        const rapidjson::Value &tmpValue = value["DryRunParameter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeItemDsVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dryRunParameter.push_back(item);
        }
        m_dryRunParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskExtDsVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dryRunExtAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRunExtAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dryRunExtAttributes.begin(); itr != m_dryRunExtAttributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dryRunParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRunParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dryRunParameter.begin(); itr != m_dryRunParameter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TaskExtDsVO::GetTaskId() const
{
    return m_taskId;
}

void TaskExtDsVO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskExtDsVO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<ParamInfoDs> TaskExtDsVO::GetProperties() const
{
    return m_properties;
}

void TaskExtDsVO::SetProperties(const vector<ParamInfoDs>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool TaskExtDsVO::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<AttributeItemDsVO> TaskExtDsVO::GetDryRunExtAttributes() const
{
    return m_dryRunExtAttributes;
}

void TaskExtDsVO::SetDryRunExtAttributes(const vector<AttributeItemDsVO>& _dryRunExtAttributes)
{
    m_dryRunExtAttributes = _dryRunExtAttributes;
    m_dryRunExtAttributesHasBeenSet = true;
}

bool TaskExtDsVO::DryRunExtAttributesHasBeenSet() const
{
    return m_dryRunExtAttributesHasBeenSet;
}

vector<AttributeItemDsVO> TaskExtDsVO::GetDryRunParameter() const
{
    return m_dryRunParameter;
}

void TaskExtDsVO::SetDryRunParameter(const vector<AttributeItemDsVO>& _dryRunParameter)
{
    m_dryRunParameter = _dryRunParameter;
    m_dryRunParameterHasBeenSet = true;
}

bool TaskExtDsVO::DryRunParameterHasBeenSet() const
{
    return m_dryRunParameterHasBeenSet;
}

