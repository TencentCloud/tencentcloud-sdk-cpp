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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERQUOTAREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRouterQuota请求参数结构体
                */
                class DescribeModelRouterQuotaRequest : public AbstractModel
                {
                public:
                    DescribeModelRouterQuotaRequest();
                    ~DescribeModelRouterQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>配额类型</p>
                     * @return QuotaTypes <p>配额类型</p>
                     * 
                     */
                    std::vector<std::string> GetQuotaTypes() const;

                    /**
                     * 设置<p>配额类型</p>
                     * @param _quotaTypes <p>配额类型</p>
                     * 
                     */
                    void SetQuotaTypes(const std::vector<std::string>& _quotaTypes);

                    /**
                     * 判断参数 QuotaTypes 是否已赋值
                     * @return QuotaTypes 是否已赋值
                     * 
                     */
                    bool QuotaTypesHasBeenSet() const;

                    /**
                     * 获取<p>要查询的资源ID</p>
                     * @return ResourceIds <p>要查询的资源ID</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>要查询的资源ID</p>
                     * @param _resourceIds <p>要查询的资源ID</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>需要展示的字段</p><p>枚举值：</p><ul><li>Used： 已使用的配额数量</li><li>Available： 剩余的配额数量</li></ul>
                     * @return DisplayFields <p>需要展示的字段</p><p>枚举值：</p><ul><li>Used： 已使用的配额数量</li><li>Available： 剩余的配额数量</li></ul>
                     * 
                     */
                    std::vector<std::string> GetDisplayFields() const;

                    /**
                     * 设置<p>需要展示的字段</p><p>枚举值：</p><ul><li>Used： 已使用的配额数量</li><li>Available： 剩余的配额数量</li></ul>
                     * @param _displayFields <p>需要展示的字段</p><p>枚举值：</p><ul><li>Used： 已使用的配额数量</li><li>Available： 剩余的配额数量</li></ul>
                     * 
                     */
                    void SetDisplayFields(const std::vector<std::string>& _displayFields);

                    /**
                     * 判断参数 DisplayFields 是否已赋值
                     * @return DisplayFields 是否已赋值
                     * 
                     */
                    bool DisplayFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>配额类型</p>
                     */
                    std::vector<std::string> m_quotaTypes;
                    bool m_quotaTypesHasBeenSet;

                    /**
                     * <p>要查询的资源ID</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>需要展示的字段</p><p>枚举值：</p><ul><li>Used： 已使用的配额数量</li><li>Available： 剩余的配额数量</li></ul>
                     */
                    std::vector<std::string> m_displayFields;
                    bool m_displayFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERQUOTAREQUEST_H_
