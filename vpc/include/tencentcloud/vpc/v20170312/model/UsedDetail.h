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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_USEDDETAIL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_USEDDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TrafficFlow.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 共享流量包用量明细
                */
                class UsedDetail : public AbstractModel
                {
                public:
                    UsedDetail();
                    ~UsedDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量包唯一ID
                     * @return TrafficPackageId 流量包唯一ID
                     * 
                     */
                    std::string GetTrafficPackageId() const;

                    /**
                     * 设置流量包唯一ID
                     * @param _trafficPackageId 流量包唯一ID
                     * 
                     */
                    void SetTrafficPackageId(const std::string& _trafficPackageId);

                    /**
                     * 判断参数 TrafficPackageId 是否已赋值
                     * @return TrafficPackageId 是否已赋值
                     * 
                     */
                    bool TrafficPackageIdHasBeenSet() const;

                    /**
                     * 获取流量包名称
                     * @return TrafficPackageName 流量包名称
                     * 
                     */
                    std::string GetTrafficPackageName() const;

                    /**
                     * 设置流量包名称
                     * @param _trafficPackageName 流量包名称
                     * 
                     */
                    void SetTrafficPackageName(const std::string& _trafficPackageName);

                    /**
                     * 判断参数 TrafficPackageName 是否已赋值
                     * @return TrafficPackageName 是否已赋值
                     * 
                     */
                    bool TrafficPackageNameHasBeenSet() const;

                    /**
                     * 获取流量包总量
                     * @return TotalAmount 流量包总量
                     * 
                     */
                    TrafficFlow GetTotalAmount() const;

                    /**
                     * 设置流量包总量
                     * @param _totalAmount 流量包总量
                     * 
                     */
                    void SetTotalAmount(const TrafficFlow& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取本次抵扣
                     * @return Deduction 本次抵扣
                     * 
                     */
                    TrafficFlow GetDeduction() const;

                    /**
                     * 设置本次抵扣
                     * @param _deduction 本次抵扣
                     * 
                     */
                    void SetDeduction(const TrafficFlow& _deduction);

                    /**
                     * 判断参数 Deduction 是否已赋值
                     * @return Deduction 是否已赋值
                     * 
                     */
                    bool DeductionHasBeenSet() const;

                    /**
                     * 获取本次抵扣后剩余量
                     * @return RemainingAmount 本次抵扣后剩余量
                     * 
                     */
                    TrafficFlow GetRemainingAmount() const;

                    /**
                     * 设置本次抵扣后剩余量
                     * @param _remainingAmount 本次抵扣后剩余量
                     * 
                     */
                    void SetRemainingAmount(const TrafficFlow& _remainingAmount);

                    /**
                     * 判断参数 RemainingAmount 是否已赋值
                     * @return RemainingAmount 是否已赋值
                     * 
                     */
                    bool RemainingAmountHasBeenSet() const;

                    /**
                     * 获取抵扣时间
                     * @return Time 抵扣时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置抵扣时间
                     * @param _time 抵扣时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取资源类型。可选值: EIP, BWP, LB

                     * @return ResourceType 资源类型。可选值: EIP, BWP, LB

                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型。可选值: EIP, BWP, LB

                     * @param _resourceType 资源类型。可选值: EIP, BWP, LB

                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取流量包到期时间
                     * @return Deadline 流量包到期时间
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置流量包到期时间
                     * @param _deadline 流量包到期时间
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * 流量包唯一ID
                     */
                    std::string m_trafficPackageId;
                    bool m_trafficPackageIdHasBeenSet;

                    /**
                     * 流量包名称
                     */
                    std::string m_trafficPackageName;
                    bool m_trafficPackageNameHasBeenSet;

                    /**
                     * 流量包总量
                     */
                    TrafficFlow m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 本次抵扣
                     */
                    TrafficFlow m_deduction;
                    bool m_deductionHasBeenSet;

                    /**
                     * 本次抵扣后剩余量
                     */
                    TrafficFlow m_remainingAmount;
                    bool m_remainingAmountHasBeenSet;

                    /**
                     * 抵扣时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 资源类型。可选值: EIP, BWP, LB

                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 流量包到期时间
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_USEDDETAIL_H_
