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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMODELSREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMODELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/Filter.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DescribeModels请求参数结构体
                */
                class DescribeModelsRequest : public AbstractModel
                {
                public:
                    DescribeModelsRequest();
                    ~DescribeModelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型id
                     * @return ModelIds 模型id
                     * 
                     */
                    std::vector<std::string> GetModelIds() const;

                    /**
                     * 设置模型id
                     * @param _modelIds 模型id
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
                     * 获取过滤器。Name的可选值有scene-id
                     * @return Filters 过滤器。Name的可选值有scene-id
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器。Name的可选值有scene-id
                     * @param _filters 过滤器。Name的可选值有scene-id
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，不得小于0，默认为0
                     * @return Offset 偏移量，不得小于0，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，不得小于0，默认为0
                     * @param _offset 偏移量，不得小于0，默认为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回量，不得大于100，默认为20
                     * @return Limit 返回量，不得大于100，默认为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回量，不得大于100，默认为20
                     * @param _limit 返回量，不得大于100，默认为20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 模型id
                     */
                    std::vector<std::string> m_modelIds;
                    bool m_modelIdsHasBeenSet;

                    /**
                     * 过滤器。Name的可选值有scene-id
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，不得小于0，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回量，不得大于100，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMODELSREQUEST_H_
