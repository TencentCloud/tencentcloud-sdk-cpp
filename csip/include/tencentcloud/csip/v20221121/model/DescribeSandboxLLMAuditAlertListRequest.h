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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXLLMAUDITALERTLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXLLMAUDITALERTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSandboxLLMAuditAlertList请求参数结构体
                */
                class DescribeSandboxLLMAuditAlertListRequest : public AbstractModel
                {
                public:
                    DescribeSandboxLLMAuditAlertListRequest();
                    ~DescribeSandboxLLMAuditAlertListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量，默认 0</p>
                     * @return Offset <p>偏移量，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认 0</p>
                     * @param _offset <p>偏移量，默认 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认 10，上限 200</p>
                     * @return Limit <p>每页数量，默认 10，上限 200</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认 10，上限 200</p>
                     * @param _limit <p>每页数量，默认 10，上限 200</p>
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
                     * 获取<p>过滤条件<br>支持的过滤项：<br>ID：按告警记录 ID 查询单条<br>BelongAssetType：归属资产类型，可选值：HOST（主机） / CONTAINER（容器）<br>RuleName：按用户规则名称搜索<br>RuleAction：命中动作，可选值：PASS（加白） / BLOCK（拦截并告警） / MONITOR（告警）<br>InstanceId：按资产实例 ID 精确过滤（用于资产详情页查看该资产的告警列表等场景）<br>InstanceName：按资产实例名模糊搜索，多个值之间为&quot;或&quot;关系<br>Status：处理状态，可选值：PENDING（未处理） / HANDLED（已处理） / IGNORE（已忽略） / PASS（已加白） / BLOCK（已拦截）</p>
                     * @return Filters <p>过滤条件<br>支持的过滤项：<br>ID：按告警记录 ID 查询单条<br>BelongAssetType：归属资产类型，可选值：HOST（主机） / CONTAINER（容器）<br>RuleName：按用户规则名称搜索<br>RuleAction：命中动作，可选值：PASS（加白） / BLOCK（拦截并告警） / MONITOR（告警）<br>InstanceId：按资产实例 ID 精确过滤（用于资产详情页查看该资产的告警列表等场景）<br>InstanceName：按资产实例名模糊搜索，多个值之间为&quot;或&quot;关系<br>Status：处理状态，可选值：PENDING（未处理） / HANDLED（已处理） / IGNORE（已忽略） / PASS（已加白） / BLOCK（已拦截）</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>过滤条件<br>支持的过滤项：<br>ID：按告警记录 ID 查询单条<br>BelongAssetType：归属资产类型，可选值：HOST（主机） / CONTAINER（容器）<br>RuleName：按用户规则名称搜索<br>RuleAction：命中动作，可选值：PASS（加白） / BLOCK（拦截并告警） / MONITOR（告警）<br>InstanceId：按资产实例 ID 精确过滤（用于资产详情页查看该资产的告警列表等场景）<br>InstanceName：按资产实例名模糊搜索，多个值之间为&quot;或&quot;关系<br>Status：处理状态，可选值：PENDING（未处理） / HANDLED（已处理） / IGNORE（已忽略） / PASS（已加白） / BLOCK（已拦截）</p>
                     * @param _filters <p>过滤条件<br>支持的过滤项：<br>ID：按告警记录 ID 查询单条<br>BelongAssetType：归属资产类型，可选值：HOST（主机） / CONTAINER（容器）<br>RuleName：按用户规则名称搜索<br>RuleAction：命中动作，可选值：PASS（加白） / BLOCK（拦截并告警） / MONITOR（告警）<br>InstanceId：按资产实例 ID 精确过滤（用于资产详情页查看该资产的告警列表等场景）<br>InstanceName：按资产实例名模糊搜索，多个值之间为&quot;或&quot;关系<br>Status：处理状态，可选值：PENDING（未处理） / HANDLED（已处理） / IGNORE（已忽略） / PASS（已加白） / BLOCK（已拦截）</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认 10，上限 200</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件<br>支持的过滤项：<br>ID：按告警记录 ID 查询单条<br>BelongAssetType：归属资产类型，可选值：HOST（主机） / CONTAINER（容器）<br>RuleName：按用户规则名称搜索<br>RuleAction：命中动作，可选值：PASS（加白） / BLOCK（拦截并告警） / MONITOR（告警）<br>InstanceId：按资产实例 ID 精确过滤（用于资产详情页查看该资产的告警列表等场景）<br>InstanceName：按资产实例名模糊搜索，多个值之间为&quot;或&quot;关系<br>Status：处理状态，可选值：PENDING（未处理） / HANDLED（已处理） / IGNORE（已忽略） / PASS（已加白） / BLOCK（已拦截）</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESANDBOXLLMAUDITALERTLISTREQUEST_H_
