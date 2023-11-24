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

#include <tencentcloud/eb/v20210416/model/ConnectionDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

ConnectionDescription::ConnectionDescription() :
    m_resourceDescriptionHasBeenSet(false),
    m_aPIGWParamsHasBeenSet(false),
    m_ckafkaParamsHasBeenSet(false),
    m_dTSParamsHasBeenSet(false),
    m_tDMQParamsHasBeenSet(false)
{
}

CoreInternalOutcome ConnectionDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceDescription") && !value["ResourceDescription"].IsNull())
    {
        if (!value["ResourceDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionDescription.ResourceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDescription = string(value["ResourceDescription"].GetString());
        m_resourceDescriptionHasBeenSet = true;
    }

    if (value.HasMember("APIGWParams") && !value["APIGWParams"].IsNull())
    {
        if (!value["APIGWParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionDescription.APIGWParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aPIGWParams.Deserialize(value["APIGWParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aPIGWParamsHasBeenSet = true;
    }

    if (value.HasMember("CkafkaParams") && !value["CkafkaParams"].IsNull())
    {
        if (!value["CkafkaParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionDescription.CkafkaParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ckafkaParams.Deserialize(value["CkafkaParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ckafkaParamsHasBeenSet = true;
    }

    if (value.HasMember("DTSParams") && !value["DTSParams"].IsNull())
    {
        if (!value["DTSParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionDescription.DTSParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dTSParams.Deserialize(value["DTSParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dTSParamsHasBeenSet = true;
    }

    if (value.HasMember("TDMQParams") && !value["TDMQParams"].IsNull())
    {
        if (!value["TDMQParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionDescription.TDMQParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tDMQParams.Deserialize(value["TDMQParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tDMQParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectionDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIGWParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIGWParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aPIGWParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ckafkaParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CkafkaParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ckafkaParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dTSParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DTSParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dTSParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tDMQParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TDMQParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tDMQParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ConnectionDescription::GetResourceDescription() const
{
    return m_resourceDescription;
}

void ConnectionDescription::SetResourceDescription(const string& _resourceDescription)
{
    m_resourceDescription = _resourceDescription;
    m_resourceDescriptionHasBeenSet = true;
}

bool ConnectionDescription::ResourceDescriptionHasBeenSet() const
{
    return m_resourceDescriptionHasBeenSet;
}

APIGWParams ConnectionDescription::GetAPIGWParams() const
{
    return m_aPIGWParams;
}

void ConnectionDescription::SetAPIGWParams(const APIGWParams& _aPIGWParams)
{
    m_aPIGWParams = _aPIGWParams;
    m_aPIGWParamsHasBeenSet = true;
}

bool ConnectionDescription::APIGWParamsHasBeenSet() const
{
    return m_aPIGWParamsHasBeenSet;
}

CkafkaParams ConnectionDescription::GetCkafkaParams() const
{
    return m_ckafkaParams;
}

void ConnectionDescription::SetCkafkaParams(const CkafkaParams& _ckafkaParams)
{
    m_ckafkaParams = _ckafkaParams;
    m_ckafkaParamsHasBeenSet = true;
}

bool ConnectionDescription::CkafkaParamsHasBeenSet() const
{
    return m_ckafkaParamsHasBeenSet;
}

DTSParams ConnectionDescription::GetDTSParams() const
{
    return m_dTSParams;
}

void ConnectionDescription::SetDTSParams(const DTSParams& _dTSParams)
{
    m_dTSParams = _dTSParams;
    m_dTSParamsHasBeenSet = true;
}

bool ConnectionDescription::DTSParamsHasBeenSet() const
{
    return m_dTSParamsHasBeenSet;
}

TDMQParams ConnectionDescription::GetTDMQParams() const
{
    return m_tDMQParams;
}

void ConnectionDescription::SetTDMQParams(const TDMQParams& _tDMQParams)
{
    m_tDMQParams = _tDMQParams;
    m_tDMQParamsHasBeenSet = true;
}

bool ConnectionDescription::TDMQParamsHasBeenSet() const
{
    return m_tDMQParamsHasBeenSet;
}

