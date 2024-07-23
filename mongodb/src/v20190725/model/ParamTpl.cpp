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

#include <tencentcloud/mongodb/v20190725/model/ParamTpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ParamTpl::ParamTpl() :
    m_tplNameHasBeenSet(false),
    m_tplIdHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_tplDescHasBeenSet(false),
    m_tplTypeHasBeenSet(false)
{
}

CoreInternalOutcome ParamTpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TplName") && !value["TplName"].IsNull())
    {
        if (!value["TplName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTpl.TplName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tplName = string(value["TplName"].GetString());
        m_tplNameHasBeenSet = true;
    }

    if (value.HasMember("TplId") && !value["TplId"].IsNull())
    {
        if (!value["TplId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTpl.TplId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tplId = string(value["TplId"].GetString());
        m_tplIdHasBeenSet = true;
    }

    if (value.HasMember("MongoVersion") && !value["MongoVersion"].IsNull())
    {
        if (!value["MongoVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTpl.MongoVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mongoVersion = string(value["MongoVersion"].GetString());
        m_mongoVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTpl.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("TplDesc") && !value["TplDesc"].IsNull())
    {
        if (!value["TplDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTpl.TplDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tplDesc = string(value["TplDesc"].GetString());
        m_tplDescHasBeenSet = true;
    }

    if (value.HasMember("TplType") && !value["TplType"].IsNull())
    {
        if (!value["TplType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamTpl.TplType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tplType = string(value["TplType"].GetString());
        m_tplTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamTpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
    }

    if (m_tplIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tplId.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_tplDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tplDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_tplTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tplType.c_str(), allocator).Move(), allocator);
    }

}


string ParamTpl::GetTplName() const
{
    return m_tplName;
}

void ParamTpl::SetTplName(const string& _tplName)
{
    m_tplName = _tplName;
    m_tplNameHasBeenSet = true;
}

bool ParamTpl::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}

string ParamTpl::GetTplId() const
{
    return m_tplId;
}

void ParamTpl::SetTplId(const string& _tplId)
{
    m_tplId = _tplId;
    m_tplIdHasBeenSet = true;
}

bool ParamTpl::TplIdHasBeenSet() const
{
    return m_tplIdHasBeenSet;
}

string ParamTpl::GetMongoVersion() const
{
    return m_mongoVersion;
}

void ParamTpl::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool ParamTpl::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

string ParamTpl::GetClusterType() const
{
    return m_clusterType;
}

void ParamTpl::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ParamTpl::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string ParamTpl::GetTplDesc() const
{
    return m_tplDesc;
}

void ParamTpl::SetTplDesc(const string& _tplDesc)
{
    m_tplDesc = _tplDesc;
    m_tplDescHasBeenSet = true;
}

bool ParamTpl::TplDescHasBeenSet() const
{
    return m_tplDescHasBeenSet;
}

string ParamTpl::GetTplType() const
{
    return m_tplType;
}

void ParamTpl::SetTplType(const string& _tplType)
{
    m_tplType = _tplType;
    m_tplTypeHasBeenSet = true;
}

bool ParamTpl::TplTypeHasBeenSet() const
{
    return m_tplTypeHasBeenSet;
}

