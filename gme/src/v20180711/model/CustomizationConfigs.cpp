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

#include <tencentcloud/gme/v20180711/model/CustomizationConfigs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

CustomizationConfigs::CustomizationConfigs() :
    m_bizIdHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelStateHasBeenSet(false)
{
}

CoreInternalOutcome CustomizationConfigs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BizId") && !value["BizId"].IsNull())
    {
        if (!value["BizId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizationConfigs.BizId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = value["BizId"].GetInt64();
        m_bizIdHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizationConfigs.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelState") && !value["ModelState"].IsNull())
    {
        if (!value["ModelState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizationConfigs.ModelState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelState = value["ModelState"].GetInt64();
        m_modelStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomizationConfigs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizId, allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelState, allocator);
    }

}


int64_t CustomizationConfigs::GetBizId() const
{
    return m_bizId;
}

void CustomizationConfigs::SetBizId(const int64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool CustomizationConfigs::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string CustomizationConfigs::GetModelId() const
{
    return m_modelId;
}

void CustomizationConfigs::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool CustomizationConfigs::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

int64_t CustomizationConfigs::GetModelState() const
{
    return m_modelState;
}

void CustomizationConfigs::SetModelState(const int64_t& _modelState)
{
    m_modelState = _modelState;
    m_modelStateHasBeenSet = true;
}

bool CustomizationConfigs::ModelStateHasBeenSet() const
{
    return m_modelStateHasBeenSet;
}

