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

#include <tencentcloud/mrs/v20200910/model/EyeChildItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EyeChildItem::EyeChildItem() :
    m_sphHasBeenSet(false),
    m_cylHasBeenSet(false),
    m_axHasBeenSet(false),
    m_seHasBeenSet(false)
{
}

CoreInternalOutcome EyeChildItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sph") && !value["Sph"].IsNull())
    {
        if (!value["Sph"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EyeChildItem.Sph` is not array type"));

        const rapidjson::Value &tmpValue = value["Sph"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaseItem3 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sph.push_back(item);
        }
        m_sphHasBeenSet = true;
    }

    if (value.HasMember("Cyl") && !value["Cyl"].IsNull())
    {
        if (!value["Cyl"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EyeChildItem.Cyl` is not array type"));

        const rapidjson::Value &tmpValue = value["Cyl"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaseItem3 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cyl.push_back(item);
        }
        m_cylHasBeenSet = true;
    }

    if (value.HasMember("Ax") && !value["Ax"].IsNull())
    {
        if (!value["Ax"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EyeChildItem.Ax` is not array type"));

        const rapidjson::Value &tmpValue = value["Ax"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaseItem3 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ax.push_back(item);
        }
        m_axHasBeenSet = true;
    }

    if (value.HasMember("Se") && !value["Se"].IsNull())
    {
        if (!value["Se"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeChildItem.Se` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_se.Deserialize(value["Se"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EyeChildItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sphHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sph";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sph.begin(); itr != m_sph.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cylHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cyl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cyl.begin(); itr != m_cyl.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_axHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ax.begin(); itr != m_ax.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_seHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Se";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_se.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<BaseItem3> EyeChildItem::GetSph() const
{
    return m_sph;
}

void EyeChildItem::SetSph(const vector<BaseItem3>& _sph)
{
    m_sph = _sph;
    m_sphHasBeenSet = true;
}

bool EyeChildItem::SphHasBeenSet() const
{
    return m_sphHasBeenSet;
}

vector<BaseItem3> EyeChildItem::GetCyl() const
{
    return m_cyl;
}

void EyeChildItem::SetCyl(const vector<BaseItem3>& _cyl)
{
    m_cyl = _cyl;
    m_cylHasBeenSet = true;
}

bool EyeChildItem::CylHasBeenSet() const
{
    return m_cylHasBeenSet;
}

vector<BaseItem3> EyeChildItem::GetAx() const
{
    return m_ax;
}

void EyeChildItem::SetAx(const vector<BaseItem3>& _ax)
{
    m_ax = _ax;
    m_axHasBeenSet = true;
}

bool EyeChildItem::AxHasBeenSet() const
{
    return m_axHasBeenSet;
}

BaseItem2 EyeChildItem::GetSe() const
{
    return m_se;
}

void EyeChildItem::SetSe(const BaseItem2& _se)
{
    m_se = _se;
    m_seHasBeenSet = true;
}

bool EyeChildItem::SeHasBeenSet() const
{
    return m_seHasBeenSet;
}

