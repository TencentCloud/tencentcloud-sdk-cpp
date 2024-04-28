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

#include <tencentcloud/tse/v20201207/model/AccurateQpsThreshold.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AccurateQpsThreshold::AccurateQpsThreshold() :
    m_unitHasBeenSet(false),
    m_globalConfigIdHasBeenSet(false)
{
}

CoreInternalOutcome AccurateQpsThreshold::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccurateQpsThreshold.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("GlobalConfigId") && !value["GlobalConfigId"].IsNull())
    {
        if (!value["GlobalConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccurateQpsThreshold.GlobalConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalConfigId = string(value["GlobalConfigId"].GetString());
        m_globalConfigIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccurateQpsThreshold::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_globalConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalConfigId.c_str(), allocator).Move(), allocator);
    }

}


string AccurateQpsThreshold::GetUnit() const
{
    return m_unit;
}

void AccurateQpsThreshold::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool AccurateQpsThreshold::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string AccurateQpsThreshold::GetGlobalConfigId() const
{
    return m_globalConfigId;
}

void AccurateQpsThreshold::SetGlobalConfigId(const string& _globalConfigId)
{
    m_globalConfigId = _globalConfigId;
    m_globalConfigIdHasBeenSet = true;
}

bool AccurateQpsThreshold::GlobalConfigIdHasBeenSet() const
{
    return m_globalConfigIdHasBeenSet;
}

