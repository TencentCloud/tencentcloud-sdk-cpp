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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWSERVICE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 网关服务
                */
                class CloudBaseGWService : public AbstractModel
                {
                public:
                    CloudBaseGWService();
                    ~CloudBaseGWService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取服务域名
                     * @return Domain 服务域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置服务域名
                     * @param _domain 服务域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取开启时间
                     * @return OpenTime 开启时间
                     * 
                     */
                    uint64_t GetOpenTime() const;

                    /**
                     * 设置开启时间
                     * @param _openTime 开启时间
                     * 
                     */
                    void SetOpenTime(const uint64_t& _openTime);

                    /**
                     * 判断参数 OpenTime 是否已赋值
                     * @return OpenTime 是否已赋值
                     * 
                     */
                    bool OpenTimeHasBeenSet() const;

                    /**
                     * 获取绑定状态，1 绑定中；2绑定失败；3绑定成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 绑定状态，1 绑定中；2绑定失败；3绑定成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置绑定状态，1 绑定中；2绑定失败；3绑定成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 绑定状态，1 绑定中；2绑定失败；3绑定成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPreempted 是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPreempted() const;

                    /**
                     * 设置是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPreempted 是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPreempted(const bool& _isPreempted);

                    /**
                     * 判断参数 IsPreempted 是否已赋值
                     * @return IsPreempted 是否已赋值
                     * 
                     */
                    bool IsPreemptedHasBeenSet() const;

                    /**
                     * 获取是否开启多地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableRegion 是否开启多地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableRegion() const;

                    /**
                     * 设置是否开启多地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableRegion 是否开启多地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableRegion(const bool& _enableRegion);

                    /**
                     * 判断参数 EnableRegion 是否已赋值
                     * @return EnableRegion 是否已赋值
                     * 
                     */
                    bool EnableRegionHasBeenSet() const;

                    /**
                     * 获取cdn CName地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname cdn CName地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置cdn CName地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cname cdn CName地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取统一域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnionStatus 统一域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnionStatus() const;

                    /**
                     * 设置统一域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unionStatus 统一域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnionStatus(const int64_t& _unionStatus);

                    /**
                     * 判断参数 UnionStatus 是否已赋值
                     * @return UnionStatus 是否已赋值
                     * 
                     */
                    bool UnionStatusHasBeenSet() const;

                    /**
                     * 获取CName状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CnameStatus CName状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCnameStatus() const;

                    /**
                     * 设置CName状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cnameStatus CName状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCnameStatus(const int64_t& _cnameStatus);

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取证书Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertId 证书Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certId 证书Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取是否强制https
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceHttps 是否强制https
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetForceHttps() const;

                    /**
                     * 设置是否强制https
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceHttps 是否强制https
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForceHttps(const bool& _forceHttps);

                    /**
                     * 判断参数 ForceHttps 是否已赋值
                     * @return ForceHttps 是否已赋值
                     * 
                     */
                    bool ForceHttpsHasBeenSet() const;

                    /**
                     * 获取icp黑名单封禁状态，0-未封禁，1-封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IcpForbidStatus icp黑名单封禁状态，0-未封禁，1-封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIcpForbidStatus() const;

                    /**
                     * 设置icp黑名单封禁状态，0-未封禁，1-封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _icpForbidStatus icp黑名单封禁状态，0-未封禁，1-封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIcpForbidStatus(const int64_t& _icpForbidStatus);

                    /**
                     * 判断参数 IcpForbidStatus 是否已赋值
                     * @return IcpForbidStatus 是否已赋值
                     * 
                     */
                    bool IcpForbidStatusHasBeenSet() const;

                    /**
                     * 获取自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomRoutingRules 自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomRoutingRules() const;

                    /**
                     * 设置自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customRoutingRules 自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomRoutingRules(const std::string& _customRoutingRules);

                    /**
                     * 判断参数 CustomRoutingRules 是否已赋值
                     * @return CustomRoutingRules 是否已赋值
                     * 
                     */
                    bool CustomRoutingRulesHasBeenSet() const;

                    /**
                     * 获取绑定类型，1绑定cdn，2源站，4自定义
                     * @return BindFlag 绑定类型，1绑定cdn，2源站，4自定义
                     * 
                     */
                    uint64_t GetBindFlag() const;

                    /**
                     * 设置绑定类型，1绑定cdn，2源站，4自定义
                     * @param _bindFlag 绑定类型，1绑定cdn，2源站，4自定义
                     * 
                     */
                    void SetBindFlag(const uint64_t& _bindFlag);

                    /**
                     * 判断参数 BindFlag 是否已赋值
                     * @return BindFlag 是否已赋值
                     * 
                     */
                    bool BindFlagHasBeenSet() const;

                    /**
                     * 获取TcbIngress源站cname
                     * @return OriginCname TcbIngress源站cname
                     * 
                     */
                    std::string GetOriginCname() const;

                    /**
                     * 设置TcbIngress源站cname
                     * @param _originCname TcbIngress源站cname
                     * 
                     */
                    void SetOriginCname(const std::string& _originCname);

                    /**
                     * 判断参数 OriginCname 是否已赋值
                     * @return OriginCname 是否已赋值
                     * 
                     */
                    bool OriginCnameHasBeenSet() const;

                    /**
                     * 获取自定义cname
                     * @return CustomCname 自定义cname
                     * 
                     */
                    std::string GetCustomCname() const;

                    /**
                     * 设置自定义cname
                     * @param _customCname 自定义cname
                     * 
                     */
                    void SetCustomCname(const std::string& _customCname);

                    /**
                     * 判断参数 CustomCname 是否已赋值
                     * @return CustomCname 是否已赋值
                     * 
                     */
                    bool CustomCnameHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 服务域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 开启时间
                     */
                    uint64_t m_openTime;
                    bool m_openTimeHasBeenSet;

                    /**
                     * 绑定状态，1 绑定中；2绑定失败；3绑定成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPreempted;
                    bool m_isPreemptedHasBeenSet;

                    /**
                     * 是否开启多地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableRegion;
                    bool m_enableRegionHasBeenSet;

                    /**
                     * cdn CName地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 统一域名状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unionStatus;
                    bool m_unionStatusHasBeenSet;

                    /**
                     * CName状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * 证书Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 是否强制https
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_forceHttps;
                    bool m_forceHttpsHasBeenSet;

                    /**
                     * icp黑名单封禁状态，0-未封禁，1-封禁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_icpForbidStatus;
                    bool m_icpForbidStatusHasBeenSet;

                    /**
                     * 自定义路由规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customRoutingRules;
                    bool m_customRoutingRulesHasBeenSet;

                    /**
                     * 绑定类型，1绑定cdn，2源站，4自定义
                     */
                    uint64_t m_bindFlag;
                    bool m_bindFlagHasBeenSet;

                    /**
                     * TcbIngress源站cname
                     */
                    std::string m_originCname;
                    bool m_originCnameHasBeenSet;

                    /**
                     * 自定义cname
                     */
                    std::string m_customCname;
                    bool m_customCnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASEGWSERVICE_H_
