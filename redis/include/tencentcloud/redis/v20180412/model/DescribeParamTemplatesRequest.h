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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeParamTemplates请求参数结构体
                */
                class DescribeParamTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParamTemplatesRequest();
                    ~DescribeParamTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定查询的产品版本与架构。</p><ul><li>6：Redis 4.0 标准架构。</li><li>7：Redis 4.0 集群架构。</li><li>8：Redis 5.0 标准架构。</li><li>9：Redis 5.0 集群架构。</li><li>15：Redis 6.2 标准架构。</li><li>16：Redis 6.2 集群架构。</li><li>17：Redis 7.0 标准架构。</li><li>18：Redis 7.0 集群架构。</li><li>19：ValKey 8.0 标准架构。</li><li>20：ValKey 8.0 集群架构。</li></ul>
                     * @return ProductTypes <p>指定查询的产品版本与架构。</p><ul><li>6：Redis 4.0 标准架构。</li><li>7：Redis 4.0 集群架构。</li><li>8：Redis 5.0 标准架构。</li><li>9：Redis 5.0 集群架构。</li><li>15：Redis 6.2 标准架构。</li><li>16：Redis 6.2 集群架构。</li><li>17：Redis 7.0 标准架构。</li><li>18：Redis 7.0 集群架构。</li><li>19：ValKey 8.0 标准架构。</li><li>20：ValKey 8.0 集群架构。</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetProductTypes() const;

                    /**
                     * 设置<p>指定查询的产品版本与架构。</p><ul><li>6：Redis 4.0 标准架构。</li><li>7：Redis 4.0 集群架构。</li><li>8：Redis 5.0 标准架构。</li><li>9：Redis 5.0 集群架构。</li><li>15：Redis 6.2 标准架构。</li><li>16：Redis 6.2 集群架构。</li><li>17：Redis 7.0 标准架构。</li><li>18：Redis 7.0 集群架构。</li><li>19：ValKey 8.0 标准架构。</li><li>20：ValKey 8.0 集群架构。</li></ul>
                     * @param _productTypes <p>指定查询的产品版本与架构。</p><ul><li>6：Redis 4.0 标准架构。</li><li>7：Redis 4.0 集群架构。</li><li>8：Redis 5.0 标准架构。</li><li>9：Redis 5.0 集群架构。</li><li>15：Redis 6.2 标准架构。</li><li>16：Redis 6.2 集群架构。</li><li>17：Redis 7.0 标准架构。</li><li>18：Redis 7.0 集群架构。</li><li>19：ValKey 8.0 标准架构。</li><li>20：ValKey 8.0 集群架构。</li></ul>
                     * 
                     */
                    void SetProductTypes(const std::vector<int64_t>& _productTypes);

                    /**
                     * 判断参数 ProductTypes 是否已赋值
                     * @return ProductTypes 是否已赋值
                     * 
                     */
                    bool ProductTypesHasBeenSet() const;

                    /**
                     * 获取<p>指定查询的参数模板名称。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板名称。</li></ul>
                     * @return TemplateNames <p>指定查询的参数模板名称。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板名称。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置<p>指定查询的参数模板名称。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板名称。</li></ul>
                     * @param _templateNames <p>指定查询的参数模板名称。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板名称。</li></ul>
                     * 
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     * 
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取<p>指定查询的参数模板 ID。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板 ID。</li></ul>
                     * @return TemplateIds <p>指定查询的参数模板 ID。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板 ID。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTemplateIds() const;

                    /**
                     * 设置<p>指定查询的参数模板 ID。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板 ID。</li></ul>
                     * @param _templateIds <p>指定查询的参数模板 ID。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板 ID。</li></ul>
                     * 
                     */
                    void SetTemplateIds(const std::vector<std::string>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取<p>指定查询结果的分页大小，即每页返回的记录数量。</p><ul><li>取值范围：0～200。</li><li>默认值：200。</li></ul>
                     * @return Limit <p>指定查询结果的分页大小，即每页返回的记录数量。</p><ul><li>取值范围：0～200。</li><li>默认值：200。</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>指定查询结果的分页大小，即每页返回的记录数量。</p><ul><li>取值范围：0～200。</li><li>默认值：200。</li></ul>
                     * @param _limit <p>指定查询结果的分页大小，即每页返回的记录数量。</p><ul><li>取值范围：0～200。</li><li>默认值：200。</li></ul>
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
                     * 获取<p>分页偏移量，用于指定查询结果的起始位置。</p><ul><li>取值：必须为 Limit 的整数倍，默认值为 0。</li><li>计算公式：offset=limit*(页码-1)。</li></ul>
                     * @return Offset <p>分页偏移量，用于指定查询结果的起始位置。</p><ul><li>取值：必须为 Limit 的整数倍，默认值为 0。</li><li>计算公式：offset=limit*(页码-1)。</li></ul>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，用于指定查询结果的起始位置。</p><ul><li>取值：必须为 Limit 的整数倍，默认值为 0。</li><li>计算公式：offset=limit*(页码-1)。</li></ul>
                     * @param _offset <p>分页偏移量，用于指定查询结果的起始位置。</p><ul><li>取值：必须为 Limit 的整数倍，默认值为 0。</li><li>计算公式：offset=limit*(页码-1)。</li></ul>
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
                     * <p>指定查询的产品版本与架构。</p><ul><li>6：Redis 4.0 标准架构。</li><li>7：Redis 4.0 集群架构。</li><li>8：Redis 5.0 标准架构。</li><li>9：Redis 5.0 集群架构。</li><li>15：Redis 6.2 标准架构。</li><li>16：Redis 6.2 集群架构。</li><li>17：Redis 7.0 标准架构。</li><li>18：Redis 7.0 集群架构。</li><li>19：ValKey 8.0 标准架构。</li><li>20：ValKey 8.0 集群架构。</li></ul>
                     */
                    std::vector<int64_t> m_productTypes;
                    bool m_productTypesHasBeenSet;

                    /**
                     * <p>指定查询的参数模板名称。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板名称。</li></ul>
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * <p>指定查询的参数模板 ID。</p><ul><li>数据类型：字符串数组，最大长度限制为50。</li><li>获取方式：请通过 <a href="https://console.cloud.tencent.com/redis/templates">Redis 控制台的参数模版</a> 页面复制自定义模板或系统默认模板的模板 ID。</li></ul>
                     */
                    std::vector<std::string> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * <p>指定查询结果的分页大小，即每页返回的记录数量。</p><ul><li>取值范围：0～200。</li><li>默认值：200。</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，用于指定查询结果的起始位置。</p><ul><li>取值：必须为 Limit 的整数倍，默认值为 0。</li><li>计算公式：offset=limit*(页码-1)。</li></ul>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
