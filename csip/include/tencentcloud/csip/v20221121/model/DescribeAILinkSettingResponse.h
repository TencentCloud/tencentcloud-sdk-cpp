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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAILINKSETTINGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAILINKSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAILinkSetting返回参数结构体
                */
                class DescribeAILinkSettingResponse : public AbstractModel
                {
                public:
                    DescribeAILinkSettingResponse();
                    ~DescribeAILinkSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0 关闭AI-Link智链引擎，1 开启AI-Link智链引擎</p>
                     * @return AILinkEnable <p>0 关闭AI-Link智链引擎，1 开启AI-Link智链引擎</p>
                     * 
                     */
                    uint64_t GetAILinkEnable() const;

                    /**
                     * 判断参数 AILinkEnable 是否已赋值
                     * @return AILinkEnable 是否已赋值
                     * 
                     */
                    bool AILinkEnableHasBeenSet() const;

                    /**
                     * 获取<p>深度模式 0-关闭 1-开启</p>
                     * @return RuleScopeDeep <p>深度模式 0-关闭 1-开启</p>
                     * 
                     */
                    uint64_t GetRuleScopeDeep() const;

                    /**
                     * 判断参数 RuleScopeDeep 是否已赋值
                     * @return RuleScopeDeep 是否已赋值
                     * 
                     */
                    bool RuleScopeDeepHasBeenSet() const;

                    /**
                     * 获取<p>均衡模式 0-关闭 1-开启</p>
                     * @return RuleScopeBalanced <p>均衡模式 0-关闭 1-开启</p>
                     * 
                     */
                    uint64_t GetRuleScopeBalanced() const;

                    /**
                     * 判断参数 RuleScopeBalanced 是否已赋值
                     * @return RuleScopeBalanced 是否已赋值
                     * 
                     */
                    bool RuleScopeBalancedHasBeenSet() const;

                    /**
                     * 获取<p>精准模式 0-关闭 1-开启</p>
                     * @return RuleScopePrecise <p>精准模式 0-关闭 1-开启</p>
                     * 
                     */
                    uint64_t GetRuleScopePrecise() const;

                    /**
                     * 判断参数 RuleScopePrecise 是否已赋值
                     * @return RuleScopePrecise 是否已赋值
                     * 
                     */
                    bool RuleScopePreciseHasBeenSet() const;

                    /**
                     * 获取<p>1 全部专业/旗舰版主机，0 Quuids列表主机</p>
                     * @return Scope <p>1 全部专业/旗舰版主机，0 Quuids列表主机</p>
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
                     * 获取<p>自选主机Quuid列表</p>
                     * @return Quuids <p>自选主机Quuid列表</p>
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取<p>排除主机Quuid列表</p>
                     * @return ExcludeQuuids <p>排除主机Quuid列表</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuids() const;

                    /**
                     * 判断参数 ExcludeQuuids 是否已赋值
                     * @return ExcludeQuuids 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidsHasBeenSet() const;

                    /**
                     * 获取<p>新增资产自动包含 0 不包含 1包含</p>
                     * @return AutoInclude <p>新增资产自动包含 0 不包含 1包含</p>
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                private:

                    /**
                     * <p>0 关闭AI-Link智链引擎，1 开启AI-Link智链引擎</p>
                     */
                    uint64_t m_aILinkEnable;
                    bool m_aILinkEnableHasBeenSet;

                    /**
                     * <p>深度模式 0-关闭 1-开启</p>
                     */
                    uint64_t m_ruleScopeDeep;
                    bool m_ruleScopeDeepHasBeenSet;

                    /**
                     * <p>均衡模式 0-关闭 1-开启</p>
                     */
                    uint64_t m_ruleScopeBalanced;
                    bool m_ruleScopeBalancedHasBeenSet;

                    /**
                     * <p>精准模式 0-关闭 1-开启</p>
                     */
                    uint64_t m_ruleScopePrecise;
                    bool m_ruleScopePreciseHasBeenSet;

                    /**
                     * <p>1 全部专业/旗舰版主机，0 Quuids列表主机</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>自选主机Quuid列表</p>
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * <p>排除主机Quuid列表</p>
                     */
                    std::vector<std::string> m_excludeQuuids;
                    bool m_excludeQuuidsHasBeenSet;

                    /**
                     * <p>新增资产自动包含 0 不包含 1包含</p>
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAILINKSETTINGRESPONSE_H_
