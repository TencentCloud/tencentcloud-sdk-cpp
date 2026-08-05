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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYHTTPSERVICEROUTERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYHTTPSERVICEROUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/VerifyHTTPServiceRouteCheckItem.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * VerifyHTTPServiceRoute返回参数结构体
                */
                class VerifyHTTPServiceRouteResponse : public AbstractModel
                {
                public:
                    VerifyHTTPServiceRouteResponse();
                    ~VerifyHTTPServiceRouteResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>前置校验总开关。所有启用的检查项均为 PASS 或 SKIPPED 时为 true，任一检查项为 FAIL 时为 false。当为 false 时，前端应根据各 CheckItem 的 Code 精确渲染错误提示和操作指引；当为 true 时可继续调用 CreateHTTPServiceRoute 完成创建。 示例值：false</p>
                     * @return Passed <p>前置校验总开关。所有启用的检查项均为 PASS 或 SKIPPED 时为 true，任一检查项为 FAIL 时为 false。当为 false 时，前端应根据各 CheckItem 的 Code 精确渲染错误提示和操作指引；当为 true 时可继续调用 CreateHTTPServiceRoute 完成创建。 示例值：false</p>
                     * 
                     */
                    bool GetPassed() const;

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取<p>域名归属权校验结果</p>
                     * @return Ownership <p>域名归属权校验结果</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetOwnership() const;

                    /**
                     * 判断参数 Ownership 是否已赋值
                     * @return Ownership 是否已赋值
                     * 
                     */
                    bool OwnershipHasBeenSet() const;

                    /**
                     * 获取<p>证书校验结果；CertId 为空时 Status=SKIPPED</p>
                     * @return Cert <p>证书校验结果；CertId 为空时 Status=SKIPPED</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetCert() const;

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取<p>域名/路径数量配额校验结果</p>
                     * @return Quota <p>域名/路径数量配额校验结果</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetQuota() const;

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取<p>同域名下路由路径冲突校验结果</p>
                     * @return RouteConflict <p>同域名下路由路径冲突校验结果</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetRouteConflict() const;

                    /**
                     * 判断参数 RouteConflict 是否已赋值
                     * @return RouteConflict 是否已赋值
                     * 
                     */
                    bool RouteConflictHasBeenSet() const;

                    /**
                     * 获取<p>域名被其他环境占用校验结果</p>
                     * @return DomainConflict <p>域名被其他环境占用校验结果</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetDomainConflict() const;

                    /**
                     * 判断参数 DomainConflict 是否已赋值
                     * @return DomainConflict 是否已赋值
                     * 
                     */
                    bool DomainConflictHasBeenSet() const;

                    /**
                     * 获取<p>内部域名且非内部账号校验结果</p>
                     * @return InternalAccount <p>内部域名且非内部账号校验结果</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetInternalAccount() const;

                    /**
                     * 判断参数 InternalAccount 是否已赋值
                     * @return InternalAccount 是否已赋值
                     * 
                     */
                    bool InternalAccountHasBeenSet() const;

                    /**
                     * 获取<p>域名黑名单校验结果</p>
                     * @return Blacklist <p>域名黑名单校验结果</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetBlacklist() const;

                    /**
                     * 判断参数 Blacklist 是否已赋值
                     * @return Blacklist 是否已赋值
                     * 
                     */
                    bool BlacklistHasBeenSet() const;

                    /**
                     * 获取<p>AccessType=CDN 时 CDN 资源存在性 / 状态校验结果（含 ICP 未备案的提示）</p>
                     * @return CDNResource <p>AccessType=CDN 时 CDN 资源存在性 / 状态校验结果（含 ICP 未备案的提示）</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetCDNResource() const;

                    /**
                     * 判断参数 CDNResource 是否已赋值
                     * @return CDNResource 是否已赋值
                     * 
                     */
                    bool CDNResourceHasBeenSet() const;

                    /**
                     * 获取<p>AccessType=EO 时的 EdgeOne 预检结果（域名冲突/备案/归属权）</p>
                     * @return EO <p>AccessType=EO 时的 EdgeOne 预检结果（域名冲突/备案/归属权）</p>
                     * 
                     */
                    VerifyHTTPServiceRouteCheckItem GetEO() const;

                    /**
                     * 判断参数 EO 是否已赋值
                     * @return EO 是否已赋值
                     * 
                     */
                    bool EOHasBeenSet() const;

                private:

                    /**
                     * <p>前置校验总开关。所有启用的检查项均为 PASS 或 SKIPPED 时为 true，任一检查项为 FAIL 时为 false。当为 false 时，前端应根据各 CheckItem 的 Code 精确渲染错误提示和操作指引；当为 true 时可继续调用 CreateHTTPServiceRoute 完成创建。 示例值：false</p>
                     */
                    bool m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * <p>域名归属权校验结果</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_ownership;
                    bool m_ownershipHasBeenSet;

                    /**
                     * <p>证书校验结果；CertId 为空时 Status=SKIPPED</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * <p>域名/路径数量配额校验结果</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * <p>同域名下路由路径冲突校验结果</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_routeConflict;
                    bool m_routeConflictHasBeenSet;

                    /**
                     * <p>域名被其他环境占用校验结果</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_domainConflict;
                    bool m_domainConflictHasBeenSet;

                    /**
                     * <p>内部域名且非内部账号校验结果</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_internalAccount;
                    bool m_internalAccountHasBeenSet;

                    /**
                     * <p>域名黑名单校验结果</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_blacklist;
                    bool m_blacklistHasBeenSet;

                    /**
                     * <p>AccessType=CDN 时 CDN 资源存在性 / 状态校验结果（含 ICP 未备案的提示）</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_cDNResource;
                    bool m_cDNResourceHasBeenSet;

                    /**
                     * <p>AccessType=EO 时的 EdgeOne 预检结果（域名冲突/备案/归属权）</p>
                     */
                    VerifyHTTPServiceRouteCheckItem m_eO;
                    bool m_eOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VERIFYHTTPSERVICEROUTERESPONSE_H_
