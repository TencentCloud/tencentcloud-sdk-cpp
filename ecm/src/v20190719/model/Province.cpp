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

#include <tencentcloud/ecm/v20190719/model/Province.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Province::Province() :
    m_provinceIdHasBeenSet(false),
    m_provinceNameHasBeenSet(false)
{
}

CoreInternalOutcome Province::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProvinceId") && !value["ProvinceId"].IsNull())
    {
        if (!value["ProvinceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Province.ProvinceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceId = string(value["ProvinceId"].GetString());
        m_provinceIdHasBeenSet = true;
    }

    if (value.HasMember("ProvinceName") && !value["ProvinceName"].IsNull())
    {
        if (!value["ProvinceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Province.ProvinceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceName = string(value["ProvinceName"].GetString());
        m_provinceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Province::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_provinceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceId.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceName.c_str(), allocator).Move(), allocator);
    }

}


string Province::GetProvinceId() const
{
    return m_provinceId;
}

void Province::SetProvinceId(const string& _provinceId)
{
    m_provinceId = _provinceId;
    m_provinceIdHasBeenSet = true;
}

bool Province::ProvinceIdHasBeenSet() const
{
    return m_provinceIdHasBeenSet;
}

string Province::GetProvinceName() const
{
    return m_provinceName;
}

void Province::SetProvinceName(const string& _provinceName)
{
    m_provinceName = _provinceName;
    m_provinceNameHasBeenSet = true;
}

bool Province::ProvinceNameHasBeenSet() const
{
    return m_provinceNameHasBeenSet;
}

