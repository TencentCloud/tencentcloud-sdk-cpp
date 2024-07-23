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

#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceParamTplRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ModifyDBInstanceParamTplRequest::ModifyDBInstanceParamTplRequest() :
    m_tplIdHasBeenSet(false),
    m_tplNameHasBeenSet(false),
    m_tplDescHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

string ModifyDBInstanceParamTplRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tplIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplId.c_str(), allocator).Move(), allocator);
    }

    if (m_tplNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TplName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tplName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceParamTplRequest::GetTplId() const
{
    return m_tplId;
}

void ModifyDBInstanceParamTplRequest::SetTplId(const string& _tplId)
{
    m_tplId = _tplId;
    m_tplIdHasBeenSet = true;
}

bool ModifyDBInstanceParamTplRequest::TplIdHasBeenSet() const
{
    return m_tplIdHasBeenSet;
}

string ModifyDBInstanceParamTplRequest::GetTplName() const
{
    return m_tplName;
}

void ModifyDBInstanceParamTplRequest::SetTplName(const string& _tplName)
{
    m_tplName = _tplName;
    m_tplNameHasBeenSet = true;
}

bool ModifyDBInstanceParamTplRequest::TplNameHasBeenSet() const
{
    return m_tplNameHasBeenSet;
}

string ModifyDBInstanceParamTplRequest::GetTplDesc() const
{
    return m_tplDesc;
}

void ModifyDBInstanceParamTplRequest::SetTplDesc(const string& _tplDesc)
{
    m_tplDesc = _tplDesc;
    m_tplDescHasBeenSet = true;
}

bool ModifyDBInstanceParamTplRequest::TplDescHasBeenSet() const
{
    return m_tplDescHasBeenSet;
}

vector<ParamType> ModifyDBInstanceParamTplRequest::GetParams() const
{
    return m_params;
}

void ModifyDBInstanceParamTplRequest::SetParams(const vector<ParamType>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool ModifyDBInstanceParamTplRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}


