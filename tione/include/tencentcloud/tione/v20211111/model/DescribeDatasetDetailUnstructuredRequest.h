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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILUNSTRUCTUREDREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILUNSTRUCTUREDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/TextLabelDistributionInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeDatasetDetailUnstructured请求参数结构体
                */
                class DescribeDatasetDetailUnstructuredRequest : public AbstractModel
                {
                public:
                    DescribeDatasetDetailUnstructuredRequest();
                    ~DescribeDatasetDetailUnstructuredRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据集ID
                     * @return DatasetId 数据集ID
                     */
                    std::string GetDatasetId() const;

                    /**
                     * 设置数据集ID
                     * @param DatasetId 数据集ID
                     */
                    void SetDatasetId(const std::string& _datasetId);

                    /**
                     * 判断参数 DatasetId 是否已赋值
                     * @return DatasetId 是否已赋值
                     */
                    bool DatasetIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回个数，默认20，目前最大支持2000条数据
                     * @return Limit 返回个数，默认20，目前最大支持2000条数据
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回个数，默认20，目前最大支持2000条数据
                     * @param Limit 返回个数，默认20，目前最大支持2000条数据
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取标签过滤参数，对应标签值
                     * @return LabelList 标签过滤参数，对应标签值
                     */
                    std::vector<std::string> GetLabelList() const;

                    /**
                     * 设置标签过滤参数，对应标签值
                     * @param LabelList 标签过滤参数，对应标签值
                     */
                    void SetLabelList(const std::vector<std::string>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取标注状态过滤参数:
STATUS_ANNOTATED，已标注
STATUS_NON_ANNOTATED，未标注
STATUS_ALL，全部
默认为STATUS_ALL
                     * @return AnnotationStatus 标注状态过滤参数:
STATUS_ANNOTATED，已标注
STATUS_NON_ANNOTATED，未标注
STATUS_ALL，全部
默认为STATUS_ALL
                     */
                    std::string GetAnnotationStatus() const;

                    /**
                     * 设置标注状态过滤参数:
STATUS_ANNOTATED，已标注
STATUS_NON_ANNOTATED，未标注
STATUS_ALL，全部
默认为STATUS_ALL
                     * @param AnnotationStatus 标注状态过滤参数:
STATUS_ANNOTATED，已标注
STATUS_NON_ANNOTATED，未标注
STATUS_ALL，全部
默认为STATUS_ALL
                     */
                    void SetAnnotationStatus(const std::string& _annotationStatus);

                    /**
                     * 判断参数 AnnotationStatus 是否已赋值
                     * @return AnnotationStatus 是否已赋值
                     */
                    bool AnnotationStatusHasBeenSet() const;

                    /**
                     * 获取数据集ID列表
                     * @return DatasetIds 数据集ID列表
                     */
                    std::vector<std::string> GetDatasetIds() const;

                    /**
                     * 设置数据集ID列表
                     * @param DatasetIds 数据集ID列表
                     */
                    void SetDatasetIds(const std::vector<std::string>& _datasetIds);

                    /**
                     * 判断参数 DatasetIds 是否已赋值
                     * @return DatasetIds 是否已赋值
                     */
                    bool DatasetIdsHasBeenSet() const;

                    /**
                     * 获取要筛选的文本分类场景标签信息
                     * @return TextClassificationLabels 要筛选的文本分类场景标签信息
                     */
                    std::vector<TextLabelDistributionInfo> GetTextClassificationLabels() const;

                    /**
                     * 设置要筛选的文本分类场景标签信息
                     * @param TextClassificationLabels 要筛选的文本分类场景标签信息
                     */
                    void SetTextClassificationLabels(const std::vector<TextLabelDistributionInfo>& _textClassificationLabels);

                    /**
                     * 判断参数 TextClassificationLabels 是否已赋值
                     * @return TextClassificationLabels 是否已赋值
                     */
                    bool TextClassificationLabelsHasBeenSet() const;

                private:

                    /**
                     * 数据集ID
                     */
                    std::string m_datasetId;
                    bool m_datasetIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回个数，默认20，目前最大支持2000条数据
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 标签过滤参数，对应标签值
                     */
                    std::vector<std::string> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * 标注状态过滤参数:
STATUS_ANNOTATED，已标注
STATUS_NON_ANNOTATED，未标注
STATUS_ALL，全部
默认为STATUS_ALL
                     */
                    std::string m_annotationStatus;
                    bool m_annotationStatusHasBeenSet;

                    /**
                     * 数据集ID列表
                     */
                    std::vector<std::string> m_datasetIds;
                    bool m_datasetIdsHasBeenSet;

                    /**
                     * 要筛选的文本分类场景标签信息
                     */
                    std::vector<TextLabelDistributionInfo> m_textClassificationLabels;
                    bool m_textClassificationLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILUNSTRUCTUREDREQUEST_H_
