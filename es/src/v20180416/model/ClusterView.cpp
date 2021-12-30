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

#include <tencentcloud/es/v20180416/model/ClusterView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ClusterView::ClusterView() :
    m_healthHasBeenSet(false),
    m_visibleHasBeenSet(false),
    m_breakHasBeenSet(false),
    m_avgDiskUsageHasBeenSet(false),
    m_avgMemUsageHasBeenSet(false),
    m_avgCpuUsageHasBeenSet(false),
    m_totalDiskSizeHasBeenSet(false),
    m_targetNodeTypesHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_totalNodeNumHasBeenSet(false),
    m_dataNodeNumHasBeenSet(false),
    m_indexNumHasBeenSet(false),
    m_docNumHasBeenSet(false),
    m_diskUsedInBytesHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_primaryShardNumHasBeenSet(false),
    m_relocatingShardNumHasBeenSet(false),
    m_initializingShardNumHasBeenSet(false),
    m_unassignedShardNumHasBeenSet(false),
    m_totalCosStorageHasBeenSet(false),
    m_searchableSnapshotCosBucketHasBeenSet(false),
    m_searchableSnapshotCosAppIdHasBeenSet(false)
{
}

CoreInternalOutcome ClusterView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Health") && !value["Health"].IsNull())
    {
        if (!value["Health"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.Health` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_health = value["Health"].GetDouble();
        m_healthHasBeenSet = true;
    }

    if (value.HasMember("Visible") && !value["Visible"].IsNull())
    {
        if (!value["Visible"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.Visible` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_visible = value["Visible"].GetDouble();
        m_visibleHasBeenSet = true;
    }

    if (value.HasMember("Break") && !value["Break"].IsNull())
    {
        if (!value["Break"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.Break` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_break = value["Break"].GetDouble();
        m_breakHasBeenSet = true;
    }

    if (value.HasMember("AvgDiskUsage") && !value["AvgDiskUsage"].IsNull())
    {
        if (!value["AvgDiskUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.AvgDiskUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgDiskUsage = value["AvgDiskUsage"].GetDouble();
        m_avgDiskUsageHasBeenSet = true;
    }

    if (value.HasMember("AvgMemUsage") && !value["AvgMemUsage"].IsNull())
    {
        if (!value["AvgMemUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.AvgMemUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgMemUsage = value["AvgMemUsage"].GetDouble();
        m_avgMemUsageHasBeenSet = true;
    }

    if (value.HasMember("AvgCpuUsage") && !value["AvgCpuUsage"].IsNull())
    {
        if (!value["AvgCpuUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.AvgCpuUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgCpuUsage = value["AvgCpuUsage"].GetDouble();
        m_avgCpuUsageHasBeenSet = true;
    }

    if (value.HasMember("TotalDiskSize") && !value["TotalDiskSize"].IsNull())
    {
        if (!value["TotalDiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.TotalDiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDiskSize = value["TotalDiskSize"].GetUint64();
        m_totalDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("TargetNodeTypes") && !value["TargetNodeTypes"].IsNull())
    {
        if (!value["TargetNodeTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterView.TargetNodeTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetNodeTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetNodeTypes.push_back((*itr).GetString());
        }
        m_targetNodeTypesHasBeenSet = true;
    }

    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.NodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetInt64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("TotalNodeNum") && !value["TotalNodeNum"].IsNull())
    {
        if (!value["TotalNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.TotalNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNodeNum = value["TotalNodeNum"].GetInt64();
        m_totalNodeNumHasBeenSet = true;
    }

    if (value.HasMember("DataNodeNum") && !value["DataNodeNum"].IsNull())
    {
        if (!value["DataNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.DataNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataNodeNum = value["DataNodeNum"].GetInt64();
        m_dataNodeNumHasBeenSet = true;
    }

    if (value.HasMember("IndexNum") && !value["IndexNum"].IsNull())
    {
        if (!value["IndexNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.IndexNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexNum = value["IndexNum"].GetInt64();
        m_indexNumHasBeenSet = true;
    }

    if (value.HasMember("DocNum") && !value["DocNum"].IsNull())
    {
        if (!value["DocNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.DocNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_docNum = value["DocNum"].GetInt64();
        m_docNumHasBeenSet = true;
    }

    if (value.HasMember("DiskUsedInBytes") && !value["DiskUsedInBytes"].IsNull())
    {
        if (!value["DiskUsedInBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.DiskUsedInBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsedInBytes = value["DiskUsedInBytes"].GetInt64();
        m_diskUsedInBytesHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.ShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = value["ShardNum"].GetInt64();
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("PrimaryShardNum") && !value["PrimaryShardNum"].IsNull())
    {
        if (!value["PrimaryShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.PrimaryShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_primaryShardNum = value["PrimaryShardNum"].GetInt64();
        m_primaryShardNumHasBeenSet = true;
    }

    if (value.HasMember("RelocatingShardNum") && !value["RelocatingShardNum"].IsNull())
    {
        if (!value["RelocatingShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.RelocatingShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relocatingShardNum = value["RelocatingShardNum"].GetInt64();
        m_relocatingShardNumHasBeenSet = true;
    }

    if (value.HasMember("InitializingShardNum") && !value["InitializingShardNum"].IsNull())
    {
        if (!value["InitializingShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.InitializingShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initializingShardNum = value["InitializingShardNum"].GetInt64();
        m_initializingShardNumHasBeenSet = true;
    }

    if (value.HasMember("UnassignedShardNum") && !value["UnassignedShardNum"].IsNull())
    {
        if (!value["UnassignedShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.UnassignedShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unassignedShardNum = value["UnassignedShardNum"].GetInt64();
        m_unassignedShardNumHasBeenSet = true;
    }

    if (value.HasMember("TotalCosStorage") && !value["TotalCosStorage"].IsNull())
    {
        if (!value["TotalCosStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.TotalCosStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCosStorage = value["TotalCosStorage"].GetInt64();
        m_totalCosStorageHasBeenSet = true;
    }

    if (value.HasMember("SearchableSnapshotCosBucket") && !value["SearchableSnapshotCosBucket"].IsNull())
    {
        if (!value["SearchableSnapshotCosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.SearchableSnapshotCosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchableSnapshotCosBucket = string(value["SearchableSnapshotCosBucket"].GetString());
        m_searchableSnapshotCosBucketHasBeenSet = true;
    }

    if (value.HasMember("SearchableSnapshotCosAppId") && !value["SearchableSnapshotCosAppId"].IsNull())
    {
        if (!value["SearchableSnapshotCosAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterView.SearchableSnapshotCosAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_searchableSnapshotCosAppId = string(value["SearchableSnapshotCosAppId"].GetString());
        m_searchableSnapshotCosAppIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Health";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_health, allocator);
    }

    if (m_visibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_visible, allocator);
    }

    if (m_breakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Break";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_break, allocator);
    }

    if (m_avgDiskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDiskUsage, allocator);
    }

    if (m_avgMemUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgMemUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgMemUsage, allocator);
    }

    if (m_avgCpuUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgCpuUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgCpuUsage, allocator);
    }

    if (m_totalDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDiskSize, allocator);
    }

    if (m_targetNodeTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetNodeTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetNodeTypes.begin(); itr != m_targetNodeTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_totalNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNodeNum, allocator);
    }

    if (m_dataNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataNodeNum, allocator);
    }

    if (m_indexNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexNum, allocator);
    }

    if (m_docNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_docNum, allocator);
    }

    if (m_diskUsedInBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsedInBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskUsedInBytes, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_primaryShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primaryShardNum, allocator);
    }

    if (m_relocatingShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelocatingShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relocatingShardNum, allocator);
    }

    if (m_initializingShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitializingShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initializingShardNum, allocator);
    }

    if (m_unassignedShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnassignedShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unassignedShardNum, allocator);
    }

    if (m_totalCosStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCosStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCosStorage, allocator);
    }

    if (m_searchableSnapshotCosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchableSnapshotCosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchableSnapshotCosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_searchableSnapshotCosAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchableSnapshotCosAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_searchableSnapshotCosAppId.c_str(), allocator).Move(), allocator);
    }

}


double ClusterView::GetHealth() const
{
    return m_health;
}

void ClusterView::SetHealth(const double& _health)
{
    m_health = _health;
    m_healthHasBeenSet = true;
}

bool ClusterView::HealthHasBeenSet() const
{
    return m_healthHasBeenSet;
}

double ClusterView::GetVisible() const
{
    return m_visible;
}

void ClusterView::SetVisible(const double& _visible)
{
    m_visible = _visible;
    m_visibleHasBeenSet = true;
}

bool ClusterView::VisibleHasBeenSet() const
{
    return m_visibleHasBeenSet;
}

double ClusterView::GetBreak() const
{
    return m_break;
}

void ClusterView::SetBreak(const double& _break)
{
    m_break = _break;
    m_breakHasBeenSet = true;
}

bool ClusterView::BreakHasBeenSet() const
{
    return m_breakHasBeenSet;
}

double ClusterView::GetAvgDiskUsage() const
{
    return m_avgDiskUsage;
}

void ClusterView::SetAvgDiskUsage(const double& _avgDiskUsage)
{
    m_avgDiskUsage = _avgDiskUsage;
    m_avgDiskUsageHasBeenSet = true;
}

bool ClusterView::AvgDiskUsageHasBeenSet() const
{
    return m_avgDiskUsageHasBeenSet;
}

double ClusterView::GetAvgMemUsage() const
{
    return m_avgMemUsage;
}

void ClusterView::SetAvgMemUsage(const double& _avgMemUsage)
{
    m_avgMemUsage = _avgMemUsage;
    m_avgMemUsageHasBeenSet = true;
}

bool ClusterView::AvgMemUsageHasBeenSet() const
{
    return m_avgMemUsageHasBeenSet;
}

double ClusterView::GetAvgCpuUsage() const
{
    return m_avgCpuUsage;
}

void ClusterView::SetAvgCpuUsage(const double& _avgCpuUsage)
{
    m_avgCpuUsage = _avgCpuUsage;
    m_avgCpuUsageHasBeenSet = true;
}

bool ClusterView::AvgCpuUsageHasBeenSet() const
{
    return m_avgCpuUsageHasBeenSet;
}

uint64_t ClusterView::GetTotalDiskSize() const
{
    return m_totalDiskSize;
}

void ClusterView::SetTotalDiskSize(const uint64_t& _totalDiskSize)
{
    m_totalDiskSize = _totalDiskSize;
    m_totalDiskSizeHasBeenSet = true;
}

bool ClusterView::TotalDiskSizeHasBeenSet() const
{
    return m_totalDiskSizeHasBeenSet;
}

vector<string> ClusterView::GetTargetNodeTypes() const
{
    return m_targetNodeTypes;
}

void ClusterView::SetTargetNodeTypes(const vector<string>& _targetNodeTypes)
{
    m_targetNodeTypes = _targetNodeTypes;
    m_targetNodeTypesHasBeenSet = true;
}

bool ClusterView::TargetNodeTypesHasBeenSet() const
{
    return m_targetNodeTypesHasBeenSet;
}

int64_t ClusterView::GetNodeNum() const
{
    return m_nodeNum;
}

void ClusterView::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool ClusterView::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

int64_t ClusterView::GetTotalNodeNum() const
{
    return m_totalNodeNum;
}

void ClusterView::SetTotalNodeNum(const int64_t& _totalNodeNum)
{
    m_totalNodeNum = _totalNodeNum;
    m_totalNodeNumHasBeenSet = true;
}

bool ClusterView::TotalNodeNumHasBeenSet() const
{
    return m_totalNodeNumHasBeenSet;
}

int64_t ClusterView::GetDataNodeNum() const
{
    return m_dataNodeNum;
}

void ClusterView::SetDataNodeNum(const int64_t& _dataNodeNum)
{
    m_dataNodeNum = _dataNodeNum;
    m_dataNodeNumHasBeenSet = true;
}

bool ClusterView::DataNodeNumHasBeenSet() const
{
    return m_dataNodeNumHasBeenSet;
}

int64_t ClusterView::GetIndexNum() const
{
    return m_indexNum;
}

void ClusterView::SetIndexNum(const int64_t& _indexNum)
{
    m_indexNum = _indexNum;
    m_indexNumHasBeenSet = true;
}

bool ClusterView::IndexNumHasBeenSet() const
{
    return m_indexNumHasBeenSet;
}

int64_t ClusterView::GetDocNum() const
{
    return m_docNum;
}

void ClusterView::SetDocNum(const int64_t& _docNum)
{
    m_docNum = _docNum;
    m_docNumHasBeenSet = true;
}

bool ClusterView::DocNumHasBeenSet() const
{
    return m_docNumHasBeenSet;
}

int64_t ClusterView::GetDiskUsedInBytes() const
{
    return m_diskUsedInBytes;
}

void ClusterView::SetDiskUsedInBytes(const int64_t& _diskUsedInBytes)
{
    m_diskUsedInBytes = _diskUsedInBytes;
    m_diskUsedInBytesHasBeenSet = true;
}

bool ClusterView::DiskUsedInBytesHasBeenSet() const
{
    return m_diskUsedInBytesHasBeenSet;
}

int64_t ClusterView::GetShardNum() const
{
    return m_shardNum;
}

void ClusterView::SetShardNum(const int64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool ClusterView::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

int64_t ClusterView::GetPrimaryShardNum() const
{
    return m_primaryShardNum;
}

void ClusterView::SetPrimaryShardNum(const int64_t& _primaryShardNum)
{
    m_primaryShardNum = _primaryShardNum;
    m_primaryShardNumHasBeenSet = true;
}

bool ClusterView::PrimaryShardNumHasBeenSet() const
{
    return m_primaryShardNumHasBeenSet;
}

int64_t ClusterView::GetRelocatingShardNum() const
{
    return m_relocatingShardNum;
}

void ClusterView::SetRelocatingShardNum(const int64_t& _relocatingShardNum)
{
    m_relocatingShardNum = _relocatingShardNum;
    m_relocatingShardNumHasBeenSet = true;
}

bool ClusterView::RelocatingShardNumHasBeenSet() const
{
    return m_relocatingShardNumHasBeenSet;
}

int64_t ClusterView::GetInitializingShardNum() const
{
    return m_initializingShardNum;
}

void ClusterView::SetInitializingShardNum(const int64_t& _initializingShardNum)
{
    m_initializingShardNum = _initializingShardNum;
    m_initializingShardNumHasBeenSet = true;
}

bool ClusterView::InitializingShardNumHasBeenSet() const
{
    return m_initializingShardNumHasBeenSet;
}

int64_t ClusterView::GetUnassignedShardNum() const
{
    return m_unassignedShardNum;
}

void ClusterView::SetUnassignedShardNum(const int64_t& _unassignedShardNum)
{
    m_unassignedShardNum = _unassignedShardNum;
    m_unassignedShardNumHasBeenSet = true;
}

bool ClusterView::UnassignedShardNumHasBeenSet() const
{
    return m_unassignedShardNumHasBeenSet;
}

int64_t ClusterView::GetTotalCosStorage() const
{
    return m_totalCosStorage;
}

void ClusterView::SetTotalCosStorage(const int64_t& _totalCosStorage)
{
    m_totalCosStorage = _totalCosStorage;
    m_totalCosStorageHasBeenSet = true;
}

bool ClusterView::TotalCosStorageHasBeenSet() const
{
    return m_totalCosStorageHasBeenSet;
}

string ClusterView::GetSearchableSnapshotCosBucket() const
{
    return m_searchableSnapshotCosBucket;
}

void ClusterView::SetSearchableSnapshotCosBucket(const string& _searchableSnapshotCosBucket)
{
    m_searchableSnapshotCosBucket = _searchableSnapshotCosBucket;
    m_searchableSnapshotCosBucketHasBeenSet = true;
}

bool ClusterView::SearchableSnapshotCosBucketHasBeenSet() const
{
    return m_searchableSnapshotCosBucketHasBeenSet;
}

string ClusterView::GetSearchableSnapshotCosAppId() const
{
    return m_searchableSnapshotCosAppId;
}

void ClusterView::SetSearchableSnapshotCosAppId(const string& _searchableSnapshotCosAppId)
{
    m_searchableSnapshotCosAppId = _searchableSnapshotCosAppId;
    m_searchableSnapshotCosAppIdHasBeenSet = true;
}

bool ClusterView::SearchableSnapshotCosAppIdHasBeenSet() const
{
    return m_searchableSnapshotCosAppIdHasBeenSet;
}

