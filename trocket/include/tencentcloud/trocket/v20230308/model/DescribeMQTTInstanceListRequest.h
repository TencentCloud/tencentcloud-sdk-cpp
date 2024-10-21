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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Filter.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMQTTInstanceList请求参数结构体
                */
                class DescribeMQTTInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeMQTTInstanceListRequest();
                    ~DescribeMQTTInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询条件列表
                     * @return Filters 查询条件列表
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询条件列表
                     * @param _filters 查询条件列表
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
                     * 获取查询起始位置
                     * @return Offset 查询起始位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始位置
                     * @param _offset 查询起始位置
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
                     * 获取查询结果限制数量
                     * @return Limit 查询结果限制数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询结果限制数量
                     * @param _limit 查询结果限制数量
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
                     * 获取是否包含新控制台集群：默认为包含
                     * @return IncludeNew 是否包含新控制台集群：默认为包含
                     * 
                     */
                    bool GetIncludeNew() const;

                    /**
                     * 设置是否包含新控制台集群：默认为包含
                     * @param _includeNew 是否包含新控制台集群：默认为包含
                     * 
                     */
                    void SetIncludeNew(const bool& _includeNew);

                    /**
                     * 判断参数 IncludeNew 是否已赋值
                     * @return IncludeNew 是否已赋值
                     * 
                     */
                    bool IncludeNewHasBeenSet() const;

                private:

                    /**
                     * 查询条件列表
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询起始位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果限制数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否包含新控制台集群：默认为包含
                     */
                    bool m_includeNew;
                    bool m_includeNewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTINSTANCELISTREQUEST_H_
