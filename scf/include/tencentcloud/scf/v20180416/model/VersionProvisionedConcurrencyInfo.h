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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONPROVISIONEDCONCURRENCYINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONPROVISIONEDCONCURRENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TriggerAction.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 函数版本的预置并发信息，包括设置预置并发数、已完成预置的并发数和预置任务状态。
                */
                class VersionProvisionedConcurrencyInfo : public AbstractModel
                {
                public:
                    VersionProvisionedConcurrencyInfo();
                    ~VersionProvisionedConcurrencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设置的预置并发数。
                     * @return AllocatedProvisionedConcurrencyNum 设置的预置并发数。
                     * 
                     */
                    uint64_t GetAllocatedProvisionedConcurrencyNum() const;

                    /**
                     * 设置设置的预置并发数。
                     * @param _allocatedProvisionedConcurrencyNum 设置的预置并发数。
                     * 
                     */
                    void SetAllocatedProvisionedConcurrencyNum(const uint64_t& _allocatedProvisionedConcurrencyNum);

                    /**
                     * 判断参数 AllocatedProvisionedConcurrencyNum 是否已赋值
                     * @return AllocatedProvisionedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool AllocatedProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取当前已完成预置的并发数。
                     * @return AvailableProvisionedConcurrencyNum 当前已完成预置的并发数。
                     * 
                     */
                    uint64_t GetAvailableProvisionedConcurrencyNum() const;

                    /**
                     * 设置当前已完成预置的并发数。
                     * @param _availableProvisionedConcurrencyNum 当前已完成预置的并发数。
                     * 
                     */
                    void SetAvailableProvisionedConcurrencyNum(const uint64_t& _availableProvisionedConcurrencyNum);

                    /**
                     * 判断参数 AvailableProvisionedConcurrencyNum 是否已赋值
                     * @return AvailableProvisionedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool AvailableProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取预置任务状态，Done表示已完成，InProgress表示进行中，Failed表示部分或全部失败。
                     * @return Status 预置任务状态，Done表示已完成，InProgress表示进行中，Failed表示部分或全部失败。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置预置任务状态，Done表示已完成，InProgress表示进行中，Failed表示部分或全部失败。
                     * @param _status 预置任务状态，Done表示已完成，InProgress表示进行中，Failed表示部分或全部失败。
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
                     * 获取对预置任务状态Status的说明。
                     * @return StatusReason 对预置任务状态Status的说明。
                     * 
                     */
                    std::string GetStatusReason() const;

                    /**
                     * 设置对预置任务状态Status的说明。
                     * @param _statusReason 对预置任务状态Status的说明。
                     * 
                     */
                    void SetStatusReason(const std::string& _statusReason);

                    /**
                     * 判断参数 StatusReason 是否已赋值
                     * @return StatusReason 是否已赋值
                     * 
                     */
                    bool StatusReasonHasBeenSet() const;

                    /**
                     * 获取函数版本号
                     * @return Qualifier 函数版本号
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数版本号
                     * @param _qualifier 函数版本号
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取预置并发定时任务。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerActions 预置并发定时任务。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TriggerAction> GetTriggerActions() const;

                    /**
                     * 设置预置并发定时任务。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerActions 预置并发定时任务。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerActions(const std::vector<TriggerAction>& _triggerActions);

                    /**
                     * 判断参数 TriggerActions 是否已赋值
                     * @return TriggerActions 是否已赋值
                     * 
                     */
                    bool TriggerActionsHasBeenSet() const;

                private:

                    /**
                     * 设置的预置并发数。
                     */
                    uint64_t m_allocatedProvisionedConcurrencyNum;
                    bool m_allocatedProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * 当前已完成预置的并发数。
                     */
                    uint64_t m_availableProvisionedConcurrencyNum;
                    bool m_availableProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * 预置任务状态，Done表示已完成，InProgress表示进行中，Failed表示部分或全部失败。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 对预置任务状态Status的说明。
                     */
                    std::string m_statusReason;
                    bool m_statusReasonHasBeenSet;

                    /**
                     * 函数版本号
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 预置并发定时任务。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TriggerAction> m_triggerActions;
                    bool m_triggerActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONPROVISIONEDCONCURRENCYINFO_H_
