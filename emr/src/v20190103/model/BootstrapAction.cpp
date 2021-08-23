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

#include <tencentcloud/emr/v20190103/model/BootstrapAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

BootstrapAction::BootstrapAction() :
    m_pathHasBeenSet(false),
    m_whenRunHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

CoreInternalOutcome BootstrapAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BootstrapAction.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("WhenRun") && !value["WhenRun"].IsNull())
    {
        if (!value["WhenRun"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BootstrapAction.WhenRun` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whenRun = string(value["WhenRun"].GetString());
        m_whenRunHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BootstrapAction.Args` is not array type"));

        const rapidjson::Value &tmpValue = value["Args"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_args.push_back((*itr).GetString());
        }
        m_argsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BootstrapAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_whenRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhenRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whenRun.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BootstrapAction::GetPath() const
{
    return m_path;
}

void BootstrapAction::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool BootstrapAction::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string BootstrapAction::GetWhenRun() const
{
    return m_whenRun;
}

void BootstrapAction::SetWhenRun(const string& _whenRun)
{
    m_whenRun = _whenRun;
    m_whenRunHasBeenSet = true;
}

bool BootstrapAction::WhenRunHasBeenSet() const
{
    return m_whenRunHasBeenSet;
}

vector<string> BootstrapAction::GetArgs() const
{
    return m_args;
}

void BootstrapAction::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool BootstrapAction::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

