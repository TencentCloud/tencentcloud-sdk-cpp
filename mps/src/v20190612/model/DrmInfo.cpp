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

#include <tencentcloud/mps/v20190612/model/DrmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DrmInfo::DrmInfo() :
    m_typeHasBeenSet(false),
    m_simpleAesDrmHasBeenSet(false),
    m_spekeDrmHasBeenSet(false)
{
}

CoreInternalOutcome DrmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrmInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SimpleAesDrm") && !value["SimpleAesDrm"].IsNull())
    {
        if (!value["SimpleAesDrm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DrmInfo.SimpleAesDrm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_simpleAesDrm.Deserialize(value["SimpleAesDrm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_simpleAesDrmHasBeenSet = true;
    }

    if (value.HasMember("SpekeDrm") && !value["SpekeDrm"].IsNull())
    {
        if (!value["SpekeDrm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DrmInfo.SpekeDrm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spekeDrm.Deserialize(value["SpekeDrm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spekeDrmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_simpleAesDrmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimpleAesDrm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_simpleAesDrm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spekeDrmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpekeDrm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spekeDrm.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DrmInfo::GetType() const
{
    return m_type;
}

void DrmInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DrmInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

SimpleAesDrm DrmInfo::GetSimpleAesDrm() const
{
    return m_simpleAesDrm;
}

void DrmInfo::SetSimpleAesDrm(const SimpleAesDrm& _simpleAesDrm)
{
    m_simpleAesDrm = _simpleAesDrm;
    m_simpleAesDrmHasBeenSet = true;
}

bool DrmInfo::SimpleAesDrmHasBeenSet() const
{
    return m_simpleAesDrmHasBeenSet;
}

SpekeDrm DrmInfo::GetSpekeDrm() const
{
    return m_spekeDrm;
}

void DrmInfo::SetSpekeDrm(const SpekeDrm& _spekeDrm)
{
    m_spekeDrm = _spekeDrm;
    m_spekeDrmHasBeenSet = true;
}

bool DrmInfo::SpekeDrmHasBeenSet() const
{
    return m_spekeDrmHasBeenSet;
}

