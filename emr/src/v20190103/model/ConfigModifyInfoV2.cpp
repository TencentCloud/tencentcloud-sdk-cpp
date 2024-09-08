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

#include <tencentcloud/emr/v20190103/model/ConfigModifyInfoV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ConfigModifyInfoV2::ConfigModifyInfoV2() :
    m_opTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_myIdHasBeenSet(false),
    m_basicParamsHasBeenSet(false),
    m_configSetParamsHasBeenSet(false),
    m_deleteLablesHasBeenSet(false)
{
}

CoreInternalOutcome ConfigModifyInfoV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpType") && !value["OpType"].IsNull())
    {
        if (!value["OpType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigModifyInfoV2.OpType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_opType = value["OpType"].GetUint64();
        m_opTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigModifyInfoV2.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigModifyInfoV2.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("MyId") && !value["MyId"].IsNull())
    {
        if (!value["MyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigModifyInfoV2.MyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_myId = string(value["MyId"].GetString());
        m_myIdHasBeenSet = true;
    }

    if (value.HasMember("BasicParams") && !value["BasicParams"].IsNull())
    {
        if (!value["BasicParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigModifyInfoV2.BasicParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicParams.Deserialize(value["BasicParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicParamsHasBeenSet = true;
    }

    if (value.HasMember("ConfigSetParams") && !value["ConfigSetParams"].IsNull())
    {
        if (!value["ConfigSetParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigModifyInfoV2.ConfigSetParams` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigSetParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigSetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configSetParams.push_back(item);
        }
        m_configSetParamsHasBeenSet = true;
    }

    if (value.HasMember("DeleteLables") && !value["DeleteLables"].IsNull())
    {
        if (!value["DeleteLables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigModifyInfoV2.DeleteLables` is not array type"));

        const rapidjson::Value &tmpValue = value["DeleteLables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deleteLables.push_back((*itr).GetString());
        }
        m_deleteLablesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigModifyInfoV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_opTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opType, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_myIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_myId.c_str(), allocator).Move(), allocator);
    }

    if (m_basicParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configSetParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigSetParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configSetParams.begin(); itr != m_configSetParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deleteLablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteLables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteLables.begin(); itr != m_deleteLables.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t ConfigModifyInfoV2::GetOpType() const
{
    return m_opType;
}

void ConfigModifyInfoV2::SetOpType(const uint64_t& _opType)
{
    m_opType = _opType;
    m_opTypeHasBeenSet = true;
}

bool ConfigModifyInfoV2::OpTypeHasBeenSet() const
{
    return m_opTypeHasBeenSet;
}

string ConfigModifyInfoV2::GetName() const
{
    return m_name;
}

void ConfigModifyInfoV2::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigModifyInfoV2::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigModifyInfoV2::GetParentId() const
{
    return m_parentId;
}

void ConfigModifyInfoV2::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool ConfigModifyInfoV2::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string ConfigModifyInfoV2::GetMyId() const
{
    return m_myId;
}

void ConfigModifyInfoV2::SetMyId(const string& _myId)
{
    m_myId = _myId;
    m_myIdHasBeenSet = true;
}

bool ConfigModifyInfoV2::MyIdHasBeenSet() const
{
    return m_myIdHasBeenSet;
}

ItemSeq ConfigModifyInfoV2::GetBasicParams() const
{
    return m_basicParams;
}

void ConfigModifyInfoV2::SetBasicParams(const ItemSeq& _basicParams)
{
    m_basicParams = _basicParams;
    m_basicParamsHasBeenSet = true;
}

bool ConfigModifyInfoV2::BasicParamsHasBeenSet() const
{
    return m_basicParamsHasBeenSet;
}

vector<ConfigSetInfo> ConfigModifyInfoV2::GetConfigSetParams() const
{
    return m_configSetParams;
}

void ConfigModifyInfoV2::SetConfigSetParams(const vector<ConfigSetInfo>& _configSetParams)
{
    m_configSetParams = _configSetParams;
    m_configSetParamsHasBeenSet = true;
}

bool ConfigModifyInfoV2::ConfigSetParamsHasBeenSet() const
{
    return m_configSetParamsHasBeenSet;
}

vector<string> ConfigModifyInfoV2::GetDeleteLables() const
{
    return m_deleteLables;
}

void ConfigModifyInfoV2::SetDeleteLables(const vector<string>& _deleteLables)
{
    m_deleteLables = _deleteLables;
    m_deleteLablesHasBeenSet = true;
}

bool ConfigModifyInfoV2::DeleteLablesHasBeenSet() const
{
    return m_deleteLablesHasBeenSet;
}

