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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_STRATEGY_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_STRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/Source.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 地址池
                */
                class Strategy : public AbstractModel
                {
                public:
                    Strategy();
                    ~Strategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 策略名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地址来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 地址来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Source> GetSource() const;

                    /**
                     * 设置地址来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 地址来源
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
                     * 获取策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyId 策略id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取健康状态：ok健康、warn风险、down故障
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 健康状态：ok健康、warn风险、down故障
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置健康状态：ok健康、warn风险、down故障
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 健康状态：ok健康、warn风险、down故障
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取生效的主力池id，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivateMainPoolId 生效的主力池id，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActivateMainPoolId() const;

                    /**
                     * 设置生效的主力池id，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activateMainPoolId 生效的主力池id，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivateMainPoolId(const int64_t& _activateMainPoolId);

                    /**
                     * 判断参数 ActivateMainPoolId 是否已赋值
                     * @return ActivateMainPoolId 是否已赋值
                     * 
                     */
                    bool ActivateMainPoolIdHasBeenSet() const;

                    /**
                     * 获取当前生效地址池所在级数，为0则代表兜底生效，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivateLevel 当前生效地址池所在级数，为0则代表兜底生效，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetActivateLevel() const;

                    /**
                     * 设置当前生效地址池所在级数，为0则代表兜底生效，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activateLevel 当前生效地址池所在级数，为0则代表兜底生效，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivateLevel(const int64_t& _activateLevel);

                    /**
                     * 判断参数 ActivateLevel 是否已赋值
                     * @return ActivateLevel 是否已赋值
                     * 
                     */
                    bool ActivateLevelHasBeenSet() const;

                    /**
                     * 获取当前生效地址池集合类型：main主力；fallback兜底
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivePoolType 当前生效地址池集合类型：main主力；fallback兜底
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActivePoolType() const;

                    /**
                     * 设置当前生效地址池集合类型：main主力；fallback兜底
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activePoolType 当前生效地址池集合类型：main主力；fallback兜底
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivePoolType(const std::string& _activePoolType);

                    /**
                     * 判断参数 ActivePoolType 是否已赋值
                     * @return ActivePoolType 是否已赋值
                     * 
                     */
                    bool ActivePoolTypeHasBeenSet() const;

                    /**
                     * 获取当前生效地址池流量策略：all解析所有；weight负载均衡
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveTrafficStrategy 当前生效地址池流量策略：all解析所有；weight负载均衡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActiveTrafficStrategy() const;

                    /**
                     * 设置当前生效地址池流量策略：all解析所有；weight负载均衡
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeTrafficStrategy 当前生效地址池流量策略：all解析所有；weight负载均衡
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveTrafficStrategy(const std::string& _activeTrafficStrategy);

                    /**
                     * 判断参数 ActiveTrafficStrategy 是否已赋值
                     * @return ActiveTrafficStrategy 是否已赋值
                     * 
                     */
                    bool ActiveTrafficStrategyHasBeenSet() const;

                    /**
                     * 获取监控器数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorNum 监控器数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorNum() const;

                    /**
                     * 设置监控器数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorNum 监控器数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorNum(const uint64_t& _monitorNum);

                    /**
                     * 判断参数 MonitorNum 是否已赋值
                     * @return MonitorNum 是否已赋值
                     * 
                     */
                    bool MonitorNumHasBeenSet() const;

                    /**
                     * 获取是否开启：ENABLED开启；DISABLED关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnabled 是否开启：ENABLED开启；DISABLED关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsEnabled() const;

                    /**
                     * 设置是否开启：ENABLED开启；DISABLED关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnabled 是否开启：ENABLED开启；DISABLED关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEnabled(const std::string& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取是否保留线路：enabled保留，disabled不保留，只保留默认线路
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeepDomainRecords 是否保留线路：enabled保留，disabled不保留，只保留默认线路
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeepDomainRecords() const;

                    /**
                     * 设置是否保留线路：enabled保留，disabled不保留，只保留默认线路
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keepDomainRecords 是否保留线路：enabled保留，disabled不保留，只保留默认线路
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取调度模式：AUTO默认；PAUSE仅暂停不切换
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchPoolType 调度模式：AUTO默认；PAUSE仅暂停不切换
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitchPoolType() const;

                    /**
                     * 设置调度模式：AUTO默认；PAUSE仅暂停不切换
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switchPoolType 调度模式：AUTO默认；PAUSE仅暂停不切换
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitchPoolType(const std::string& _switchPoolType);

                    /**
                     * 判断参数 SwitchPoolType 是否已赋值
                     * @return SwitchPoolType 是否已赋值
                     * 
                     */
                    bool SwitchPoolTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedOn 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedOn 更新时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地址来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Source> m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 健康状态：ok健康、warn风险、down故障
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 生效的主力池id，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activateMainPoolId;
                    bool m_activateMainPoolIdHasBeenSet;

                    /**
                     * 当前生效地址池所在级数，为0则代表兜底生效，null则为未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activateLevel;
                    bool m_activateLevelHasBeenSet;

                    /**
                     * 当前生效地址池集合类型：main主力；fallback兜底
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activePoolType;
                    bool m_activePoolTypeHasBeenSet;

                    /**
                     * 当前生效地址池流量策略：all解析所有；weight负载均衡
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activeTrafficStrategy;
                    bool m_activeTrafficStrategyHasBeenSet;

                    /**
                     * 监控器数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorNum;
                    bool m_monitorNumHasBeenSet;

                    /**
                     * 是否开启：ENABLED开启；DISABLED关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 是否保留线路：enabled保留，disabled不保留，只保留默认线路
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keepDomainRecords;
                    bool m_keepDomainRecordsHasBeenSet;

                    /**
                     * 调度模式：AUTO默认；PAUSE仅暂停不切换
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switchPoolType;
                    bool m_switchPoolTypeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_STRATEGY_H_
