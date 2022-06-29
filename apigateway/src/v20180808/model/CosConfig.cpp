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

#include <tencentcloud/apigateway/v20180808/model/CosConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

CosConfig::CosConfig() :
    m_actionHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_authorizationHasBeenSet(false),
    m_pathMatchModeHasBeenSet(false)
{
}

CoreInternalOutcome CosConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosConfig.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosConfig.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("Authorization") && !value["Authorization"].IsNull())
    {
        if (!value["Authorization"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CosConfig.Authorization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authorization = value["Authorization"].GetBool();
        m_authorizationHasBeenSet = true;
    }

    if (value.HasMember("PathMatchMode") && !value["PathMatchMode"].IsNull())
    {
        if (!value["PathMatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosConfig.PathMatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMatchMode = string(value["PathMatchMode"].GetString());
        m_pathMatchModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorization, allocator);
    }

    if (m_pathMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMatchMode.c_str(), allocator).Move(), allocator);
    }

}


string CosConfig::GetAction() const
{
    return m_action;
}

void CosConfig::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CosConfig::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string CosConfig::GetBucketName() const
{
    return m_bucketName;
}

void CosConfig::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool CosConfig::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

bool CosConfig::GetAuthorization() const
{
    return m_authorization;
}

void CosConfig::SetAuthorization(const bool& _authorization)
{
    m_authorization = _authorization;
    m_authorizationHasBeenSet = true;
}

bool CosConfig::AuthorizationHasBeenSet() const
{
    return m_authorizationHasBeenSet;
}

string CosConfig::GetPathMatchMode() const
{
    return m_pathMatchMode;
}

void CosConfig::SetPathMatchMode(const string& _pathMatchMode)
{
    m_pathMatchMode = _pathMatchMode;
    m_pathMatchModeHasBeenSet = true;
}

bool CosConfig::PathMatchModeHasBeenSet() const
{
    return m_pathMatchModeHasBeenSet;
}

