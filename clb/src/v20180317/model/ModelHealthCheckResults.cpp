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

#include <tencentcloud/clb/v20180317/model/ModelHealthCheckResults.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModelHealthCheckResults::ModelHealthCheckResults() :
    m_providerKeyIdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ModelHealthCheckResults::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProviderKeyId") && !value["ProviderKeyId"].IsNull())
    {
        if (!value["ProviderKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelHealthCheckResults.ProviderKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerKeyId = string(value["ProviderKeyId"].GetString());
        m_providerKeyIdHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelHealthCheckResults.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelHealthCheckResults.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelHealthCheckResults::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_providerKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_providerKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ModelHealthCheckResults::GetProviderKeyId() const
{
    return m_providerKeyId;
}

void ModelHealthCheckResults::SetProviderKeyId(const string& _providerKeyId)
{
    m_providerKeyId = _providerKeyId;
    m_providerKeyIdHasBeenSet = true;
}

bool ModelHealthCheckResults::ProviderKeyIdHasBeenSet() const
{
    return m_providerKeyIdHasBeenSet;
}

string ModelHealthCheckResults::GetModel() const
{
    return m_model;
}

void ModelHealthCheckResults::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ModelHealthCheckResults::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string ModelHealthCheckResults::GetStatus() const
{
    return m_status;
}

void ModelHealthCheckResults::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelHealthCheckResults::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

