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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTPACKAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTPACKAGEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/CostItem.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeDetectPackageDetail返回参数结构体
                */
                class DescribeDetectPackageDetailResponse : public AbstractModel
                {
                public:
                    DescribeDetectPackageDetailResponse();
                    ~DescribeDetectPackageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型 TASK 探测任务
                     * @return ResourceType 资源类型 TASK 探测任务
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取额度
                     * @return Quota 额度
                     * 
                     */
                    uint64_t GetQuota() const;

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return CurrentDeadline 过期时间
                     * 
                     */
                    std::string GetCurrentDeadline() const;

                    /**
                     * 判断参数 CurrentDeadline 是否已赋值
                     * @return CurrentDeadline 是否已赋值
                     * 
                     */
                    bool CurrentDeadlineHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否过期
                     * @return IsExpire 是否过期
                     * 
                     */
                    uint64_t GetIsExpire() const;

                    /**
                     * 判断参数 IsExpire 是否已赋值
                     * @return IsExpire 是否已赋值
                     * 
                     */
                    bool IsExpireHasBeenSet() const;

                    /**
                     * 获取状态 ENABLED: 正常 ISOLATED: 隔离 DESTROYED：销毁 REFUNDED：已退款
                     * @return Status 状态 ENABLED: 正常 ISOLATED: 隔离 DESTROYED：销毁 REFUNDED：已退款
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否自动续费：0否1是
                     * @return AutoRenewFlag 是否自动续费：0否1是
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取计费项
                     * @return CostItemList 计费项
                     * 
                     */
                    std::vector<CostItem> GetCostItemList() const;

                    /**
                     * 判断参数 CostItemList 是否已赋值
                     * @return CostItemList 是否已赋值
                     * 
                     */
                    bool CostItemListHasBeenSet() const;

                    /**
                     * 获取使用数量
                     * @return UsedNum 使用数量
                     * 
                     */
                    uint64_t GetUsedNum() const;

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型 TASK 探测任务
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 额度
                     */
                    uint64_t m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_currentDeadline;
                    bool m_currentDeadlineHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否过期
                     */
                    uint64_t m_isExpire;
                    bool m_isExpireHasBeenSet;

                    /**
                     * 状态 ENABLED: 正常 ISOLATED: 隔离 DESTROYED：销毁 REFUNDED：已退款
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否自动续费：0否1是
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 计费项
                     */
                    std::vector<CostItem> m_costItemList;
                    bool m_costItemListHasBeenSet;

                    /**
                     * 使用数量
                     */
                    uint64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEDETECTPACKAGEDETAILRESPONSE_H_
