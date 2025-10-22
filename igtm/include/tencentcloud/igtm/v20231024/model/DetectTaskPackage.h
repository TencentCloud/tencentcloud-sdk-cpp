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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DETECTTASKPACKAGE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DETECTTASKPACKAGE_H_

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
                * 探测任务套餐
                */
                class DetectTaskPackage : public AbstractModel
                {
                public:
                    DetectTaskPackage();
                    ~DetectTaskPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
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
                     * 获取资源类型
TASK 探测任务
                     * @return ResourceType 资源类型
TASK 探测任务
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
TASK 探测任务
                     * @param _resourceType 资源类型
TASK 探测任务
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
                     * 获取额度
                     * @return Quota 额度
                     * 
                     */
                    uint64_t GetQuota() const;

                    /**
                     * 设置额度
                     * @param _quota 额度
                     * 
                     */
                    void SetQuota(const uint64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

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
                     * 获取状态
ENABLED: 正常
ISOLATED: 隔离
DESTROYED：销毁
REFUNDED：已退款
                     * @return Status 状态
ENABLED: 正常
ISOLATED: 隔离
DESTROYED：销毁
REFUNDED：已退款
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
ENABLED: 正常
ISOLATED: 隔离
DESTROYED：销毁
REFUNDED：已退款
                     * @param _status 状态
ENABLED: 正常
ISOLATED: 隔离
DESTROYED：销毁
REFUNDED：已退款
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
                     * 获取探测任务类型：100系统设定；200计费；300管理系统；110D监控迁移的免费任务；120容灾切换任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group 探测任务类型：100系统设定；200计费；300管理系统；110D监控迁移的免费任务；120容灾切换任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGroup() const;

                    /**
                     * 设置探测任务类型：100系统设定；200计费；300管理系统；110D监控迁移的免费任务；120容灾切换任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group 探测任务类型：100系统设定；200计费；300管理系统；110D监控迁移的免费任务；120容灾切换任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const uint64_t& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型
TASK 探测任务
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 额度
                     */
                    uint64_t m_quota;
                    bool m_quotaHasBeenSet;

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
                     * 状态
ENABLED: 正常
ISOLATED: 隔离
DESTROYED：销毁
REFUNDED：已退款
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
                     * 探测任务类型：100系统设定；200计费；300管理系统；110D监控迁移的免费任务；120容灾切换任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_group;
                    bool m_groupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DETECTTASKPACKAGE_H_
