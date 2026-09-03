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

#include <tencentcloud/dlc/v20210125/model/MlFlowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MlFlowConfig::MlFlowConfig() :
    m_mlFlowModeHasBeenSet(false),
    m_mlFlowServerIdHasBeenSet(false),
    m_mlFlowCosPathHasBeenSet(false)
{
}

CoreInternalOutcome MlFlowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MlFlowMode") && !value["MlFlowMode"].IsNull())
    {
        if (!value["MlFlowMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowConfig.MlFlowMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mlFlowMode = string(value["MlFlowMode"].GetString());
        m_mlFlowModeHasBeenSet = true;
    }

    if (value.HasMember("MlFlowServerId") && !value["MlFlowServerId"].IsNull())
    {
        if (!value["MlFlowServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowConfig.MlFlowServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mlFlowServerId = string(value["MlFlowServerId"].GetString());
        m_mlFlowServerIdHasBeenSet = true;
    }

    if (value.HasMember("MlFlowCosPath") && !value["MlFlowCosPath"].IsNull())
    {
        if (!value["MlFlowCosPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowConfig.MlFlowCosPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mlFlowCosPath = string(value["MlFlowCosPath"].GetString());
        m_mlFlowCosPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MlFlowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mlFlowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mlFlowMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mlFlowServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mlFlowServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_mlFlowCosPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowCosPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mlFlowCosPath.c_str(), allocator).Move(), allocator);
    }

}


string MlFlowConfig::GetMlFlowMode() const
{
    return m_mlFlowMode;
}

void MlFlowConfig::SetMlFlowMode(const string& _mlFlowMode)
{
    m_mlFlowMode = _mlFlowMode;
    m_mlFlowModeHasBeenSet = true;
}

bool MlFlowConfig::MlFlowModeHasBeenSet() const
{
    return m_mlFlowModeHasBeenSet;
}

string MlFlowConfig::GetMlFlowServerId() const
{
    return m_mlFlowServerId;
}

void MlFlowConfig::SetMlFlowServerId(const string& _mlFlowServerId)
{
    m_mlFlowServerId = _mlFlowServerId;
    m_mlFlowServerIdHasBeenSet = true;
}

bool MlFlowConfig::MlFlowServerIdHasBeenSet() const
{
    return m_mlFlowServerIdHasBeenSet;
}

string MlFlowConfig::GetMlFlowCosPath() const
{
    return m_mlFlowCosPath;
}

void MlFlowConfig::SetMlFlowCosPath(const string& _mlFlowCosPath)
{
    m_mlFlowCosPath = _mlFlowCosPath;
    m_mlFlowCosPathHasBeenSet = true;
}

bool MlFlowConfig::MlFlowCosPathHasBeenSet() const
{
    return m_mlFlowCosPathHasBeenSet;
}

