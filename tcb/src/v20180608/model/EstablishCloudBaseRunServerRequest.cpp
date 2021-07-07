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

#include <tencentcloud/tcb/v20180608/model/EstablishCloudBaseRunServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EstablishCloudBaseRunServerRequest::EstablishCloudBaseRunServerRequest() :
    m_envIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_imageRepoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_esInfoHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_vpcInfoHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_openAccessTypesHasBeenSet(false),
    m_isCreatePathHasBeenSet(false),
    m_serverPathHasBeenSet(false)
{
}

string EstablishCloudBaseRunServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_imageRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_esInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_publicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccess";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_publicAccess, allocator);
    }

    if (m_openAccessTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenAccessTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openAccessTypes.begin(); itr != m_openAccessTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isCreatePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreatePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCreatePath, allocator);
    }

    if (m_serverPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EstablishCloudBaseRunServerRequest::GetEnvId() const
{
    return m_envId;
}

void EstablishCloudBaseRunServerRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string EstablishCloudBaseRunServerRequest::GetServiceName() const
{
    return m_serviceName;
}

void EstablishCloudBaseRunServerRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

bool EstablishCloudBaseRunServerRequest::GetIsPublic() const
{
    return m_isPublic;
}

void EstablishCloudBaseRunServerRequest::SetIsPublic(const bool& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string EstablishCloudBaseRunServerRequest::GetImageRepo() const
{
    return m_imageRepo;
}

void EstablishCloudBaseRunServerRequest::SetImageRepo(const string& _imageRepo)
{
    m_imageRepo = _imageRepo;
    m_imageRepoHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::ImageRepoHasBeenSet() const
{
    return m_imageRepoHasBeenSet;
}

string EstablishCloudBaseRunServerRequest::GetRemark() const
{
    return m_remark;
}

void EstablishCloudBaseRunServerRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

CloudBaseEsInfo EstablishCloudBaseRunServerRequest::GetEsInfo() const
{
    return m_esInfo;
}

void EstablishCloudBaseRunServerRequest::SetEsInfo(const CloudBaseEsInfo& _esInfo)
{
    m_esInfo = _esInfo;
    m_esInfoHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::EsInfoHasBeenSet() const
{
    return m_esInfoHasBeenSet;
}

string EstablishCloudBaseRunServerRequest::GetLogType() const
{
    return m_logType;
}

void EstablishCloudBaseRunServerRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string EstablishCloudBaseRunServerRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void EstablishCloudBaseRunServerRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}

string EstablishCloudBaseRunServerRequest::GetSource() const
{
    return m_source;
}

void EstablishCloudBaseRunServerRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

CloudBaseRunVpcInfo EstablishCloudBaseRunServerRequest::GetVpcInfo() const
{
    return m_vpcInfo;
}

void EstablishCloudBaseRunServerRequest::SetVpcInfo(const CloudBaseRunVpcInfo& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}

int64_t EstablishCloudBaseRunServerRequest::GetPublicAccess() const
{
    return m_publicAccess;
}

void EstablishCloudBaseRunServerRequest::SetPublicAccess(const int64_t& _publicAccess)
{
    m_publicAccess = _publicAccess;
    m_publicAccessHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::PublicAccessHasBeenSet() const
{
    return m_publicAccessHasBeenSet;
}

vector<string> EstablishCloudBaseRunServerRequest::GetOpenAccessTypes() const
{
    return m_openAccessTypes;
}

void EstablishCloudBaseRunServerRequest::SetOpenAccessTypes(const vector<string>& _openAccessTypes)
{
    m_openAccessTypes = _openAccessTypes;
    m_openAccessTypesHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::OpenAccessTypesHasBeenSet() const
{
    return m_openAccessTypesHasBeenSet;
}

int64_t EstablishCloudBaseRunServerRequest::GetIsCreatePath() const
{
    return m_isCreatePath;
}

void EstablishCloudBaseRunServerRequest::SetIsCreatePath(const int64_t& _isCreatePath)
{
    m_isCreatePath = _isCreatePath;
    m_isCreatePathHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::IsCreatePathHasBeenSet() const
{
    return m_isCreatePathHasBeenSet;
}

string EstablishCloudBaseRunServerRequest::GetServerPath() const
{
    return m_serverPath;
}

void EstablishCloudBaseRunServerRequest::SetServerPath(const string& _serverPath)
{
    m_serverPath = _serverPath;
    m_serverPathHasBeenSet = true;
}

bool EstablishCloudBaseRunServerRequest::ServerPathHasBeenSet() const
{
    return m_serverPathHasBeenSet;
}


