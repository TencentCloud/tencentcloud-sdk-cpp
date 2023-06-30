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

#include <tencentcloud/tcss/v20201101/model/ComplianceHostDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceHostDetailInfo::ComplianceHostDetailInfo() :
    m_dockerVersionHasBeenSet(false),
    m_k8SVersionHasBeenSet(false),
    m_containerdVersionHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceHostDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DockerVersion") && !value["DockerVersion"].IsNull())
    {
        if (!value["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceHostDetailInfo.DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(value["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (value.HasMember("K8SVersion") && !value["K8SVersion"].IsNull())
    {
        if (!value["K8SVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceHostDetailInfo.K8SVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8SVersion = string(value["K8SVersion"].GetString());
        m_k8SVersionHasBeenSet = true;
    }

    if (value.HasMember("ContainerdVersion") && !value["ContainerdVersion"].IsNull())
    {
        if (!value["ContainerdVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceHostDetailInfo.ContainerdVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerdVersion = string(value["ContainerdVersion"].GetString());
        m_containerdVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceHostDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dockerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_k8SVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8SVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8SVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_containerdVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerdVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerdVersion.c_str(), allocator).Move(), allocator);
    }

}


string ComplianceHostDetailInfo::GetDockerVersion() const
{
    return m_dockerVersion;
}

void ComplianceHostDetailInfo::SetDockerVersion(const string& _dockerVersion)
{
    m_dockerVersion = _dockerVersion;
    m_dockerVersionHasBeenSet = true;
}

bool ComplianceHostDetailInfo::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string ComplianceHostDetailInfo::GetK8SVersion() const
{
    return m_k8SVersion;
}

void ComplianceHostDetailInfo::SetK8SVersion(const string& _k8SVersion)
{
    m_k8SVersion = _k8SVersion;
    m_k8SVersionHasBeenSet = true;
}

bool ComplianceHostDetailInfo::K8SVersionHasBeenSet() const
{
    return m_k8SVersionHasBeenSet;
}

string ComplianceHostDetailInfo::GetContainerdVersion() const
{
    return m_containerdVersion;
}

void ComplianceHostDetailInfo::SetContainerdVersion(const string& _containerdVersion)
{
    m_containerdVersion = _containerdVersion;
    m_containerdVersionHasBeenSet = true;
}

bool ComplianceHostDetailInfo::ContainerdVersionHasBeenSet() const
{
    return m_containerdVersionHasBeenSet;
}

