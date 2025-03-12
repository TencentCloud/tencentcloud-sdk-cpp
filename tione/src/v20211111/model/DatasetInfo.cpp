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

#include <tencentcloud/tione/v20211111/model/DatasetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DatasetInfo::DatasetInfo() :
    m_datasetIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_datasetVersionHasBeenSet(false),
    m_datasetTypeHasBeenSet(false),
    m_datasetTagsHasBeenSet(false),
    m_datasetAnnotationTaskNameHasBeenSet(false),
    m_datasetAnnotationTaskIdHasBeenSet(false),
    m_processHasBeenSet(false),
    m_datasetStatusHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_externalTaskTypeHasBeenSet(false),
    m_datasetSizeHasBeenSet(false),
    m_fileNumHasBeenSet(false),
    m_storageDataPathHasBeenSet(false),
    m_storageLabelPathHasBeenSet(false),
    m_annotationStatusHasBeenSet(false),
    m_annotationTypeHasBeenSet(false),
    m_annotationFormatHasBeenSet(false),
    m_datasetScopeHasBeenSet(false),
    m_ocrSceneHasBeenSet(false),
    m_annotationKeyStatusHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_datasetSceneHasBeenSet(false),
    m_cFSConfigHasBeenSet(false),
    m_sceneTagsHasBeenSet(false),
    m_numAnnotatedHasBeenSet(false),
    m_annotationSpecificationHasBeenSet(false),
    m_annotationSchemaConfiguredHasBeenSet(false),
    m_creatorNicknameHasBeenSet(false),
    m_isCfsUpdatedHasBeenSet(false)
{
}

CoreInternalOutcome DatasetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatasetId") && !value["DatasetId"].IsNull())
    {
        if (!value["DatasetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetId = string(value["DatasetId"].GetString());
        m_datasetIdHasBeenSet = true;
    }

    if (value.HasMember("DatasetName") && !value["DatasetName"].IsNull())
    {
        if (!value["DatasetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetName = string(value["DatasetName"].GetString());
        m_datasetNameHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("DatasetVersion") && !value["DatasetVersion"].IsNull())
    {
        if (!value["DatasetVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetVersion = string(value["DatasetVersion"].GetString());
        m_datasetVersionHasBeenSet = true;
    }

    if (value.HasMember("DatasetType") && !value["DatasetType"].IsNull())
    {
        if (!value["DatasetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetType = string(value["DatasetType"].GetString());
        m_datasetTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasetTags") && !value["DatasetTags"].IsNull())
    {
        if (!value["DatasetTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetTags` is not array type"));

        const rapidjson::Value &tmpValue = value["DatasetTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasetTags.push_back(item);
        }
        m_datasetTagsHasBeenSet = true;
    }

    if (value.HasMember("DatasetAnnotationTaskName") && !value["DatasetAnnotationTaskName"].IsNull())
    {
        if (!value["DatasetAnnotationTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetAnnotationTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetAnnotationTaskName = string(value["DatasetAnnotationTaskName"].GetString());
        m_datasetAnnotationTaskNameHasBeenSet = true;
    }

    if (value.HasMember("DatasetAnnotationTaskId") && !value["DatasetAnnotationTaskId"].IsNull())
    {
        if (!value["DatasetAnnotationTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetAnnotationTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetAnnotationTaskId = string(value["DatasetAnnotationTaskId"].GetString());
        m_datasetAnnotationTaskIdHasBeenSet = true;
    }

    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.Process` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_process = value["Process"].GetInt64();
        m_processHasBeenSet = true;
    }

    if (value.HasMember("DatasetStatus") && !value["DatasetStatus"].IsNull())
    {
        if (!value["DatasetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetStatus = string(value["DatasetStatus"].GetString());
        m_datasetStatusHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExternalTaskType") && !value["ExternalTaskType"].IsNull())
    {
        if (!value["ExternalTaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.ExternalTaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalTaskType = string(value["ExternalTaskType"].GetString());
        m_externalTaskTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasetSize") && !value["DatasetSize"].IsNull())
    {
        if (!value["DatasetSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetSize = string(value["DatasetSize"].GetString());
        m_datasetSizeHasBeenSet = true;
    }

    if (value.HasMember("FileNum") && !value["FileNum"].IsNull())
    {
        if (!value["FileNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.FileNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileNum = value["FileNum"].GetUint64();
        m_fileNumHasBeenSet = true;
    }

    if (value.HasMember("StorageDataPath") && !value["StorageDataPath"].IsNull())
    {
        if (!value["StorageDataPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.StorageDataPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageDataPath.Deserialize(value["StorageDataPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageDataPathHasBeenSet = true;
    }

    if (value.HasMember("StorageLabelPath") && !value["StorageLabelPath"].IsNull())
    {
        if (!value["StorageLabelPath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.StorageLabelPath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageLabelPath.Deserialize(value["StorageLabelPath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageLabelPathHasBeenSet = true;
    }

    if (value.HasMember("AnnotationStatus") && !value["AnnotationStatus"].IsNull())
    {
        if (!value["AnnotationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.AnnotationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationStatus = string(value["AnnotationStatus"].GetString());
        m_annotationStatusHasBeenSet = true;
    }

    if (value.HasMember("AnnotationType") && !value["AnnotationType"].IsNull())
    {
        if (!value["AnnotationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.AnnotationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationType = string(value["AnnotationType"].GetString());
        m_annotationTypeHasBeenSet = true;
    }

    if (value.HasMember("AnnotationFormat") && !value["AnnotationFormat"].IsNull())
    {
        if (!value["AnnotationFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.AnnotationFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationFormat = string(value["AnnotationFormat"].GetString());
        m_annotationFormatHasBeenSet = true;
    }

    if (value.HasMember("DatasetScope") && !value["DatasetScope"].IsNull())
    {
        if (!value["DatasetScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetScope = string(value["DatasetScope"].GetString());
        m_datasetScopeHasBeenSet = true;
    }

    if (value.HasMember("OcrScene") && !value["OcrScene"].IsNull())
    {
        if (!value["OcrScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.OcrScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrScene = string(value["OcrScene"].GetString());
        m_ocrSceneHasBeenSet = true;
    }

    if (value.HasMember("AnnotationKeyStatus") && !value["AnnotationKeyStatus"].IsNull())
    {
        if (!value["AnnotationKeyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.AnnotationKeyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationKeyStatus = string(value["AnnotationKeyStatus"].GetString());
        m_annotationKeyStatusHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("DatasetScene") && !value["DatasetScene"].IsNull())
    {
        if (!value["DatasetScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.DatasetScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasetScene = string(value["DatasetScene"].GetString());
        m_datasetSceneHasBeenSet = true;
    }

    if (value.HasMember("CFSConfig") && !value["CFSConfig"].IsNull())
    {
        if (!value["CFSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.CFSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cFSConfig.Deserialize(value["CFSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cFSConfigHasBeenSet = true;
    }

    if (value.HasMember("SceneTags") && !value["SceneTags"].IsNull())
    {
        if (!value["SceneTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.SceneTags` is not array type"));

        const rapidjson::Value &tmpValue = value["SceneTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sceneTags.push_back((*itr).GetString());
        }
        m_sceneTagsHasBeenSet = true;
    }

    if (value.HasMember("NumAnnotated") && !value["NumAnnotated"].IsNull())
    {
        if (!value["NumAnnotated"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.NumAnnotated` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numAnnotated = value["NumAnnotated"].GetUint64();
        m_numAnnotatedHasBeenSet = true;
    }

    if (value.HasMember("AnnotationSpecification") && !value["AnnotationSpecification"].IsNull())
    {
        if (!value["AnnotationSpecification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.AnnotationSpecification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationSpecification = string(value["AnnotationSpecification"].GetString());
        m_annotationSpecificationHasBeenSet = true;
    }

    if (value.HasMember("AnnotationSchemaConfigured") && !value["AnnotationSchemaConfigured"].IsNull())
    {
        if (!value["AnnotationSchemaConfigured"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.AnnotationSchemaConfigured` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_annotationSchemaConfigured = value["AnnotationSchemaConfigured"].GetBool();
        m_annotationSchemaConfiguredHasBeenSet = true;
    }

    if (value.HasMember("CreatorNickname") && !value["CreatorNickname"].IsNull())
    {
        if (!value["CreatorNickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.CreatorNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorNickname = string(value["CreatorNickname"].GetString());
        m_creatorNicknameHasBeenSet = true;
    }

    if (value.HasMember("IsCfsUpdated") && !value["IsCfsUpdated"].IsNull())
    {
        if (!value["IsCfsUpdated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DatasetInfo.IsCfsUpdated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCfsUpdated = value["IsCfsUpdated"].GetBool();
        m_isCfsUpdatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datasetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasetTags.begin(); itr != m_datasetTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_datasetAnnotationTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetAnnotationTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetAnnotationTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetAnnotationTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetAnnotationTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetAnnotationTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_process, allocator);
    }

    if (m_datasetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
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

    if (m_externalTaskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalTaskType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileNum, allocator);
    }

    if (m_storageDataPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDataPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageDataPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_storageLabelPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLabelPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageLabelPath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_annotationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationType.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetScope.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrScene.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationKeyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationKeyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationKeyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_datasetSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasetScene.c_str(), allocator).Move(), allocator);
    }

    if (m_cFSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cFSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sceneTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sceneTags.begin(); itr != m_sceneTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_numAnnotatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumAnnotated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numAnnotated, allocator);
    }

    if (m_annotationSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationSpecification.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationSchemaConfiguredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationSchemaConfigured";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_annotationSchemaConfigured, allocator);
    }

    if (m_creatorNicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorNickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorNickname.c_str(), allocator).Move(), allocator);
    }

    if (m_isCfsUpdatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCfsUpdated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCfsUpdated, allocator);
    }

}


string DatasetInfo::GetDatasetId() const
{
    return m_datasetId;
}

void DatasetInfo::SetDatasetId(const string& _datasetId)
{
    m_datasetId = _datasetId;
    m_datasetIdHasBeenSet = true;
}

bool DatasetInfo::DatasetIdHasBeenSet() const
{
    return m_datasetIdHasBeenSet;
}

string DatasetInfo::GetDatasetName() const
{
    return m_datasetName;
}

void DatasetInfo::SetDatasetName(const string& _datasetName)
{
    m_datasetName = _datasetName;
    m_datasetNameHasBeenSet = true;
}

bool DatasetInfo::DatasetNameHasBeenSet() const
{
    return m_datasetNameHasBeenSet;
}

string DatasetInfo::GetCreator() const
{
    return m_creator;
}

void DatasetInfo::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool DatasetInfo::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DatasetInfo::GetDatasetVersion() const
{
    return m_datasetVersion;
}

void DatasetInfo::SetDatasetVersion(const string& _datasetVersion)
{
    m_datasetVersion = _datasetVersion;
    m_datasetVersionHasBeenSet = true;
}

bool DatasetInfo::DatasetVersionHasBeenSet() const
{
    return m_datasetVersionHasBeenSet;
}

string DatasetInfo::GetDatasetType() const
{
    return m_datasetType;
}

void DatasetInfo::SetDatasetType(const string& _datasetType)
{
    m_datasetType = _datasetType;
    m_datasetTypeHasBeenSet = true;
}

bool DatasetInfo::DatasetTypeHasBeenSet() const
{
    return m_datasetTypeHasBeenSet;
}

vector<Tag> DatasetInfo::GetDatasetTags() const
{
    return m_datasetTags;
}

void DatasetInfo::SetDatasetTags(const vector<Tag>& _datasetTags)
{
    m_datasetTags = _datasetTags;
    m_datasetTagsHasBeenSet = true;
}

bool DatasetInfo::DatasetTagsHasBeenSet() const
{
    return m_datasetTagsHasBeenSet;
}

string DatasetInfo::GetDatasetAnnotationTaskName() const
{
    return m_datasetAnnotationTaskName;
}

void DatasetInfo::SetDatasetAnnotationTaskName(const string& _datasetAnnotationTaskName)
{
    m_datasetAnnotationTaskName = _datasetAnnotationTaskName;
    m_datasetAnnotationTaskNameHasBeenSet = true;
}

bool DatasetInfo::DatasetAnnotationTaskNameHasBeenSet() const
{
    return m_datasetAnnotationTaskNameHasBeenSet;
}

string DatasetInfo::GetDatasetAnnotationTaskId() const
{
    return m_datasetAnnotationTaskId;
}

void DatasetInfo::SetDatasetAnnotationTaskId(const string& _datasetAnnotationTaskId)
{
    m_datasetAnnotationTaskId = _datasetAnnotationTaskId;
    m_datasetAnnotationTaskIdHasBeenSet = true;
}

bool DatasetInfo::DatasetAnnotationTaskIdHasBeenSet() const
{
    return m_datasetAnnotationTaskIdHasBeenSet;
}

int64_t DatasetInfo::GetProcess() const
{
    return m_process;
}

void DatasetInfo::SetProcess(const int64_t& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool DatasetInfo::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

string DatasetInfo::GetDatasetStatus() const
{
    return m_datasetStatus;
}

void DatasetInfo::SetDatasetStatus(const string& _datasetStatus)
{
    m_datasetStatus = _datasetStatus;
    m_datasetStatusHasBeenSet = true;
}

bool DatasetInfo::DatasetStatusHasBeenSet() const
{
    return m_datasetStatusHasBeenSet;
}

string DatasetInfo::GetErrorMsg() const
{
    return m_errorMsg;
}

void DatasetInfo::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool DatasetInfo::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string DatasetInfo::GetCreateTime() const
{
    return m_createTime;
}

void DatasetInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DatasetInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DatasetInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DatasetInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DatasetInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DatasetInfo::GetExternalTaskType() const
{
    return m_externalTaskType;
}

void DatasetInfo::SetExternalTaskType(const string& _externalTaskType)
{
    m_externalTaskType = _externalTaskType;
    m_externalTaskTypeHasBeenSet = true;
}

bool DatasetInfo::ExternalTaskTypeHasBeenSet() const
{
    return m_externalTaskTypeHasBeenSet;
}

string DatasetInfo::GetDatasetSize() const
{
    return m_datasetSize;
}

void DatasetInfo::SetDatasetSize(const string& _datasetSize)
{
    m_datasetSize = _datasetSize;
    m_datasetSizeHasBeenSet = true;
}

bool DatasetInfo::DatasetSizeHasBeenSet() const
{
    return m_datasetSizeHasBeenSet;
}

uint64_t DatasetInfo::GetFileNum() const
{
    return m_fileNum;
}

void DatasetInfo::SetFileNum(const uint64_t& _fileNum)
{
    m_fileNum = _fileNum;
    m_fileNumHasBeenSet = true;
}

bool DatasetInfo::FileNumHasBeenSet() const
{
    return m_fileNumHasBeenSet;
}

CosPathInfo DatasetInfo::GetStorageDataPath() const
{
    return m_storageDataPath;
}

void DatasetInfo::SetStorageDataPath(const CosPathInfo& _storageDataPath)
{
    m_storageDataPath = _storageDataPath;
    m_storageDataPathHasBeenSet = true;
}

bool DatasetInfo::StorageDataPathHasBeenSet() const
{
    return m_storageDataPathHasBeenSet;
}

CosPathInfo DatasetInfo::GetStorageLabelPath() const
{
    return m_storageLabelPath;
}

void DatasetInfo::SetStorageLabelPath(const CosPathInfo& _storageLabelPath)
{
    m_storageLabelPath = _storageLabelPath;
    m_storageLabelPathHasBeenSet = true;
}

bool DatasetInfo::StorageLabelPathHasBeenSet() const
{
    return m_storageLabelPathHasBeenSet;
}

string DatasetInfo::GetAnnotationStatus() const
{
    return m_annotationStatus;
}

void DatasetInfo::SetAnnotationStatus(const string& _annotationStatus)
{
    m_annotationStatus = _annotationStatus;
    m_annotationStatusHasBeenSet = true;
}

bool DatasetInfo::AnnotationStatusHasBeenSet() const
{
    return m_annotationStatusHasBeenSet;
}

string DatasetInfo::GetAnnotationType() const
{
    return m_annotationType;
}

void DatasetInfo::SetAnnotationType(const string& _annotationType)
{
    m_annotationType = _annotationType;
    m_annotationTypeHasBeenSet = true;
}

bool DatasetInfo::AnnotationTypeHasBeenSet() const
{
    return m_annotationTypeHasBeenSet;
}

string DatasetInfo::GetAnnotationFormat() const
{
    return m_annotationFormat;
}

void DatasetInfo::SetAnnotationFormat(const string& _annotationFormat)
{
    m_annotationFormat = _annotationFormat;
    m_annotationFormatHasBeenSet = true;
}

bool DatasetInfo::AnnotationFormatHasBeenSet() const
{
    return m_annotationFormatHasBeenSet;
}

string DatasetInfo::GetDatasetScope() const
{
    return m_datasetScope;
}

void DatasetInfo::SetDatasetScope(const string& _datasetScope)
{
    m_datasetScope = _datasetScope;
    m_datasetScopeHasBeenSet = true;
}

bool DatasetInfo::DatasetScopeHasBeenSet() const
{
    return m_datasetScopeHasBeenSet;
}

string DatasetInfo::GetOcrScene() const
{
    return m_ocrScene;
}

void DatasetInfo::SetOcrScene(const string& _ocrScene)
{
    m_ocrScene = _ocrScene;
    m_ocrSceneHasBeenSet = true;
}

bool DatasetInfo::OcrSceneHasBeenSet() const
{
    return m_ocrSceneHasBeenSet;
}

string DatasetInfo::GetAnnotationKeyStatus() const
{
    return m_annotationKeyStatus;
}

void DatasetInfo::SetAnnotationKeyStatus(const string& _annotationKeyStatus)
{
    m_annotationKeyStatus = _annotationKeyStatus;
    m_annotationKeyStatusHasBeenSet = true;
}

bool DatasetInfo::AnnotationKeyStatusHasBeenSet() const
{
    return m_annotationKeyStatusHasBeenSet;
}

string DatasetInfo::GetContentType() const
{
    return m_contentType;
}

void DatasetInfo::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool DatasetInfo::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string DatasetInfo::GetDatasetScene() const
{
    return m_datasetScene;
}

void DatasetInfo::SetDatasetScene(const string& _datasetScene)
{
    m_datasetScene = _datasetScene;
    m_datasetSceneHasBeenSet = true;
}

bool DatasetInfo::DatasetSceneHasBeenSet() const
{
    return m_datasetSceneHasBeenSet;
}

CFSConfig DatasetInfo::GetCFSConfig() const
{
    return m_cFSConfig;
}

void DatasetInfo::SetCFSConfig(const CFSConfig& _cFSConfig)
{
    m_cFSConfig = _cFSConfig;
    m_cFSConfigHasBeenSet = true;
}

bool DatasetInfo::CFSConfigHasBeenSet() const
{
    return m_cFSConfigHasBeenSet;
}

vector<string> DatasetInfo::GetSceneTags() const
{
    return m_sceneTags;
}

void DatasetInfo::SetSceneTags(const vector<string>& _sceneTags)
{
    m_sceneTags = _sceneTags;
    m_sceneTagsHasBeenSet = true;
}

bool DatasetInfo::SceneTagsHasBeenSet() const
{
    return m_sceneTagsHasBeenSet;
}

uint64_t DatasetInfo::GetNumAnnotated() const
{
    return m_numAnnotated;
}

void DatasetInfo::SetNumAnnotated(const uint64_t& _numAnnotated)
{
    m_numAnnotated = _numAnnotated;
    m_numAnnotatedHasBeenSet = true;
}

bool DatasetInfo::NumAnnotatedHasBeenSet() const
{
    return m_numAnnotatedHasBeenSet;
}

string DatasetInfo::GetAnnotationSpecification() const
{
    return m_annotationSpecification;
}

void DatasetInfo::SetAnnotationSpecification(const string& _annotationSpecification)
{
    m_annotationSpecification = _annotationSpecification;
    m_annotationSpecificationHasBeenSet = true;
}

bool DatasetInfo::AnnotationSpecificationHasBeenSet() const
{
    return m_annotationSpecificationHasBeenSet;
}

bool DatasetInfo::GetAnnotationSchemaConfigured() const
{
    return m_annotationSchemaConfigured;
}

void DatasetInfo::SetAnnotationSchemaConfigured(const bool& _annotationSchemaConfigured)
{
    m_annotationSchemaConfigured = _annotationSchemaConfigured;
    m_annotationSchemaConfiguredHasBeenSet = true;
}

bool DatasetInfo::AnnotationSchemaConfiguredHasBeenSet() const
{
    return m_annotationSchemaConfiguredHasBeenSet;
}

string DatasetInfo::GetCreatorNickname() const
{
    return m_creatorNickname;
}

void DatasetInfo::SetCreatorNickname(const string& _creatorNickname)
{
    m_creatorNickname = _creatorNickname;
    m_creatorNicknameHasBeenSet = true;
}

bool DatasetInfo::CreatorNicknameHasBeenSet() const
{
    return m_creatorNicknameHasBeenSet;
}

bool DatasetInfo::GetIsCfsUpdated() const
{
    return m_isCfsUpdated;
}

void DatasetInfo::SetIsCfsUpdated(const bool& _isCfsUpdated)
{
    m_isCfsUpdated = _isCfsUpdated;
    m_isCfsUpdatedHasBeenSet = true;
}

bool DatasetInfo::IsCfsUpdatedHasBeenSet() const
{
    return m_isCfsUpdatedHasBeenSet;
}

