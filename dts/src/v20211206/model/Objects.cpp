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

#include <tencentcloud/dts/v20211206/model/Objects.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

Objects::Objects() :
    m_modeHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_advancedObjectsHasBeenSet(false),
    m_onlineDDLHasBeenSet(false)
{
}

CoreInternalOutcome Objects::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Objects.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Databases") && !value["Databases"].IsNull())
    {
        if (!value["Databases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Objects.Databases` is not array type"));

        const rapidjson::Value &tmpValue = value["Databases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Database item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_databases.push_back(item);
        }
        m_databasesHasBeenSet = true;
    }

    if (value.HasMember("AdvancedObjects") && !value["AdvancedObjects"].IsNull())
    {
        if (!value["AdvancedObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Objects.AdvancedObjects` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvancedObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_advancedObjects.push_back((*itr).GetString());
        }
        m_advancedObjectsHasBeenSet = true;
    }

    if (value.HasMember("OnlineDDL") && !value["OnlineDDL"].IsNull())
    {
        if (!value["OnlineDDL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Objects.OnlineDDL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_onlineDDL.Deserialize(value["OnlineDDL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_onlineDDLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Objects::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_databasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Databases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_databases.begin(); itr != m_databases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_advancedObjects.begin(); itr != m_advancedObjects.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlineDDLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineDDL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_onlineDDL.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Objects::GetMode() const
{
    return m_mode;
}

void Objects::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool Objects::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<Database> Objects::GetDatabases() const
{
    return m_databases;
}

void Objects::SetDatabases(const vector<Database>& _databases)
{
    m_databases = _databases;
    m_databasesHasBeenSet = true;
}

bool Objects::DatabasesHasBeenSet() const
{
    return m_databasesHasBeenSet;
}

vector<string> Objects::GetAdvancedObjects() const
{
    return m_advancedObjects;
}

void Objects::SetAdvancedObjects(const vector<string>& _advancedObjects)
{
    m_advancedObjects = _advancedObjects;
    m_advancedObjectsHasBeenSet = true;
}

bool Objects::AdvancedObjectsHasBeenSet() const
{
    return m_advancedObjectsHasBeenSet;
}

OnlineDDL Objects::GetOnlineDDL() const
{
    return m_onlineDDL;
}

void Objects::SetOnlineDDL(const OnlineDDL& _onlineDDL)
{
    m_onlineDDL = _onlineDDL;
    m_onlineDDLHasBeenSet = true;
}

bool Objects::OnlineDDLHasBeenSet() const
{
    return m_onlineDDLHasBeenSet;
}

