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

#include <tencentcloud/vod/v20180717/model/SimpleAesEdkPair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SimpleAesEdkPair::SimpleAesEdkPair() :
    m_edkHasBeenSet(false),
    m_dkHasBeenSet(false)
{
}

CoreInternalOutcome SimpleAesEdkPair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Edk") && !value["Edk"].IsNull())
    {
        if (!value["Edk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleAesEdkPair.Edk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edk = string(value["Edk"].GetString());
        m_edkHasBeenSet = true;
    }

    if (value.HasMember("Dk") && !value["Dk"].IsNull())
    {
        if (!value["Dk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleAesEdkPair.Dk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dk = string(value["Dk"].GetString());
        m_dkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleAesEdkPair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_edkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edk.c_str(), allocator).Move(), allocator);
    }

    if (m_dkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dk.c_str(), allocator).Move(), allocator);
    }

}


string SimpleAesEdkPair::GetEdk() const
{
    return m_edk;
}

void SimpleAesEdkPair::SetEdk(const string& _edk)
{
    m_edk = _edk;
    m_edkHasBeenSet = true;
}

bool SimpleAesEdkPair::EdkHasBeenSet() const
{
    return m_edkHasBeenSet;
}

string SimpleAesEdkPair::GetDk() const
{
    return m_dk;
}

void SimpleAesEdkPair::SetDk(const string& _dk)
{
    m_dk = _dk;
    m_dkHasBeenSet = true;
}

bool SimpleAesEdkPair::DkHasBeenSet() const
{
    return m_dkHasBeenSet;
}

