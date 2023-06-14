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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULEFFECTHOSTLISTREQUEST_H_

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
                * ExportVulEffectHostList请求参数结构体
                */
                class ExportVulEffectHostListRequest : public AbstractModel
                {
                public:
                    ExportVulEffectHostListRequest();
                    ~ExportVulEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param _vulId 漏洞id
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>AliasName - String - 主机名筛选</li>
                     * @return Filters 过滤条件。
<li>AliasName - String - 主机名筛选</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>AliasName - String - 主机名筛选</li>
                     * @param _filters 过滤条件。
<li>AliasName - String - 主机名筛选</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 过滤条件。
<li>AliasName - String - 主机名筛选</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULEFFECTHOSTLISTREQUEST_H_
