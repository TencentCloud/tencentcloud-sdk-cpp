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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENHANCEDSERVICE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENHANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RunSecurityServiceEnabled.h>
#include <tencentcloud/tke/v20180525/model/RunMonitorServiceEnabled.h>
#include <tencentcloud/tke/v20180525/model/RunAutomationServiceEnabled.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 描述了实例的增强服务启用情况与其设置，如云安全，云监控等实例 Agent
                */
                class EnhancedService : public AbstractModel
                {
                public:
                    EnhancedService();
                    ~EnhancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开启云安全服务。若不指定该参数，则默认开启云安全服务。
                     * @return SecurityService 开启云安全服务。若不指定该参数，则默认开启云安全服务。
                     * 
                     */
                    RunSecurityServiceEnabled GetSecurityService() const;

                    /**
                     * 设置开启云安全服务。若不指定该参数，则默认开启云安全服务。
                     * @param _securityService 开启云安全服务。若不指定该参数，则默认开启云安全服务。
                     * 
                     */
                    void SetSecurityService(const RunSecurityServiceEnabled& _securityService);

                    /**
                     * 判断参数 SecurityService 是否已赋值
                     * @return SecurityService 是否已赋值
                     * 
                     */
                    bool SecurityServiceHasBeenSet() const;

                    /**
                     * 获取开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     * @return MonitorService 开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     * 
                     */
                    RunMonitorServiceEnabled GetMonitorService() const;

                    /**
                     * 设置开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     * @param _monitorService 开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     * 
                     */
                    void SetMonitorService(const RunMonitorServiceEnabled& _monitorService);

                    /**
                     * 判断参数 MonitorService 是否已赋值
                     * @return MonitorService 是否已赋值
                     * 
                     */
                    bool MonitorServiceHasBeenSet() const;

                    /**
                     * 获取开启云自动化助手服务（TencentCloud Automation Tools，TAT）。若不指定该参数，则公共镜像默认开启云自动化助手服务，其他镜像默认不开启云自动化助手服务。
                     * @return AutomationService 开启云自动化助手服务（TencentCloud Automation Tools，TAT）。若不指定该参数，则公共镜像默认开启云自动化助手服务，其他镜像默认不开启云自动化助手服务。
                     * 
                     */
                    RunAutomationServiceEnabled GetAutomationService() const;

                    /**
                     * 设置开启云自动化助手服务（TencentCloud Automation Tools，TAT）。若不指定该参数，则公共镜像默认开启云自动化助手服务，其他镜像默认不开启云自动化助手服务。
                     * @param _automationService 开启云自动化助手服务（TencentCloud Automation Tools，TAT）。若不指定该参数，则公共镜像默认开启云自动化助手服务，其他镜像默认不开启云自动化助手服务。
                     * 
                     */
                    void SetAutomationService(const RunAutomationServiceEnabled& _automationService);

                    /**
                     * 判断参数 AutomationService 是否已赋值
                     * @return AutomationService 是否已赋值
                     * 
                     */
                    bool AutomationServiceHasBeenSet() const;

                private:

                    /**
                     * 开启云安全服务。若不指定该参数，则默认开启云安全服务。
                     */
                    RunSecurityServiceEnabled m_securityService;
                    bool m_securityServiceHasBeenSet;

                    /**
                     * 开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     */
                    RunMonitorServiceEnabled m_monitorService;
                    bool m_monitorServiceHasBeenSet;

                    /**
                     * 开启云自动化助手服务（TencentCloud Automation Tools，TAT）。若不指定该参数，则公共镜像默认开启云自动化助手服务，其他镜像默认不开启云自动化助手服务。
                     */
                    RunAutomationServiceEnabled m_automationService;
                    bool m_automationServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENHANCEDSERVICE_H_
