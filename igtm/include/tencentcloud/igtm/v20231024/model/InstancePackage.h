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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCEPACKAGE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCEPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 实例套餐
                */
                class InstancePackage : public AbstractModel
                {
                public:
                    InstancePackage();
                    ~InstancePackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 实例套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置实例套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 实例套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
                     * @return PackageType 套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
                     * @param _packageType 套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取套餐过期时间
                     * @return CurrentDeadline 套餐过期时间
                     * 
                     */
                    std::string GetCurrentDeadline() const;

                    /**
                     * 设置套餐过期时间
                     * @param _currentDeadline 套餐过期时间
                     * 
                     */
                    void SetCurrentDeadline(const std::string& _currentDeadline);

                    /**
                     * 判断参数 CurrentDeadline 是否已赋值
                     * @return CurrentDeadline 是否已赋值
                     * 
                     */
                    bool CurrentDeadlineHasBeenSet() const;

                    /**
                     * 获取套餐创建时间
                     * @return CreateTime 套餐创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置套餐创建时间
                     * @param _createTime 套餐创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否过期0否1是
                     * @return IsExpire 是否过期0否1是
                     * 
                     */
                    uint64_t GetIsExpire() const;

                    /**
                     * 设置是否过期0否1是
                     * @param _isExpire 是否过期0否1是
                     * 
                     */
                    void SetIsExpire(const uint64_t& _isExpire);

                    /**
                     * 判断参数 IsExpire 是否已赋值
                     * @return IsExpire 是否已赋值
                     * 
                     */
                    bool IsExpireHasBeenSet() const;

                    /**
                     * 获取实例状态
ENABLED: 正常
DISABLED: 禁用
                     * @return Status 实例状态
ENABLED: 正常
DISABLED: 禁用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态
ENABLED: 正常
DISABLED: 禁用
                     * @param _status 实例状态
ENABLED: 正常
DISABLED: 禁用
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否自动续费0不1是
                     * @return AutoRenewFlag 是否自动续费0不1是
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费0不1是
                     * @param _autoRenewFlag 是否自动续费0不1是
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
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

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
                     * 设置计费项
                     * @param _costItemList 计费项
                     * 
                     */
                    void SetCostItemList(const std::vector<CostItem>& _costItemList);

                    /**
                     * 判断参数 CostItemList 是否已赋值
                     * @return CostItemList 是否已赋值
                     * 
                     */
                    bool CostItemListHasBeenSet() const;

                    /**
                     * 获取最小检查间隔时间s
                     * @return MinCheckInterval 最小检查间隔时间s
                     * 
                     */
                    uint64_t GetMinCheckInterval() const;

                    /**
                     * 设置最小检查间隔时间s
                     * @param _minCheckInterval 最小检查间隔时间s
                     * 
                     */
                    void SetMinCheckInterval(const uint64_t& _minCheckInterval);

                    /**
                     * 判断参数 MinCheckInterval 是否已赋值
                     * @return MinCheckInterval 是否已赋值
                     * 
                     */
                    bool MinCheckIntervalHasBeenSet() const;

                    /**
                     * 获取最小TTL s
                     * @return MinGlobalTtl 最小TTL s
                     * 
                     */
                    uint64_t GetMinGlobalTtl() const;

                    /**
                     * 设置最小TTL s
                     * @param _minGlobalTtl 最小TTL s
                     * 
                     */
                    void SetMinGlobalTtl(const uint64_t& _minGlobalTtl);

                    /**
                     * 判断参数 MinGlobalTtl 是否已赋值
                     * @return MinGlobalTtl 是否已赋值
                     * 
                     */
                    bool MinGlobalTtlHasBeenSet() const;

                    /**
                     * 获取流量策略类型：ALL返回全部，WEIGHT权重
                     * @return TrafficStrategy 流量策略类型：ALL返回全部，WEIGHT权重
                     * 
                     */
                    std::vector<std::string> GetTrafficStrategy() const;

                    /**
                     * 设置流量策略类型：ALL返回全部，WEIGHT权重
                     * @param _trafficStrategy 流量策略类型：ALL返回全部，WEIGHT权重
                     * 
                     */
                    void SetTrafficStrategy(const std::vector<std::string>& _trafficStrategy);

                    /**
                     * 判断参数 TrafficStrategy 是否已赋值
                     * @return TrafficStrategy 是否已赋值
                     * 
                     */
                    bool TrafficStrategyHasBeenSet() const;

                    /**
                     * 获取策略类型：LOCATION按地理位置调度，DELAY按延迟调度
                     * @return ScheduleStrategy 策略类型：LOCATION按地理位置调度，DELAY按延迟调度
                     * 
                     */
                    std::vector<std::string> GetScheduleStrategy() const;

                    /**
                     * 设置策略类型：LOCATION按地理位置调度，DELAY按延迟调度
                     * @param _scheduleStrategy 策略类型：LOCATION按地理位置调度，DELAY按延迟调度
                     * 
                     */
                    void SetScheduleStrategy(const std::vector<std::string>& _scheduleStrategy);

                    /**
                     * 判断参数 ScheduleStrategy 是否已赋值
                     * @return ScheduleStrategy 是否已赋值
                     * 
                     */
                    bool ScheduleStrategyHasBeenSet() const;

                private:

                    /**
                     * 实例套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 套餐过期时间
                     */
                    std::string m_currentDeadline;
                    bool m_currentDeadlineHasBeenSet;

                    /**
                     * 套餐创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否过期0否1是
                     */
                    uint64_t m_isExpire;
                    bool m_isExpireHasBeenSet;

                    /**
                     * 实例状态
ENABLED: 正常
DISABLED: 禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否自动续费0不1是
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
                     * 最小检查间隔时间s
                     */
                    uint64_t m_minCheckInterval;
                    bool m_minCheckIntervalHasBeenSet;

                    /**
                     * 最小TTL s
                     */
                    uint64_t m_minGlobalTtl;
                    bool m_minGlobalTtlHasBeenSet;

                    /**
                     * 流量策略类型：ALL返回全部，WEIGHT权重
                     */
                    std::vector<std::string> m_trafficStrategy;
                    bool m_trafficStrategyHasBeenSet;

                    /**
                     * 策略类型：LOCATION按地理位置调度，DELAY按延迟调度
                     */
                    std::vector<std::string> m_scheduleStrategy;
                    bool m_scheduleStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCEPACKAGE_H_
