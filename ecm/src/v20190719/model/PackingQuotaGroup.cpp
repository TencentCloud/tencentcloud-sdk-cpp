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

#include <tencentcloud/ecm/v20190719/model/PackingQuotaGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PackingQuotaGroup::PackingQuotaGroup() :
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_iSPIdHasBeenSet(false),
    m_packingQuotaInfosHasBeenSet(false)
{
}

CoreInternalOutcome PackingQuotaGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackingQuotaGroup.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PackingQuotaGroup.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ISPId") && !value["ISPId"].IsNull())
    {
        if (!value["ISPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackingQuotaGroup.ISPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSPId = string(value["ISPId"].GetString());
        m_iSPIdHasBeenSet = true;
    }

    if (value.HasMember("PackingQuotaInfos") && !value["PackingQuotaInfos"].IsNull())
    {
        if (!value["PackingQuotaInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PackingQuotaGroup.PackingQuotaInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["PackingQuotaInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PackingQuotaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_packingQuotaInfos.push_back(item);
        }
        m_packingQuotaInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackingQuotaGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_iSPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSPId.c_str(), allocator).Move(), allocator);
    }

    if (m_packingQuotaInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackingQuotaInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_packingQuotaInfos.begin(); itr != m_packingQuotaInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PackingQuotaGroup::GetZone() const
{
    return m_zone;
}

void PackingQuotaGroup::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool PackingQuotaGroup::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t PackingQuotaGroup::GetZoneId() const
{
    return m_zoneId;
}

void PackingQuotaGroup::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool PackingQuotaGroup::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string PackingQuotaGroup::GetISPId() const
{
    return m_iSPId;
}

void PackingQuotaGroup::SetISPId(const string& _iSPId)
{
    m_iSPId = _iSPId;
    m_iSPIdHasBeenSet = true;
}

bool PackingQuotaGroup::ISPIdHasBeenSet() const
{
    return m_iSPIdHasBeenSet;
}

vector<PackingQuotaInfo> PackingQuotaGroup::GetPackingQuotaInfos() const
{
    return m_packingQuotaInfos;
}

void PackingQuotaGroup::SetPackingQuotaInfos(const vector<PackingQuotaInfo>& _packingQuotaInfos)
{
    m_packingQuotaInfos = _packingQuotaInfos;
    m_packingQuotaInfosHasBeenSet = true;
}

bool PackingQuotaGroup::PackingQuotaInfosHasBeenSet() const
{
    return m_packingQuotaInfosHasBeenSet;
}

