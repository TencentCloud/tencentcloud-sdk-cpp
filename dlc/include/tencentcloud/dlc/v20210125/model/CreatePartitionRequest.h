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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEPARTITIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEPARTITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceQuota.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreatePartition请求参数结构体
                */
                class CreatePartitionRequest : public AbstractModel
                {
                public:
                    CreatePartitionRequest();
                    ~CreatePartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>交易类型：purchase-新购</p>
                     * @return ActionType <p>交易类型：purchase-新购</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>交易类型：purchase-新购</p>
                     * @param _actionType <p>交易类型：purchase-新购</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>付费模式：1-预付费</p>
                     * @return PayMode <p>付费模式：1-预付费</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式：1-预付费</p>
                     * @param _payMode <p>付费模式：1-预付费</p>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>资源配额列表（计费项+数量）</p>
                     * @return ResourceQuotaList <p>资源配额列表（计费项+数量）</p>
                     * 
                     */
                    std::vector<ResourceQuota> GetResourceQuotaList() const;

                    /**
                     * 设置<p>资源配额列表（计费项+数量）</p>
                     * @param _resourceQuotaList <p>资源配额列表（计费项+数量）</p>
                     * 
                     */
                    void SetResourceQuotaList(const std::vector<ResourceQuota>& _resourceQuotaList);

                    /**
                     * 判断参数 ResourceQuotaList 是否已赋值
                     * @return ResourceQuotaList 是否已赋值
                     * 
                     */
                    bool ResourceQuotaListHasBeenSet() const;

                    /**
                     * 获取<p>时间大小，预付费时为购买月数</p>
                     * @return TimeSpan <p>时间大小，预付费时为购买月数</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>时间大小，预付费时为购买月数</p>
                     * @param _timeSpan <p>时间大小，预付费时为购买月数</p>
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>时间单位，预付费为m（月）</p>
                     * @return TimeUnit <p>时间单位，预付费为m（月）</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>时间单位，预付费为m（月）</p>
                     * @param _timeUnit <p>时间单位，预付费为m（月）</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）</p>
                     * @return AutoRenewFlag <p>自动续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）</p>
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）</p>
                     * @param _autoRenewFlag <p>自动续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）</p>
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>弹性资源池名称，用于订单页展示</p>
                     * @return Name <p>弹性资源池名称，用于订单页展示</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>弹性资源池名称，用于订单页展示</p>
                     * @param _name <p>弹性资源池名称，用于订单页展示</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>资源包描述</p>
                     * @return Description <p>资源包描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>资源包描述</p>
                     * @param _description <p>资源包描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>交易类型：purchase-新购</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>付费模式：1-预付费</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>资源配额列表（计费项+数量）</p>
                     */
                    std::vector<ResourceQuota> m_resourceQuotaList;
                    bool m_resourceQuotaListHasBeenSet;

                    /**
                     * <p>时间大小，预付费时为购买月数</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>时间单位，预付费为m（月）</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>自动续费标志：0-默认，1-自动续费，2-不自动续费（仅预付费有效）</p>
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>弹性资源池名称，用于订单页展示</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>资源包描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEPARTITIONREQUEST_H_
