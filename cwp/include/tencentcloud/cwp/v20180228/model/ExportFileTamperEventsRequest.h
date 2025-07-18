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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPEREVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPEREVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportFileTamperEvents请求参数结构体
                */
                class ExportFileTamperEventsRequest : public AbstractModel
                {
                public:
                    ExportFileTamperEventsRequest();
                    ~ExportFileTamperEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
                     * @return Filters 过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
                     * @param _filters 过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取需要导出的字段
                     * @return Fileds 需要导出的字段
                     * @deprecated
                     */
                    std::vector<std::string> GetFileds() const;

                    /**
                     * 设置需要导出的字段
                     * @param _fileds 需要导出的字段
                     * @deprecated
                     */
                    void SetFileds(const std::vector<std::string>& _fileds);

                    /**
                     * 判断参数 Fileds 是否已赋值
                     * @return Fileds 是否已赋值
                     * @deprecated
                     */
                    bool FiledsHasBeenSet() const;

                    /**
                     * 获取需要导出的字段
                     * @return Fields 需要导出的字段
                     * @deprecated
                     */
                    std::string GetFields() const;

                    /**
                     * 设置需要导出的字段
                     * @param _fields 需要导出的字段
                     * @deprecated
                     */
                    void SetFields(const std::string& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * @deprecated
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取需要导出的字段
                     * @return Where 需要导出的字段
                     * 
                     */
                    std::vector<std::string> GetWhere() const;

                    /**
                     * 设置需要导出的字段
                     * @param _where 需要导出的字段
                     * 
                     */
                    void SetWhere(const std::vector<std::string>& _where);

                    /**
                     * 判断参数 Where 是否已赋值
                     * @return Where 是否已赋值
                     * 
                     */
                    bool WhereHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>Status - String - 是否必填：否 - 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略</li>
<li>ModifyTime - String - 是否必填：否 - 最近发生时间</li>
<li>Uuid- String - 是否必填：否 - 主机uuid查询</li>
<li>RuleCategory- string - 是否必填：否 - 规则类别 0 系统规则 1 自定义规则</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 需要导出的字段
                     */
                    std::vector<std::string> m_fileds;
                    bool m_filedsHasBeenSet;

                    /**
                     * 需要导出的字段
                     */
                    std::string m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 需要导出的字段
                     */
                    std::vector<std::string> m_where;
                    bool m_whereHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTFILETAMPEREVENTSREQUEST_H_
