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

#include <tencentcloud/cat/v20180409/model/DimensionsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DimensionsDetail::DimensionsDetail() :
    m_ispHasBeenSet(false),
    m_provinceHasBeenSet(false)
{
}

CoreInternalOutcome DimensionsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsArray())
            return CoreInternalOutcome(Error("response `DimensionsDetail.Isp` is not array type"));

        const rapidjson::Value &tmpValue = value["Isp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_isp.push_back((*itr).GetString());
        }
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsArray())
            return CoreInternalOutcome(Error("response `DimensionsDetail.Province` is not array type"));

        const rapidjson::Value &tmpValue = value["Province"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_province.push_back((*itr).GetString());
        }
        m_provinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimensionsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isp.begin(); itr != m_isp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_province.begin(); itr != m_province.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> DimensionsDetail::GetIsp() const
{
    return m_isp;
}

void DimensionsDetail::SetIsp(const vector<string>& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DimensionsDetail::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

vector<string> DimensionsDetail::GetProvince() const
{
    return m_province;
}

void DimensionsDetail::SetProvince(const vector<string>& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DimensionsDetail::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

