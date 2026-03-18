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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogListByVaultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBinlogListByVaultItem::DescribeBinlogListByVaultItem() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_binlogFileInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBinlogListByVaultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBinlogListByVaultItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBinlogListByVaultItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("BinlogFileInfo") && !value["BinlogFileInfo"].IsNull())
    {
        if (!value["BinlogFileInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeBinlogListByVaultItem.BinlogFileInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_binlogFileInfo.Deserialize(value["BinlogFileInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_binlogFileInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeBinlogListByVaultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogFileInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_binlogFileInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DescribeBinlogListByVaultItem::GetClusterId() const
{
    return m_clusterId;
}

void DescribeBinlogListByVaultItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeBinlogListByVaultItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeBinlogListByVaultItem::GetClusterName() const
{
    return m_clusterName;
}

void DescribeBinlogListByVaultItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeBinlogListByVaultItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

BinlogItem DescribeBinlogListByVaultItem::GetBinlogFileInfo() const
{
    return m_binlogFileInfo;
}

void DescribeBinlogListByVaultItem::SetBinlogFileInfo(const BinlogItem& _binlogFileInfo)
{
    m_binlogFileInfo = _binlogFileInfo;
    m_binlogFileInfoHasBeenSet = true;
}

bool DescribeBinlogListByVaultItem::BinlogFileInfoHasBeenSet() const
{
    return m_binlogFileInfoHasBeenSet;
}

