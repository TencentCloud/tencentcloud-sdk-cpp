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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEGLOBALCONFRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEGLOBALCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLoginTypeGlobalConf返回参数结构体
                */
                class DescribeLoginTypeGlobalConfResponse : public AbstractModel
                {
                public:
                    DescribeLoginTypeGlobalConfResponse();
                    ~DescribeLoginTypeGlobalConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启防卸载 <li>0 否</li> <li>1 是</li> <li>9 未设置,和0一样是未开启</li>
                     * @return Enable 是否开启防卸载 <li>0 否</li> <li>1 是</li> <li>9 未设置,和0一样是未开启</li>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取开启范围 <li>0 自选主机</li> <li>1 全部主机</li>
                     * @return Scope 开启范围 <li>0 自选主机</li> <li>1 全部主机</li>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取正选主机配置数
                     * @return IncludeHostCount 正选主机配置数
                     * 
                     */
                    uint64_t GetIncludeHostCount() const;

                    /**
                     * 判断参数 IncludeHostCount 是否已赋值
                     * @return IncludeHostCount 是否已赋值
                     * 
                     */
                    bool IncludeHostCountHasBeenSet() const;

                    /**
                     * 获取反选主机配置数
                     * @return ExcludeHostCount 反选主机配置数
                     * 
                     */
                    uint64_t GetExcludeHostCount() const;

                    /**
                     * 判断参数 ExcludeHostCount 是否已赋值
                     * @return ExcludeHostCount 是否已赋值
                     * 
                     */
                    bool ExcludeHostCountHasBeenSet() const;

                    /**
                     * 获取正选quuid配置列表
                     * @return IncludeQuuid 正选quuid配置列表
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuid() const;

                    /**
                     * 判断参数 IncludeQuuid 是否已赋值
                     * @return IncludeQuuid 是否已赋值
                     * 
                     */
                    bool IncludeQuuidHasBeenSet() const;

                    /**
                     * 获取反选quuid配置列表
                     * @return ExcludeQuuid 反选quuid配置列表
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 判断参数 ExcludeQuuid 是否已赋值
                     * @return ExcludeQuuid 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidHasBeenSet() const;

                    /**
                     * 获取已开启机器数
                     * @return EnableCount 已开启机器数
                     * 
                     */
                    uint64_t GetEnableCount() const;

                    /**
                     * 判断参数 EnableCount 是否已赋值
                     * @return EnableCount 是否已赋值
                     * 
                     */
                    bool EnableCountHasBeenSet() const;

                    /**
                     * 获取未启机器数
                     * @return DisableCount 未启机器数
                     * 
                     */
                    uint64_t GetDisableCount() const;

                    /**
                     * 判断参数 DisableCount 是否已赋值
                     * @return DisableCount 是否已赋值
                     * 
                     */
                    bool DisableCountHasBeenSet() const;

                private:

                    /**
                     * 是否开启防卸载 <li>0 否</li> <li>1 是</li> <li>9 未设置,和0一样是未开启</li>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 开启范围 <li>0 自选主机</li> <li>1 全部主机</li>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 正选主机配置数
                     */
                    uint64_t m_includeHostCount;
                    bool m_includeHostCountHasBeenSet;

                    /**
                     * 反选主机配置数
                     */
                    uint64_t m_excludeHostCount;
                    bool m_excludeHostCountHasBeenSet;

                    /**
                     * 正选quuid配置列表
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * 反选quuid配置列表
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                    /**
                     * 已开启机器数
                     */
                    uint64_t m_enableCount;
                    bool m_enableCountHasBeenSet;

                    /**
                     * 未启机器数
                     */
                    uint64_t m_disableCount;
                    bool m_disableCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEGLOBALCONFRESPONSE_H_
