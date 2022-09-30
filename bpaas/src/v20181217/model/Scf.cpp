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

#include <tencentcloud/bpaas/v20181217/model/Scf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

Scf::Scf() :
    m_scfRegionHasBeenSet(false),
    m_scfRegionNameHasBeenSet(false),
    m_scfNameHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

CoreInternalOutcome Scf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScfRegion") && !value["ScfRegion"].IsNull())
    {
        if (!value["ScfRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scf.ScfRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfRegion = string(value["ScfRegion"].GetString());
        m_scfRegionHasBeenSet = true;
    }

    if (value.HasMember("ScfRegionName") && !value["ScfRegionName"].IsNull())
    {
        if (!value["ScfRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scf.ScfRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfRegionName = string(value["ScfRegionName"].GetString());
        m_scfRegionNameHasBeenSet = true;
    }

    if (value.HasMember("ScfName") && !value["ScfName"].IsNull())
    {
        if (!value["ScfName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scf.ScfName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scfName = string(value["ScfName"].GetString());
        m_scfNameHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scf.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScfParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Scf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scfRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_scfRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_scfNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scfName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Scf::GetScfRegion() const
{
    return m_scfRegion;
}

void Scf::SetScfRegion(const string& _scfRegion)
{
    m_scfRegion = _scfRegion;
    m_scfRegionHasBeenSet = true;
}

bool Scf::ScfRegionHasBeenSet() const
{
    return m_scfRegionHasBeenSet;
}

string Scf::GetScfRegionName() const
{
    return m_scfRegionName;
}

void Scf::SetScfRegionName(const string& _scfRegionName)
{
    m_scfRegionName = _scfRegionName;
    m_scfRegionNameHasBeenSet = true;
}

bool Scf::ScfRegionNameHasBeenSet() const
{
    return m_scfRegionNameHasBeenSet;
}

string Scf::GetScfName() const
{
    return m_scfName;
}

void Scf::SetScfName(const string& _scfName)
{
    m_scfName = _scfName;
    m_scfNameHasBeenSet = true;
}

bool Scf::ScfNameHasBeenSet() const
{
    return m_scfNameHasBeenSet;
}

vector<ScfParam> Scf::GetParams() const
{
    return m_params;
}

void Scf::SetParams(const vector<ScfParam>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool Scf::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

