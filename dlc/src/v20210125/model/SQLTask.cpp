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

#include <tencentcloud/dlc/v20210125/model/SQLTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SQLTask::SQLTask() :
    m_sQLHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

CoreInternalOutcome SQLTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SQL") && !value["SQL"].IsNull())
    {
        if (!value["SQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLTask.SQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQL = string(value["SQL"].GetString());
        m_sQLHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SQLTask.Config` is not array type"));

        const rapidjson::Value &tmpValue = value["Config"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_config.push_back(item);
        }
        m_configHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SQLTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQL.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_config.begin(); itr != m_config.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SQLTask::GetSQL() const
{
    return m_sQL;
}

void SQLTask::SetSQL(const string& _sQL)
{
    m_sQL = _sQL;
    m_sQLHasBeenSet = true;
}

bool SQLTask::SQLHasBeenSet() const
{
    return m_sQLHasBeenSet;
}

vector<KVPair> SQLTask::GetConfig() const
{
    return m_config;
}

void SQLTask::SetConfig(const vector<KVPair>& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool SQLTask::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

