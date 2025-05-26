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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_

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
                * 子账号详情
                */
                class SubUserInfo : public AbstractModel
                {
                public:
                    SubUserInfo();
                    ~SubUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID，无业务意义仅作为唯一键
                     * @return ID 主键ID，无业务意义仅作为唯一键
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置主键ID，无业务意义仅作为唯一键
                     * @param _iD 主键ID，无业务意义仅作为唯一键
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取子账号Appid
                     * @return AppID 子账号Appid
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置子账号Appid
                     * @param _appID 子账号Appid
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
                     * 获取子账号UIn
                     * @return Uin 子账号UIn
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置子账号UIn
                     * @param _uin 子账号UIn
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
                     * 获取子账号名称
                     * @return NickName 子账号名称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置子账号名称
                     * @param _nickName 子账号名称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取主账号Appid
                     * @return OwnerAppID 主账号Appid
                     * 
                     */
                    std::string GetOwnerAppID() const;

                    /**
                     * 设置主账号Appid
                     * @param _ownerAppID 主账号Appid
                     * 
                     */
                    void SetOwnerAppID(const std::string& _ownerAppID);

                    /**
                     * 判断参数 OwnerAppID 是否已赋值
                     * @return OwnerAppID 是否已赋值
                     * 
                     */
                    bool OwnerAppIDHasBeenSet() const;

                    /**
                     * 获取主账号Uin
                     * @return OwnerUin 主账号Uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号Uin
                     * @param _ownerUin 主账号Uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取主账号名称
                     * @return OwnerNickName 主账号名称
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置主账号名称
                     * @param _ownerNickName 主账号名称
                     * 
                     */
                    void SetOwnerNickName(const std::string& _ownerNickName);

                    /**
                     * 判断参数 OwnerNickName 是否已赋值
                     * @return OwnerNickName 是否已赋值
                     * 
                     */
                    bool OwnerNickNameHasBeenSet() const;

                    /**
                     * 获取所属主账号memberId信息
                     * @return OwnerMemberID 所属主账号memberId信息
                     * 
                     */
                    std::string GetOwnerMemberID() const;

                    /**
                     * 设置所属主账号memberId信息
                     * @param _ownerMemberID 所属主账号memberId信息
                     * 
                     */
                    void SetOwnerMemberID(const std::string& _ownerMemberID);

                    /**
                     * 判断参数 OwnerMemberID 是否已赋值
                     * @return OwnerMemberID 是否已赋值
                     * 
                     */
                    bool OwnerMemberIDHasBeenSet() const;

                    /**
                     * 获取账户类型，0为腾讯云账户，1为AWS账户
                     * @return CloudType 账户类型，0为腾讯云账户，1为AWS账户
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置账户类型，0为腾讯云账户，1为AWS账户
                     * @param _cloudType 账户类型，0为腾讯云账户，1为AWS账户
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取可访问服务数量
                     * @return ServiceCount 可访问服务数量
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置可访问服务数量
                     * @param _serviceCount 可访问服务数量
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取可访问接口数量
                     * @return InterfaceCount 可访问接口数量
                     * 
                     */
                    int64_t GetInterfaceCount() const;

                    /**
                     * 设置可访问接口数量
                     * @param _interfaceCount 可访问接口数量
                     * 
                     */
                    void SetInterfaceCount(const int64_t& _interfaceCount);

                    /**
                     * 判断参数 InterfaceCount 是否已赋值
                     * @return InterfaceCount 是否已赋值
                     * 
                     */
                    bool InterfaceCountHasBeenSet() const;

                    /**
                     * 获取可访问资源数量
                     * @return AssetCount 可访问资源数量
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置可访问资源数量
                     * @param _assetCount 可访问资源数量
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取访问/行为日志数量
                     * @return LogCount 访问/行为日志数量
                     * 
                     */
                    int64_t GetLogCount() const;

                    /**
                     * 设置访问/行为日志数量
                     * @param _logCount 访问/行为日志数量
                     * 
                     */
                    void SetLogCount(const int64_t& _logCount);

                    /**
                     * 判断参数 LogCount 是否已赋值
                     * @return LogCount 是否已赋值
                     * 
                     */
                    bool LogCountHasBeenSet() const;

                    /**
                     * 获取权限配置风险
                     * @return ConfigRiskCount 权限配置风险
                     * 
                     */
                    int64_t GetConfigRiskCount() const;

                    /**
                     * 设置权限配置风险
                     * @param _configRiskCount 权限配置风险
                     * 
                     */
                    void SetConfigRiskCount(const int64_t& _configRiskCount);

                    /**
                     * 判断参数 ConfigRiskCount 是否已赋值
                     * @return ConfigRiskCount 是否已赋值
                     * 
                     */
                    bool ConfigRiskCountHasBeenSet() const;

                    /**
                     * 获取危险行为告警
                     * @return ActionRiskCount 危险行为告警
                     * 
                     */
                    int64_t GetActionRiskCount() const;

                    /**
                     * 设置危险行为告警
                     * @param _actionRiskCount 危险行为告警
                     * 
                     */
                    void SetActionRiskCount(const int64_t& _actionRiskCount);

                    /**
                     * 判断参数 ActionRiskCount 是否已赋值
                     * @return ActionRiskCount 是否已赋值
                     * 
                     */
                    bool ActionRiskCountHasBeenSet() const;

                    /**
                     * 获取是否接入云审计日志
                     * @return IsAccessCloudAudit 是否接入云审计日志
                     * 
                     */
                    bool GetIsAccessCloudAudit() const;

                    /**
                     * 设置是否接入云审计日志
                     * @param _isAccessCloudAudit 是否接入云审计日志
                     * 
                     */
                    void SetIsAccessCloudAudit(const bool& _isAccessCloudAudit);

                    /**
                     * 判断参数 IsAccessCloudAudit 是否已赋值
                     * @return IsAccessCloudAudit 是否已赋值
                     * 
                     */
                    bool IsAccessCloudAuditHasBeenSet() const;

                    /**
                     * 获取是否配置风险的安全体检
                     * @return IsAccessCheck 是否配置风险的安全体检
                     * 
                     */
                    bool GetIsAccessCheck() const;

                    /**
                     * 设置是否配置风险的安全体检
                     * @param _isAccessCheck 是否配置风险的安全体检
                     * 
                     */
                    void SetIsAccessCheck(const bool& _isAccessCheck);

                    /**
                     * 判断参数 IsAccessCheck 是否已赋值
                     * @return IsAccessCheck 是否已赋值
                     * 
                     */
                    bool IsAccessCheckHasBeenSet() const;

                    /**
                     * 获取是否配置用户行为管理策略
                     * @return IsAccessUeba 是否配置用户行为管理策略
                     * 
                     */
                    bool GetIsAccessUeba() const;

                    /**
                     * 设置是否配置用户行为管理策略
                     * @param _isAccessUeba 是否配置用户行为管理策略
                     * 
                     */
                    void SetIsAccessUeba(const bool& _isAccessUeba);

                    /**
                     * 判断参数 IsAccessUeba 是否已赋值
                     * @return IsAccessUeba 是否已赋值
                     * 
                     */
                    bool IsAccessUebaHasBeenSet() const;

                private:

                    /**
                     * 主键ID，无业务意义仅作为唯一键
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 子账号Appid
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 子账号UIn
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号名称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 主账号Appid
                     */
                    std::string m_ownerAppID;
                    bool m_ownerAppIDHasBeenSet;

                    /**
                     * 主账号Uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 主账号名称
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * 所属主账号memberId信息
                     */
                    std::string m_ownerMemberID;
                    bool m_ownerMemberIDHasBeenSet;

                    /**
                     * 账户类型，0为腾讯云账户，1为AWS账户
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 可访问服务数量
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 可访问接口数量
                     */
                    int64_t m_interfaceCount;
                    bool m_interfaceCountHasBeenSet;

                    /**
                     * 可访问资源数量
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 访问/行为日志数量
                     */
                    int64_t m_logCount;
                    bool m_logCountHasBeenSet;

                    /**
                     * 权限配置风险
                     */
                    int64_t m_configRiskCount;
                    bool m_configRiskCountHasBeenSet;

                    /**
                     * 危险行为告警
                     */
                    int64_t m_actionRiskCount;
                    bool m_actionRiskCountHasBeenSet;

                    /**
                     * 是否接入云审计日志
                     */
                    bool m_isAccessCloudAudit;
                    bool m_isAccessCloudAuditHasBeenSet;

                    /**
                     * 是否配置风险的安全体检
                     */
                    bool m_isAccessCheck;
                    bool m_isAccessCheckHasBeenSet;

                    /**
                     * 是否配置用户行为管理策略
                     */
                    bool m_isAccessUeba;
                    bool m_isAccessUebaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_
