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

#include <tencentcloud/dlc/v20210125/model/CreateLabRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateLabRequest::CreateLabRequest() :
    m_nameHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_labImageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_serviceTypesHasBeenSet(false),
    m_exampleIdHasBeenSet(false),
    m_codeArchiveUrlHasBeenSet(false),
    m_labImagePullPolicyHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_persistentWorkDirHasBeenSet(false),
    m_enableTokenHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_labImagePullTypeHasBeenSet(false)
{
}

string CreateLabRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_labImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labImage.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceTypes.begin(); itr != m_serviceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_exampleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExampleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exampleId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeArchiveUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeArchiveUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeArchiveUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_labImagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labImagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
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

    if (m_persistentWorkDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersistentWorkDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_persistentWorkDir.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableToken, allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_labImagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImagePullType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_labImagePullType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLabRequest::GetName() const
{
    return m_name;
}

void CreateLabRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLabRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateLabRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void CreateLabRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool CreateLabRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string CreateLabRequest::GetQueue() const
{
    return m_queue;
}

void CreateLabRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool CreateLabRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string CreateLabRequest::GetImage() const
{
    return m_image;
}

void CreateLabRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateLabRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CreateLabRequest::GetLabImage() const
{
    return m_labImage;
}

void CreateLabRequest::SetLabImage(const string& _labImage)
{
    m_labImage = _labImage;
    m_labImageHasBeenSet = true;
}

bool CreateLabRequest::LabImageHasBeenSet() const
{
    return m_labImageHasBeenSet;
}

string CreateLabRequest::GetDescription() const
{
    return m_description;
}

void CreateLabRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLabRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateLabRequest::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void CreateLabRequest::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool CreateLabRequest::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string CreateLabRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void CreateLabRequest::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool CreateLabRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string CreateLabRequest::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void CreateLabRequest::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool CreateLabRequest::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string CreateLabRequest::GetCatalog() const
{
    return m_catalog;
}

void CreateLabRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool CreateLabRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string CreateLabRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateLabRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateLabRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> CreateLabRequest::GetServiceTypes() const
{
    return m_serviceTypes;
}

void CreateLabRequest::SetServiceTypes(const vector<string>& _serviceTypes)
{
    m_serviceTypes = _serviceTypes;
    m_serviceTypesHasBeenSet = true;
}

bool CreateLabRequest::ServiceTypesHasBeenSet() const
{
    return m_serviceTypesHasBeenSet;
}

string CreateLabRequest::GetExampleId() const
{
    return m_exampleId;
}

void CreateLabRequest::SetExampleId(const string& _exampleId)
{
    m_exampleId = _exampleId;
    m_exampleIdHasBeenSet = true;
}

bool CreateLabRequest::ExampleIdHasBeenSet() const
{
    return m_exampleIdHasBeenSet;
}

string CreateLabRequest::GetCodeArchiveUrl() const
{
    return m_codeArchiveUrl;
}

void CreateLabRequest::SetCodeArchiveUrl(const string& _codeArchiveUrl)
{
    m_codeArchiveUrl = _codeArchiveUrl;
    m_codeArchiveUrlHasBeenSet = true;
}

bool CreateLabRequest::CodeArchiveUrlHasBeenSet() const
{
    return m_codeArchiveUrlHasBeenSet;
}

string CreateLabRequest::GetLabImagePullPolicy() const
{
    return m_labImagePullPolicy;
}

void CreateLabRequest::SetLabImagePullPolicy(const string& _labImagePullPolicy)
{
    m_labImagePullPolicy = _labImagePullPolicy;
    m_labImagePullPolicyHasBeenSet = true;
}

bool CreateLabRequest::LabImagePullPolicyHasBeenSet() const
{
    return m_labImagePullPolicyHasBeenSet;
}

string CreateLabRequest::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void CreateLabRequest::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool CreateLabRequest::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

int64_t CreateLabRequest::GetPriority() const
{
    return m_priority;
}

void CreateLabRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateLabRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Tag> CreateLabRequest::GetTags() const
{
    return m_tags;
}

void CreateLabRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateLabRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

PersistentWorkDir CreateLabRequest::GetPersistentWorkDir() const
{
    return m_persistentWorkDir;
}

void CreateLabRequest::SetPersistentWorkDir(const PersistentWorkDir& _persistentWorkDir)
{
    m_persistentWorkDir = _persistentWorkDir;
    m_persistentWorkDirHasBeenSet = true;
}

bool CreateLabRequest::PersistentWorkDirHasBeenSet() const
{
    return m_persistentWorkDirHasBeenSet;
}

bool CreateLabRequest::GetEnableToken() const
{
    return m_enableToken;
}

void CreateLabRequest::SetEnableToken(const bool& _enableToken)
{
    m_enableToken = _enableToken;
    m_enableTokenHasBeenSet = true;
}

bool CreateLabRequest::EnableTokenHasBeenSet() const
{
    return m_enableTokenHasBeenSet;
}

string CreateLabRequest::GetImagePullType() const
{
    return m_imagePullType;
}

void CreateLabRequest::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool CreateLabRequest::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string CreateLabRequest::GetLabImagePullType() const
{
    return m_labImagePullType;
}

void CreateLabRequest::SetLabImagePullType(const string& _labImagePullType)
{
    m_labImagePullType = _labImagePullType;
    m_labImagePullTypeHasBeenSet = true;
}

bool CreateLabRequest::LabImagePullTypeHasBeenSet() const
{
    return m_labImagePullTypeHasBeenSet;
}


