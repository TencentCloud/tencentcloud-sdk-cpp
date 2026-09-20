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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYLISTREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYLISTREQUEST_H_

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
                * DescribeCloudNativeAPIGatewaySecretKeyList请求参数结构体
                */
                class DescribeCloudNativeAPIGatewaySecretKeyListRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewaySecretKeyListRequest();
                    ~DescribeCloudNativeAPIGatewaySecretKeyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return GatewayId <p>实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _gatewayId <p>实例 ID</p>
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
                     * 获取<p>每页条数，范围 [1, 100]，默认 10。</p>
                     * @return Limit <p>每页条数，范围 [1, 100]，默认 10。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数，范围 [1, 100]，默认 10。</p>
                     * @param _limit <p>每页条数，范围 [1, 100]，默认 10。</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

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
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>起始位置，从 0 开始。</p>
                     * @param _offset <p>起始位置，从 0 开始。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件。支持的 Name：Status / GenerateType / SecretType。</p>
                     * @return Filters <p>过滤条件。支持的 Name：Status / GenerateType / SecretType。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。支持的 Name：Status / GenerateType / SecretType。</p>
                     * @param _filters <p>过滤条件。支持的 Name：Status / GenerateType / SecretType。</p>
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
                     * 获取<p>模糊匹配密钥名称。</p>
                     * @return Keyword <p>模糊匹配密钥名称。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>模糊匹配密钥名称。</p>
                     * @param _keyword <p>模糊匹配密钥名称。</p>
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
                     * 获取<p>对应资源的 ID（消费者 ID 或模型服务 ID）。</p>
                     * @return ResourceId <p>对应资源的 ID（消费者 ID 或模型服务 ID）。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>对应资源的 ID（消费者 ID 或模型服务 ID）。</p>
                     * @param _resourceId <p>对应资源的 ID（消费者 ID 或模型服务 ID）。</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>密钥归属资源类型。UseToBind=true 时必填。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * @return ResourceType <p>密钥归属资源类型。UseToBind=true 时必填。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>密钥归属资源类型。UseToBind=true 时必填。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * @param _resourceType <p>密钥归属资源类型。UseToBind=true 时必填。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否用于绑定场景。true 时返回可被绑定到指定资源的密钥。</p>
                     * @return UseToBind <p>是否用于绑定场景。true 时返回可被绑定到指定资源的密钥。</p>
                     * 
                     */
                    bool GetUseToBind() const;

                    /**
                     * 设置<p>是否用于绑定场景。true 时返回可被绑定到指定资源的密钥。</p>
                     * @param _useToBind <p>是否用于绑定场景。true 时返回可被绑定到指定资源的密钥。</p>
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
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>每页条数，范围 [1, 100]，默认 10。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>起始位置，从 0 开始。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件。支持的 Name：Status / GenerateType / SecretType。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>模糊匹配密钥名称。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>对应资源的 ID（消费者 ID 或模型服务 ID）。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>密钥归属资源类型。UseToBind=true 时必填。</p><p>枚举值：</p><ul><li>Consumer：消费者</li><li>ModelService：模型服务</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>是否用于绑定场景。true 时返回可被绑定到指定资源的密钥。</p>
                     */
                    bool m_useToBind;
                    bool m_useToBindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYLISTREQUEST_H_
