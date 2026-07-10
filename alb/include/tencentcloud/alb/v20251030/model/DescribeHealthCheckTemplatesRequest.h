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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckTemplates请求参数结构体
                */
                class DescribeHealthCheckTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeHealthCheckTemplatesRequest();
                    ~DescribeHealthCheckTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>过滤器。通过指定的过滤条件来查询健康检查模板，支持：</p><ul><li>Name的值为<strong>HealthCheckTemplateName</strong>。通过名称来筛选健康检查模板。<strong>Values</strong>的值为模板名称列表。</li><li>Name的值为<strong>HealthCheckProtocol</strong>。通过健康检查协议来筛选健康检查模板。<strong>Values</strong>的值为协议列表。</li><li>通过标签方式筛选。</li></ul>
                     * @return Filters <p>过滤器。通过指定的过滤条件来查询健康检查模板，支持：</p><ul><li>Name的值为<strong>HealthCheckTemplateName</strong>。通过名称来筛选健康检查模板。<strong>Values</strong>的值为模板名称列表。</li><li>Name的值为<strong>HealthCheckProtocol</strong>。通过健康检查协议来筛选健康检查模板。<strong>Values</strong>的值为协议列表。</li><li>通过标签方式筛选。</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器。通过指定的过滤条件来查询健康检查模板，支持：</p><ul><li>Name的值为<strong>HealthCheckTemplateName</strong>。通过名称来筛选健康检查模板。<strong>Values</strong>的值为模板名称列表。</li><li>Name的值为<strong>HealthCheckProtocol</strong>。通过健康检查协议来筛选健康检查模板。<strong>Values</strong>的值为协议列表。</li><li>通过标签方式筛选。</li></ul>
                     * @param _filters <p>过滤器。通过指定的过滤条件来查询健康检查模板，支持：</p><ul><li>Name的值为<strong>HealthCheckTemplateName</strong>。通过名称来筛选健康检查模板。<strong>Values</strong>的值为模板名称列表。</li><li>Name的值为<strong>HealthCheckProtocol</strong>。通过健康检查协议来筛选健康检查模板。<strong>Values</strong>的值为协议列表。</li><li>通过标签方式筛选。</li></ul>
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
                     * 获取<p>健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。</p>
                     * @return HealthCheckTemplateIds <p>健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。</p>
                     * 
                     */
                    std::vector<std::string> GetHealthCheckTemplateIds() const;

                    /**
                     * 设置<p>健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。</p>
                     * @param _healthCheckTemplateIds <p>健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。</p>
                     * 
                     */
                    void SetHealthCheckTemplateIds(const std::vector<std::string>& _healthCheckTemplateIds);

                    /**
                     * 判断参数 HealthCheckTemplateIds 是否已赋值
                     * @return HealthCheckTemplateIds 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateIdsHasBeenSet() const;

                    /**
                     * 获取<p>返回列表的数量，默认为20，最大值为100。</p>
                     * @return MaxResults <p>返回列表的数量，默认为20，最大值为100。</p>
                     * 
                     */
                    std::string GetMaxResults() const;

                    /**
                     * 设置<p>返回列表的数量，默认为20，最大值为100。</p>
                     * @param _maxResults <p>返回列表的数量，默认为20，最大值为100。</p>
                     * 
                     */
                    void SetMaxResults(const std::string& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。<br>如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。</p>
                     * @return NextToken <p>下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。<br>如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。<br>如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。</p>
                     * @param _nextToken <p>下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。<br>如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * <p>过滤器。通过指定的过滤条件来查询健康检查模板，支持：</p><ul><li>Name的值为<strong>HealthCheckTemplateName</strong>。通过名称来筛选健康检查模板。<strong>Values</strong>的值为模板名称列表。</li><li>Name的值为<strong>HealthCheckProtocol</strong>。通过健康检查协议来筛选健康检查模板。<strong>Values</strong>的值为协议列表。</li><li>通过标签方式筛选。</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。</p>
                     */
                    std::vector<std::string> m_healthCheckTemplateIds;
                    bool m_healthCheckTemplateIdsHasBeenSet;

                    /**
                     * <p>返回列表的数量，默认为20，最大值为100。</p>
                     */
                    std::string m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。<br>如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESREQUEST_H_
