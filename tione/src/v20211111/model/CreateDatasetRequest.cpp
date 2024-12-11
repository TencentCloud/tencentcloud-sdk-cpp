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

#include <tencentcloud/tione/v20211111/model/CreateDatasetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateDatasetRequest::CreateDatasetRequest() :
    m_datasetNameHasBeenSet(false),
    m_datasetTypeHasBeenSet(false),
    m_storageDataPathHasBeenSet(false),
    m_storageLabelPathHasBeenSet(false),
    m_datasetTagsHasBeenSet(false),
    m_annotationStatusHasBeenSet(false),
    m_annotationTypeHasBeenSet(false),
    m_annotationFormatHasBeenSet(false),
    m_schemaInfosHasBeenSet(false),
    m_isSchemaExistedHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_datasetSceneHasBeenSet(false),
    m_sceneTagsHasBeenSet(false),
    m_cFSConfigHasBeenSet(false)
{
}

string CreateDatasetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasetName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasetType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageDataPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDataPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageDataPath.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_storageLabelPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLabelPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageLabelPath.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_datasetTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasetTags.begin(); itr != m_datasetTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_annotationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_annotationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_annotationType.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_annotationFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schemaInfos.begin(); itr != m_schemaInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isSchemaExistedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSchemaExisted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSchemaExisted, allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasetScene.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sceneTags.begin(); itr != m_sceneTags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cFSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cFSConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDatasetRequest::GetDatasetName() const
{
    return m_datasetName;
}

void CreateDatasetRequest::SetDatasetName(const string& _datasetName)
{
    m_datasetName = _datasetName;
    m_datasetNameHasBeenSet = true;
}

bool CreateDatasetRequest::DatasetNameHasBeenSet() const
{
    return m_datasetNameHasBeenSet;
}

string CreateDatasetRequest::GetDatasetType() const
{
    return m_datasetType;
}

void CreateDatasetRequest::SetDatasetType(const string& _datasetType)
{
    m_datasetType = _datasetType;
    m_datasetTypeHasBeenSet = true;
}

bool CreateDatasetRequest::DatasetTypeHasBeenSet() const
{
    return m_datasetTypeHasBeenSet;
}

CosPathInfo CreateDatasetRequest::GetStorageDataPath() const
{
    return m_storageDataPath;
}

void CreateDatasetRequest::SetStorageDataPath(const CosPathInfo& _storageDataPath)
{
    m_storageDataPath = _storageDataPath;
    m_storageDataPathHasBeenSet = true;
}

bool CreateDatasetRequest::StorageDataPathHasBeenSet() const
{
    return m_storageDataPathHasBeenSet;
}

CosPathInfo CreateDatasetRequest::GetStorageLabelPath() const
{
    return m_storageLabelPath;
}

void CreateDatasetRequest::SetStorageLabelPath(const CosPathInfo& _storageLabelPath)
{
    m_storageLabelPath = _storageLabelPath;
    m_storageLabelPathHasBeenSet = true;
}

bool CreateDatasetRequest::StorageLabelPathHasBeenSet() const
{
    return m_storageLabelPathHasBeenSet;
}

vector<Tag> CreateDatasetRequest::GetDatasetTags() const
{
    return m_datasetTags;
}

void CreateDatasetRequest::SetDatasetTags(const vector<Tag>& _datasetTags)
{
    m_datasetTags = _datasetTags;
    m_datasetTagsHasBeenSet = true;
}

bool CreateDatasetRequest::DatasetTagsHasBeenSet() const
{
    return m_datasetTagsHasBeenSet;
}

string CreateDatasetRequest::GetAnnotationStatus() const
{
    return m_annotationStatus;
}

void CreateDatasetRequest::SetAnnotationStatus(const string& _annotationStatus)
{
    m_annotationStatus = _annotationStatus;
    m_annotationStatusHasBeenSet = true;
}

bool CreateDatasetRequest::AnnotationStatusHasBeenSet() const
{
    return m_annotationStatusHasBeenSet;
}

string CreateDatasetRequest::GetAnnotationType() const
{
    return m_annotationType;
}

void CreateDatasetRequest::SetAnnotationType(const string& _annotationType)
{
    m_annotationType = _annotationType;
    m_annotationTypeHasBeenSet = true;
}

bool CreateDatasetRequest::AnnotationTypeHasBeenSet() const
{
    return m_annotationTypeHasBeenSet;
}

string CreateDatasetRequest::GetAnnotationFormat() const
{
    return m_annotationFormat;
}

void CreateDatasetRequest::SetAnnotationFormat(const string& _annotationFormat)
{
    m_annotationFormat = _annotationFormat;
    m_annotationFormatHasBeenSet = true;
}

bool CreateDatasetRequest::AnnotationFormatHasBeenSet() const
{
    return m_annotationFormatHasBeenSet;
}

vector<SchemaInfo> CreateDatasetRequest::GetSchemaInfos() const
{
    return m_schemaInfos;
}

void CreateDatasetRequest::SetSchemaInfos(const vector<SchemaInfo>& _schemaInfos)
{
    m_schemaInfos = _schemaInfos;
    m_schemaInfosHasBeenSet = true;
}

bool CreateDatasetRequest::SchemaInfosHasBeenSet() const
{
    return m_schemaInfosHasBeenSet;
}

bool CreateDatasetRequest::GetIsSchemaExisted() const
{
    return m_isSchemaExisted;
}

void CreateDatasetRequest::SetIsSchemaExisted(const bool& _isSchemaExisted)
{
    m_isSchemaExisted = _isSchemaExisted;
    m_isSchemaExistedHasBeenSet = true;
}

bool CreateDatasetRequest::IsSchemaExistedHasBeenSet() const
{
    return m_isSchemaExistedHasBeenSet;
}

string CreateDatasetRequest::GetContentType() const
{
    return m_contentType;
}

void CreateDatasetRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CreateDatasetRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string CreateDatasetRequest::GetDatasetScene() const
{
    return m_datasetScene;
}

void CreateDatasetRequest::SetDatasetScene(const string& _datasetScene)
{
    m_datasetScene = _datasetScene;
    m_datasetSceneHasBeenSet = true;
}

bool CreateDatasetRequest::DatasetSceneHasBeenSet() const
{
    return m_datasetSceneHasBeenSet;
}

vector<string> CreateDatasetRequest::GetSceneTags() const
{
    return m_sceneTags;
}

void CreateDatasetRequest::SetSceneTags(const vector<string>& _sceneTags)
{
    m_sceneTags = _sceneTags;
    m_sceneTagsHasBeenSet = true;
}

bool CreateDatasetRequest::SceneTagsHasBeenSet() const
{
    return m_sceneTagsHasBeenSet;
}

CFSConfig CreateDatasetRequest::GetCFSConfig() const
{
    return m_cFSConfig;
}

void CreateDatasetRequest::SetCFSConfig(const CFSConfig& _cFSConfig)
{
    m_cFSConfig = _cFSConfig;
    m_cFSConfigHasBeenSet = true;
}

bool CreateDatasetRequest::CFSConfigHasBeenSet() const
{
    return m_cFSConfigHasBeenSet;
}


