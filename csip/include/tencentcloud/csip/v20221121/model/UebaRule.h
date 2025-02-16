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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBARULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBARULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UebaCustomRule.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 用户行为分析策略
                */
                class UebaRule : public AbstractModel
                {
                public:
                    UebaRule();
                    ~UebaRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略id
                     * @return RuleID 策略id
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置策略id
                     * @param _ruleID 策略id
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取策略类型
0:系统策略
1:自定义策略
                     * @return RuleType 策略类型
0:系统策略
1:自定义策略
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置策略类型
0:系统策略
1:自定义策略
                     * @param _ruleType 策略类型
0:系统策略
1:自定义策略
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取策略等级
0:提示
1:低危
2:中危
3:高危
4:严重
                     * @return RuleLevel 策略等级
0:提示
1:低危
2:中危
3:高危
4:严重
                     * 
                     */
                    int64_t GetRuleLevel() const;

                    /**
                     * 设置策略等级
0:提示
1:低危
2:中危
3:高危
4:严重
                     * @param _ruleLevel 策略等级
0:提示
1:低危
2:中危
3:高危
4:严重
                     * 
                     */
                    void SetRuleLevel(const int64_t& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取策略内容
                     * @return RuleContent 策略内容
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置策略内容
                     * @param _ruleContent 策略内容
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取策略开关
                     * @return RuleStatus 策略开关
                     * 
                     */
                    bool GetRuleStatus() const;

                    /**
                     * 设置策略开关
                     * @param _ruleStatus 策略开关
                     * 
                     */
                    void SetRuleStatus(const bool& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取命中次数
                     * @return HitCount 命中次数
                     * 
                     */
                    uint64_t GetHitCount() const;

                    /**
                     * 设置命中次数
                     * @param _hitCount 命中次数
                     * 
                     */
                    void SetHitCount(const uint64_t& _hitCount);

                    /**
                     * 判断参数 HitCount 是否已赋值
                     * @return HitCount 是否已赋值
                     * 
                     */
                    bool HitCountHasBeenSet() const;

                    /**
                     * 获取所属账号Appid
                     * @return AppID 所属账号Appid
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置所属账号Appid
                     * @param _appID 所属账号Appid
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取多账号，成员ID
                     * @return MemberID 多账号，成员ID
                     * 
                     */
                    std::string GetMemberID() const;

                    /**
                     * 设置多账号，成员ID
                     * @param _memberID 多账号，成员ID
                     * 
                     */
                    void SetMemberID(const std::string& _memberID);

                    /**
                     * 判断参数 MemberID 是否已赋值
                     * @return MemberID 是否已赋值
                     * 
                     */
                    bool MemberIDHasBeenSet() const;

                    /**
                     * 获取Uin
                     * @return Uin Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Uin
                     * @param _uin Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return Nickname 昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置昵称
                     * @param _nickname 昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取自定义规则具体内容
                     * @return CustomRuleDetail 自定义规则具体内容
                     * 
                     */
                    UebaCustomRule GetCustomRuleDetail() const;

                    /**
                     * 设置自定义规则具体内容
                     * @param _customRuleDetail 自定义规则具体内容
                     * 
                     */
                    void SetCustomRuleDetail(const UebaCustomRule& _customRuleDetail);

                    /**
                     * 判断参数 CustomRuleDetail 是否已赋值
                     * @return CustomRuleDetail 是否已赋值
                     * 
                     */
                    bool CustomRuleDetailHasBeenSet() const;

                    /**
                     * 获取云类型
腾讯云：0
aws：1
                     * @return CloudType 云类型
腾讯云：0
aws：1
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置云类型
腾讯云：0
aws：1
                     * @param _cloudType 云类型
腾讯云：0
aws：1
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                private:

                    /**
                     * 策略id
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 策略类型
0:系统策略
1:自定义策略
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 策略等级
0:提示
1:低危
2:中危
3:高危
4:严重
                     */
                    int64_t m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * 策略内容
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * 策略开关
                     */
                    bool m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 命中次数
                     */
                    uint64_t m_hitCount;
                    bool m_hitCountHasBeenSet;

                    /**
                     * 所属账号Appid
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 多账号，成员ID
                     */
                    std::string m_memberID;
                    bool m_memberIDHasBeenSet;

                    /**
                     * Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 自定义规则具体内容
                     */
                    UebaCustomRule m_customRuleDetail;
                    bool m_customRuleDetailHasBeenSet;

                    /**
                     * 云类型
腾讯云：0
aws：1
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBARULE_H_
