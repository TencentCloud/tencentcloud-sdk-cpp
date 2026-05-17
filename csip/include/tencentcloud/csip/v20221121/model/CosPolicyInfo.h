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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSPOLICYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos策略信息
                */
                class CosPolicyInfo : public AbstractModel
                {
                public:
                    CosPolicyInfo();
                    ~CosPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
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
                     * 获取策略类型
PolicyType：1 告警策略 2 风险策略  3  白名单策略  4 ip隐藏策略
                     * @return PolicyType 策略类型
PolicyType：1 告警策略 2 风险策略  3  白名单策略  4 ip隐藏策略
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置策略类型
PolicyType：1 告警策略 2 风险策略  3  白名单策略  4 ip隐藏策略
                     * @param _policyType 策略类型
PolicyType：1 告警策略 2 风险策略  3  白名单策略  4 ip隐藏策略
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取system:系统内置 user:用户自定义
                     * @return PolicySource system:系统内置 user:用户自定义
                     * 
                     */
                    int64_t GetPolicySource() const;

                    /**
                     * 设置system:系统内置 user:用户自定义
                     * @param _policySource system:系统内置 user:用户自定义
                     * 
                     */
                    void SetPolicySource(const int64_t& _policySource);

                    /**
                     * 判断参数 PolicySource 是否已赋值
                     * @return PolicySource 是否已赋值
                     * 
                     */
                    bool PolicySourceHasBeenSet() const;

                    /**
                     * 获取策略内容
                     * @return PolicyContent 策略内容
                     * 
                     */
                    std::string GetPolicyContent() const;

                    /**
                     * 设置策略内容
                     * @param _policyContent 策略内容
                     * 
                     */
                    void SetPolicyContent(const std::string& _policyContent);

                    /**
                     * 判断参数 PolicyContent 是否已赋值
                     * @return PolicyContent 是否已赋值
                     * 
                     */
                    bool PolicyContentHasBeenSet() const;

                    /**
                     * 获取0 关闭
1 开启
                     * @return PolicyStatus 0 关闭
1 开启
                     * 
                     */
                    int64_t GetPolicyStatus() const;

                    /**
                     * 设置0 关闭
1 开启
                     * @param _policyStatus 0 关闭
1 开启
                     * 
                     */
                    void SetPolicyStatus(const int64_t& _policyStatus);

                    /**
                     * 判断参数 PolicyStatus 是否已赋值
                     * @return PolicyStatus 是否已赋值
                     * 
                     */
                    bool PolicyStatusHasBeenSet() const;

                    /**
                     * 获取策略分类
                     * @return PolicyAbnormalType 策略分类
                     * 
                     */
                    int64_t GetPolicyAbnormalType() const;

                    /**
                     * 设置策略分类
                     * @param _policyAbnormalType 策略分类
                     * 
                     */
                    void SetPolicyAbnormalType(const int64_t& _policyAbnormalType);

                    /**
                     * 判断参数 PolicyAbnormalType 是否已赋值
                     * @return PolicyAbnormalType 是否已赋值
                     * 
                     */
                    bool PolicyAbnormalTypeHasBeenSet() const;

                    /**
                     * 获取风险级别
                     * @return RiskLevel 风险级别
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置风险级别
                     * @param _riskLevel 风险级别
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return PolicyId 策略id
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略id
                     * @param _policyId 策略id
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
                     * 获取创建时间
                     * @return PolicyCreateTime 创建时间
                     * 
                     */
                    int64_t GetPolicyCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _policyCreateTime 创建时间
                     * 
                     */
                    void SetPolicyCreateTime(const int64_t& _policyCreateTime);

                    /**
                     * 判断参数 PolicyCreateTime 是否已赋值
                     * @return PolicyCreateTime 是否已赋值
                     * 
                     */
                    bool PolicyCreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return PolicyUpdateTime 更新时间
                     * 
                     */
                    int64_t GetPolicyUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _policyUpdateTime 更新时间
                     * 
                     */
                    void SetPolicyUpdateTime(const int64_t& _policyUpdateTime);

                    /**
                     * 判断参数 PolicyUpdateTime 是否已赋值
                     * @return PolicyUpdateTime 是否已赋值
                     * 
                     */
                    bool PolicyUpdateTimeHasBeenSet() const;

                    /**
                     * 获取策略近七天命中次数
                     * @return PolicyHitCount 策略近七天命中次数
                     * 
                     */
                    int64_t GetPolicyHitCount() const;

                    /**
                     * 设置策略近七天命中次数
                     * @param _policyHitCount 策略近七天命中次数
                     * 
                     */
                    void SetPolicyHitCount(const int64_t& _policyHitCount);

                    /**
                     * 判断参数 PolicyHitCount 是否已赋值
                     * @return PolicyHitCount 是否已赋值
                     * 
                     */
                    bool PolicyHitCountHasBeenSet() const;

                    /**
                     * 获取告警内容hash
                     * @return PolicyContentHash 告警内容hash
                     * 
                     */
                    std::string GetPolicyContentHash() const;

                    /**
                     * 设置告警内容hash
                     * @param _policyContentHash 告警内容hash
                     * 
                     */
                    void SetPolicyContentHash(const std::string& _policyContentHash);

                    /**
                     * 判断参数 PolicyContentHash 是否已赋值
                     * @return PolicyContentHash 是否已赋值
                     * 
                     */
                    bool PolicyContentHashHasBeenSet() const;

                    /**
                     * 获取关联账户数
                     * @return RelAccountCount 关联账户数
                     * 
                     */
                    int64_t GetRelAccountCount() const;

                    /**
                     * 设置关联账户数
                     * @param _relAccountCount 关联账户数
                     * 
                     */
                    void SetRelAccountCount(const int64_t& _relAccountCount);

                    /**
                     * 判断参数 RelAccountCount 是否已赋值
                     * @return RelAccountCount 是否已赋值
                     * 
                     */
                    bool RelAccountCountHasBeenSet() const;

                    /**
                     * 获取关联账号uin
                     * @return RelAccountUin 关联账号uin
                     * 
                     */
                    std::string GetRelAccountUin() const;

                    /**
                     * 设置关联账号uin
                     * @param _relAccountUin 关联账号uin
                     * 
                     */
                    void SetRelAccountUin(const std::string& _relAccountUin);

                    /**
                     * 判断参数 RelAccountUin 是否已赋值
                     * @return RelAccountUin 是否已赋值
                     * 
                     */
                    bool RelAccountUinHasBeenSet() const;

                    /**
                     * 获取关联账号名
                     * @return RelAccountName 关联账号名
                     * 
                     */
                    std::string GetRelAccountName() const;

                    /**
                     * 设置关联账号名
                     * @param _relAccountName 关联账号名
                     * 
                     */
                    void SetRelAccountName(const std::string& _relAccountName);

                    /**
                     * 判断参数 RelAccountName 是否已赋值
                     * @return RelAccountName 是否已赋值
                     * 
                     */
                    bool RelAccountNameHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return PolicyDescription 描述信息
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置描述信息
                     * @param _policyDescription 描述信息
                     * 
                     */
                    void SetPolicyDescription(const std::string& _policyDescription);

                    /**
                     * 判断参数 PolicyDescription 是否已赋值
                     * @return PolicyDescription 是否已赋值
                     * 
                     */
                    bool PolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return PolicyMarker 备注信息
                     * 
                     */
                    std::string GetPolicyMarker() const;

                    /**
                     * 设置备注信息
                     * @param _policyMarker 备注信息
                     * 
                     */
                    void SetPolicyMarker(const std::string& _policyMarker);

                    /**
                     * 判断参数 PolicyMarker 是否已赋值
                     * @return PolicyMarker 是否已赋值
                     * 
                     */
                    bool PolicyMarkerHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取多账号场景下的id集合
                     * @return PolicyIdSet 多账号场景下的id集合
                     * 
                     */
                    std::vector<int64_t> GetPolicyIdSet() const;

                    /**
                     * 设置多账号场景下的id集合
                     * @param _policyIdSet 多账号场景下的id集合
                     * 
                     */
                    void SetPolicyIdSet(const std::vector<int64_t>& _policyIdSet);

                    /**
                     * 判断参数 PolicyIdSet 是否已赋值
                     * @return PolicyIdSet 是否已赋值
                     * 
                     */
                    bool PolicyIdSetHasBeenSet() const;

                    /**
                     * 获取是否处置历史数据状态  0 无须处置 1 需要处置 2 已处置
                     * @return PolicyHistoryHandleStatus 是否处置历史数据状态  0 无须处置 1 需要处置 2 已处置
                     * 
                     */
                    uint64_t GetPolicyHistoryHandleStatus() const;

                    /**
                     * 设置是否处置历史数据状态  0 无须处置 1 需要处置 2 已处置
                     * @param _policyHistoryHandleStatus 是否处置历史数据状态  0 无须处置 1 需要处置 2 已处置
                     * 
                     */
                    void SetPolicyHistoryHandleStatus(const uint64_t& _policyHistoryHandleStatus);

                    /**
                     * 判断参数 PolicyHistoryHandleStatus 是否已赋值
                     * @return PolicyHistoryHandleStatus 是否已赋值
                     * 
                     */
                    bool PolicyHistoryHandleStatusHasBeenSet() const;

                    /**
                     * 获取系统策略编辑状态
                     * @return SystemPolicyEditStatus 系统策略编辑状态
                     * 
                     */
                    int64_t GetSystemPolicyEditStatus() const;

                    /**
                     * 设置系统策略编辑状态
                     * @param _systemPolicyEditStatus 系统策略编辑状态
                     * 
                     */
                    void SetSystemPolicyEditStatus(const int64_t& _systemPolicyEditStatus);

                    /**
                     * 判断参数 SystemPolicyEditStatus 是否已赋值
                     * @return SystemPolicyEditStatus 是否已赋值
                     * 
                     */
                    bool SystemPolicyEditStatusHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略类型
PolicyType：1 告警策略 2 风险策略  3  白名单策略  4 ip隐藏策略
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * system:系统内置 user:用户自定义
                     */
                    int64_t m_policySource;
                    bool m_policySourceHasBeenSet;

                    /**
                     * 策略内容
                     */
                    std::string m_policyContent;
                    bool m_policyContentHasBeenSet;

                    /**
                     * 0 关闭
1 开启
                     */
                    int64_t m_policyStatus;
                    bool m_policyStatusHasBeenSet;

                    /**
                     * 策略分类
                     */
                    int64_t m_policyAbnormalType;
                    bool m_policyAbnormalTypeHasBeenSet;

                    /**
                     * 风险级别
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 策略id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_policyCreateTime;
                    bool m_policyCreateTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_policyUpdateTime;
                    bool m_policyUpdateTimeHasBeenSet;

                    /**
                     * 策略近七天命中次数
                     */
                    int64_t m_policyHitCount;
                    bool m_policyHitCountHasBeenSet;

                    /**
                     * 告警内容hash
                     */
                    std::string m_policyContentHash;
                    bool m_policyContentHashHasBeenSet;

                    /**
                     * 关联账户数
                     */
                    int64_t m_relAccountCount;
                    bool m_relAccountCountHasBeenSet;

                    /**
                     * 关联账号uin
                     */
                    std::string m_relAccountUin;
                    bool m_relAccountUinHasBeenSet;

                    /**
                     * 关联账号名
                     */
                    std::string m_relAccountName;
                    bool m_relAccountNameHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_policyMarker;
                    bool m_policyMarkerHasBeenSet;

                    /**
                     * appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 多账号场景下的id集合
                     */
                    std::vector<int64_t> m_policyIdSet;
                    bool m_policyIdSetHasBeenSet;

                    /**
                     * 是否处置历史数据状态  0 无须处置 1 需要处置 2 已处置
                     */
                    uint64_t m_policyHistoryHandleStatus;
                    bool m_policyHistoryHandleStatusHasBeenSet;

                    /**
                     * 系统策略编辑状态
                     */
                    int64_t m_systemPolicyEditStatus;
                    bool m_systemPolicyEditStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSPOLICYINFO_H_
