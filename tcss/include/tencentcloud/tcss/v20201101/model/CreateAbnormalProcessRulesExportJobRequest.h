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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEABNORMALPROCESSRULESEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEABNORMALPROCESSRULESEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAbnormalProcessRulesExportJob请求参数结构体
                */
                class CreateAbnormalProcessRulesExportJobRequest : public AbstractModel
                {
                public:
                    CreateAbnormalProcessRulesExportJobRequest();
                    ~CreateAbnormalProcessRulesExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>RuleType - string  - 是否必填: 否 -规则类型</li>
<li>Status - string  - 是否必填: 否 -状态</li>
                     * @return Filters 过滤条件。
<li>RuleType - string  - 是否必填: 否 -规则类型</li>
<li>Status - string  - 是否必填: 否 -状态</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>RuleType - string  - 是否必填: 否 -规则类型</li>
<li>Status - string  - 是否必填: 否 -状态</li>
                     * @param _filters 过滤条件。
<li>RuleType - string  - 是否必填: 否 -规则类型</li>
<li>Status - string  - 是否必填: 否 -状态</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Order 排序方式
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param _order 排序方式
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
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取导出字段
                     * @return ExportField 导出字段
                     * 
                     */
                    std::vector<std::string> GetExportField() const;

                    /**
                     * 设置导出字段
                     * @param _exportField 导出字段
                     * 
                     */
                    void SetExportField(const std::vector<std::string>& _exportField);

                    /**
                     * 判断参数 ExportField 是否已赋值
                     * @return ExportField 是否已赋值
                     * 
                     */
                    bool ExportFieldHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>RuleType - string  - 是否必填: 否 -规则类型</li>
<li>Status - string  - 是否必填: 否 -状态</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 导出字段
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEABNORMALPROCESSRULESEXPORTJOBREQUEST_H_
