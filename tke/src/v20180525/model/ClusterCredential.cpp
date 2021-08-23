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

#include <tencentcloud/tke/v20180525/model/ClusterCredential.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterCredential::ClusterCredential() :
    m_cACertHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome ClusterCredential::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CACert") && !value["CACert"].IsNull())
    {
        if (!value["CACert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCredential.CACert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cACert = string(value["CACert"].GetString());
        m_cACertHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCredential.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterCredential::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cACertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CACert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cACert.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

}


string ClusterCredential::GetCACert() const
{
    return m_cACert;
}

void ClusterCredential::SetCACert(const string& _cACert)
{
    m_cACert = _cACert;
    m_cACertHasBeenSet = true;
}

bool ClusterCredential::CACertHasBeenSet() const
{
    return m_cACertHasBeenSet;
}

string ClusterCredential::GetToken() const
{
    return m_token;
}

void ClusterCredential::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool ClusterCredential::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

