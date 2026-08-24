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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_ENHANCEDSERVICE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_ENHANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/RunSecurityServiceEnabled.h>
#include <tencentcloud/bdrc/v20260330/model/AutomationServiceEnabled.h>
#include <tencentcloud/bdrc/v20260330/model/BasicServicesSettings.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
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
                    RunSecurityServiceEnabled GetMonitorService() const;

                    /**
                     * 设置开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     * @param _monitorService 开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     * 
                     */
                    void SetMonitorService(const RunSecurityServiceEnabled& _monitorService);

                    /**
                     * 判断参数 MonitorService 是否已赋值
                     * @return MonitorService 是否已赋值
                     * 
                     */
                    bool MonitorServiceHasBeenSet() const;

                    /**
                     * 获取安装 tat-agent。若不指定该参数，则默认逻辑与 CVM 控制台一致：境外地域不安装、境内非 GPU 机型默认安装、境内 GPU 机型默认不安装。
                     * @return AutomationService 安装 tat-agent。若不指定该参数，则默认逻辑与 CVM 控制台一致：境外地域不安装、境内非 GPU 机型默认安装、境内 GPU 机型默认不安装。
                     * 
                     */
                    AutomationServiceEnabled GetAutomationService() const;

                    /**
                     * 设置安装 tat-agent。若不指定该参数，则默认逻辑与 CVM 控制台一致：境外地域不安装、境内非 GPU 机型默认安装、境内 GPU 机型默认不安装。
                     * @param _automationService 安装 tat-agent。若不指定该参数，则默认逻辑与 CVM 控制台一致：境外地域不安装、境内非 GPU 机型默认安装、境内 GPU 机型默认不安装。
                     * 
                     */
                    void SetAutomationService(const AutomationServiceEnabled& _automationService);

                    /**
                     * 判断参数 AutomationService 是否已赋值
                     * @return AutomationService 是否已赋值
                     * 
                     */
                    bool AutomationServiceHasBeenSet() const;

                    /**
                     * 获取开启基础服务。
                     * @return BasicService 开启基础服务。
                     * 
                     */
                    BasicServicesSettings GetBasicService() const;

                    /**
                     * 设置开启基础服务。
                     * @param _basicService 开启基础服务。
                     * 
                     */
                    void SetBasicService(const BasicServicesSettings& _basicService);

                    /**
                     * 判断参数 BasicService 是否已赋值
                     * @return BasicService 是否已赋值
                     * 
                     */
                    bool BasicServiceHasBeenSet() const;

                private:

                    /**
                     * 开启云安全服务。若不指定该参数，则默认开启云安全服务。
                     */
                    RunSecurityServiceEnabled m_securityService;
                    bool m_securityServiceHasBeenSet;

                    /**
                     * 开启云监控服务。若不指定该参数，则默认开启云监控服务。
                     */
                    RunSecurityServiceEnabled m_monitorService;
                    bool m_monitorServiceHasBeenSet;

                    /**
                     * 安装 tat-agent。若不指定该参数，则默认逻辑与 CVM 控制台一致：境外地域不安装、境内非 GPU 机型默认安装、境内 GPU 机型默认不安装。
                     */
                    AutomationServiceEnabled m_automationService;
                    bool m_automationServiceHasBeenSet;

                    /**
                     * 开启基础服务。
                     */
                    BasicServicesSettings m_basicService;
                    bool m_basicServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_ENHANCEDSERVICE_H_
