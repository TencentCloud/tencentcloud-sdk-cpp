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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYEVENTATTACKSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYEVENTATTACKSTATUSREQUEST_H_

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
                * ModifyEventAttackStatus请求参数结构体
                */
                class ModifyEventAttackStatusRequest : public AbstractModel
                {
                public:
                    ModifyEventAttackStatusRequest();
                    ~ModifyEventAttackStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的事件id 数组，支持批量
                     * @return Ids 需要修改的事件id 数组，支持批量
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置需要修改的事件id 数组，支持批量
                     * @param _ids 需要修改的事件id 数组，支持批量
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * @return All 是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * @param _all 是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取0：待处理 1：已处理 3： 已忽略 4：已删除 
                     * @return Status 0：待处理 1：已处理 3： 已忽略 4：已删除 
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0：待处理 1：已处理 3： 已忽略 4：已删除 
                     * @param _status 0：待处理 1：已处理 3： 已忽略 4：已删除 
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>Quuids - String 主机cvm uuid - 是否必填: 否</li>

                     * @return Filters 过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>Quuids - String 主机cvm uuid - 是否必填: 否</li>

                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>Quuids - String 主机cvm uuid - 是否必填: 否</li>

                     * @param _filters 过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>Quuids - String 主机cvm uuid - 是否必填: 否</li>

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
                     * 获取排除的id
                     * @return ExcludeId 排除的id
                     * 
                     */
                    std::vector<uint64_t> GetExcludeId() const;

                    /**
                     * 设置排除的id
                     * @param _excludeId 排除的id
                     * 
                     */
                    void SetExcludeId(const std::vector<uint64_t>& _excludeId);

                    /**
                     * 判断参数 ExcludeId 是否已赋值
                     * @return ExcludeId 是否已赋值
                     * 
                     */
                    bool ExcludeIdHasBeenSet() const;

                private:

                    /**
                     * 需要修改的事件id 数组，支持批量
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 是否更新全部，即是否对所有的事件进行操作，当ids 不为空时，此参数无效
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 0：待处理 1：已处理 3： 已忽略 4：已删除 
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 过滤条件。
<li>Type - String 攻击状态 0: 尝试攻击 1: 攻击成功 - 是否必填: 否</li>
<li>Status - String 事件处理状态 0：待处理 1：已处理 2： 已加白 3： 已忽略 4：已删除  - 是否必填: 否</li>
<li>SrcIP - String 来源IP - 是否必填: 否</li>
<li>DstPort - String 攻击目标端口 - 是否必填: 否</li>
<li>MachineName - String 主机名称 - 是否必填: 否</li>
<li>InstanceID - String 主机实例ID - 是否必填: 否</li>
<li>Quuids - String 主机cvm uuid - 是否必填: 否</li>

                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排除的id
                     */
                    std::vector<uint64_t> m_excludeId;
                    bool m_excludeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYEVENTATTACKSTATUSREQUEST_H_
