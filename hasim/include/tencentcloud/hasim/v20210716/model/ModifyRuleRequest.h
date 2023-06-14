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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYRULEREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * ModifyRule请求参数结构体
                */
                class ModifyRuleRequest : public AbstractModel
                {
                public:
                    ModifyRuleRequest();
                    ~ModifyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自动化规则名称
                     * @return Name 自动化规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自动化规则名称
                     * @param _name 自动化规则名称
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
                     * 获取规则类型：用量类(101 当月|102有效期内)、位置类(201行政区|202移动距离)、网络质量类(301网络盲点)
                     * @return Type 规则类型：用量类(101 当月|102有效期内)、位置类(201行政区|202移动距离)、网络质量类(301网络盲点)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置规则类型：用量类(101 当月|102有效期内)、位置类(201行政区|202移动距离)、网络质量类(301网络盲点)
                     * @param _type 规则类型：用量类(101 当月|102有效期内)、位置类(201行政区|202移动距离)、网络质量类(301网络盲点)
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否激活
                     * @return IsActive 是否激活
                     * 
                     */
                    bool GetIsActive() const;

                    /**
                     * 设置是否激活
                     * @param _isActive 是否激活
                     * 
                     */
                    void SetIsActive(const bool& _isActive);

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取触发动作：1 邮件 2 API请求 3 微信 4 停卡 5 地图标识为盲点
                     * @return Notice 触发动作：1 邮件 2 API请求 3 微信 4 停卡 5 地图标识为盲点
                     * 
                     */
                    int64_t GetNotice() const;

                    /**
                     * 设置触发动作：1 邮件 2 API请求 3 微信 4 停卡 5 地图标识为盲点
                     * @param _notice 触发动作：1 邮件 2 API请求 3 微信 4 停卡 5 地图标识为盲点
                     * 
                     */
                    void SetNotice(const int64_t& _notice);

                    /**
                     * 判断参数 Notice 是否已赋值
                     * @return Notice 是否已赋值
                     * 
                     */
                    bool NoticeHasBeenSet() const;

                    /**
                     * 获取自动化规则ID
                     * @return RuleID 自动化规则ID
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置自动化规则ID
                     * @param _ruleID 自动化规则ID
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param _email 邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取推送的API地址
                     * @return Url 推送的API地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置推送的API地址
                     * @param _url 推送的API地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取用量阈值
                     * @return DataThreshold 用量阈值
                     * 
                     */
                    int64_t GetDataThreshold() const;

                    /**
                     * 设置用量阈值
                     * @param _dataThreshold 用量阈值
                     * 
                     */
                    void SetDataThreshold(const int64_t& _dataThreshold);

                    /**
                     * 判断参数 DataThreshold 是否已赋值
                     * @return DataThreshold 是否已赋值
                     * 
                     */
                    bool DataThresholdHasBeenSet() const;

                    /**
                     * 获取行政区类型：1. 省份 2. 城市 3. 区
                     * @return District 行政区类型：1. 省份 2. 城市 3. 区
                     * 
                     */
                    int64_t GetDistrict() const;

                    /**
                     * 设置行政区类型：1. 省份 2. 城市 3. 区
                     * @param _district 行政区类型：1. 省份 2. 城市 3. 区
                     * 
                     */
                    void SetDistrict(const int64_t& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取心跳移动距离阈值
                     * @return Distance 心跳移动距离阈值
                     * 
                     */
                    int64_t GetDistance() const;

                    /**
                     * 设置心跳移动距离阈值
                     * @param _distance 心跳移动距离阈值
                     * 
                     */
                    void SetDistance(const int64_t& _distance);

                    /**
                     * 判断参数 Distance 是否已赋值
                     * @return Distance 是否已赋值
                     * 
                     */
                    bool DistanceHasBeenSet() const;

                    /**
                     * 获取信号强度阈值
                     * @return SignalStrength 信号强度阈值
                     * 
                     */
                    int64_t GetSignalStrength() const;

                    /**
                     * 设置信号强度阈值
                     * @param _signalStrength 信号强度阈值
                     * 
                     */
                    void SetSignalStrength(const int64_t& _signalStrength);

                    /**
                     * 判断参数 SignalStrength 是否已赋值
                     * @return SignalStrength 是否已赋值
                     * 
                     */
                    bool SignalStrengthHasBeenSet() const;

                    /**
                     * 获取标签ID集合
                     * @return TagIDs 标签ID集合
                     * 
                     */
                    std::vector<int64_t> GetTagIDs() const;

                    /**
                     * 设置标签ID集合
                     * @param _tagIDs 标签ID集合
                     * 
                     */
                    void SetTagIDs(const std::vector<int64_t>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取资费计划
                     * @return SalePlan 资费计划
                     * 
                     */
                    std::string GetSalePlan() const;

                    /**
                     * 设置资费计划
                     * @param _salePlan 资费计划
                     * 
                     */
                    void SetSalePlan(const std::string& _salePlan);

                    /**
                     * 判断参数 SalePlan 是否已赋值
                     * @return SalePlan 是否已赋值
                     * 
                     */
                    bool SalePlanHasBeenSet() const;

                    /**
                     * 获取具体的账号
                     * @return UinAccount 具体的账号
                     * 
                     */
                    std::string GetUinAccount() const;

                    /**
                     * 设置具体的账号
                     * @param _uinAccount 具体的账号
                     * 
                     */
                    void SetUinAccount(const std::string& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                private:

                    /**
                     * 自动化规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则类型：用量类(101 当月|102有效期内)、位置类(201行政区|202移动距离)、网络质量类(301网络盲点)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否激活
                     */
                    bool m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     * 触发动作：1 邮件 2 API请求 3 微信 4 停卡 5 地图标识为盲点
                     */
                    int64_t m_notice;
                    bool m_noticeHasBeenSet;

                    /**
                     * 自动化规则ID
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 推送的API地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 用量阈值
                     */
                    int64_t m_dataThreshold;
                    bool m_dataThresholdHasBeenSet;

                    /**
                     * 行政区类型：1. 省份 2. 城市 3. 区
                     */
                    int64_t m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 心跳移动距离阈值
                     */
                    int64_t m_distance;
                    bool m_distanceHasBeenSet;

                    /**
                     * 信号强度阈值
                     */
                    int64_t m_signalStrength;
                    bool m_signalStrengthHasBeenSet;

                    /**
                     * 标签ID集合
                     */
                    std::vector<int64_t> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * 资费计划
                     */
                    std::string m_salePlan;
                    bool m_salePlanHasBeenSet;

                    /**
                     * 具体的账号
                     */
                    std::string m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_MODIFYRULEREQUEST_H_
