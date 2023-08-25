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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryLevelDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryLevelDetail::DspaDiscoveryLevelDetail() :
    m_levelGroupNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_levelGroupDescHasBeenSet(false),
    m_levelDetailHasBeenSet(false),
    m_refComplianceCntHasBeenSet(false),
    m_refComplianceHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryLevelDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LevelGroupName") && !value["LevelGroupName"].IsNull())
    {
        if (!value["LevelGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryLevelDetail.LevelGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupName = string(value["LevelGroupName"].GetString());
        m_levelGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryLevelDetail.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("LevelGroupDesc") && !value["LevelGroupDesc"].IsNull())
    {
        if (!value["LevelGroupDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryLevelDetail.LevelGroupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupDesc = string(value["LevelGroupDesc"].GetString());
        m_levelGroupDescHasBeenSet = true;
    }

    if (value.HasMember("LevelDetail") && !value["LevelDetail"].IsNull())
    {
        if (!value["LevelDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryLevelDetail.LevelDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["LevelDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LevelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_levelDetail.push_back(item);
        }
        m_levelDetailHasBeenSet = true;
    }

    if (value.HasMember("RefComplianceCnt") && !value["RefComplianceCnt"].IsNull())
    {
        if (!value["RefComplianceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryLevelDetail.RefComplianceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_refComplianceCnt = value["RefComplianceCnt"].GetUint64();
        m_refComplianceCntHasBeenSet = true;
    }

    if (value.HasMember("RefCompliance") && !value["RefCompliance"].IsNull())
    {
        if (!value["RefCompliance"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryLevelDetail.RefCompliance` is not array type"));

        const rapidjson::Value &tmpValue = value["RefCompliance"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspaDiscoveryComplianceGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_refCompliance.push_back(item);
        }
        m_refComplianceHasBeenSet = true;
    }

    if (value.HasMember("LevelGroupId") && !value["LevelGroupId"].IsNull())
    {
        if (!value["LevelGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryLevelDetail.LevelGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupId = value["LevelGroupId"].GetUint64();
        m_levelGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryLevelDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_levelGroupDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelGroupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_levelDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_levelDetail.begin(); itr != m_levelDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_refComplianceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefComplianceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refComplianceCnt, allocator);
    }

    if (m_refComplianceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefCompliance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_refCompliance.begin(); itr != m_refCompliance.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelGroupId, allocator);
    }

}


string DspaDiscoveryLevelDetail::GetLevelGroupName() const
{
    return m_levelGroupName;
}

void DspaDiscoveryLevelDetail::SetLevelGroupName(const string& _levelGroupName)
{
    m_levelGroupName = _levelGroupName;
    m_levelGroupNameHasBeenSet = true;
}

bool DspaDiscoveryLevelDetail::LevelGroupNameHasBeenSet() const
{
    return m_levelGroupNameHasBeenSet;
}

int64_t DspaDiscoveryLevelDetail::GetSource() const
{
    return m_source;
}

void DspaDiscoveryLevelDetail::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DspaDiscoveryLevelDetail::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DspaDiscoveryLevelDetail::GetLevelGroupDesc() const
{
    return m_levelGroupDesc;
}

void DspaDiscoveryLevelDetail::SetLevelGroupDesc(const string& _levelGroupDesc)
{
    m_levelGroupDesc = _levelGroupDesc;
    m_levelGroupDescHasBeenSet = true;
}

bool DspaDiscoveryLevelDetail::LevelGroupDescHasBeenSet() const
{
    return m_levelGroupDescHasBeenSet;
}

vector<LevelItem> DspaDiscoveryLevelDetail::GetLevelDetail() const
{
    return m_levelDetail;
}

void DspaDiscoveryLevelDetail::SetLevelDetail(const vector<LevelItem>& _levelDetail)
{
    m_levelDetail = _levelDetail;
    m_levelDetailHasBeenSet = true;
}

bool DspaDiscoveryLevelDetail::LevelDetailHasBeenSet() const
{
    return m_levelDetailHasBeenSet;
}

uint64_t DspaDiscoveryLevelDetail::GetRefComplianceCnt() const
{
    return m_refComplianceCnt;
}

void DspaDiscoveryLevelDetail::SetRefComplianceCnt(const uint64_t& _refComplianceCnt)
{
    m_refComplianceCnt = _refComplianceCnt;
    m_refComplianceCntHasBeenSet = true;
}

bool DspaDiscoveryLevelDetail::RefComplianceCntHasBeenSet() const
{
    return m_refComplianceCntHasBeenSet;
}

vector<DspaDiscoveryComplianceGroup> DspaDiscoveryLevelDetail::GetRefCompliance() const
{
    return m_refCompliance;
}

void DspaDiscoveryLevelDetail::SetRefCompliance(const vector<DspaDiscoveryComplianceGroup>& _refCompliance)
{
    m_refCompliance = _refCompliance;
    m_refComplianceHasBeenSet = true;
}

bool DspaDiscoveryLevelDetail::RefComplianceHasBeenSet() const
{
    return m_refComplianceHasBeenSet;
}

uint64_t DspaDiscoveryLevelDetail::GetLevelGroupId() const
{
    return m_levelGroupId;
}

void DspaDiscoveryLevelDetail::SetLevelGroupId(const uint64_t& _levelGroupId)
{
    m_levelGroupId = _levelGroupId;
    m_levelGroupIdHasBeenSet = true;
}

bool DspaDiscoveryLevelDetail::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

