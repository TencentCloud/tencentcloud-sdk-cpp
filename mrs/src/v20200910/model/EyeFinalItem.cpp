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

#include <tencentcloud/mrs/v20200910/model/EyeFinalItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EyeFinalItem::EyeFinalItem() :
    m_sphHasBeenSet(false),
    m_cylHasBeenSet(false),
    m_axHasBeenSet(false),
    m_seHasBeenSet(false)
{
}

CoreInternalOutcome EyeFinalItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sph") && !value["Sph"].IsNull())
    {
        if (!value["Sph"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeFinalItem.Sph` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sph.Deserialize(value["Sph"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sphHasBeenSet = true;
    }

    if (value.HasMember("Cyl") && !value["Cyl"].IsNull())
    {
        if (!value["Cyl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeFinalItem.Cyl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cyl.Deserialize(value["Cyl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cylHasBeenSet = true;
    }

    if (value.HasMember("Ax") && !value["Ax"].IsNull())
    {
        if (!value["Ax"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeFinalItem.Ax` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ax.Deserialize(value["Ax"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_axHasBeenSet = true;
    }

    if (value.HasMember("Se") && !value["Se"].IsNull())
    {
        if (!value["Se"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeFinalItem.Se` is not object type").SetRequestId(requestId));
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

void EyeFinalItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sphHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sph";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sph.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cylHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cyl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cyl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_axHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ax.ToJsonObject(value[key.c_str()], allocator);
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


BaseItem3 EyeFinalItem::GetSph() const
{
    return m_sph;
}

void EyeFinalItem::SetSph(const BaseItem3& _sph)
{
    m_sph = _sph;
    m_sphHasBeenSet = true;
}

bool EyeFinalItem::SphHasBeenSet() const
{
    return m_sphHasBeenSet;
}

BaseItem3 EyeFinalItem::GetCyl() const
{
    return m_cyl;
}

void EyeFinalItem::SetCyl(const BaseItem3& _cyl)
{
    m_cyl = _cyl;
    m_cylHasBeenSet = true;
}

bool EyeFinalItem::CylHasBeenSet() const
{
    return m_cylHasBeenSet;
}

BaseItem3 EyeFinalItem::GetAx() const
{
    return m_ax;
}

void EyeFinalItem::SetAx(const BaseItem3& _ax)
{
    m_ax = _ax;
    m_axHasBeenSet = true;
}

bool EyeFinalItem::AxHasBeenSet() const
{
    return m_axHasBeenSet;
}

BaseItem2 EyeFinalItem::GetSe() const
{
    return m_se;
}

void EyeFinalItem::SetSe(const BaseItem2& _se)
{
    m_se = _se;
    m_seHasBeenSet = true;
}

bool EyeFinalItem::SeHasBeenSet() const
{
    return m_seHasBeenSet;
}

