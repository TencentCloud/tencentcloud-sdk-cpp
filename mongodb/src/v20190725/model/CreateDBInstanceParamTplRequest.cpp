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

#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceParamTplRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateDBInstanceParamTplRequest::CreateDBInstanceParamTplRequest() :
    m_tplNameHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_tplDescHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_mirrorTplIdHasBeenSet(false)
{
}

string CreateDBInstanceParamTplRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_tplDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_mirrorTplIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MirrorTplId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mirrorTplId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDBInstanceParamTplRequest::GetTplName() const
{
    return m_tplName;
}

void CreateDBInstanceParamTplRequest::SetTplName(const string& _tplName)
{
    m_tplName = _tplName;
    m_tplNameHasBeenSet = true;
}

bool CreateDBInstanceParamTplRequest::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}

string CreateDBInstanceParamTplRequest::GetMongoVersion() const
{
    return m_mongoVersion;
}

void CreateDBInstanceParamTplRequest::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool CreateDBInstanceParamTplRequest::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

string CreateDBInstanceParamTplRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateDBInstanceParamTplRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateDBInstanceParamTplRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string CreateDBInstanceParamTplRequest::GetTplDesc() const
{
    return m_tplDesc;
}

void CreateDBInstanceParamTplRequest::SetTplDesc(const string& _tplDesc)
{
    m_tplDesc = _tplDesc;
    m_tplDescHasBeenSet = true;
}

bool CreateDBInstanceParamTplRequest::TplDescHasBeenSet() const
{
    return m_tplDescHasBeenSet;
}

vector<ParamType> CreateDBInstanceParamTplRequest::GetParams() const
{
    return m_params;
}

void CreateDBInstanceParamTplRequest::SetParams(const vector<ParamType>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool CreateDBInstanceParamTplRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string CreateDBInstanceParamTplRequest::GetMirrorTplId() const
{
    return m_mirrorTplId;
}

void CreateDBInstanceParamTplRequest::SetMirrorTplId(const string& _mirrorTplId)
{
    m_mirrorTplId = _mirrorTplId;
    m_mirrorTplIdHasBeenSet = true;
}

bool CreateDBInstanceParamTplRequest::MirrorTplIdHasBeenSet() const
{
    return m_mirrorTplIdHasBeenSet;
}


