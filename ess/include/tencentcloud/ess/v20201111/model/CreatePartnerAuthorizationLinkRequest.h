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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPARTNERAUTHORIZATIONLINKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPARTNERAUTHORIZATIONLINKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/CallbackInfo.h>
#include <tencentcloud/ess/v20201111/model/ProxyOrganizationInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePartnerAuthorizationLink请求参数结构体
                */
                class CreatePartnerAuthorizationLinkRequest : public AbstractModel
                {
                public:
                    CreatePartnerAuthorizationLinkRequest();
                    ~CreatePartnerAuthorizationLinkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取腾讯电子签平台给生态集成方分配的**生态集成业务标识**，
<font color="red">**此生态集成业务标识需要提前联系产品经理配置**。</font>
                     * @return BusinessId 腾讯电子签平台给生态集成方分配的**生态集成业务标识**，
<font color="red">**此生态集成业务标识需要提前联系产品经理配置**。</font>
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置腾讯电子签平台给生态集成方分配的**生态集成业务标识**，
<font color="red">**此生态集成业务标识需要提前联系产品经理配置**。</font>
                     * @param _businessId 腾讯电子签平台给生态集成方分配的**生态集成业务标识**，
<font color="red">**此生态集成业务标识需要提前联系产品经理配置**。</font>
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取合作方企业在腾讯电子签注册企业后生成的企业id，需要合作方企业登录
<a href="https://qian.tencent.com/console/company-settings/company-center" target="_blank">电子签控制台</a>获取

![image](https://qcloudimg.tencent-cloud.cn/raw/20ce774cf8118b9f3742b8519ef935db.png)

                     * @return PartnerOrganizationId 合作方企业在腾讯电子签注册企业后生成的企业id，需要合作方企业登录
<a href="https://qian.tencent.com/console/company-settings/company-center" target="_blank">电子签控制台</a>获取

![image](https://qcloudimg.tencent-cloud.cn/raw/20ce774cf8118b9f3742b8519ef935db.png)

                     * 
                     */
                    std::string GetPartnerOrganizationId() const;

                    /**
                     * 设置合作方企业在腾讯电子签注册企业后生成的企业id，需要合作方企业登录
<a href="https://qian.tencent.com/console/company-settings/company-center" target="_blank">电子签控制台</a>获取

![image](https://qcloudimg.tencent-cloud.cn/raw/20ce774cf8118b9f3742b8519ef935db.png)

                     * @param _partnerOrganizationId 合作方企业在腾讯电子签注册企业后生成的企业id，需要合作方企业登录
<a href="https://qian.tencent.com/console/company-settings/company-center" target="_blank">电子签控制台</a>获取

![image](https://qcloudimg.tencent-cloud.cn/raw/20ce774cf8118b9f3742b8519ef935db.png)

                     * 
                     */
                    void SetPartnerOrganizationId(const std::string& _partnerOrganizationId);

                    /**
                     * 判断参数 PartnerOrganizationId 是否已赋值
                     * @return PartnerOrganizationId 是否已赋值
                     * 
                     */
                    bool PartnerOrganizationIdHasBeenSet() const;

                    /**
                     * 获取第三方应用的配置信息。
其中包括 回调地址，加密KEY等信息。
                     * @return ApplicationInfo 第三方应用的配置信息。
其中包括 回调地址，加密KEY等信息。
                     * 
                     */
                    CallbackInfo GetApplicationInfo() const;

                    /**
                     * 设置第三方应用的配置信息。
其中包括 回调地址，加密KEY等信息。
                     * @param _applicationInfo 第三方应用的配置信息。
其中包括 回调地址，加密KEY等信息。
                     * 
                     */
                    void SetApplicationInfo(const CallbackInfo& _applicationInfo);

                    /**
                     * 判断参数 ApplicationInfo 是否已赋值
                     * @return ApplicationInfo 是否已赋值
                     * 
                     */
                    bool ApplicationInfoHasBeenSet() const;

                    /**
                     * 获取第三方应用下企业用户信息。
其中包括企业的OrganizationOpenId和超管的UserOpenId。
具体含义请参考结构体解释
                     * @return ProxyOrganizationInfo 第三方应用下企业用户信息。
其中包括企业的OrganizationOpenId和超管的UserOpenId。
具体含义请参考结构体解释
                     * 
                     */
                    ProxyOrganizationInfo GetProxyOrganizationInfo() const;

                    /**
                     * 设置第三方应用下企业用户信息。
其中包括企业的OrganizationOpenId和超管的UserOpenId。
具体含义请参考结构体解释
                     * @param _proxyOrganizationInfo 第三方应用下企业用户信息。
其中包括企业的OrganizationOpenId和超管的UserOpenId。
具体含义请参考结构体解释
                     * 
                     */
                    void SetProxyOrganizationInfo(const ProxyOrganizationInfo& _proxyOrganizationInfo);

                    /**
                     * 判断参数 ProxyOrganizationInfo 是否已赋值
                     * @return ProxyOrganizationInfo 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationInfoHasBeenSet() const;

                    /**
                     * 获取若未填写，则会创建一个生态集成应用。
若填写， 则必须是生态集成企业给合作方企业通过此接口**CreatePartnerAuthorizationLink**创建的应用号。
应用号可以从下图位置获取。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)
                     * @return PartnerApplicationId 若未填写，则会创建一个生态集成应用。
若填写， 则必须是生态集成企业给合作方企业通过此接口**CreatePartnerAuthorizationLink**创建的应用号。
应用号可以从下图位置获取。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)
                     * 
                     */
                    std::string GetPartnerApplicationId() const;

                    /**
                     * 设置若未填写，则会创建一个生态集成应用。
若填写， 则必须是生态集成企业给合作方企业通过此接口**CreatePartnerAuthorizationLink**创建的应用号。
应用号可以从下图位置获取。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)
                     * @param _partnerApplicationId 若未填写，则会创建一个生态集成应用。
若填写， 则必须是生态集成企业给合作方企业通过此接口**CreatePartnerAuthorizationLink**创建的应用号。
应用号可以从下图位置获取。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)
                     * 
                     */
                    void SetPartnerApplicationId(const std::string& _partnerApplicationId);

                    /**
                     * 判断参数 PartnerApplicationId 是否已赋值
                     * @return PartnerApplicationId 是否已赋值
                     * 
                     */
                    bool PartnerApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 腾讯电子签平台给生态集成方分配的**生态集成业务标识**，
<font color="red">**此生态集成业务标识需要提前联系产品经理配置**。</font>
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 合作方企业在腾讯电子签注册企业后生成的企业id，需要合作方企业登录
<a href="https://qian.tencent.com/console/company-settings/company-center" target="_blank">电子签控制台</a>获取

![image](https://qcloudimg.tencent-cloud.cn/raw/20ce774cf8118b9f3742b8519ef935db.png)

                     */
                    std::string m_partnerOrganizationId;
                    bool m_partnerOrganizationIdHasBeenSet;

                    /**
                     * 第三方应用的配置信息。
其中包括 回调地址，加密KEY等信息。
                     */
                    CallbackInfo m_applicationInfo;
                    bool m_applicationInfoHasBeenSet;

                    /**
                     * 第三方应用下企业用户信息。
其中包括企业的OrganizationOpenId和超管的UserOpenId。
具体含义请参考结构体解释
                     */
                    ProxyOrganizationInfo m_proxyOrganizationInfo;
                    bool m_proxyOrganizationInfoHasBeenSet;

                    /**
                     * 若未填写，则会创建一个生态集成应用。
若填写， 则必须是生态集成企业给合作方企业通过此接口**CreatePartnerAuthorizationLink**创建的应用号。
应用号可以从下图位置获取。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)
                     */
                    std::string m_partnerApplicationId;
                    bool m_partnerApplicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPARTNERAUTHORIZATIONLINKREQUEST_H_
