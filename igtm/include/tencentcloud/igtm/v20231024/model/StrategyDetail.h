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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_STRATEGYDETAIL_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_STRATEGYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/Source.h>
#include <tencentcloud/igtm/v20231024/model/MainAddressPool.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 策略详情
                */
                class StrategyDetail : public AbstractModel
                {
                public:
                    StrategyDetail();
                    ~StrategyDetail() = default;
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
                     * 获取策略id
                     * @return StrategyId 策略id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
                     * @param _strategyId 策略id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取策略名
                     * @return Name 策略名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名
                     * @param _name 策略名
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
                     * 获取线路
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 线路
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Source> GetSource() const;

                    /**
                     * 设置线路
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 线路
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::vector<Source>& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取主力地址池集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MainAddressPoolSet 主力地址池集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MainAddressPool> GetMainAddressPoolSet() const;

                    /**
                     * 设置主力地址池集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainAddressPoolSet 主力地址池集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainAddressPoolSet(const std::vector<MainAddressPool>& _mainAddressPoolSet);

                    /**
                     * 判断参数 MainAddressPoolSet 是否已赋值
                     * @return MainAddressPoolSet 是否已赋值
                     * 
                     */
                    bool MainAddressPoolSetHasBeenSet() const;

                    /**
                     * 获取兜底地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FallbackAddressPoolSet 兜底地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MainAddressPool> GetFallbackAddressPoolSet() const;

                    /**
                     * 设置兜底地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fallbackAddressPoolSet 兜底地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFallbackAddressPoolSet(const std::vector<MainAddressPool>& _fallbackAddressPoolSet);

                    /**
                     * 判断参数 FallbackAddressPoolSet 是否已赋值
                     * @return FallbackAddressPoolSet 是否已赋值
                     * 
                     */
                    bool FallbackAddressPoolSetHasBeenSet() const;

                    /**
                     * 获取是否保留线路：enabled保留，disabled不保留，只保留默认线路
                     * @return KeepDomainRecords 是否保留线路：enabled保留，disabled不保留，只保留默认线路
                     * 
                     */
                    std::string GetKeepDomainRecords() const;

                    /**
                     * 设置是否保留线路：enabled保留，disabled不保留，只保留默认线路
                     * @param _keepDomainRecords 是否保留线路：enabled保留，disabled不保留，只保留默认线路
                     * 
                     */
                    void SetKeepDomainRecords(const std::string& _keepDomainRecords);

                    /**
                     * 判断参数 KeepDomainRecords 是否已赋值
                     * @return KeepDomainRecords 是否已赋值
                     * 
                     */
                    bool KeepDomainRecordsHasBeenSet() const;

                    /**
                     * 获取生效主力地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivateMainPoolId 生效主力地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetActivateMainPoolId() const;

                    /**
                     * 设置生效主力地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activateMainPoolId 生效主力地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivateMainPoolId(const uint64_t& _activateMainPoolId);

                    /**
                     * 判断参数 ActivateMainPoolId 是否已赋值
                     * @return ActivateMainPoolId 是否已赋值
                     * 
                     */
                    bool ActivateMainPoolIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
                     * @param _createdOn 创建时间
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
                     * 获取更新时间
                     * @return UpdatedOn 更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
                     * @param _updatedOn 更新时间
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取调度模式：AUTO默认；PAUSE仅暂停不切换
                     * @return SwitchPoolType 调度模式：AUTO默认；PAUSE仅暂停不切换
                     * 
                     */
                    std::string GetSwitchPoolType() const;

                    /**
                     * 设置调度模式：AUTO默认；PAUSE仅暂停不切换
                     * @param _switchPoolType 调度模式：AUTO默认；PAUSE仅暂停不切换
                     * 
                     */
                    void SetSwitchPoolType(const std::string& _switchPoolType);

                    /**
                     * 判断参数 SwitchPoolType 是否已赋值
                     * @return SwitchPoolType 是否已赋值
                     * 
                     */
                    bool SwitchPoolTypeHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 策略名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 线路
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Source> m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 主力地址池集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MainAddressPool> m_mainAddressPoolSet;
                    bool m_mainAddressPoolSetHasBeenSet;

                    /**
                     * 兜底地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MainAddressPool> m_fallbackAddressPoolSet;
                    bool m_fallbackAddressPoolSetHasBeenSet;

                    /**
                     * 是否保留线路：enabled保留，disabled不保留，只保留默认线路
                     */
                    std::string m_keepDomainRecords;
                    bool m_keepDomainRecordsHasBeenSet;

                    /**
                     * 生效主力地址池id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_activateMainPoolId;
                    bool m_activateMainPoolIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 调度模式：AUTO默认；PAUSE仅暂停不切换
                     */
                    std::string m_switchPoolType;
                    bool m_switchPoolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_STRATEGYDETAIL_H_
