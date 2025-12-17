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

#include <tencentcloud/lke/v20231130/model/AppModelDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AppModelDetailInfo::AppModelDetailInfo() :
    m_modelNameHasBeenSet(false),
    m_modelParamsHasBeenSet(false),
    m_historyLimitHasBeenSet(false),
    m_aliasNameHasBeenSet(false)
{
}

CoreInternalOutcome AppModelDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelDetailInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelParams") && !value["ModelParams"].IsNull())
    {
        if (!value["ModelParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelDetailInfo.ModelParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelParams.Deserialize(value["ModelParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelParamsHasBeenSet = true;
    }

    if (value.HasMember("HistoryLimit") && !value["HistoryLimit"].IsNull())
    {
        if (!value["HistoryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelDetailInfo.HistoryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_historyLimit = value["HistoryLimit"].GetUint64();
        m_historyLimitHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelDetailInfo.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppModelDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_historyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyLimit, allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

}


string AppModelDetailInfo::GetModelName() const
{
    return m_modelName;
}

void AppModelDetailInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool AppModelDetailInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

ModelParams AppModelDetailInfo::GetModelParams() const
{
    return m_modelParams;
}

void AppModelDetailInfo::SetModelParams(const ModelParams& _modelParams)
{
    m_modelParams = _modelParams;
    m_modelParamsHasBeenSet = true;
}

bool AppModelDetailInfo::ModelParamsHasBeenSet() const
{
    return m_modelParamsHasBeenSet;
}

uint64_t AppModelDetailInfo::GetHistoryLimit() const
{
    return m_historyLimit;
}

void AppModelDetailInfo::SetHistoryLimit(const uint64_t& _historyLimit)
{
    m_historyLimit = _historyLimit;
    m_historyLimitHasBeenSet = true;
}

bool AppModelDetailInfo::HistoryLimitHasBeenSet() const
{
    return m_historyLimitHasBeenSet;
}

string AppModelDetailInfo::GetAliasName() const
{
    return m_aliasName;
}

void AppModelDetailInfo::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool AppModelDetailInfo::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

