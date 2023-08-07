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

#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterAttributeResponse::ModifyClusterAttributeResponse() :
    m_projectIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_clusterLevelHasBeenSet(false),
    m_autoUpgradeClusterLevelHasBeenSet(false),
    m_qGPUShareEnableHasBeenSet(false),
    m_clusterPropertyHasBeenSet(false)
{
}

CoreInternalOutcome ModifyClusterAttributeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = rsp["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterDesc") && !rsp["ClusterDesc"].IsNull())
    {
        if (!rsp["ClusterDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDesc = string(rsp["ClusterDesc"].GetString());
        m_clusterDescHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterLevel") && !rsp["ClusterLevel"].IsNull())
    {
        if (!rsp["ClusterLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLevel = string(rsp["ClusterLevel"].GetString());
        m_clusterLevelHasBeenSet = true;
    }

    if (rsp.HasMember("AutoUpgradeClusterLevel") && !rsp["AutoUpgradeClusterLevel"].IsNull())
    {
        if (!rsp["AutoUpgradeClusterLevel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoUpgradeClusterLevel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoUpgradeClusterLevel.Deserialize(rsp["AutoUpgradeClusterLevel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoUpgradeClusterLevelHasBeenSet = true;
    }

    if (rsp.HasMember("QGPUShareEnable") && !rsp["QGPUShareEnable"].IsNull())
    {
        if (!rsp["QGPUShareEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QGPUShareEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_qGPUShareEnable = rsp["QGPUShareEnable"].GetBool();
        m_qGPUShareEnableHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterProperty") && !rsp["ClusterProperty"].IsNull())
    {
        if (!rsp["ClusterProperty"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterProperty` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterProperty.Deserialize(rsp["ClusterProperty"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterPropertyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyClusterAttributeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpgradeClusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoUpgradeClusterLevel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qGPUShareEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QGPUShareEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qGPUShareEnable, allocator);
    }

    if (m_clusterPropertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterProperty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterProperty.ToJsonObject(value[key.c_str()], allocator);
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


int64_t ModifyClusterAttributeResponse::GetProjectId() const
{
    return m_projectId;
}

bool ModifyClusterAttributeResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyClusterAttributeResponse::GetClusterName() const
{
    return m_clusterName;
}

bool ModifyClusterAttributeResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ModifyClusterAttributeResponse::GetClusterDesc() const
{
    return m_clusterDesc;
}

bool ModifyClusterAttributeResponse::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string ModifyClusterAttributeResponse::GetClusterLevel() const
{
    return m_clusterLevel;
}

bool ModifyClusterAttributeResponse::ClusterLevelHasBeenSet() const
{
    return m_clusterLevelHasBeenSet;
}

AutoUpgradeClusterLevel ModifyClusterAttributeResponse::GetAutoUpgradeClusterLevel() const
{
    return m_autoUpgradeClusterLevel;
}

bool ModifyClusterAttributeResponse::AutoUpgradeClusterLevelHasBeenSet() const
{
    return m_autoUpgradeClusterLevelHasBeenSet;
}

bool ModifyClusterAttributeResponse::GetQGPUShareEnable() const
{
    return m_qGPUShareEnable;
}

bool ModifyClusterAttributeResponse::QGPUShareEnableHasBeenSet() const
{
    return m_qGPUShareEnableHasBeenSet;
}

ClusterProperty ModifyClusterAttributeResponse::GetClusterProperty() const
{
    return m_clusterProperty;
}

bool ModifyClusterAttributeResponse::ClusterPropertyHasBeenSet() const
{
    return m_clusterPropertyHasBeenSet;
}


