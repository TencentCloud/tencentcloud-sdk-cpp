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

#include <tencentcloud/tke/v20180525/model/EksCiVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EksCiVolume::EksCiVolume() :
    m_cbsVolumesHasBeenSet(false),
    m_nfsVolumesHasBeenSet(false)
{
}

CoreInternalOutcome EksCiVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CbsVolumes") && !value["CbsVolumes"].IsNull())
    {
        if (!value["CbsVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCiVolume.CbsVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["CbsVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CbsVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cbsVolumes.push_back(item);
        }
        m_cbsVolumesHasBeenSet = true;
    }

    if (value.HasMember("NfsVolumes") && !value["NfsVolumes"].IsNull())
    {
        if (!value["NfsVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksCiVolume.NfsVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["NfsVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NfsVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nfsVolumes.push_back(item);
        }
        m_nfsVolumesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EksCiVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cbsVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CbsVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cbsVolumes.begin(); itr != m_cbsVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nfsVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NfsVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nfsVolumes.begin(); itr != m_nfsVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CbsVolume> EksCiVolume::GetCbsVolumes() const
{
    return m_cbsVolumes;
}

void EksCiVolume::SetCbsVolumes(const vector<CbsVolume>& _cbsVolumes)
{
    m_cbsVolumes = _cbsVolumes;
    m_cbsVolumesHasBeenSet = true;
}

bool EksCiVolume::CbsVolumesHasBeenSet() const
{
    return m_cbsVolumesHasBeenSet;
}

vector<NfsVolume> EksCiVolume::GetNfsVolumes() const
{
    return m_nfsVolumes;
}

void EksCiVolume::SetNfsVolumes(const vector<NfsVolume>& _nfsVolumes)
{
    m_nfsVolumes = _nfsVolumes;
    m_nfsVolumesHasBeenSet = true;
}

bool EksCiVolume::NfsVolumesHasBeenSet() const
{
    return m_nfsVolumesHasBeenSet;
}

