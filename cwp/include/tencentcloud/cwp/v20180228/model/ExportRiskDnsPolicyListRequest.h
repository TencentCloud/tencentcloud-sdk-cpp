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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportRiskDnsPolicyList请求参数结构体
                */
                class ExportRiskDnsPolicyListRequest : public AbstractModel
                {
                public:
                    ExportRiskDnsPolicyListRequest();
                    ~ExportRiskDnsPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>PolicyType - int - 是否必填：否 - 策略类型</li>
<li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>PolicyAction- int - 是否必填：否 - 策略动作</li>
<li>IsEnabled - int - 是否必填：否 - 是否生效</li>
                     * @return Filters <li>PolicyType - int - 是否必填：否 - 策略类型</li>
<li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>PolicyAction- int - 是否必填：否 - 策略动作</li>
<li>IsEnabled - int - 是否必填：否 - 是否生效</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>PolicyType - int - 是否必填：否 - 策略类型</li>
<li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>PolicyAction- int - 是否必填：否 - 策略动作</li>
<li>IsEnabled - int - 是否必填：否 - 是否生效</li>
                     * @param _filters <li>PolicyType - int - 是否必填：否 - 策略类型</li>
<li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>PolicyAction- int - 是否必填：否 - 策略动作</li>
<li>IsEnabled - int - 是否必填：否 - 是否生效</li>
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
                     * 获取排序方式: [ASC:升序|DESC:降序]
                     * @return Order 排序方式: [ASC:升序|DESC:降序]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式: [ASC:升序|DESC:降序]
                     * @param _order 排序方式: [ASC:升序|DESC:降序]
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取可选排序列: [PolicyName|HostType]
                     * @return By 可选排序列: [PolicyName|HostType]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置可选排序列: [PolicyName|HostType]
                     * @param _by 可选排序列: [PolicyName|HostType]
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <li>PolicyType - int - 是否必填：否 - 策略类型</li>
<li>PolicyName - string - 是否必填：否 - 策略名称</li>
<li>Domain - string - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>PolicyAction- int - 是否必填：否 - 策略动作</li>
<li>IsEnabled - int - 是否必填：否 - 是否生效</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式: [ASC:升序|DESC:降序]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 可选排序列: [PolicyName|HostType]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSPOLICYLISTREQUEST_H_
