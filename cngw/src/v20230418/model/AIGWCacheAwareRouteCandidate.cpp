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

#include <tencentcloud/cngw/v20230418/model/AIGWCacheAwareRouteCandidate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWCacheAwareRouteCandidate::AIGWCacheAwareRouteCandidate() :
    m_modelServiceIdHasBeenSet(false),
    m_modelServiceNameHasBeenSet(false)
{
}

CoreInternalOutcome AIGWCacheAwareRouteCandidate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelServiceId") && !value["ModelServiceId"].IsNull())
    {
        if (!value["ModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCacheAwareRouteCandidate.ModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceId = string(value["ModelServiceId"].GetString());
        m_modelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceName") && !value["ModelServiceName"].IsNull())
    {
        if (!value["ModelServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCacheAwareRouteCandidate.ModelServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceName = string(value["ModelServiceName"].GetString());
        m_modelServiceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWCacheAwareRouteCandidate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceName.c_str(), allocator).Move(), allocator);
    }

}


string AIGWCacheAwareRouteCandidate::GetModelServiceId() const
{
    return m_modelServiceId;
}

void AIGWCacheAwareRouteCandidate::SetModelServiceId(const string& _modelServiceId)
{
    m_modelServiceId = _modelServiceId;
    m_modelServiceIdHasBeenSet = true;
}

bool AIGWCacheAwareRouteCandidate::ModelServiceIdHasBeenSet() const
{
    return m_modelServiceIdHasBeenSet;
}

string AIGWCacheAwareRouteCandidate::GetModelServiceName() const
{
    return m_modelServiceName;
}

void AIGWCacheAwareRouteCandidate::SetModelServiceName(const string& _modelServiceName)
{
    m_modelServiceName = _modelServiceName;
    m_modelServiceNameHasBeenSet = true;
}

bool AIGWCacheAwareRouteCandidate::ModelServiceNameHasBeenSet() const
{
    return m_modelServiceNameHasBeenSet;
}

