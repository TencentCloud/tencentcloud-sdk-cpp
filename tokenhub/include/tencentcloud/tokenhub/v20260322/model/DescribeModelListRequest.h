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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELLISTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeModelList请求参数结构体
                */
                class DescribeModelListRequest : public AbstractModel
                {
                public:
                    DescribeModelListRequest();
                    ~DescribeModelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型 ID 列表。最多支持 10 个，不支持重复。</p>
                     * @return ModelIds <p>模型 ID 列表。最多支持 10 个，不支持重复。</p>
                     * 
                     */
                    std::vector<std::string> GetModelIds() const;

                    /**
                     * 设置<p>模型 ID 列表。最多支持 10 个，不支持重复。</p>
                     * @param _modelIds <p>模型 ID 列表。最多支持 10 个，不支持重复。</p>
                     * 
                     */
                    void SetModelIds(const std::vector<std::string>& _modelIds);

                    /**
                     * 判断参数 ModelIds 是否已赋值
                     * @return ModelIds 是否已赋值
                     * 
                     */
                    bool ModelIdsHasBeenSet() const;

                    /**
                     * 获取<p>模型名称列表。最多支持 10 个，不支持重复。</p>
                     * @return ModelNames <p>模型名称列表。最多支持 10 个，不支持重复。</p>
                     * 
                     */
                    std::vector<std::string> GetModelNames() const;

                    /**
                     * 设置<p>模型名称列表。最多支持 10 个，不支持重复。</p>
                     * @param _modelNames <p>模型名称列表。最多支持 10 个，不支持重复。</p>
                     * 
                     */
                    void SetModelNames(const std::vector<std::string>& _modelNames);

                    /**
                     * 判断参数 ModelNames 是否已赋值
                     * @return ModelNames 是否已赋值
                     * 
                     */
                    bool ModelNamesHasBeenSet() const;

                    /**
                     * 获取<p>模型类型列表，筛选指定类型的模型。最多支持 10 个，不支持重复。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p>
                     * @return ModelTypes <p>模型类型列表，筛选指定类型的模型。最多支持 10 个，不支持重复。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p>
                     * 
                     */
                    std::vector<std::string> GetModelTypes() const;

                    /**
                     * 设置<p>模型类型列表，筛选指定类型的模型。最多支持 10 个，不支持重复。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p>
                     * @param _modelTypes <p>模型类型列表，筛选指定类型的模型。最多支持 10 个，不支持重复。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p>
                     * 
                     */
                    void SetModelTypes(const std::vector<std::string>& _modelTypes);

                    /**
                     * 判断参数 ModelTypes 是否已赋值
                     * @return ModelTypes 是否已赋值
                     * 
                     */
                    bool ModelTypesHasBeenSet() const;

                    /**
                     * 获取<p>模型标签</p>
                     * @return Tags <p>模型标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>模型标签</p>
                     * @param _tags <p>模型标签</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为 20，最大值为 100。</p>
                     * @return Limit <p>返回数量，默认为 20，最大值为 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为 20，最大值为 100。</p>
                     * @param _limit <p>返回数量，默认为 20，最大值为 100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为 0。</p>
                     * @return Offset <p>偏移量，默认为 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为 0。</p>
                     * @param _offset <p>偏移量，默认为 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>模型 ID 列表。最多支持 10 个，不支持重复。</p>
                     */
                    std::vector<std::string> m_modelIds;
                    bool m_modelIdsHasBeenSet;

                    /**
                     * <p>模型名称列表。最多支持 10 个，不支持重复。</p>
                     */
                    std::vector<std::string> m_modelNames;
                    bool m_modelNamesHasBeenSet;

                    /**
                     * <p>模型类型列表，筛选指定类型的模型。最多支持 10 个，不支持重复。取值：Text（文本）、Vision（视觉）、Multimodal（多模态）、Speech（语音）、Embedding（向量）。</p>
                     */
                    std::vector<std::string> m_modelTypes;
                    bool m_modelTypesHasBeenSet;

                    /**
                     * <p>模型标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>返回数量，默认为 20，最大值为 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEMODELLISTREQUEST_H_
