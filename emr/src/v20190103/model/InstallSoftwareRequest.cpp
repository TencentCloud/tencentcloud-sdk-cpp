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

#include <tencentcloud/emr/v20190103/model/InstallSoftwareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

InstallSoftwareRequest::InstallSoftwareRequest() :
    m_instanceIdHasBeenSet(false),
    m_softInfoHasBeenSet(false),
    m_cdbAutoRenewHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_unifyMetaInstanceIdHasBeenSet(false),
    m_metaDBInfoHasBeenSet(false),
    m_externalServiceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cloudResourcesHasBeenSet(false),
    m_serviceDeployInfoListHasBeenSet(false),
    m_defaultMetaVersionHasBeenSet(false),
    m_needCdbAuditHasBeenSet(false),
    m_containerExtraConfHasBeenSet(false)
{
}

string InstallSoftwareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_softInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_softInfo.begin(); itr != m_softInfo.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cdbAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdbAutoRenew.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_unifyMetaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifyMetaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unifyMetaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDBInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDBInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaDBInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_externalServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalService.begin(); itr != m_externalService.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cloudResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudResources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudResources.begin(); itr != m_cloudResources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceDeployInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDeployInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceDeployInfoList.begin(); itr != m_serviceDeployInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_defaultMetaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultMetaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultMetaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_needCdbAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCdbAudit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needCdbAudit, allocator);
    }

    if (m_containerExtraConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerExtraConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerExtraConf.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InstallSoftwareRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InstallSoftwareRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstallSoftwareRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> InstallSoftwareRequest::GetSoftInfo() const
{
    return m_softInfo;
}

void InstallSoftwareRequest::SetSoftInfo(const vector<string>& _softInfo)
{
    m_softInfo = _softInfo;
    m_softInfoHasBeenSet = true;
}

bool InstallSoftwareRequest::SoftInfoHasBeenSet() const
{
    return m_softInfoHasBeenSet;
}

string InstallSoftwareRequest::GetCdbAutoRenew() const
{
    return m_cdbAutoRenew;
}

void InstallSoftwareRequest::SetCdbAutoRenew(const string& _cdbAutoRenew)
{
    m_cdbAutoRenew = _cdbAutoRenew;
    m_cdbAutoRenewHasBeenSet = true;
}

bool InstallSoftwareRequest::CdbAutoRenewHasBeenSet() const
{
    return m_cdbAutoRenewHasBeenSet;
}

string InstallSoftwareRequest::GetMetaType() const
{
    return m_metaType;
}

void InstallSoftwareRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool InstallSoftwareRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string InstallSoftwareRequest::GetUnifyMetaInstanceId() const
{
    return m_unifyMetaInstanceId;
}

void InstallSoftwareRequest::SetUnifyMetaInstanceId(const string& _unifyMetaInstanceId)
{
    m_unifyMetaInstanceId = _unifyMetaInstanceId;
    m_unifyMetaInstanceIdHasBeenSet = true;
}

bool InstallSoftwareRequest::UnifyMetaInstanceIdHasBeenSet() const
{
    return m_unifyMetaInstanceIdHasBeenSet;
}

CustomMetaInfo InstallSoftwareRequest::GetMetaDBInfo() const
{
    return m_metaDBInfo;
}

void InstallSoftwareRequest::SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo)
{
    m_metaDBInfo = _metaDBInfo;
    m_metaDBInfoHasBeenSet = true;
}

bool InstallSoftwareRequest::MetaDBInfoHasBeenSet() const
{
    return m_metaDBInfoHasBeenSet;
}

vector<ExternalService> InstallSoftwareRequest::GetExternalService() const
{
    return m_externalService;
}

void InstallSoftwareRequest::SetExternalService(const vector<ExternalService>& _externalService)
{
    m_externalService = _externalService;
    m_externalServiceHasBeenSet = true;
}

bool InstallSoftwareRequest::ExternalServiceHasBeenSet() const
{
    return m_externalServiceHasBeenSet;
}

vector<Tag> InstallSoftwareRequest::GetTags() const
{
    return m_tags;
}

void InstallSoftwareRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstallSoftwareRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<CloudResource> InstallSoftwareRequest::GetCloudResources() const
{
    return m_cloudResources;
}

void InstallSoftwareRequest::SetCloudResources(const vector<CloudResource>& _cloudResources)
{
    m_cloudResources = _cloudResources;
    m_cloudResourcesHasBeenSet = true;
}

bool InstallSoftwareRequest::CloudResourcesHasBeenSet() const
{
    return m_cloudResourcesHasBeenSet;
}

vector<ServiceDeployInfo> InstallSoftwareRequest::GetServiceDeployInfoList() const
{
    return m_serviceDeployInfoList;
}

void InstallSoftwareRequest::SetServiceDeployInfoList(const vector<ServiceDeployInfo>& _serviceDeployInfoList)
{
    m_serviceDeployInfoList = _serviceDeployInfoList;
    m_serviceDeployInfoListHasBeenSet = true;
}

bool InstallSoftwareRequest::ServiceDeployInfoListHasBeenSet() const
{
    return m_serviceDeployInfoListHasBeenSet;
}

string InstallSoftwareRequest::GetDefaultMetaVersion() const
{
    return m_defaultMetaVersion;
}

void InstallSoftwareRequest::SetDefaultMetaVersion(const string& _defaultMetaVersion)
{
    m_defaultMetaVersion = _defaultMetaVersion;
    m_defaultMetaVersionHasBeenSet = true;
}

bool InstallSoftwareRequest::DefaultMetaVersionHasBeenSet() const
{
    return m_defaultMetaVersionHasBeenSet;
}

int64_t InstallSoftwareRequest::GetNeedCdbAudit() const
{
    return m_needCdbAudit;
}

void InstallSoftwareRequest::SetNeedCdbAudit(const int64_t& _needCdbAudit)
{
    m_needCdbAudit = _needCdbAudit;
    m_needCdbAuditHasBeenSet = true;
}

bool InstallSoftwareRequest::NeedCdbAuditHasBeenSet() const
{
    return m_needCdbAuditHasBeenSet;
}

ContainerExtraConf InstallSoftwareRequest::GetContainerExtraConf() const
{
    return m_containerExtraConf;
}

void InstallSoftwareRequest::SetContainerExtraConf(const ContainerExtraConf& _containerExtraConf)
{
    m_containerExtraConf = _containerExtraConf;
    m_containerExtraConfHasBeenSet = true;
}

bool InstallSoftwareRequest::ContainerExtraConfHasBeenSet() const
{
    return m_containerExtraConfHasBeenSet;
}


