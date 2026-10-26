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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYLISTREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYLISTREQUEST_H_

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
                     * 获取<p>每页数量，最大20个</p>
                     * @return Limit <p>每页数量，最大20个</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，最大20个</p>
                     * @param _limit <p>每页数量，最大20个</p>
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
                     * 获取<p>起始值</p>
                     * @return Offset <p>起始值</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>起始值</p>
                     * @param _offset <p>起始值</p>
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
                     * 获取<p>资源类型：</p><ul><li>Consumer: 消费者</li><li>LLM: 模型服务</li></ul>
                     * @return ResourceType <p>资源类型：</p><ul><li>Consumer: 消费者</li><li>LLM: 模型服务</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型：</p><ul><li>Consumer: 消费者</li><li>LLM: 模型服务</li></ul>
                     * @param _resourceType <p>资源类型：</p><ul><li>Consumer: 消费者</li><li>LLM: 模型服务</li></ul>
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
                     * 获取<p>资源id</p>
                     * @return ResourceId <p>资源id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _resourceId <p>资源id</p>
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
                     * 获取<p>是否展示可以用于绑定信息,true/false</p>
                     * @return UseToBind <p>是否展示可以用于绑定信息,true/false</p>
                     * 
                     */
                    bool GetUseToBind() const;

                    /**
                     * 设置<p>是否展示可以用于绑定信息,true/false</p>
                     * @param _useToBind <p>是否展示可以用于绑定信息,true/false</p>
                     * 
                     */
                    void SetUseToBind(const bool& _useToBind);

                    /**
                     * 判断参数 UseToBind 是否已赋值
                     * @return UseToBind 是否已赋值
                     * 
                     */
                    bool UseToBindHasBeenSet() const;

                    /**
                     * 获取<p>Key 可选：</p><ul><li>SecretType:  密钥类型 ApiKey</li><li>GenerateType:  生成方式，例如 KMS</li><li>Status: 状态 Enable/Disable</li></ul>
                     * @return Filters <p>Key 可选：</p><ul><li>SecretType:  密钥类型 ApiKey</li><li>GenerateType:  生成方式，例如 KMS</li><li>Status: 状态 Enable/Disable</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Key 可选：</p><ul><li>SecretType:  密钥类型 ApiKey</li><li>GenerateType:  生成方式，例如 KMS</li><li>Status: 状态 Enable/Disable</li></ul>
                     * @param _filters <p>Key 可选：</p><ul><li>SecretType:  密钥类型 ApiKey</li><li>GenerateType:  生成方式，例如 KMS</li><li>Status: 状态 Enable/Disable</li></ul>
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
                     * 获取<p>检索关键字</p>
                     * @return Keyword <p>检索关键字</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>检索关键字</p>
                     * @param _keyword <p>检索关键字</p>
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
                     * 获取<p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * @return IncludeCreationInfo <p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * 
                     */
                    bool GetIncludeCreationInfo() const;

                    /**
                     * 设置<p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * @param _includeCreationInfo <p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     * 
                     */
                    void SetIncludeCreationInfo(const bool& _includeCreationInfo);

                    /**
                     * 判断参数 IncludeCreationInfo 是否已赋值
                     * @return IncludeCreationInfo 是否已赋值
                     * 
                     */
                    bool IncludeCreationInfoHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>每页数量，最大20个</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>起始值</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>资源类型：</p><ul><li>Consumer: 消费者</li><li>LLM: 模型服务</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>是否展示可以用于绑定信息,true/false</p>
                     */
                    bool m_useToBind;
                    bool m_useToBindHasBeenSet;

                    /**
                     * <p>Key 可选：</p><ul><li>SecretType:  密钥类型 ApiKey</li><li>GenerateType:  生成方式，例如 KMS</li><li>Status: 状态 Enable/Disable</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>检索关键字</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>可选 Boolean，默认 false。仅传 true 且返回记录 ResourceType=Consumer 时，额外返回 CredentialGenerateType、CreationSource、BatchId；省略或 false 时不返回这三个字段，原字段和返回结构保持不变。此参数只控制展示字段，不控制 Filters 是否生效。</p>
                     */
                    bool m_includeCreationInfo;
                    bool m_includeCreationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSECRETKEYLISTREQUEST_H_
