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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASETREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/SchemaInfo.h>


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
                     * 获取数据集名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @return DatasetName 数据集名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * 
                     */
                    std::string GetDatasetName() const;

                    /**
                     * 设置数据集名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     * @param _datasetName 数据集名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
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
                     * 获取数据集类型:
TYPE_DATASET_TEXT，文本
TYPE_DATASET_IMAGE，图片
TYPE_DATASET_TABLE，表格
TYPE_DATASET_OTHER，其他
                     * @return DatasetType 数据集类型:
TYPE_DATASET_TEXT，文本
TYPE_DATASET_IMAGE，图片
TYPE_DATASET_TABLE，表格
TYPE_DATASET_OTHER，其他
                     * 
                     */
                    std::string GetDatasetType() const;

                    /**
                     * 设置数据集类型:
TYPE_DATASET_TEXT，文本
TYPE_DATASET_IMAGE，图片
TYPE_DATASET_TABLE，表格
TYPE_DATASET_OTHER，其他
                     * @param _datasetType 数据集类型:
TYPE_DATASET_TEXT，文本
TYPE_DATASET_IMAGE，图片
TYPE_DATASET_TABLE，表格
TYPE_DATASET_OTHER，其他
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
                     * 获取数据源cos路径
                     * @return StorageDataPath 数据源cos路径
                     * 
                     */
                    CosPathInfo GetStorageDataPath() const;

                    /**
                     * 设置数据源cos路径
                     * @param _storageDataPath 数据源cos路径
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
                     * 获取数据集标签cos存储路径
                     * @return StorageLabelPath 数据集标签cos存储路径
                     * 
                     */
                    CosPathInfo GetStorageLabelPath() const;

                    /**
                     * 设置数据集标签cos存储路径
                     * @param _storageLabelPath 数据集标签cos存储路径
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
                     * 获取数据集标签
                     * @return DatasetTags 数据集标签
                     * 
                     */
                    std::vector<Tag> GetDatasetTags() const;

                    /**
                     * 设置数据集标签
                     * @param _datasetTags 数据集标签
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
                     * 获取数据集标注状态:
STATUS_NON_ANNOTATED，未标注
STATUS_ANNOTATED，已标注
                     * @return AnnotationStatus 数据集标注状态:
STATUS_NON_ANNOTATED，未标注
STATUS_ANNOTATED，已标注
                     * 
                     */
                    std::string GetAnnotationStatus() const;

                    /**
                     * 设置数据集标注状态:
STATUS_NON_ANNOTATED，未标注
STATUS_ANNOTATED，已标注
                     * @param _annotationStatus 数据集标注状态:
STATUS_NON_ANNOTATED，未标注
STATUS_ANNOTATED，已标注
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
                     * 获取标注类型:
ANNOTATION_TYPE_CLASSIFICATION，图片分类
ANNOTATION_TYPE_DETECTION，目标检测
ANNOTATION_TYPE_SEGMENTATION，图片分割
ANNOTATION_TYPE_TRACKING，目标跟踪
                     * @return AnnotationType 标注类型:
ANNOTATION_TYPE_CLASSIFICATION，图片分类
ANNOTATION_TYPE_DETECTION，目标检测
ANNOTATION_TYPE_SEGMENTATION，图片分割
ANNOTATION_TYPE_TRACKING，目标跟踪
                     * 
                     */
                    std::string GetAnnotationType() const;

                    /**
                     * 设置标注类型:
ANNOTATION_TYPE_CLASSIFICATION，图片分类
ANNOTATION_TYPE_DETECTION，目标检测
ANNOTATION_TYPE_SEGMENTATION，图片分割
ANNOTATION_TYPE_TRACKING，目标跟踪
                     * @param _annotationType 标注类型:
ANNOTATION_TYPE_CLASSIFICATION，图片分类
ANNOTATION_TYPE_DETECTION，目标检测
ANNOTATION_TYPE_SEGMENTATION，图片分割
ANNOTATION_TYPE_TRACKING，目标跟踪
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
                     * 获取标注格式:
ANNOTATION_FORMAT_TI，TI平台格式
ANNOTATION_FORMAT_PASCAL，Pascal Voc
ANNOTATION_FORMAT_COCO，COCO
ANNOTATION_FORMAT_FILE，文件目录结构
                     * @return AnnotationFormat 标注格式:
ANNOTATION_FORMAT_TI，TI平台格式
ANNOTATION_FORMAT_PASCAL，Pascal Voc
ANNOTATION_FORMAT_COCO，COCO
ANNOTATION_FORMAT_FILE，文件目录结构
                     * 
                     */
                    std::string GetAnnotationFormat() const;

                    /**
                     * 设置标注格式:
ANNOTATION_FORMAT_TI，TI平台格式
ANNOTATION_FORMAT_PASCAL，Pascal Voc
ANNOTATION_FORMAT_COCO，COCO
ANNOTATION_FORMAT_FILE，文件目录结构
                     * @param _annotationFormat 标注格式:
ANNOTATION_FORMAT_TI，TI平台格式
ANNOTATION_FORMAT_PASCAL，Pascal Voc
ANNOTATION_FORMAT_COCO，COCO
ANNOTATION_FORMAT_FILE，文件目录结构
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
                     * 获取表头信息
                     * @return SchemaInfos 表头信息
                     * 
                     */
                    std::vector<SchemaInfo> GetSchemaInfos() const;

                    /**
                     * 设置表头信息
                     * @param _schemaInfos 表头信息
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
                     * 获取数据是否存在表头
                     * @return IsSchemaExisted 数据是否存在表头
                     * 
                     */
                    bool GetIsSchemaExisted() const;

                    /**
                     * 设置数据是否存在表头
                     * @param _isSchemaExisted 数据是否存在表头
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
                     * 获取导入文件粒度，按行或者按文件
                     * @return ContentType 导入文件粒度，按行或者按文件
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置导入文件粒度，按行或者按文件
                     * @param _contentType 导入文件粒度，按行或者按文件
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * 数据集名称，不超过60个字符，仅支持中英文、数字、下划线"_"、短横"-"，只能以中英文、数字开头
                     */
                    std::string m_datasetName;
                    bool m_datasetNameHasBeenSet;

                    /**
                     * 数据集类型:
TYPE_DATASET_TEXT，文本
TYPE_DATASET_IMAGE，图片
TYPE_DATASET_TABLE，表格
TYPE_DATASET_OTHER，其他
                     */
                    std::string m_datasetType;
                    bool m_datasetTypeHasBeenSet;

                    /**
                     * 数据源cos路径
                     */
                    CosPathInfo m_storageDataPath;
                    bool m_storageDataPathHasBeenSet;

                    /**
                     * 数据集标签cos存储路径
                     */
                    CosPathInfo m_storageLabelPath;
                    bool m_storageLabelPathHasBeenSet;

                    /**
                     * 数据集标签
                     */
                    std::vector<Tag> m_datasetTags;
                    bool m_datasetTagsHasBeenSet;

                    /**
                     * 数据集标注状态:
STATUS_NON_ANNOTATED，未标注
STATUS_ANNOTATED，已标注
                     */
                    std::string m_annotationStatus;
                    bool m_annotationStatusHasBeenSet;

                    /**
                     * 标注类型:
ANNOTATION_TYPE_CLASSIFICATION，图片分类
ANNOTATION_TYPE_DETECTION，目标检测
ANNOTATION_TYPE_SEGMENTATION，图片分割
ANNOTATION_TYPE_TRACKING，目标跟踪
                     */
                    std::string m_annotationType;
                    bool m_annotationTypeHasBeenSet;

                    /**
                     * 标注格式:
ANNOTATION_FORMAT_TI，TI平台格式
ANNOTATION_FORMAT_PASCAL，Pascal Voc
ANNOTATION_FORMAT_COCO，COCO
ANNOTATION_FORMAT_FILE，文件目录结构
                     */
                    std::string m_annotationFormat;
                    bool m_annotationFormatHasBeenSet;

                    /**
                     * 表头信息
                     */
                    std::vector<SchemaInfo> m_schemaInfos;
                    bool m_schemaInfosHasBeenSet;

                    /**
                     * 数据是否存在表头
                     */
                    bool m_isSchemaExisted;
                    bool m_isSchemaExistedHasBeenSet;

                    /**
                     * 导入文件粒度，按行或者按文件
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASETREQUEST_H_
