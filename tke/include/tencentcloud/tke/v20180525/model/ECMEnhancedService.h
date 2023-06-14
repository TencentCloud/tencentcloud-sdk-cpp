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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ECMENHANCEDSERVICE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ECMENHANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ECMRunMonitorServiceEnabled.h>
#include <tencentcloud/tke/v20180525/model/ECMRunSecurityServiceEnabled.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ECM增强服务
                */
                class ECMEnhancedService : public AbstractModel
                {
                public:
                    ECMEnhancedService();
                    ~ECMEnhancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启云监控服务
                     * @return SecurityService 是否开启云监控服务
                     * 
                     */
                    ECMRunMonitorServiceEnabled GetSecurityService() const;

                    /**
                     * 设置是否开启云监控服务
                     * @param _securityService 是否开启云监控服务
                     * 
                     */
                    void SetSecurityService(const ECMRunMonitorServiceEnabled& _securityService);

                    /**
                     * 判断参数 SecurityService 是否已赋值
                     * @return SecurityService 是否已赋值
                     * 
                     */
                    bool SecurityServiceHasBeenSet() const;

                    /**
                     * 获取是否开启云镜服务
                     * @return MonitorService 是否开启云镜服务
                     * 
                     */
                    ECMRunSecurityServiceEnabled GetMonitorService() const;

                    /**
                     * 设置是否开启云镜服务
                     * @param _monitorService 是否开启云镜服务
                     * 
                     */
                    void SetMonitorService(const ECMRunSecurityServiceEnabled& _monitorService);

                    /**
                     * 判断参数 MonitorService 是否已赋值
                     * @return MonitorService 是否已赋值
                     * 
                     */
                    bool MonitorServiceHasBeenSet() const;

                private:

                    /**
                     * 是否开启云监控服务
                     */
                    ECMRunMonitorServiceEnabled m_securityService;
                    bool m_securityServiceHasBeenSet;

                    /**
                     * 是否开启云镜服务
                     */
                    ECMRunSecurityServiceEnabled m_monitorService;
                    bool m_monitorServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ECMENHANCEDSERVICE_H_
