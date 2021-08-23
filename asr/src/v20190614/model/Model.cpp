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

#include <tencentcloud/asr/v20190614/model/Model.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

Model::Model() :
    m_modelNameHasBeenSet(false),
    m_dictNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_modelStateHasBeenSet(false),
    m_atUpdatedHasBeenSet(false),
    m_tagInfosHasBeenSet(false)
{
}

CoreInternalOutcome Model::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("DictName") && !value["DictName"].IsNull())
    {
        if (!value["DictName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.DictName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dictName = string(value["DictName"].GetString());
        m_dictNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelState") && !value["ModelState"].IsNull())
    {
        if (!value["ModelState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelState = value["ModelState"].GetInt64();
        m_modelStateHasBeenSet = true;
    }

    if (value.HasMember("AtUpdated") && !value["AtUpdated"].IsNull())
    {
        if (!value["AtUpdated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.AtUpdated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_atUpdated = string(value["AtUpdated"].GetString());
        m_atUpdatedHasBeenSet = true;
    }

    if (value.HasMember("TagInfos") && !value["TagInfos"].IsNull())
    {
        if (!value["TagInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Model.TagInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagInfos.push_back((*itr).GetString());
        }
        m_tagInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Model::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_dictNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DictName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dictName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelState, allocator);
    }

    if (m_atUpdatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AtUpdated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_atUpdated.c_str(), allocator).Move(), allocator);
    }

    if (m_tagInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagInfos.begin(); itr != m_tagInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Model::GetModelName() const
{
    return m_modelName;
}

void Model::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool Model::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string Model::GetDictName() const
{
    return m_dictName;
}

void Model::SetDictName(const string& _dictName)
{
    m_dictName = _dictName;
    m_dictNameHasBeenSet = true;
}

bool Model::DictNameHasBeenSet() const
{
    return m_dictNameHasBeenSet;
}

string Model::GetModelId() const
{
    return m_modelId;
}

void Model::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool Model::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string Model::GetModelType() const
{
    return m_modelType;
}

void Model::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool Model::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string Model::GetServiceType() const
{
    return m_serviceType;
}

void Model::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool Model::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t Model::GetModelState() const
{
    return m_modelState;
}

void Model::SetModelState(const int64_t& _modelState)
{
    m_modelState = _modelState;
    m_modelStateHasBeenSet = true;
}

bool Model::ModelStateHasBeenSet() const
{
    return m_modelStateHasBeenSet;
}

string Model::GetAtUpdated() const
{
    return m_atUpdated;
}

void Model::SetAtUpdated(const string& _atUpdated)
{
    m_atUpdated = _atUpdated;
    m_atUpdatedHasBeenSet = true;
}

bool Model::AtUpdatedHasBeenSet() const
{
    return m_atUpdatedHasBeenSet;
}

vector<string> Model::GetTagInfos() const
{
    return m_tagInfos;
}

void Model::SetTagInfos(const vector<string>& _tagInfos)
{
    m_tagInfos = _tagInfos;
    m_tagInfosHasBeenSet = true;
}

bool Model::TagInfosHasBeenSet() const
{
    return m_tagInfosHasBeenSet;
}

