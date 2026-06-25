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

#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy() :
    m_modelServiceIdHasBeenSet(false),
    m_matchModelNameHasBeenSet(false),
    m_rewriteModelNameHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelServiceId") && !value["ModelServiceId"].IsNull())
    {
        if (!value["ModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.ModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceId = string(value["ModelServiceId"].GetString());
        m_modelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("MatchModelName") && !value["MatchModelName"].IsNull())
    {
        if (!value["MatchModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.MatchModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchModelName = string(value["MatchModelName"].GetString());
        m_matchModelNameHasBeenSet = true;
    }

    if (value.HasMember("RewriteModelName") && !value["RewriteModelName"].IsNull())
    {
        if (!value["RewriteModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.RewriteModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteModelName = string(value["RewriteModelName"].GetString());
        m_rewriteModelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_matchModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchModelName.c_str(), allocator).Move(), allocator);
    }

    if (m_rewriteModelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewriteModelName.c_str(), allocator).Move(), allocator);
    }

}


string CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::GetModelServiceId() const
{
    return m_modelServiceId;
}

void CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::SetModelServiceId(const string& _modelServiceId)
{
    m_modelServiceId = _modelServiceId;
    m_modelServiceIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::ModelServiceIdHasBeenSet() const
{
    return m_modelServiceIdHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::GetMatchModelName() const
{
    return m_matchModelName;
}

void CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::SetMatchModelName(const string& _matchModelName)
{
    m_matchModelName = _matchModelName;
    m_matchModelNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::MatchModelNameHasBeenSet() const
{
    return m_matchModelNameHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::GetRewriteModelName() const
{
    return m_rewriteModelName;
}

void CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::SetRewriteModelName(const string& _rewriteModelName)
{
    m_rewriteModelName = _rewriteModelName;
    m_rewriteModelNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy::RewriteModelNameHasBeenSet() const
{
    return m_rewriteModelNameHasBeenSet;
}

