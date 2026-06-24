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

#include <tencentcloud/emr/v20190103/model/DescribeDynamicInstanceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeDynamicInstanceDetailResponse::DescribeDynamicInstanceDetailResponse() :
    m_rayClusterNameHasBeenSet(false),
    m_rayClusterIdHasBeenSet(false),
    m_submitTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tolerationsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_supportExternalKerberosServiceHasBeenSet(false),
    m_kerberosClusterHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_headGroupSpecHasBeenSet(false),
    m_workerGroupSpecsHasBeenSet(false),
    m_storageConfigEnabledHasBeenSet(false),
    m_redisInstanceHasBeenSet(false),
    m_customImageHasBeenSet(false),
    m_dashboardUrlHasBeenSet(false),
    m_totalPodCountHasBeenSet(false),
    m_highAvailabilityHasBeenSet(false),
    m_persistentVolumeHasBeenSet(false),
    m_rayClusterYamlHasBeenSet(false),
    m_imageInfoV2HasBeenSet(false)
{
}

CoreInternalOutcome DescribeDynamicInstanceDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RayClusterName") && !rsp["RayClusterName"].IsNull())
    {
        if (!rsp["RayClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rayClusterName = string(rsp["RayClusterName"].GetString());
        m_rayClusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("RayClusterId") && !rsp["RayClusterId"].IsNull())
    {
        if (!rsp["RayClusterId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rayClusterId = rsp["RayClusterId"].GetInt64();
        m_rayClusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubmitType") && !rsp["SubmitType"].IsNull())
    {
        if (!rsp["SubmitType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubmitType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_submitType = rsp["SubmitType"].GetInt64();
        m_submitTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
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

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Labels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("Tolerations") && !rsp["Tolerations"].IsNull())
    {
        if (!rsp["Tolerations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tolerations` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tolerations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Toleration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tolerations.push_back(item);
        }
        m_tolerationsHasBeenSet = true;
    }

    if (rsp.HasMember("Env") && !rsp["Env"].IsNull())
    {
        if (!rsp["Env"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Env` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Env"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_env.push_back(item);
        }
        m_envHasBeenSet = true;
    }

    if (rsp.HasMember("SupportExternalKerberosService") && !rsp["SupportExternalKerberosService"].IsNull())
    {
        if (!rsp["SupportExternalKerberosService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SupportExternalKerberosService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportExternalKerberosService = rsp["SupportExternalKerberosService"].GetBool();
        m_supportExternalKerberosServiceHasBeenSet = true;
    }

    if (rsp.HasMember("KerberosCluster") && !rsp["KerberosCluster"].IsNull())
    {
        if (!rsp["KerberosCluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KerberosCluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kerberosCluster = string(rsp["KerberosCluster"].GetString());
        m_kerberosClusterHasBeenSet = true;
    }

    if (rsp.HasMember("Token") && !rsp["Token"].IsNull())
    {
        if (!rsp["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(rsp["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (rsp.HasMember("HeadGroupSpec") && !rsp["HeadGroupSpec"].IsNull())
    {
        if (!rsp["HeadGroupSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HeadGroupSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headGroupSpec.Deserialize(rsp["HeadGroupSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headGroupSpecHasBeenSet = true;
    }

    if (rsp.HasMember("WorkerGroupSpecs") && !rsp["WorkerGroupSpecs"].IsNull())
    {
        if (!rsp["WorkerGroupSpecs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkerGroupSpecs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WorkerGroupSpecs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DynamicInstanceGroupSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workerGroupSpecs.push_back(item);
        }
        m_workerGroupSpecsHasBeenSet = true;
    }

    if (rsp.HasMember("StorageConfigEnabled") && !rsp["StorageConfigEnabled"].IsNull())
    {
        if (!rsp["StorageConfigEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StorageConfigEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_storageConfigEnabled = rsp["StorageConfigEnabled"].GetBool();
        m_storageConfigEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("RedisInstance") && !rsp["RedisInstance"].IsNull())
    {
        if (!rsp["RedisInstance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redisInstance.Deserialize(rsp["RedisInstance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redisInstanceHasBeenSet = true;
    }

    if (rsp.HasMember("CustomImage") && !rsp["CustomImage"].IsNull())
    {
        if (!rsp["CustomImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customImage.Deserialize(rsp["CustomImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customImageHasBeenSet = true;
    }

    if (rsp.HasMember("DashboardUrl") && !rsp["DashboardUrl"].IsNull())
    {
        if (!rsp["DashboardUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardUrl = string(rsp["DashboardUrl"].GetString());
        m_dashboardUrlHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPodCount") && !rsp["TotalPodCount"].IsNull())
    {
        if (!rsp["TotalPodCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPodCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPodCount = rsp["TotalPodCount"].GetInt64();
        m_totalPodCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighAvailability") && !rsp["HighAvailability"].IsNull())
    {
        if (!rsp["HighAvailability"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HighAvailability` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_highAvailability = rsp["HighAvailability"].GetBool();
        m_highAvailabilityHasBeenSet = true;
    }

    if (rsp.HasMember("PersistentVolume") && !rsp["PersistentVolume"].IsNull())
    {
        if (!rsp["PersistentVolume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentVolume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_persistentVolume.Deserialize(rsp["PersistentVolume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_persistentVolumeHasBeenSet = true;
    }

    if (rsp.HasMember("RayClusterYaml") && !rsp["RayClusterYaml"].IsNull())
    {
        if (!rsp["RayClusterYaml"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayClusterYaml` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rayClusterYaml = string(rsp["RayClusterYaml"].GetString());
        m_rayClusterYamlHasBeenSet = true;
    }

    if (rsp.HasMember("ImageInfoV2") && !rsp["ImageInfoV2"].IsNull())
    {
        if (!rsp["ImageInfoV2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfoV2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfoV2.Deserialize(rsp["ImageInfoV2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoV2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDynamicInstanceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_rayClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rayClusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_rayClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rayClusterId, allocator);
    }

    if (m_submitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submitType, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tolerationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tolerations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tolerations.begin(); itr != m_tolerations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_env.begin(); itr != m_env.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportExternalKerberosServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportExternalKerberosService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportExternalKerberosService, allocator);
    }

    if (m_kerberosClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KerberosCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kerberosCluster.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_headGroupSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadGroupSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headGroupSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workerGroupSpecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerGroupSpecs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workerGroupSpecs.begin(); itr != m_workerGroupSpecs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageConfigEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageConfigEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageConfigEnabled, allocator);
    }

    if (m_redisInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redisInstance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dashboardUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_totalPodCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPodCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPodCount, allocator);
    }

    if (m_highAvailabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighAvailability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highAvailability, allocator);
    }

    if (m_persistentVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersistentVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_persistentVolume.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rayClusterYamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayClusterYaml";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rayClusterYaml.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfoV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfoV2.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeDynamicInstanceDetailResponse::GetRayClusterName() const
{
    return m_rayClusterName;
}

bool DescribeDynamicInstanceDetailResponse::RayClusterNameHasBeenSet() const
{
    return m_rayClusterNameHasBeenSet;
}

int64_t DescribeDynamicInstanceDetailResponse::GetRayClusterId() const
{
    return m_rayClusterId;
}

bool DescribeDynamicInstanceDetailResponse::RayClusterIdHasBeenSet() const
{
    return m_rayClusterIdHasBeenSet;
}

int64_t DescribeDynamicInstanceDetailResponse::GetSubmitType() const
{
    return m_submitType;
}

bool DescribeDynamicInstanceDetailResponse::SubmitTypeHasBeenSet() const
{
    return m_submitTypeHasBeenSet;
}

string DescribeDynamicInstanceDetailResponse::GetNamespace() const
{
    return m_namespace;
}

bool DescribeDynamicInstanceDetailResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeDynamicInstanceDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeDynamicInstanceDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeDynamicInstanceDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeDynamicInstanceDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<NameValue> DescribeDynamicInstanceDetailResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeDynamicInstanceDetailResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Toleration> DescribeDynamicInstanceDetailResponse::GetTolerations() const
{
    return m_tolerations;
}

bool DescribeDynamicInstanceDetailResponse::TolerationsHasBeenSet() const
{
    return m_tolerationsHasBeenSet;
}

vector<NameValue> DescribeDynamicInstanceDetailResponse::GetEnv() const
{
    return m_env;
}

bool DescribeDynamicInstanceDetailResponse::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

bool DescribeDynamicInstanceDetailResponse::GetSupportExternalKerberosService() const
{
    return m_supportExternalKerberosService;
}

bool DescribeDynamicInstanceDetailResponse::SupportExternalKerberosServiceHasBeenSet() const
{
    return m_supportExternalKerberosServiceHasBeenSet;
}

string DescribeDynamicInstanceDetailResponse::GetKerberosCluster() const
{
    return m_kerberosCluster;
}

bool DescribeDynamicInstanceDetailResponse::KerberosClusterHasBeenSet() const
{
    return m_kerberosClusterHasBeenSet;
}

string DescribeDynamicInstanceDetailResponse::GetToken() const
{
    return m_token;
}

bool DescribeDynamicInstanceDetailResponse::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

DynamicInstanceGroupSpec DescribeDynamicInstanceDetailResponse::GetHeadGroupSpec() const
{
    return m_headGroupSpec;
}

bool DescribeDynamicInstanceDetailResponse::HeadGroupSpecHasBeenSet() const
{
    return m_headGroupSpecHasBeenSet;
}

vector<DynamicInstanceGroupSpec> DescribeDynamicInstanceDetailResponse::GetWorkerGroupSpecs() const
{
    return m_workerGroupSpecs;
}

bool DescribeDynamicInstanceDetailResponse::WorkerGroupSpecsHasBeenSet() const
{
    return m_workerGroupSpecsHasBeenSet;
}

bool DescribeDynamicInstanceDetailResponse::GetStorageConfigEnabled() const
{
    return m_storageConfigEnabled;
}

bool DescribeDynamicInstanceDetailResponse::StorageConfigEnabledHasBeenSet() const
{
    return m_storageConfigEnabledHasBeenSet;
}

RedisInstance DescribeDynamicInstanceDetailResponse::GetRedisInstance() const
{
    return m_redisInstance;
}

bool DescribeDynamicInstanceDetailResponse::RedisInstanceHasBeenSet() const
{
    return m_redisInstanceHasBeenSet;
}

CustomImage DescribeDynamicInstanceDetailResponse::GetCustomImage() const
{
    return m_customImage;
}

bool DescribeDynamicInstanceDetailResponse::CustomImageHasBeenSet() const
{
    return m_customImageHasBeenSet;
}

string DescribeDynamicInstanceDetailResponse::GetDashboardUrl() const
{
    return m_dashboardUrl;
}

bool DescribeDynamicInstanceDetailResponse::DashboardUrlHasBeenSet() const
{
    return m_dashboardUrlHasBeenSet;
}

int64_t DescribeDynamicInstanceDetailResponse::GetTotalPodCount() const
{
    return m_totalPodCount;
}

bool DescribeDynamicInstanceDetailResponse::TotalPodCountHasBeenSet() const
{
    return m_totalPodCountHasBeenSet;
}

bool DescribeDynamicInstanceDetailResponse::GetHighAvailability() const
{
    return m_highAvailability;
}

bool DescribeDynamicInstanceDetailResponse::HighAvailabilityHasBeenSet() const
{
    return m_highAvailabilityHasBeenSet;
}

PersistentVolume DescribeDynamicInstanceDetailResponse::GetPersistentVolume() const
{
    return m_persistentVolume;
}

bool DescribeDynamicInstanceDetailResponse::PersistentVolumeHasBeenSet() const
{
    return m_persistentVolumeHasBeenSet;
}

string DescribeDynamicInstanceDetailResponse::GetRayClusterYaml() const
{
    return m_rayClusterYaml;
}

bool DescribeDynamicInstanceDetailResponse::RayClusterYamlHasBeenSet() const
{
    return m_rayClusterYamlHasBeenSet;
}

ImageInfoV2 DescribeDynamicInstanceDetailResponse::GetImageInfoV2() const
{
    return m_imageInfoV2;
}

bool DescribeDynamicInstanceDetailResponse::ImageInfoV2HasBeenSet() const
{
    return m_imageInfoV2HasBeenSet;
}


