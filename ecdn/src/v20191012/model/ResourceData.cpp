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

#include <tencentcloud/ecdn/v20191012/model/ResourceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

ResourceData::ResourceData() :
    m_resourceHasBeenSet(false),
    m_ecdnDataHasBeenSet(false)
{
}

CoreInternalOutcome ResourceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceData.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("EcdnData") && !value["EcdnData"].IsNull())
    {
        if (!value["EcdnData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceData.EcdnData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ecdnData.Deserialize(value["EcdnData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ecdnDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_ecdnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcdnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ecdnData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ResourceData::GetResource() const
{
    return m_resource;
}

void ResourceData::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ResourceData::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

EcdnData ResourceData::GetEcdnData() const
{
    return m_ecdnData;
}

void ResourceData::SetEcdnData(const EcdnData& _ecdnData)
{
    m_ecdnData = _ecdnData;
    m_ecdnDataHasBeenSet = true;
}

bool ResourceData::EcdnDataHasBeenSet() const
{
    return m_ecdnDataHasBeenSet;
}

