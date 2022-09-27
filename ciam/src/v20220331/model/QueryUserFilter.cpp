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

#include <tencentcloud/ciam/v20220331/model/QueryUserFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

QueryUserFilter::QueryUserFilter() :
    m_propertyKeyHasBeenSet(false),
    m_propertyValueHasBeenSet(false),
    m_logicHasBeenSet(false),
    m_operateLogicHasBeenSet(false)
{
}

CoreInternalOutcome QueryUserFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PropertyKey") && !value["PropertyKey"].IsNull())
    {
        if (!value["PropertyKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryUserFilter.PropertyKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyKey = string(value["PropertyKey"].GetString());
        m_propertyKeyHasBeenSet = true;
    }

    if (value.HasMember("PropertyValue") && !value["PropertyValue"].IsNull())
    {
        if (!value["PropertyValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryUserFilter.PropertyValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyValue = string(value["PropertyValue"].GetString());
        m_propertyValueHasBeenSet = true;
    }

    if (value.HasMember("Logic") && !value["Logic"].IsNull())
    {
        if (!value["Logic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueryUserFilter.Logic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logic = value["Logic"].GetBool();
        m_logicHasBeenSet = true;
    }

    if (value.HasMember("OperateLogic") && !value["OperateLogic"].IsNull())
    {
        if (!value["OperateLogic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryUserFilter.OperateLogic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateLogic = string(value["OperateLogic"].GetString());
        m_operateLogicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryUserFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_propertyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyKey.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyValue.c_str(), allocator).Move(), allocator);
    }

    if (m_logicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logic, allocator);
    }

    if (m_operateLogicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateLogic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateLogic.c_str(), allocator).Move(), allocator);
    }

}


string QueryUserFilter::GetPropertyKey() const
{
    return m_propertyKey;
}

void QueryUserFilter::SetPropertyKey(const string& _propertyKey)
{
    m_propertyKey = _propertyKey;
    m_propertyKeyHasBeenSet = true;
}

bool QueryUserFilter::PropertyKeyHasBeenSet() const
{
    return m_propertyKeyHasBeenSet;
}

string QueryUserFilter::GetPropertyValue() const
{
    return m_propertyValue;
}

void QueryUserFilter::SetPropertyValue(const string& _propertyValue)
{
    m_propertyValue = _propertyValue;
    m_propertyValueHasBeenSet = true;
}

bool QueryUserFilter::PropertyValueHasBeenSet() const
{
    return m_propertyValueHasBeenSet;
}

bool QueryUserFilter::GetLogic() const
{
    return m_logic;
}

void QueryUserFilter::SetLogic(const bool& _logic)
{
    m_logic = _logic;
    m_logicHasBeenSet = true;
}

bool QueryUserFilter::LogicHasBeenSet() const
{
    return m_logicHasBeenSet;
}

string QueryUserFilter::GetOperateLogic() const
{
    return m_operateLogic;
}

void QueryUserFilter::SetOperateLogic(const string& _operateLogic)
{
    m_operateLogic = _operateLogic;
    m_operateLogicHasBeenSet = true;
}

bool QueryUserFilter::OperateLogicHasBeenSet() const
{
    return m_operateLogicHasBeenSet;
}

