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

#include <tencentcloud/cloudhsm/v20191112/model/HsmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

HsmInfo::HsmInfo() :
    m_modelHasBeenSet(false),
    m_vsmTypesHasBeenSet(false),
    m_hsmTypeHasBeenSet(false)
{
}

CoreInternalOutcome HsmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HsmInfo.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("VsmTypes") && !value["VsmTypes"].IsNull())
    {
        if (!value["VsmTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HsmInfo.VsmTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["VsmTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VsmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vsmTypes.push_back(item);
        }
        m_vsmTypesHasBeenSet = true;
    }

    if (value.HasMember("HsmType") && !value["HsmType"].IsNull())
    {
        if (!value["HsmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HsmInfo.HsmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmType = string(value["HsmType"].GetString());
        m_hsmTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HsmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_vsmTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VsmTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vsmTypes.begin(); itr != m_vsmTypes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hsmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmType.c_str(), allocator).Move(), allocator);
    }

}


string HsmInfo::GetModel() const
{
    return m_model;
}

void HsmInfo::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool HsmInfo::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<VsmInfo> HsmInfo::GetVsmTypes() const
{
    return m_vsmTypes;
}

void HsmInfo::SetVsmTypes(const vector<VsmInfo>& _vsmTypes)
{
    m_vsmTypes = _vsmTypes;
    m_vsmTypesHasBeenSet = true;
}

bool HsmInfo::VsmTypesHasBeenSet() const
{
    return m_vsmTypesHasBeenSet;
}

string HsmInfo::GetHsmType() const
{
    return m_hsmType;
}

void HsmInfo::SetHsmType(const string& _hsmType)
{
    m_hsmType = _hsmType;
    m_hsmTypeHasBeenSet = true;
}

bool HsmInfo::HsmTypeHasBeenSet() const
{
    return m_hsmTypeHasBeenSet;
}

