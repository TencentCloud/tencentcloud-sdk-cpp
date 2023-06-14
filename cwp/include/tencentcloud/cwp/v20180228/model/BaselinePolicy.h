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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线策略信息
                */
                class BaselinePolicy : public AbstractModel
                {
                public:
                    BaselinePolicy();
                    ~BaselinePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称,长度不超过128英文字符
                     * @return PolicyName 策略名称,长度不超过128英文字符
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称,长度不超过128英文字符
                     * @param _policyName 策略名称,长度不超过128英文字符
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取检测间隔[1:1天|3:3天|5:5天|7:7天]
                     * @return DetectInterval 检测间隔[1:1天|3:3天|5:5天|7:7天]
                     * 
                     */
                    int64_t GetDetectInterval() const;

                    /**
                     * 设置检测间隔[1:1天|3:3天|5:5天|7:7天]
                     * @param _detectInterval 检测间隔[1:1天|3:3天|5:5天|7:7天]
                     * 
                     */
                    void SetDetectInterval(const int64_t& _detectInterval);

                    /**
                     * 判断参数 DetectInterval 是否已赋值
                     * @return DetectInterval 是否已赋值
                     * 
                     */
                    bool DetectIntervalHasBeenSet() const;

                    /**
                     * 获取检测时间
                     * @return DetectTime 检测时间
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置检测时间
                     * @param _detectTime 检测时间
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取是否开启[0:未开启|1:开启]
                     * @return IsEnabled 是否开启[0:未开启|1:开启]
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置是否开启[0:未开启|1:开启]
                     * @param _isEnabled 是否开启[0:未开启|1:开启]
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * @return AssetType 资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * @param _assetType 资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取策略Id
                     * @return PolicyId 策略Id
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略Id
                     * @param _policyId 策略Id
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取关联基线项数目
                     * @return RuleCount 关联基线项数目
                     * 
                     */
                    int64_t GetRuleCount() const;

                    /**
                     * 设置关联基线项数目
                     * @param _ruleCount 关联基线项数目
                     * 
                     */
                    void SetRuleCount(const int64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取关联基线项数目
                     * @return ItemCount 关联基线项数目
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置关联基线项数目
                     * @param _itemCount 关联基线项数目
                     * 
                     */
                    void SetItemCount(const int64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取关联基线主机数目
                     * @return HostCount 关联基线主机数目
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置关联基线主机数目
                     * @param _hostCount 关联基线主机数目
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取规则Id
                     * @return RuleIds 规则Id
                     * 
                     */
                    std::vector<int64_t> GetRuleIds() const;

                    /**
                     * 设置规则Id
                     * @param _ruleIds 规则Id
                     * 
                     */
                    void SetRuleIds(const std::vector<int64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取主机Id
                     * @return HostIds 主机Id
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置主机Id
                     * @param _hostIds 主机Id
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取主机Ip
                     * @return HostIps 主机Ip
                     * 
                     */
                    std::vector<std::string> GetHostIps() const;

                    /**
                     * 设置主机Ip
                     * @param _hostIps 主机Ip
                     * 
                     */
                    void SetHostIps(const std::vector<std::string>& _hostIps);

                    /**
                     * 判断参数 HostIps 是否已赋值
                     * @return HostIps 是否已赋值
                     * 
                     */
                    bool HostIpsHasBeenSet() const;

                    /**
                     * 获取是否是系统默认
                     * @return IsDefault 是否是系统默认
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否是系统默认
                     * @param _isDefault 是否是系统默认
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 策略名称,长度不超过128英文字符
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 检测间隔[1:1天|3:3天|5:5天|7:7天]
                     */
                    int64_t m_detectInterval;
                    bool m_detectIntervalHasBeenSet;

                    /**
                     * 检测时间
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 是否开启[0:未开启|1:开启]
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 策略Id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 关联基线项数目
                     */
                    int64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 关联基线项数目
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * 关联基线主机数目
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 规则Id
                     */
                    std::vector<int64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * 主机Id
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * 主机Ip
                     */
                    std::vector<std::string> m_hostIps;
                    bool m_hostIpsHasBeenSet;

                    /**
                     * 是否是系统默认
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICY_H_
