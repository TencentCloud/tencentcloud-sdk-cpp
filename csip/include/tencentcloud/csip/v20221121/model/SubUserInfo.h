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
                     * 获取<p>主键ID，无业务意义仅作为唯一键</p>
                     * @return ID <p>主键ID，无业务意义仅作为唯一键</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>主键ID，无业务意义仅作为唯一键</p>
                     * @param _iD <p>主键ID，无业务意义仅作为唯一键</p>
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
                     * 获取<p>子账号Appid</p>
                     * @return AppID <p>子账号Appid</p>
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置<p>子账号Appid</p>
                     * @param _appID <p>子账号Appid</p>
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
                     * 获取<p>子账号UIn</p>
                     * @return Uin <p>子账号UIn</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>子账号UIn</p>
                     * @param _uin <p>子账号UIn</p>
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
                     * 获取<p>子账号名称</p>
                     * @return NickName <p>子账号名称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>子账号名称</p>
                     * @param _nickName <p>子账号名称</p>
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
                     * 获取<p>主账号Appid</p>
                     * @return OwnerAppID <p>主账号Appid</p>
                     * 
                     */
                    std::string GetOwnerAppID() const;

                    /**
                     * 设置<p>主账号Appid</p>
                     * @param _ownerAppID <p>主账号Appid</p>
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
                     * 获取<p>主账号Uin</p>
                     * @return OwnerUin <p>主账号Uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>主账号Uin</p>
                     * @param _ownerUin <p>主账号Uin</p>
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
                     * 获取<p>主账号名称</p>
                     * @return OwnerNickName <p>主账号名称</p>
                     * 
                     */
                    std::string GetOwnerNickName() const;

                    /**
                     * 设置<p>主账号名称</p>
                     * @param _ownerNickName <p>主账号名称</p>
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
                     * 获取<p>所属主账号memberId信息</p>
                     * @return OwnerMemberID <p>所属主账号memberId信息</p>
                     * 
                     */
                    std::string GetOwnerMemberID() const;

                    /**
                     * 设置<p>所属主账号memberId信息</p>
                     * @param _ownerMemberID <p>所属主账号memberId信息</p>
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
                     * 获取<p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     * @return CloudType <p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     * @param _cloudType <p>账户类型，0为腾讯云账户，1为AWS账户</p>
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
                     * 获取<p>可访问服务数量</p>
                     * @return ServiceCount <p>可访问服务数量</p>
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置<p>可访问服务数量</p>
                     * @param _serviceCount <p>可访问服务数量</p>
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
                     * 获取<p>可访问接口数量</p>
                     * @return InterfaceCount <p>可访问接口数量</p>
                     * 
                     */
                    int64_t GetInterfaceCount() const;

                    /**
                     * 设置<p>可访问接口数量</p>
                     * @param _interfaceCount <p>可访问接口数量</p>
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
                     * 获取<p>可访问资源数量</p>
                     * @return AssetCount <p>可访问资源数量</p>
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置<p>可访问资源数量</p>
                     * @param _assetCount <p>可访问资源数量</p>
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
                     * 获取<p>访问/行为日志数量</p>
                     * @return LogCount <p>访问/行为日志数量</p>
                     * 
                     */
                    int64_t GetLogCount() const;

                    /**
                     * 设置<p>访问/行为日志数量</p>
                     * @param _logCount <p>访问/行为日志数量</p>
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
                     * 获取<p>权限配置风险</p>
                     * @return ConfigRiskCount <p>权限配置风险</p>
                     * 
                     */
                    int64_t GetConfigRiskCount() const;

                    /**
                     * 设置<p>权限配置风险</p>
                     * @param _configRiskCount <p>权限配置风险</p>
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
                     * 获取<p>危险行为告警</p>
                     * @return ActionRiskCount <p>危险行为告警</p>
                     * 
                     */
                    int64_t GetActionRiskCount() const;

                    /**
                     * 设置<p>危险行为告警</p>
                     * @param _actionRiskCount <p>危险行为告警</p>
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
                     * 获取<p>是否接入操作审计日志</p>
                     * @return IsAccessCloudAudit <p>是否接入操作审计日志</p>
                     * 
                     */
                    bool GetIsAccessCloudAudit() const;

                    /**
                     * 设置<p>是否接入操作审计日志</p>
                     * @param _isAccessCloudAudit <p>是否接入操作审计日志</p>
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
                     * 获取<p>是否配置风险的安全体检</p>
                     * @return IsAccessCheck <p>是否配置风险的安全体检</p>
                     * 
                     */
                    bool GetIsAccessCheck() const;

                    /**
                     * 设置<p>是否配置风险的安全体检</p>
                     * @param _isAccessCheck <p>是否配置风险的安全体检</p>
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
                     * 获取<p>是否配置用户行为管理策略</p>
                     * @return IsAccessUeba <p>是否配置用户行为管理策略</p>
                     * 
                     */
                    bool GetIsAccessUeba() const;

                    /**
                     * 设置<p>是否配置用户行为管理策略</p>
                     * @param _isAccessUeba <p>是否配置用户行为管理策略</p>
                     * 
                     */
                    void SetIsAccessUeba(const bool& _isAccessUeba);

                    /**
                     * 判断参数 IsAccessUeba 是否已赋值
                     * @return IsAccessUeba 是否已赋值
                     * 
                     */
                    bool IsAccessUebaHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（Unix时间戳）</p>
                     * @return CreateTime <p>创建时间（Unix时间戳）</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（Unix时间戳）</p>
                     * @param _createTime <p>创建时间（Unix时间戳）</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID，无业务意义仅作为唯一键</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>子账号Appid</p>
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>子账号UIn</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子账号名称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>主账号Appid</p>
                     */
                    std::string m_ownerAppID;
                    bool m_ownerAppIDHasBeenSet;

                    /**
                     * <p>主账号Uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>主账号名称</p>
                     */
                    std::string m_ownerNickName;
                    bool m_ownerNickNameHasBeenSet;

                    /**
                     * <p>所属主账号memberId信息</p>
                     */
                    std::string m_ownerMemberID;
                    bool m_ownerMemberIDHasBeenSet;

                    /**
                     * <p>账户类型，0为腾讯云账户，1为AWS账户</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>可访问服务数量</p>
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>可访问接口数量</p>
                     */
                    int64_t m_interfaceCount;
                    bool m_interfaceCountHasBeenSet;

                    /**
                     * <p>可访问资源数量</p>
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>访问/行为日志数量</p>
                     */
                    int64_t m_logCount;
                    bool m_logCountHasBeenSet;

                    /**
                     * <p>权限配置风险</p>
                     */
                    int64_t m_configRiskCount;
                    bool m_configRiskCountHasBeenSet;

                    /**
                     * <p>危险行为告警</p>
                     */
                    int64_t m_actionRiskCount;
                    bool m_actionRiskCountHasBeenSet;

                    /**
                     * <p>是否接入操作审计日志</p>
                     */
                    bool m_isAccessCloudAudit;
                    bool m_isAccessCloudAuditHasBeenSet;

                    /**
                     * <p>是否配置风险的安全体检</p>
                     */
                    bool m_isAccessCheck;
                    bool m_isAccessCheckHasBeenSet;

                    /**
                     * <p>是否配置用户行为管理策略</p>
                     */
                    bool m_isAccessUeba;
                    bool m_isAccessUebaHasBeenSet;

                    /**
                     * <p>创建时间（Unix时间戳）</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SUBUSERINFO_H_
