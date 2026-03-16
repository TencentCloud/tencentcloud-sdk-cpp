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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYPARTNERAUTHORIZATIONREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYPARTNERAUTHORIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/CallbackInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * ModifyPartnerAuthorization请求参数结构体
                */
                class ModifyPartnerAuthorizationRequest : public AbstractModel
                {
                public:
                    ModifyPartnerAuthorizationRequest();
                    ~ModifyPartnerAuthorizationRequest() = default;
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
                     * 获取腾讯电子签平台分配的生态集成业务的**业务标识**，**需要联系接入产品经理提供**。
                     * @return BusinessId 腾讯电子签平台分配的生态集成业务的**业务标识**，**需要联系接入产品经理提供**。
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置腾讯电子签平台分配的生态集成业务的**业务标识**，**需要联系接入产品经理提供**。
                     * @param _businessId 腾讯电子签平台分配的生态集成业务的**业务标识**，**需要联系接入产品经理提供**。
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
                     * 获取合作方企业通过集成方创建的应用id, 必须与业务标记（Business）保持对应。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)

                     * @return PartnerApplicationId 合作方企业通过集成方创建的应用id, 必须与业务标记（Business）保持对应。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)

                     * 
                     */
                    std::string GetPartnerApplicationId() const;

                    /**
                     * 设置合作方企业通过集成方创建的应用id, 必须与业务标记（Business）保持对应。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)

                     * @param _partnerApplicationId 合作方企业通过集成方创建的应用id, 必须与业务标记（Business）保持对应。
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

                    /**
                     * 获取第三方应用的配置信息。其中包括 回调地址，加密KEY等信息。
执行成功后会覆盖掉对应的第三方应用的回调相关配置。
                     * @return ApplicationInfo 第三方应用的配置信息。其中包括 回调地址，加密KEY等信息。
执行成功后会覆盖掉对应的第三方应用的回调相关配置。
                     * 
                     */
                    CallbackInfo GetApplicationInfo() const;

                    /**
                     * 设置第三方应用的配置信息。其中包括 回调地址，加密KEY等信息。
执行成功后会覆盖掉对应的第三方应用的回调相关配置。
                     * @param _applicationInfo 第三方应用的配置信息。其中包括 回调地址，加密KEY等信息。
执行成功后会覆盖掉对应的第三方应用的回调相关配置。
                     * 
                     */
                    void SetApplicationInfo(const CallbackInfo& _applicationInfo);

                    /**
                     * 判断参数 ApplicationInfo 是否已赋值
                     * @return ApplicationInfo 是否已赋值
                     * 
                     */
                    bool ApplicationInfoHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。<br/>注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 腾讯电子签平台分配的生态集成业务的**业务标识**，**需要联系接入产品经理提供**。
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 合作方企业通过集成方创建的应用id, 必须与业务标记（Business）保持对应。
![image](https://qcloudimg.tencent-cloud.cn/raw/9bc4ee2bd5972035d12033608df157c9.png)

                     */
                    std::string m_partnerApplicationId;
                    bool m_partnerApplicationIdHasBeenSet;

                    /**
                     * 第三方应用的配置信息。其中包括 回调地址，加密KEY等信息。
执行成功后会覆盖掉对应的第三方应用的回调相关配置。
                     */
                    CallbackInfo m_applicationInfo;
                    bool m_applicationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYPARTNERAUTHORIZATIONREQUEST_H_
