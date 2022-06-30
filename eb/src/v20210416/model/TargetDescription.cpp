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

#include <tencentcloud/eb/v20210416/model/TargetDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

TargetDescription::TargetDescription() :
    m_resourceDescriptionHasBeenSet(false),
    m_sCFParamsHasBeenSet(false),
    m_ckafkaTargetParamsHasBeenSet(false),
    m_eSTargetParamsHasBeenSet(false)
{
}

CoreInternalOutcome TargetDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceDescription") && !value["ResourceDescription"].IsNull())
    {
        if (!value["ResourceDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetDescription.ResourceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDescription = string(value["ResourceDescription"].GetString());
        m_resourceDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SCFParams") && !value["SCFParams"].IsNull())
    {
        if (!value["SCFParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetDescription.SCFParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sCFParams.Deserialize(value["SCFParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sCFParamsHasBeenSet = true;
    }

    if (value.HasMember("CkafkaTargetParams") && !value["CkafkaTargetParams"].IsNull())
    {
        if (!value["CkafkaTargetParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetDescription.CkafkaTargetParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ckafkaTargetParams.Deserialize(value["CkafkaTargetParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ckafkaTargetParamsHasBeenSet = true;
    }

    if (value.HasMember("ESTargetParams") && !value["ESTargetParams"].IsNull())
    {
        if (!value["ESTargetParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TargetDescription.ESTargetParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eSTargetParams.Deserialize(value["ESTargetParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eSTargetParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_sCFParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SCFParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sCFParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ckafkaTargetParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CkafkaTargetParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ckafkaTargetParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eSTargetParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESTargetParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eSTargetParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TargetDescription::GetResourceDescription() const
{
    return m_resourceDescription;
}

void TargetDescription::SetResourceDescription(const string& _resourceDescription)
{
    m_resourceDescription = _resourceDescription;
    m_resourceDescriptionHasBeenSet = true;
}

bool TargetDescription::ResourceDescriptionHasBeenSet() const
{
    return m_resourceDescriptionHasBeenSet;
}

SCFParams TargetDescription::GetSCFParams() const
{
    return m_sCFParams;
}

void TargetDescription::SetSCFParams(const SCFParams& _sCFParams)
{
    m_sCFParams = _sCFParams;
    m_sCFParamsHasBeenSet = true;
}

bool TargetDescription::SCFParamsHasBeenSet() const
{
    return m_sCFParamsHasBeenSet;
}

CkafkaTargetParams TargetDescription::GetCkafkaTargetParams() const
{
    return m_ckafkaTargetParams;
}

void TargetDescription::SetCkafkaTargetParams(const CkafkaTargetParams& _ckafkaTargetParams)
{
    m_ckafkaTargetParams = _ckafkaTargetParams;
    m_ckafkaTargetParamsHasBeenSet = true;
}

bool TargetDescription::CkafkaTargetParamsHasBeenSet() const
{
    return m_ckafkaTargetParamsHasBeenSet;
}

ESTargetParams TargetDescription::GetESTargetParams() const
{
    return m_eSTargetParams;
}

void TargetDescription::SetESTargetParams(const ESTargetParams& _eSTargetParams)
{
    m_eSTargetParams = _eSTargetParams;
    m_eSTargetParamsHasBeenSet = true;
}

bool TargetDescription::ESTargetParamsHasBeenSet() const
{
    return m_eSTargetParamsHasBeenSet;
}

