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

#include <tencentcloud/teo/v20220901/model/OptimizeAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OptimizeAction::OptimizeAction() :
    m_nameHasBeenSet(false),
    m_connectivityHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome OptimizeAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizeAction.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Connectivity") && !value["Connectivity"].IsNull())
    {
        if (!value["Connectivity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizeAction.Connectivity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectivity = string(value["Connectivity"].GetString());
        m_connectivityHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizeAction.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OptimizeAction.Ratio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetInt64();
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OptimizeAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_connectivityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connectivity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectivity.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

}


string OptimizeAction::GetName() const
{
    return m_name;
}

void OptimizeAction::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OptimizeAction::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OptimizeAction::GetConnectivity() const
{
    return m_connectivity;
}

void OptimizeAction::SetConnectivity(const string& _connectivity)
{
    m_connectivity = _connectivity;
    m_connectivityHasBeenSet = true;
}

bool OptimizeAction::ConnectivityHasBeenSet() const
{
    return m_connectivityHasBeenSet;
}

int64_t OptimizeAction::GetValue() const
{
    return m_value;
}

void OptimizeAction::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OptimizeAction::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t OptimizeAction::GetRatio() const
{
    return m_ratio;
}

void OptimizeAction::SetRatio(const int64_t& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool OptimizeAction::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

