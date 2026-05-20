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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELAPISREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Filter.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayLLMModelAPIs请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayLLMModelAPIsRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayLLMModelAPIsRequest();
                    ~DescribeCloudNativeAPIGatewayLLMModelAPIsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关 id。
                     * @return GatewayId 网关 id。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关 id。
                     * @param _gatewayId 网关 id。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为 10，最大值为 1000。
                     * @return Limit 返回数量，默认为 10，最大值为 1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 10，最大值为 1000。
                     * @param _limit 返回数量，默认为 10，最大值为 1000。
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
                     * 获取偏移量，默认为 0。
                     * @return Offset 偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。
                     * @param _offset 偏移量，默认为 0。
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
                     * 获取过滤条件，多个过滤条件之间是“与”的关系
                     * @return Filters 过滤条件，多个过滤条件之间是“与”的关系
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，多个过滤条件之间是“与”的关系
                     * @param _filters 过滤条件，多个过滤条件之间是“与”的关系
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
                     * 获取搜索关键词，模糊匹配 name 和 description
                     * @return Keyword 搜索关键词，模糊匹配 name 和 description
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键词，模糊匹配 name 和 description
                     * @param _keyword 搜索关键词，模糊匹配 name 和 description
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取通过消费者组Id筛选，UseToBind 为 true 时ConsumerGroupId不为空
                     * @return ConsumerGroupId 通过消费者组Id筛选，UseToBind 为 true 时ConsumerGroupId不为空
                     * 
                     */
                    std::string GetConsumerGroupId() const;

                    /**
                     * 设置通过消费者组Id筛选，UseToBind 为 true 时ConsumerGroupId不为空
                     * @param _consumerGroupId 通过消费者组Id筛选，UseToBind 为 true 时ConsumerGroupId不为空
                     * 
                     */
                    void SetConsumerGroupId(const std::string& _consumerGroupId);

                    /**
                     * 判断参数 ConsumerGroupId 是否已赋值
                     * @return ConsumerGroupId 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdHasBeenSet() const;

                    /**
                     * 获取筛选可被绑定的数据， 比如模型API里面绑定模型服务筛选时，如果设置true, 返回结果只会有可以被绑定的数据。
                     * @return UseToBind 筛选可被绑定的数据， 比如模型API里面绑定模型服务筛选时，如果设置true, 返回结果只会有可以被绑定的数据。
                     * 
                     */
                    bool GetUseToBind() const;

                    /**
                     * 设置筛选可被绑定的数据， 比如模型API里面绑定模型服务筛选时，如果设置true, 返回结果只会有可以被绑定的数据。
                     * @param _useToBind 筛选可被绑定的数据， 比如模型API里面绑定模型服务筛选时，如果设置true, 返回结果只会有可以被绑定的数据。
                     * 
                     */
                    void SetUseToBind(const bool& _useToBind);

                    /**
                     * 判断参数 UseToBind 是否已赋值
                     * @return UseToBind 是否已赋值
                     * 
                     */
                    bool UseToBindHasBeenSet() const;

                private:

                    /**
                     * 网关 id。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 返回数量，默认为 10，最大值为 1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件，多个过滤条件之间是“与”的关系
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 搜索关键词，模糊匹配 name 和 description
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 通过消费者组Id筛选，UseToBind 为 true 时ConsumerGroupId不为空
                     */
                    std::string m_consumerGroupId;
                    bool m_consumerGroupIdHasBeenSet;

                    /**
                     * 筛选可被绑定的数据， 比如模型API里面绑定模型服务筛选时，如果设置true, 返回结果只会有可以被绑定的数据。
                     */
                    bool m_useToBind;
                    bool m_useToBindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELAPISREQUEST_H_
