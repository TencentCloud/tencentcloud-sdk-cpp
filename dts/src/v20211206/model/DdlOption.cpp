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

#include <tencentcloud/dts/v20211206/model/DdlOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DdlOption::DdlOption() :
    m_ddlObjectHasBeenSet(false),
    m_ddlValueHasBeenSet(false)
{
}

CoreInternalOutcome DdlOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DdlObject") && !value["DdlObject"].IsNull())
    {
        if (!value["DdlObject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdlOption.DdlObject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ddlObject = string(value["DdlObject"].GetString());
        m_ddlObjectHasBeenSet = true;
    }

    if (value.HasMember("DdlValue") && !value["DdlValue"].IsNull())
    {
        if (!value["DdlValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DdlOption.DdlValue` is not array type"));

        const rapidjson::Value &tmpValue = value["DdlValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ddlValue.push_back((*itr).GetString());
        }
        m_ddlValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DdlOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ddlObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdlObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ddlObject.c_str(), allocator).Move(), allocator);
    }

    if (m_ddlValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdlValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ddlValue.begin(); itr != m_ddlValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DdlOption::GetDdlObject() const
{
    return m_ddlObject;
}

void DdlOption::SetDdlObject(const string& _ddlObject)
{
    m_ddlObject = _ddlObject;
    m_ddlObjectHasBeenSet = true;
}

bool DdlOption::DdlObjectHasBeenSet() const
{
    return m_ddlObjectHasBeenSet;
}

vector<string> DdlOption::GetDdlValue() const
{
    return m_ddlValue;
}

void DdlOption::SetDdlValue(const vector<string>& _ddlValue)
{
    m_ddlValue = _ddlValue;
    m_ddlValueHasBeenSet = true;
}

bool DdlOption::DdlValueHasBeenSet() const
{
    return m_ddlValueHasBeenSet;
}

