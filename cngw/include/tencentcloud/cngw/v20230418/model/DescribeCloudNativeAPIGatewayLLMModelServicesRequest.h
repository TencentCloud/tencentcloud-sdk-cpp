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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELSERVICESREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELSERVICESREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayLLMModelServices请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayLLMModelServicesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayLLMModelServicesRequest();
                    ~DescribeCloudNativeAPIGatewayLLMModelServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关 id。</p>
                     * @return GatewayId <p>网关 id。</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关 id。</p>
                     * @param _gatewayId <p>网关 id。</p>
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
                     * 获取<p>返回数量，默认为 10，最大值为 1000。</p>
                     * @return Limit <p>返回数量，默认为 10，最大值为 1000。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为 10，最大值为 1000。</p>
                     * @param _limit <p>返回数量，默认为 10，最大值为 1000。</p>
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

                    /**
                     * 获取<p>过滤条件，多个过滤条件之间是“与”的关系，支持 Name</p>
                     * @return Filters <p>过滤条件，多个过滤条件之间是“与”的关系，支持 Name</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，多个过滤条件之间是“与”的关系，支持 Name</p>
                     * @param _filters <p>过滤条件，多个过滤条件之间是“与”的关系，支持 Name</p>
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
                     * 获取<p>通过模型 API 筛选模型服务</p>
                     * @return ModelAPIId <p>通过模型 API 筛选模型服务</p>
                     * 
                     */
                    std::string GetModelAPIId() const;

                    /**
                     * 设置<p>通过模型 API 筛选模型服务</p>
                     * @param _modelAPIId <p>通过模型 API 筛选模型服务</p>
                     * 
                     */
                    void SetModelAPIId(const std::string& _modelAPIId);

                    /**
                     * 判断参数 ModelAPIId 是否已赋值
                     * @return ModelAPIId 是否已赋值
                     * 
                     */
                    bool ModelAPIIdHasBeenSet() const;

                    /**
                     * 获取<p>通过密匙查询绑定的模型服务</p>
                     * @return SecretKeyId <p>通过密匙查询绑定的模型服务</p>
                     * 
                     */
                    std::string GetSecretKeyId() const;

                    /**
                     * 设置<p>通过密匙查询绑定的模型服务</p>
                     * @param _secretKeyId <p>通过密匙查询绑定的模型服务</p>
                     * 
                     */
                    void SetSecretKeyId(const std::string& _secretKeyId);

                    /**
                     * 判断参数 SecretKeyId 是否已赋值
                     * @return SecretKeyId 是否已赋值
                     * 
                     */
                    bool SecretKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>搜索关键词，模糊匹配 name 和 description</p>
                     * @return Keyword <p>搜索关键词，模糊匹配 name 和 description</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>搜索关键词，模糊匹配 name 和 description</p>
                     * @param _keyword <p>搜索关键词，模糊匹配 name 和 description</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * <p>网关 id。</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>返回数量，默认为 10，最大值为 1000。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件，多个过滤条件之间是“与”的关系，支持 Name</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>通过模型 API 筛选模型服务</p>
                     */
                    std::string m_modelAPIId;
                    bool m_modelAPIIdHasBeenSet;

                    /**
                     * <p>通过密匙查询绑定的模型服务</p>
                     */
                    std::string m_secretKeyId;
                    bool m_secretKeyIdHasBeenSet;

                    /**
                     * <p>搜索关键词，模糊匹配 name 和 description</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYLLMMODELSERVICESREQUEST_H_
