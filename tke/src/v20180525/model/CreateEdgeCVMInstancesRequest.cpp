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

#include <tencentcloud/tke/v20180525/model/CreateEdgeCVMInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateEdgeCVMInstancesRequest::CreateEdgeCVMInstancesRequest() :
    m_clusterIDHasBeenSet(false),
    m_runInstanceParaHasBeenSet(false),
    m_cvmRegionHasBeenSet(false),
    m_cvmCountHasBeenSet(false),
    m_externalHasBeenSet(false),
    m_userScriptHasBeenSet(false),
    m_enableEniHasBeenSet(false)
{
}

string CreateEdgeCVMInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_runInstanceParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstancePara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runInstancePara.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cvmRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cvmCount, allocator);
    }

    if (m_externalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "External";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_external.c_str(), allocator).Move(), allocator);
    }

    if (m_userScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userScript.c_str(), allocator).Move(), allocator);
    }

    if (m_enableEniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableEni";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableEni, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEdgeCVMInstancesRequest::GetClusterID() const
{
    return m_clusterID;
}

void CreateEdgeCVMInstancesRequest::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool CreateEdgeCVMInstancesRequest::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string CreateEdgeCVMInstancesRequest::GetRunInstancePara() const
{
    return m_runInstancePara;
}

void CreateEdgeCVMInstancesRequest::SetRunInstancePara(const string& _runInstancePara)
{
    m_runInstancePara = _runInstancePara;
    m_runInstanceParaHasBeenSet = true;
}

bool CreateEdgeCVMInstancesRequest::RunInstanceParaHasBeenSet() const
{
    return m_runInstanceParaHasBeenSet;
}

string CreateEdgeCVMInstancesRequest::GetCvmRegion() const
{
    return m_cvmRegion;
}

void CreateEdgeCVMInstancesRequest::SetCvmRegion(const string& _cvmRegion)
{
    m_cvmRegion = _cvmRegion;
    m_cvmRegionHasBeenSet = true;
}

bool CreateEdgeCVMInstancesRequest::CvmRegionHasBeenSet() const
{
    return m_cvmRegionHasBeenSet;
}

int64_t CreateEdgeCVMInstancesRequest::GetCvmCount() const
{
    return m_cvmCount;
}

void CreateEdgeCVMInstancesRequest::SetCvmCount(const int64_t& _cvmCount)
{
    m_cvmCount = _cvmCount;
    m_cvmCountHasBeenSet = true;
}

bool CreateEdgeCVMInstancesRequest::CvmCountHasBeenSet() const
{
    return m_cvmCountHasBeenSet;
}

string CreateEdgeCVMInstancesRequest::GetExternal() const
{
    return m_external;
}

void CreateEdgeCVMInstancesRequest::SetExternal(const string& _external)
{
    m_external = _external;
    m_externalHasBeenSet = true;
}

bool CreateEdgeCVMInstancesRequest::ExternalHasBeenSet() const
{
    return m_externalHasBeenSet;
}

string CreateEdgeCVMInstancesRequest::GetUserScript() const
{
    return m_userScript;
}

void CreateEdgeCVMInstancesRequest::SetUserScript(const string& _userScript)
{
    m_userScript = _userScript;
    m_userScriptHasBeenSet = true;
}

bool CreateEdgeCVMInstancesRequest::UserScriptHasBeenSet() const
{
    return m_userScriptHasBeenSet;
}

bool CreateEdgeCVMInstancesRequest::GetEnableEni() const
{
    return m_enableEni;
}

void CreateEdgeCVMInstancesRequest::SetEnableEni(const bool& _enableEni)
{
    m_enableEni = _enableEni;
    m_enableEniHasBeenSet = true;
}

bool CreateEdgeCVMInstancesRequest::EnableEniHasBeenSet() const
{
    return m_enableEniHasBeenSet;
}


