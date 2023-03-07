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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMDETECTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMDETECTLISTREQUEST_H_

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
                * ExportBaselineItemDetectList请求参数结构体
                */
                class ExportBaselineItemDetectListRequest : public AbstractModel
                {
                public:
                    ExportBaselineItemDetectListRequest();
                    ~ExportBaselineItemDetectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>HostId - string - 是否必填：否 - 主机Id</i>
<li>RuleId - int64 - 是否必填：否 - 规则Id</i>
<li>IsPassed - int - 是否必填：否 - 是否通过</li>
<li>RiskTier - int - 是否必填：否 - 风险等级</li>
                     * @return Filters <li>HostId - string - 是否必填：否 - 主机Id</i>
<li>RuleId - int64 - 是否必填：否 - 规则Id</i>
<li>IsPassed - int - 是否必填：否 - 是否通过</li>
<li>RiskTier - int - 是否必填：否 - 风险等级</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>HostId - string - 是否必填：否 - 主机Id</i>
<li>RuleId - int64 - 是否必填：否 - 规则Id</i>
<li>IsPassed - int - 是否必填：否 - 是否通过</li>
<li>RiskTier - int - 是否必填：否 - 风险等级</li>
                     * @param Filters <li>HostId - string - 是否必填：否 - 主机Id</i>
<li>RuleId - int64 - 是否必填：否 - 规则Id</i>
<li>IsPassed - int - 是否必填：否 - 是否通过</li>
<li>RiskTier - int - 是否必填：否 - 风险等级</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取0:过滤的结果导出；1:全部导出
                     * @return ExportAll 0:过滤的结果导出；1:全部导出
                     */
                    int64_t GetExportAll() const;

                    /**
                     * 设置0:过滤的结果导出；1:全部导出
                     * @param ExportAll 0:过滤的结果导出；1:全部导出
                     */
                    void SetExportAll(const int64_t& _exportAll);

                    /**
                     * 判断参数 ExportAll 是否已赋值
                     * @return ExportAll 是否已赋值
                     */
                    bool ExportAllHasBeenSet() const;

                private:

                    /**
                     * <li>HostId - string - 是否必填：否 - 主机Id</i>
<li>RuleId - int64 - 是否必填：否 - 规则Id</i>
<li>IsPassed - int - 是否必填：否 - 是否通过</li>
<li>RiskTier - int - 是否必填：否 - 风险等级</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 0:过滤的结果导出；1:全部导出
                     */
                    int64_t m_exportAll;
                    bool m_exportAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTBASELINEITEMDETECTLISTREQUEST_H_
