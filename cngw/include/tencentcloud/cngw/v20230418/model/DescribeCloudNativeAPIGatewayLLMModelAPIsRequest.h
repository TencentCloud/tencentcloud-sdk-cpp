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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELAPISREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
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
                     * 获取<p>每页条数，范围 [1, 1000]，默认 10。</p>
                     * @return Limit <p>每页条数，范围 [1, 1000]，默认 10。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数，范围 [1, 1000]，默认 10。</p>
                     * @param _limit <p>每页条数，范围 [1, 1000]，默认 10。</p>
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
                     * 获取<p>起始位置，从 0 开始。</p>
                     * @return Offset <p>起始位置，从 0 开始。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>起始位置，从 0 开始。</p>
                     * @param _offset <p>起始位置，从 0 开始。</p>
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
                     * 获取<p>过滤条件。当前未启用具体字段。</p>
                     * @return Filters <p>过滤条件。当前未启用具体字段。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。当前未启用具体字段。</p>
                     * @param _filters <p>过滤条件。当前未启用具体字段。</p>
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
                     * 获取<p>模糊匹配模型 API 名称。</p>
                     * @return Keyword <p>模糊匹配模型 API 名称。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>模糊匹配模型 API 名称。</p>
                     * @param _keyword <p>模糊匹配模型 API 名称。</p>
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
                     * 获取<p>消费者组 ID（以 cg- 开头），与 UseToBind 搭配使用。</p>
                     * @return ConsumerGroupId <p>消费者组 ID（以 cg- 开头），与 UseToBind 搭配使用。</p>
                     * 
                     */
                    std::string GetConsumerGroupId() const;

                    /**
                     * 设置<p>消费者组 ID（以 cg- 开头），与 UseToBind 搭配使用。</p>
                     * @param _consumerGroupId <p>消费者组 ID（以 cg- 开头），与 UseToBind 搭配使用。</p>
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
                     * 获取<p>是否用于绑定场景。true 时仅返回可被绑定到指定消费者组的模型 API。</p>
                     * @return UseToBind <p>是否用于绑定场景。true 时仅返回可被绑定到指定消费者组的模型 API。</p>
                     * 
                     */
                    bool GetUseToBind() const;

                    /**
                     * 设置<p>是否用于绑定场景。true 时仅返回可被绑定到指定消费者组的模型 API。</p>
                     * @param _useToBind <p>是否用于绑定场景。true 时仅返回可被绑定到指定消费者组的模型 API。</p>
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
                     * <p>每页条数，范围 [1, 1000]，默认 10。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>起始位置，从 0 开始。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件。当前未启用具体字段。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>模糊匹配模型 API 名称。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>消费者组 ID（以 cg- 开头），与 UseToBind 搭配使用。</p>
                     */
                    std::string m_consumerGroupId;
                    bool m_consumerGroupIdHasBeenSet;

                    /**
                     * <p>是否用于绑定场景。true 时仅返回可被绑定到指定消费者组的模型 API。</p>
                     */
                    bool m_useToBind;
                    bool m_useToBindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELAPISREQUEST_H_
