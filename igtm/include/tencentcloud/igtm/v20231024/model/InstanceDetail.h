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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 返回实例
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取业务域名
                     * @return Domain 业务域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置业务域名
                     * @param _domain 业务域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Cname域名接入方式
CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * @return AccessType Cname域名接入方式
CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Cname域名接入方式
CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * @param _accessType Cname域名接入方式
CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取接入子域名	
                     * @return AccessSubDomain 接入子域名	
                     * 
                     */
                    std::string GetAccessSubDomain() const;

                    /**
                     * 设置接入子域名	
                     * @param _accessSubDomain 接入子域名	
                     * 
                     */
                    void SetAccessSubDomain(const std::string& _accessSubDomain);

                    /**
                     * 判断参数 AccessSubDomain 是否已赋值
                     * @return AccessSubDomain 是否已赋值
                     * 
                     */
                    bool AccessSubDomainHasBeenSet() const;

                    /**
                     * 获取接入域名	
                     * @return AccessDomain 接入域名	
                     * 
                     */
                    std::string GetAccessDomain() const;

                    /**
                     * 设置接入域名	
                     * @param _accessDomain 接入域名	
                     * 
                     */
                    void SetAccessDomain(const std::string& _accessDomain);

                    /**
                     * 判断参数 AccessDomain 是否已赋值
                     * @return AccessDomain 是否已赋值
                     * 
                     */
                    bool AccessDomainHasBeenSet() const;

                    /**
                     * 获取解析生效时间
                     * @return GlobalTtl 解析生效时间
                     * 
                     */
                    uint64_t GetGlobalTtl() const;

                    /**
                     * 设置解析生效时间
                     * @param _globalTtl 解析生效时间
                     * 
                     */
                    void SetGlobalTtl(const uint64_t& _globalTtl);

                    /**
                     * 判断参数 GlobalTtl 是否已赋值
                     * @return GlobalTtl 是否已赋值
                     * 
                     */
                    bool GlobalTtlHasBeenSet() const;

                    /**
                     * 获取套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageType 套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例运行状态
NORMAL: 健康
FAULTY: 有风险
DOWN: 宕机
UNKNOWN: 未知
                     * @return WorkingStatus 实例运行状态
NORMAL: 健康
FAULTY: 有风险
DOWN: 宕机
UNKNOWN: 未知
                     * 
                     */
                    std::string GetWorkingStatus() const;

                    /**
                     * 设置实例运行状态
NORMAL: 健康
FAULTY: 有风险
DOWN: 宕机
UNKNOWN: 未知
                     * @param _workingStatus 实例运行状态
NORMAL: 健康
FAULTY: 有风险
DOWN: 宕机
UNKNOWN: 未知
                     * 
                     */
                    void SetWorkingStatus(const std::string& _workingStatus);

                    /**
                     * 判断参数 WorkingStatus 是否已赋值
                     * @return WorkingStatus 是否已赋值
                     * 
                     */
                    bool WorkingStatusHasBeenSet() const;

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
                     * 获取cname是否接入：true已接入；false未接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCnameConfigured cname是否接入：true已接入；false未接入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsCnameConfigured() const;

                    /**
                     * 设置cname是否接入：true已接入；false未接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCnameConfigured cname是否接入：true已接入；false未接入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCnameConfigured(const bool& _isCnameConfigured);

                    /**
                     * 判断参数 IsCnameConfigured 是否已赋值
                     * @return IsCnameConfigured 是否已赋值
                     * 
                     */
                    bool IsCnameConfiguredHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取策略数量
                     * @return StrategyNum 策略数量
                     * 
                     */
                    int64_t GetStrategyNum() const;

                    /**
                     * 设置策略数量
                     * @param _strategyNum 策略数量
                     * 
                     */
                    void SetStrategyNum(const int64_t& _strategyNum);

                    /**
                     * 判断参数 StrategyNum 是否已赋值
                     * @return StrategyNum 是否已赋值
                     * 
                     */
                    bool StrategyNumHasBeenSet() const;

                    /**
                     * 获取绑定地址池个数
                     * @return AddressPoolNum 绑定地址池个数
                     * 
                     */
                    int64_t GetAddressPoolNum() const;

                    /**
                     * 设置绑定地址池个数
                     * @param _addressPoolNum 绑定地址池个数
                     * 
                     */
                    void SetAddressPoolNum(const int64_t& _addressPoolNum);

                    /**
                     * 判断参数 AddressPoolNum 是否已赋值
                     * @return AddressPoolNum 是否已赋值
                     * 
                     */
                    bool AddressPoolNumHasBeenSet() const;

                    /**
                     * 获取绑定监控器数量
                     * @return MonitorNum 绑定监控器数量
                     * 
                     */
                    int64_t GetMonitorNum() const;

                    /**
                     * 设置绑定监控器数量
                     * @param _monitorNum 绑定监控器数量
                     * 
                     */
                    void SetMonitorNum(const int64_t& _monitorNum);

                    /**
                     * 判断参数 MonitorNum 是否已赋值
                     * @return MonitorNum 是否已赋值
                     * 
                     */
                    bool MonitorNumHasBeenSet() const;

                    /**
                     * 获取实例绑定套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 实例绑定套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置实例绑定套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 实例绑定套餐资源id
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
                     * 获取订阅事件列表
                     * @return NotifyEventSet 订阅事件列表
                     * 
                     */
                    std::vector<std::string> GetNotifyEventSet() const;

                    /**
                     * 设置订阅事件列表
                     * @param _notifyEventSet 订阅事件列表
                     * 
                     */
                    void SetNotifyEventSet(const std::vector<std::string>& _notifyEventSet);

                    /**
                     * 判断参数 NotifyEventSet 是否已赋值
                     * @return NotifyEventSet 是否已赋值
                     * 
                     */
                    bool NotifyEventSetHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreatedOn 实例创建时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置实例创建时间
                     * @param _createdOn 实例创建时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取实例更新时间
                     * @return UpdatedOn 实例更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置实例更新时间
                     * @param _updatedOn 实例更新时间
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                private:

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
                     * 业务域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Cname域名接入方式
CUSTOM: 自定义接入域名
SYSTEM: 系统接入域名
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 接入子域名	
                     */
                    std::string m_accessSubDomain;
                    bool m_accessSubDomainHasBeenSet;

                    /**
                     * 接入域名	
                     */
                    std::string m_accessDomain;
                    bool m_accessDomainHasBeenSet;

                    /**
                     * 解析生效时间
                     */
                    uint64_t m_globalTtl;
                    bool m_globalTtlHasBeenSet;

                    /**
                     * 套餐类型
FREE: 免费版
STANDARD：标准版
ULTIMATE：旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 实例运行状态
NORMAL: 健康
FAULTY: 有风险
DOWN: 宕机
UNKNOWN: 未知
                     */
                    std::string m_workingStatus;
                    bool m_workingStatusHasBeenSet;

                    /**
                     * 实例状态
ENABLED: 正常
DISABLED: 禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * cname是否接入：true已接入；false未接入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isCnameConfigured;
                    bool m_isCnameConfiguredHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 策略数量
                     */
                    int64_t m_strategyNum;
                    bool m_strategyNumHasBeenSet;

                    /**
                     * 绑定地址池个数
                     */
                    int64_t m_addressPoolNum;
                    bool m_addressPoolNumHasBeenSet;

                    /**
                     * 绑定监控器数量
                     */
                    int64_t m_monitorNum;
                    bool m_monitorNumHasBeenSet;

                    /**
                     * 实例绑定套餐资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 订阅事件列表
                     */
                    std::vector<std::string> m_notifyEventSet;
                    bool m_notifyEventSetHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 实例更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_INSTANCEDETAIL_H_
