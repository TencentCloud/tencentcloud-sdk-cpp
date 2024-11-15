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

#include <tencentcloud/emr/v20190103/model/DescribeSLInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeSLInstanceResponse::DescribeSLInstanceResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_zoneSettingsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_nodeNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSLInstanceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = rsp["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("DiskType") && !rsp["DiskType"].IsNull())
    {
        if (!rsp["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(rsp["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DiskSize") && !rsp["DiskSize"].IsNull())
    {
        if (!rsp["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = rsp["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (rsp.HasMember("NodeType") && !rsp["NodeType"].IsNull())
    {
        if (!rsp["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(rsp["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneSettings") && !rsp["ZoneSettings"].IsNull())
    {
        if (!rsp["ZoneSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneSettings` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ZoneSettings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneSettings.push_back(item);
        }
        m_zoneSettingsHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = rsp["ClusterId"].GetInt64();
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("RegionId") && !rsp["RegionId"].IsNull())
    {
        if (!rsp["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = rsp["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateTime") && !rsp["IsolateTime"].IsNull())
    {
        if (!rsp["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(rsp["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("NodeNum") && !rsp["NodeNum"].IsNull())
    {
        if (!rsp["NodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = rsp["NodeNum"].GetInt64();
        m_nodeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSLInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneSettings.begin(); itr != m_zoneSettings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeSLInstanceResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeSLInstanceResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSLInstanceResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeSLInstanceResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeSLInstanceResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeSLInstanceResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeSLInstanceResponse::GetDiskType() const
{
    return m_diskType;
}

bool DescribeSLInstanceResponse::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t DescribeSLInstanceResponse::GetDiskSize() const
{
    return m_diskSize;
}

bool DescribeSLInstanceResponse::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string DescribeSLInstanceResponse::GetNodeType() const
{
    return m_nodeType;
}

bool DescribeSLInstanceResponse::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<ZoneSetting> DescribeSLInstanceResponse::GetZoneSettings() const
{
    return m_zoneSettings;
}

bool DescribeSLInstanceResponse::ZoneSettingsHasBeenSet() const
{
    return m_zoneSettingsHasBeenSet;
}

vector<Tag> DescribeSLInstanceResponse::GetTags() const
{
    return m_tags;
}

bool DescribeSLInstanceResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t DescribeSLInstanceResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeSLInstanceResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DescribeSLInstanceResponse::GetRegionId() const
{
    return m_regionId;
}

bool DescribeSLInstanceResponse::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string DescribeSLInstanceResponse::GetZone() const
{
    return m_zone;
}

bool DescribeSLInstanceResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeSLInstanceResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeSLInstanceResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeSLInstanceResponse::GetIsolateTime() const
{
    return m_isolateTime;
}

bool DescribeSLInstanceResponse::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string DescribeSLInstanceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeSLInstanceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeSLInstanceResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSLInstanceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeSLInstanceResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeSLInstanceResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t DescribeSLInstanceResponse::GetNodeNum() const
{
    return m_nodeNum;
}

bool DescribeSLInstanceResponse::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}


