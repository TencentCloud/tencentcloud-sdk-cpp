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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASETREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/SchemaInfo.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateDataset请求参数结构体
                */
                class CreateDatasetRequest : public AbstractModel
                {
                public:
                    CreateDatasetRequest();
                    ~CreateDatasetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据集名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * @return DatasetName <p>数据集名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * 
                     */
                    std::string GetDatasetName() const;

                    /**
                     * 设置<p>数据集名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * @param _datasetName <p>数据集名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     * 
                     */
                    void SetDatasetName(const std::string& _datasetName);

                    /**
                     * 判断参数 DatasetName 是否已赋值
                     * @return DatasetName 是否已赋值
                     * 
                     */
                    bool DatasetNameHasBeenSet() const;

                    /**
                     * 获取<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>数据集类型</p><p>枚举值：</p><ul><li>TYPE_DATASET_IMAGE： 图片</li><li>TYPE_DATASET_LLM： 大模型</li><li>TYPE_DATASET_TABLE： 表格</li><li>TYPE_DATASET_OTHER： 其他</li></ul>
                     * @return DatasetType <p>数据集类型</p><p>枚举值：</p><ul><li>TYPE_DATASET_IMAGE： 图片</li><li>TYPE_DATASET_LLM： 大模型</li><li>TYPE_DATASET_TABLE： 表格</li><li>TYPE_DATASET_OTHER： 其他</li></ul>
                     * 
                     */
                    std::string GetDatasetType() const;

                    /**
                     * 设置<p>数据集类型</p><p>枚举值：</p><ul><li>TYPE_DATASET_IMAGE： 图片</li><li>TYPE_DATASET_LLM： 大模型</li><li>TYPE_DATASET_TABLE： 表格</li><li>TYPE_DATASET_OTHER： 其他</li></ul>
                     * @param _datasetType <p>数据集类型</p><p>枚举值：</p><ul><li>TYPE_DATASET_IMAGE： 图片</li><li>TYPE_DATASET_LLM： 大模型</li><li>TYPE_DATASET_TABLE： 表格</li><li>TYPE_DATASET_OTHER： 其他</li></ul>
                     * 
                     */
                    void SetDatasetType(const std::string& _datasetType);

                    /**
                     * 判断参数 DatasetType 是否已赋值
                     * @return DatasetType 是否已赋值
                     * 
                     */
                    bool DatasetTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据源cos路径</p>
                     * @return StorageDataPath <p>数据源cos路径</p>
                     * 
                     */
                    CosPathInfo GetStorageDataPath() const;

                    /**
                     * 设置<p>数据源cos路径</p>
                     * @param _storageDataPath <p>数据源cos路径</p>
                     * 
                     */
                    void SetStorageDataPath(const CosPathInfo& _storageDataPath);

                    /**
                     * 判断参数 StorageDataPath 是否已赋值
                     * @return StorageDataPath 是否已赋值
                     * 
                     */
                    bool StorageDataPathHasBeenSet() const;

                    /**
                     * 获取<p>数据集标签cos存储路径</p>
                     * @return StorageLabelPath <p>数据集标签cos存储路径</p>
                     * 
                     */
                    CosPathInfo GetStorageLabelPath() const;

                    /**
                     * 设置<p>数据集标签cos存储路径</p>
                     * @param _storageLabelPath <p>数据集标签cos存储路径</p>
                     * 
                     */
                    void SetStorageLabelPath(const CosPathInfo& _storageLabelPath);

                    /**
                     * 判断参数 StorageLabelPath 是否已赋值
                     * @return StorageLabelPath 是否已赋值
                     * 
                     */
                    bool StorageLabelPathHasBeenSet() const;

                    /**
                     * 获取<p>数据集标签</p>
                     * @return DatasetTags <p>数据集标签</p>
                     * 
                     */
                    std::vector<Tag> GetDatasetTags() const;

                    /**
                     * 设置<p>数据集标签</p>
                     * @param _datasetTags <p>数据集标签</p>
                     * 
                     */
                    void SetDatasetTags(const std::vector<Tag>& _datasetTags);

                    /**
                     * 判断参数 DatasetTags 是否已赋值
                     * @return DatasetTags 是否已赋值
                     * 
                     */
                    bool DatasetTagsHasBeenSet() const;

                    /**
                     * 获取<p>数据集标注状态</p><p>枚举值：</p><ul><li>STATUS_NON_ANNOTATED： 未标注</li><li>STATUS_ANNOTATED： 已标注</li></ul>
                     * @return AnnotationStatus <p>数据集标注状态</p><p>枚举值：</p><ul><li>STATUS_NON_ANNOTATED： 未标注</li><li>STATUS_ANNOTATED： 已标注</li></ul>
                     * 
                     */
                    std::string GetAnnotationStatus() const;

                    /**
                     * 设置<p>数据集标注状态</p><p>枚举值：</p><ul><li>STATUS_NON_ANNOTATED： 未标注</li><li>STATUS_ANNOTATED： 已标注</li></ul>
                     * @param _annotationStatus <p>数据集标注状态</p><p>枚举值：</p><ul><li>STATUS_NON_ANNOTATED： 未标注</li><li>STATUS_ANNOTATED： 已标注</li></ul>
                     * 
                     */
                    void SetAnnotationStatus(const std::string& _annotationStatus);

                    /**
                     * 判断参数 AnnotationStatus 是否已赋值
                     * @return AnnotationStatus 是否已赋值
                     * 
                     */
                    bool AnnotationStatusHasBeenSet() const;

                    /**
                     * 获取<p>标注类型</p><p>枚举值：</p><ul><li>ANNOTATION_TYPE_CLASSIFICATION： 图片分类</li><li>ANNOTATION_TYPE_DETECTION： 目标检测</li><li>ANNOTATION_TYPE_SEGMENTATION： 图片分割</li><li>ANNOTATION_TYPE_TRACKING： 目标跟踪</li><li>ANNOTATION_TYPE_OCR： OCR</li></ul>
                     * @return AnnotationType <p>标注类型</p><p>枚举值：</p><ul><li>ANNOTATION_TYPE_CLASSIFICATION： 图片分类</li><li>ANNOTATION_TYPE_DETECTION： 目标检测</li><li>ANNOTATION_TYPE_SEGMENTATION： 图片分割</li><li>ANNOTATION_TYPE_TRACKING： 目标跟踪</li><li>ANNOTATION_TYPE_OCR： OCR</li></ul>
                     * 
                     */
                    std::string GetAnnotationType() const;

                    /**
                     * 设置<p>标注类型</p><p>枚举值：</p><ul><li>ANNOTATION_TYPE_CLASSIFICATION： 图片分类</li><li>ANNOTATION_TYPE_DETECTION： 目标检测</li><li>ANNOTATION_TYPE_SEGMENTATION： 图片分割</li><li>ANNOTATION_TYPE_TRACKING： 目标跟踪</li><li>ANNOTATION_TYPE_OCR： OCR</li></ul>
                     * @param _annotationType <p>标注类型</p><p>枚举值：</p><ul><li>ANNOTATION_TYPE_CLASSIFICATION： 图片分类</li><li>ANNOTATION_TYPE_DETECTION： 目标检测</li><li>ANNOTATION_TYPE_SEGMENTATION： 图片分割</li><li>ANNOTATION_TYPE_TRACKING： 目标跟踪</li><li>ANNOTATION_TYPE_OCR： OCR</li></ul>
                     * 
                     */
                    void SetAnnotationType(const std::string& _annotationType);

                    /**
                     * 判断参数 AnnotationType 是否已赋值
                     * @return AnnotationType 是否已赋值
                     * 
                     */
                    bool AnnotationTypeHasBeenSet() const;

                    /**
                     * 获取<p>标注格式</p><p>枚举值：</p><ul><li>ANNOTATION_FORMAT_TI： TI-ONE平台格式</li><li>ANNOTATION_FORMAT_PASCAL： Pascal Voc格式</li><li>ANNOTATION_FORMAT_COCO： COCO格式</li><li>ANNOTATION_FORMAT_FILE： 文件目录结构</li></ul>
                     * @return AnnotationFormat <p>标注格式</p><p>枚举值：</p><ul><li>ANNOTATION_FORMAT_TI： TI-ONE平台格式</li><li>ANNOTATION_FORMAT_PASCAL： Pascal Voc格式</li><li>ANNOTATION_FORMAT_COCO： COCO格式</li><li>ANNOTATION_FORMAT_FILE： 文件目录结构</li></ul>
                     * 
                     */
                    std::string GetAnnotationFormat() const;

                    /**
                     * 设置<p>标注格式</p><p>枚举值：</p><ul><li>ANNOTATION_FORMAT_TI： TI-ONE平台格式</li><li>ANNOTATION_FORMAT_PASCAL： Pascal Voc格式</li><li>ANNOTATION_FORMAT_COCO： COCO格式</li><li>ANNOTATION_FORMAT_FILE： 文件目录结构</li></ul>
                     * @param _annotationFormat <p>标注格式</p><p>枚举值：</p><ul><li>ANNOTATION_FORMAT_TI： TI-ONE平台格式</li><li>ANNOTATION_FORMAT_PASCAL： Pascal Voc格式</li><li>ANNOTATION_FORMAT_COCO： COCO格式</li><li>ANNOTATION_FORMAT_FILE： 文件目录结构</li></ul>
                     * 
                     */
                    void SetAnnotationFormat(const std::string& _annotationFormat);

                    /**
                     * 判断参数 AnnotationFormat 是否已赋值
                     * @return AnnotationFormat 是否已赋值
                     * 
                     */
                    bool AnnotationFormatHasBeenSet() const;

                    /**
                     * 获取<p>表头信息</p>
                     * @return SchemaInfos <p>表头信息</p>
                     * 
                     */
                    std::vector<SchemaInfo> GetSchemaInfos() const;

                    /**
                     * 设置<p>表头信息</p>
                     * @param _schemaInfos <p>表头信息</p>
                     * 
                     */
                    void SetSchemaInfos(const std::vector<SchemaInfo>& _schemaInfos);

                    /**
                     * 判断参数 SchemaInfos 是否已赋值
                     * @return SchemaInfos 是否已赋值
                     * 
                     */
                    bool SchemaInfosHasBeenSet() const;

                    /**
                     * 获取<p>数据是否存在表头</p>
                     * @return IsSchemaExisted <p>数据是否存在表头</p>
                     * 
                     */
                    bool GetIsSchemaExisted() const;

                    /**
                     * 设置<p>数据是否存在表头</p>
                     * @param _isSchemaExisted <p>数据是否存在表头</p>
                     * 
                     */
                    void SetIsSchemaExisted(const bool& _isSchemaExisted);

                    /**
                     * 判断参数 IsSchemaExisted 是否已赋值
                     * @return IsSchemaExisted 是否已赋值
                     * 
                     */
                    bool IsSchemaExistedHasBeenSet() const;

                    /**
                     * 获取<p>导入文件粒度</p><p>枚举值：</p><ul><li>TYPE_TEXT_LINE： 按行</li><li>TYPE_TEXT_FILE： 按文件</li></ul>
                     * @return ContentType <p>导入文件粒度</p><p>枚举值：</p><ul><li>TYPE_TEXT_LINE： 按行</li><li>TYPE_TEXT_FILE： 按文件</li></ul>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>导入文件粒度</p><p>枚举值：</p><ul><li>TYPE_TEXT_LINE： 按行</li><li>TYPE_TEXT_FILE： 按文件</li></ul>
                     * @param _contentType <p>导入文件粒度</p><p>枚举值：</p><ul><li>TYPE_TEXT_LINE： 按行</li><li>TYPE_TEXT_FILE： 按文件</li></ul>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据集建模一级类别</p><p>枚举值：</p><ul><li>LLM： 大模型建模</li><li>CV： 传统CV建模</li><li>STRUCTURE： 大数据建模</li><li>OTHER： 其它</li></ul>
                     * @return DatasetScene <p>数据集建模一级类别</p><p>枚举值：</p><ul><li>LLM： 大模型建模</li><li>CV： 传统CV建模</li><li>STRUCTURE： 大数据建模</li><li>OTHER： 其它</li></ul>
                     * 
                     */
                    std::string GetDatasetScene() const;

                    /**
                     * 设置<p>数据集建模一级类别</p><p>枚举值：</p><ul><li>LLM： 大模型建模</li><li>CV： 传统CV建模</li><li>STRUCTURE： 大数据建模</li><li>OTHER： 其它</li></ul>
                     * @param _datasetScene <p>数据集建模一级类别</p><p>枚举值：</p><ul><li>LLM： 大模型建模</li><li>CV： 传统CV建模</li><li>STRUCTURE： 大数据建模</li><li>OTHER： 其它</li></ul>
                     * 
                     */
                    void SetDatasetScene(const std::string& _datasetScene);

                    /**
                     * 判断参数 DatasetScene 是否已赋值
                     * @return DatasetScene 是否已赋值
                     * 
                     */
                    bool DatasetSceneHasBeenSet() const;

                    /**
                     * 获取<p>数据集标签。</p>
                     * @return SceneTags <p>数据集标签。</p>
                     * 
                     */
                    std::vector<std::string> GetSceneTags() const;

                    /**
                     * 设置<p>数据集标签。</p>
                     * @param _sceneTags <p>数据集标签。</p>
                     * 
                     */
                    void SetSceneTags(const std::vector<std::string>& _sceneTags);

                    /**
                     * 判断参数 SceneTags 是否已赋值
                     * @return SceneTags 是否已赋值
                     * 
                     */
                    bool SceneTagsHasBeenSet() const;

                    /**
                     * 获取<p>数据集CFS配置。仅支持LLM场景</p>
                     * @return CFSConfig <p>数据集CFS配置。仅支持LLM场景</p>
                     * 
                     */
                    CFSConfig GetCFSConfig() const;

                    /**
                     * 设置<p>数据集CFS配置。仅支持LLM场景</p>
                     * @param _cFSConfig <p>数据集CFS配置。仅支持LLM场景</p>
                     * 
                     */
                    void SetCFSConfig(const CFSConfig& _cFSConfig);

                    /**
                     * 判断参数 CFSConfig 是否已赋值
                     * @return CFSConfig 是否已赋值
                     * 
                     */
                    bool CFSConfigHasBeenSet() const;

                private:

                    /**
                     * <p>数据集名称，不超过60个字符，仅支持中英文、数字、下划线&quot;_&quot;、短横&quot;-&quot;，只能以中英文、数字开头</p>
                     */
                    std::string m_datasetName;
                    bool m_datasetNameHasBeenSet;

                    /**
                     * <p>TI工作空间ID</p><p>仅用于“工作空间”白名单功能。如需使用，请联系TI管理员开通白名单。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>数据集类型</p><p>枚举值：</p><ul><li>TYPE_DATASET_IMAGE： 图片</li><li>TYPE_DATASET_LLM： 大模型</li><li>TYPE_DATASET_TABLE： 表格</li><li>TYPE_DATASET_OTHER： 其他</li></ul>
                     */
                    std::string m_datasetType;
                    bool m_datasetTypeHasBeenSet;

                    /**
                     * <p>数据源cos路径</p>
                     */
                    CosPathInfo m_storageDataPath;
                    bool m_storageDataPathHasBeenSet;

                    /**
                     * <p>数据集标签cos存储路径</p>
                     */
                    CosPathInfo m_storageLabelPath;
                    bool m_storageLabelPathHasBeenSet;

                    /**
                     * <p>数据集标签</p>
                     */
                    std::vector<Tag> m_datasetTags;
                    bool m_datasetTagsHasBeenSet;

                    /**
                     * <p>数据集标注状态</p><p>枚举值：</p><ul><li>STATUS_NON_ANNOTATED： 未标注</li><li>STATUS_ANNOTATED： 已标注</li></ul>
                     */
                    std::string m_annotationStatus;
                    bool m_annotationStatusHasBeenSet;

                    /**
                     * <p>标注类型</p><p>枚举值：</p><ul><li>ANNOTATION_TYPE_CLASSIFICATION： 图片分类</li><li>ANNOTATION_TYPE_DETECTION： 目标检测</li><li>ANNOTATION_TYPE_SEGMENTATION： 图片分割</li><li>ANNOTATION_TYPE_TRACKING： 目标跟踪</li><li>ANNOTATION_TYPE_OCR： OCR</li></ul>
                     */
                    std::string m_annotationType;
                    bool m_annotationTypeHasBeenSet;

                    /**
                     * <p>标注格式</p><p>枚举值：</p><ul><li>ANNOTATION_FORMAT_TI： TI-ONE平台格式</li><li>ANNOTATION_FORMAT_PASCAL： Pascal Voc格式</li><li>ANNOTATION_FORMAT_COCO： COCO格式</li><li>ANNOTATION_FORMAT_FILE： 文件目录结构</li></ul>
                     */
                    std::string m_annotationFormat;
                    bool m_annotationFormatHasBeenSet;

                    /**
                     * <p>表头信息</p>
                     */
                    std::vector<SchemaInfo> m_schemaInfos;
                    bool m_schemaInfosHasBeenSet;

                    /**
                     * <p>数据是否存在表头</p>
                     */
                    bool m_isSchemaExisted;
                    bool m_isSchemaExistedHasBeenSet;

                    /**
                     * <p>导入文件粒度</p><p>枚举值：</p><ul><li>TYPE_TEXT_LINE： 按行</li><li>TYPE_TEXT_FILE： 按文件</li></ul>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>数据集建模一级类别</p><p>枚举值：</p><ul><li>LLM： 大模型建模</li><li>CV： 传统CV建模</li><li>STRUCTURE： 大数据建模</li><li>OTHER： 其它</li></ul>
                     */
                    std::string m_datasetScene;
                    bool m_datasetSceneHasBeenSet;

                    /**
                     * <p>数据集标签。</p>
                     */
                    std::vector<std::string> m_sceneTags;
                    bool m_sceneTagsHasBeenSet;

                    /**
                     * <p>数据集CFS配置。仅支持LLM场景</p>
                     */
                    CFSConfig m_cFSConfig;
                    bool m_cFSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASETREQUEST_H_
