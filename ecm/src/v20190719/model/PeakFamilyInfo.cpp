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

#include <tencentcloud/ecm/v20190719/model/PeakFamilyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PeakFamilyInfo::PeakFamilyInfo() :
    m_instanceFamilyHasBeenSet(false),
    m_peakBaseSetHasBeenSet(false)
{
}

CoreInternalOutcome PeakFamilyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PeakFamilyInfo.InstanceFamily` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceFamily.Deserialize(value["InstanceFamily"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("PeakBaseSet") && !value["PeakBaseSet"].IsNull())
    {
        if (!value["PeakBaseSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PeakFamilyInfo.PeakBaseSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PeakBaseSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PeakBase item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_peakBaseSet.push_back(item);
        }
        m_peakBaseSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeakFamilyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceFamily.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_peakBaseSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakBaseSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_peakBaseSet.begin(); itr != m_peakBaseSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


InstanceFamilyTypeConfig PeakFamilyInfo::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void PeakFamilyInfo::SetInstanceFamily(const InstanceFamilyTypeConfig& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool PeakFamilyInfo::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

vector<PeakBase> PeakFamilyInfo::GetPeakBaseSet() const
{
    return m_peakBaseSet;
}

void PeakFamilyInfo::SetPeakBaseSet(const vector<PeakBase>& _peakBaseSet)
{
    m_peakBaseSet = _peakBaseSet;
    m_peakBaseSetHasBeenSet = true;
}

bool PeakFamilyInfo::PeakBaseSetHasBeenSet() const
{
    return m_peakBaseSetHasBeenSet;
}

