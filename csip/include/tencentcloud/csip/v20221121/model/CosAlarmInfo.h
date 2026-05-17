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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 对象存储告警信息
                */
                class CosAlarmInfo : public AbstractModel
                {
                public:
                    CosAlarmInfo();
                    ~CosAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取策略类型 0-未知规则分类(Unknown), 1-异常行为(AbnormalBehavior), 2-权限过大(ExcessivePermission), 3-资源枚举(ResourceEnumerated), 4-匿名访问(AnonymousAccess)

                     * @return PolicyAbnormalType 策略类型 0-未知规则分类(Unknown), 1-异常行为(AbnormalBehavior), 2-权限过大(ExcessivePermission), 3-资源枚举(ResourceEnumerated), 4-匿名访问(AnonymousAccess)

                     * 
                     */
                    int64_t GetPolicyAbnormalType() const;

                    /**
                     * 设置策略类型 0-未知规则分类(Unknown), 1-异常行为(AbnormalBehavior), 2-权限过大(ExcessivePermission), 3-资源枚举(ResourceEnumerated), 4-匿名访问(AnonymousAccess)

                     * @param _policyAbnormalType 策略类型 0-未知规则分类(Unknown), 1-异常行为(AbnormalBehavior), 2-权限过大(ExcessivePermission), 3-资源枚举(ResourceEnumerated), 4-匿名访问(AnonymousAccess)

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
                     * 获取风险等级：0:Normal, 1:Tip, 2:Low, 3:Middle, 4:High, 5:Critical
                     * @return PolicyRiskLevel 风险等级：0:Normal, 1:Tip, 2:Low, 3:Middle, 4:High, 5:Critical
                     * 
                     */
                    int64_t GetPolicyRiskLevel() const;

                    /**
                     * 设置风险等级：0:Normal, 1:Tip, 2:Low, 3:Middle, 4:High, 5:Critical
                     * @param _policyRiskLevel 风险等级：0:Normal, 1:Tip, 2:Low, 3:Middle, 4:High, 5:Critical
                     * 
                     */
                    void SetPolicyRiskLevel(const int64_t& _policyRiskLevel);

                    /**
                     * 判断参数 PolicyRiskLevel 是否已赋值
                     * @return PolicyRiskLevel 是否已赋值
                     * 
                     */
                    bool PolicyRiskLevelHasBeenSet() const;

                    /**
                     * 获取策略信息描述
                     * @return PolicyDescription 策略信息描述
                     * 
                     */
                    std::string GetPolicyDescription() const;

                    /**
                     * 设置策略信息描述
                     * @param _policyDescription 策略信息描述
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
                     * 获取桶名
                     * @return BucketName 桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名
                     * @param _bucketName 桶名
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取桶地域
                     * @return BucketRegion 桶地域
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置桶地域
                     * @param _bucketRegion 桶地域
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取桶备注
                     * @return BucketMarker 桶备注
                     * 
                     */
                    std::string GetBucketMarker() const;

                    /**
                     * 设置桶备注
                     * @param _bucketMarker 桶备注
                     * 
                     */
                    void SetBucketMarker(const std::string& _bucketMarker);

                    /**
                     * 判断参数 BucketMarker 是否已赋值
                     * @return BucketMarker 是否已赋值
                     * 
                     */
                    bool BucketMarkerHasBeenSet() const;

                    /**
                     * 获取桶tag信息
                     * @return BucketTagInfo 桶tag信息
                     * 
                     */
                    std::string GetBucketTagInfo() const;

                    /**
                     * 设置桶tag信息
                     * @param _bucketTagInfo 桶tag信息
                     * 
                     */
                    void SetBucketTagInfo(const std::string& _bucketTagInfo);

                    /**
                     * 判断参数 BucketTagInfo 是否已赋值
                     * @return BucketTagInfo 是否已赋值
                     * 
                     */
                    bool BucketTagInfoHasBeenSet() const;

                    /**
                     * 获取桶可访问属性
                     * @return BucketAccessWay 桶可访问属性
                     * 
                     */
                    std::string GetBucketAccessWay() const;

                    /**
                     * 设置桶可访问属性
                     * @param _bucketAccessWay 桶可访问属性
                     * 
                     */
                    void SetBucketAccessWay(const std::string& _bucketAccessWay);

                    /**
                     * 判断参数 BucketAccessWay 是否已赋值
                     * @return BucketAccessWay 是否已赋值
                     * 
                     */
                    bool BucketAccessWayHasBeenSet() const;

                    /**
                     * 获取所属账号uin
                     * @return AccountUin 所属账号uin
                     * 
                     */
                    std::string GetAccountUin() const;

                    /**
                     * 设置所属账号uin
                     * @param _accountUin 所属账号uin
                     * 
                     */
                    void SetAccountUin(const std::string& _accountUin);

                    /**
                     * 判断参数 AccountUin 是否已赋值
                     * @return AccountUin 是否已赋值
                     * 
                     */
                    bool AccountUinHasBeenSet() const;

                    /**
                     * 获取所属账号昵称
                     * @return AccountNickName 所属账号昵称
                     * 
                     */
                    std::string GetAccountNickName() const;

                    /**
                     * 设置所属账号昵称
                     * @param _accountNickName 所属账号昵称
                     * 
                     */
                    void SetAccountNickName(const std::string& _accountNickName);

                    /**
                     * 判断参数 AccountNickName 是否已赋值
                     * @return AccountNickName 是否已赋值
                     * 
                     */
                    bool AccountNickNameHasBeenSet() const;

                    /**
                     * 获取所属账号社身份 1 主 2子
                     * @return AccountIdentify 所属账号社身份 1 主 2子
                     * 
                     */
                    int64_t GetAccountIdentify() const;

                    /**
                     * 设置所属账号社身份 1 主 2子
                     * @param _accountIdentify 所属账号社身份 1 主 2子
                     * 
                     */
                    void SetAccountIdentify(const int64_t& _accountIdentify);

                    /**
                     * 判断参数 AccountIdentify 是否已赋值
                     * @return AccountIdentify 是否已赋值
                     * 
                     */
                    bool AccountIdentifyHasBeenSet() const;

                    /**
                     * 获取子账号所属主账号昵称
                     * @return AccountMainNickName 子账号所属主账号昵称
                     * 
                     */
                    std::string GetAccountMainNickName() const;

                    /**
                     * 设置子账号所属主账号昵称
                     * @param _accountMainNickName 子账号所属主账号昵称
                     * 
                     */
                    void SetAccountMainNickName(const std::string& _accountMainNickName);

                    /**
                     * 判断参数 AccountMainNickName 是否已赋值
                     * @return AccountMainNickName 是否已赋值
                     * 
                     */
                    bool AccountMainNickNameHasBeenSet() const;

                    /**
                     * 获取告警时间戳Unix时间单位毫秒
                     * @return AlarmTimestamp 告警时间戳Unix时间单位毫秒
                     * 
                     */
                    int64_t GetAlarmTimestamp() const;

                    /**
                     * 设置告警时间戳Unix时间单位毫秒
                     * @param _alarmTimestamp 告警时间戳Unix时间单位毫秒
                     * 
                     */
                    void SetAlarmTimestamp(const int64_t& _alarmTimestamp);

                    /**
                     * 判断参数 AlarmTimestamp 是否已赋值
                     * @return AlarmTimestamp 是否已赋值
                     * 
                     */
                    bool AlarmTimestampHasBeenSet() const;

                    /**
                     * 获取处置状态 0 未处理 1 标记处置 2标记忽略
                     * @return HandleStatus 处置状态 0 未处理 1 标记处置 2标记忽略
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置处置状态 0 未处理 1 标记处置 2标记忽略
                     * @param _handleStatus 处置状态 0 未处理 1 标记处置 2标记忽略
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取告警对象id
                     * @return AlarmId 告警对象id
                     * 
                     */
                    int64_t GetAlarmId() const;

                    /**
                     * 设置告警对象id
                     * @param _alarmId 告警对象id
                     * 
                     */
                    void SetAlarmId(const int64_t& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取桶地域码值
                     * @return BucketRegionCode 桶地域码值
                     * 
                     */
                    std::string GetBucketRegionCode() const;

                    /**
                     * 设置桶地域码值
                     * @param _bucketRegionCode 桶地域码值
                     * 
                     */
                    void SetBucketRegionCode(const std::string& _bucketRegionCode);

                    /**
                     * 判断参数 BucketRegionCode 是否已赋值
                     * @return BucketRegionCode 是否已赋值
                     * 
                     */
                    bool BucketRegionCodeHasBeenSet() const;

                    /**
                     * 获取数据识别分类详情
                     * @return CategoryDetails 数据识别分类详情
                     * 
                     */
                    std::vector<CosIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置数据识别分类详情
                     * @param _categoryDetails 数据识别分类详情
                     * 
                     */
                    void SetCategoryDetails(const std::vector<CosIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                private:

                    /**
                     * appid

                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 策略id
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略类型 0-未知规则分类(Unknown), 1-异常行为(AbnormalBehavior), 2-权限过大(ExcessivePermission), 3-资源枚举(ResourceEnumerated), 4-匿名访问(AnonymousAccess)

                     */
                    int64_t m_policyAbnormalType;
                    bool m_policyAbnormalTypeHasBeenSet;

                    /**
                     * 风险等级：0:Normal, 1:Tip, 2:Low, 3:Middle, 4:High, 5:Critical
                     */
                    int64_t m_policyRiskLevel;
                    bool m_policyRiskLevelHasBeenSet;

                    /**
                     * 策略信息描述
                     */
                    std::string m_policyDescription;
                    bool m_policyDescriptionHasBeenSet;

                    /**
                     * 桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 桶地域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 桶备注
                     */
                    std::string m_bucketMarker;
                    bool m_bucketMarkerHasBeenSet;

                    /**
                     * 桶tag信息
                     */
                    std::string m_bucketTagInfo;
                    bool m_bucketTagInfoHasBeenSet;

                    /**
                     * 桶可访问属性
                     */
                    std::string m_bucketAccessWay;
                    bool m_bucketAccessWayHasBeenSet;

                    /**
                     * 所属账号uin
                     */
                    std::string m_accountUin;
                    bool m_accountUinHasBeenSet;

                    /**
                     * 所属账号昵称
                     */
                    std::string m_accountNickName;
                    bool m_accountNickNameHasBeenSet;

                    /**
                     * 所属账号社身份 1 主 2子
                     */
                    int64_t m_accountIdentify;
                    bool m_accountIdentifyHasBeenSet;

                    /**
                     * 子账号所属主账号昵称
                     */
                    std::string m_accountMainNickName;
                    bool m_accountMainNickNameHasBeenSet;

                    /**
                     * 告警时间戳Unix时间单位毫秒
                     */
                    int64_t m_alarmTimestamp;
                    bool m_alarmTimestampHasBeenSet;

                    /**
                     * 处置状态 0 未处理 1 标记处置 2标记忽略
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * 告警对象id
                     */
                    int64_t m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 桶地域码值
                     */
                    std::string m_bucketRegionCode;
                    bool m_bucketRegionCodeHasBeenSet;

                    /**
                     * 数据识别分类详情
                     */
                    std::vector<CosIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMINFO_H_
