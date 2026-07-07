/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/clb/v20180317/model/ModelAlias.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelAlias::ModelAlias() :
    m_coefficientHasBeenSet(false),
    m_modelAliasNameHasBeenSet(false),
    m_serviceProviderCoefficientSetHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ModelAlias::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Coefficient") && !value["Coefficient"].IsNull())
    {
        if (!value["Coefficient"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAlias.Coefficient` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coefficient.Deserialize(value["Coefficient"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coefficientHasBeenSet = true;
    }

    if (value.HasMember("ModelAliasName") && !value["ModelAliasName"].IsNull())
    {
        if (!value["ModelAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAlias.ModelAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelAliasName = string(value["ModelAliasName"].GetString());
        m_modelAliasNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderCoefficientSet") && !value["ServiceProviderCoefficientSet"].IsNull())
    {
        if (!value["ServiceProviderCoefficientSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelAlias.ServiceProviderCoefficientSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceProviderCoefficientSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceProviderCoefficient item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceProviderCoefficientSet.push_back(item);
        }
        m_serviceProviderCoefficientSetHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAlias.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelAlias.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelAlias::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_coefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coefficient.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderCoefficientSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderCoefficientSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceProviderCoefficientSet.begin(); itr != m_serviceProviderCoefficientSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


Coefficient ModelAlias::GetCoefficient() const
{
    return m_coefficient;
}

void ModelAlias::SetCoefficient(const Coefficient& _coefficient)
{
    m_coefficient = _coefficient;
    m_coefficientHasBeenSet = true;
}

bool ModelAlias::CoefficientHasBeenSet() const
{
    return m_coefficientHasBeenSet;
}

string ModelAlias::GetModelAliasName() const
{
    return m_modelAliasName;
}

void ModelAlias::SetModelAliasName(const string& _modelAliasName)
{
    m_modelAliasName = _modelAliasName;
    m_modelAliasNameHasBeenSet = true;
}

bool ModelAlias::ModelAliasNameHasBeenSet() const
{
    return m_modelAliasNameHasBeenSet;
}

vector<ServiceProviderCoefficient> ModelAlias::GetServiceProviderCoefficientSet() const
{
    return m_serviceProviderCoefficientSet;
}

void ModelAlias::SetServiceProviderCoefficientSet(const vector<ServiceProviderCoefficient>& _serviceProviderCoefficientSet)
{
    m_serviceProviderCoefficientSet = _serviceProviderCoefficientSet;
    m_serviceProviderCoefficientSetHasBeenSet = true;
}

bool ModelAlias::ServiceProviderCoefficientSetHasBeenSet() const
{
    return m_serviceProviderCoefficientSetHasBeenSet;
}

string ModelAlias::GetSource() const
{
    return m_source;
}

void ModelAlias::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ModelAlias::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ModelAlias::GetStatus() const
{
    return m_status;
}

void ModelAlias::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelAlias::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

