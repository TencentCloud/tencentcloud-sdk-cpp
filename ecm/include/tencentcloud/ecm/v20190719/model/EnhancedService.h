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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ENHANCEDSERVICE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ENHANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/RunSecurityServiceEnabled.h>
#include <tencentcloud/ecm/v20190719/model/RunMonitorServiceEnabled.h>
#include <tencentcloud/ecm/v20190719/model/RunEIPDirectServiceEnabled.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 增强服务
                */
                class EnhancedService : public AbstractModel
                {
                public:
                    EnhancedService();
                    ~EnhancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启云镜服务。
                     * @return SecurityService 是否开启云镜服务。
                     * 
                     */
                    RunSecurityServiceEnabled GetSecurityService() const;

                    /**
                     * 设置是否开启云镜服务。
                     * @param _securityService 是否开启云镜服务。
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
                     * 获取是否开启云监控服务。
                     * @return MonitorService 是否开启云监控服务。
                     * 
                     */
                    RunMonitorServiceEnabled GetMonitorService() const;

                    /**
                     * 设置是否开启云监控服务。
                     * @param _monitorService 是否开启云监控服务。
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
                     * 获取是否开通IP直通。若不指定该参数，则Linux镜像默认开通，windows镜像暂不支持IP直通。
                     * @return EIPDirectService 是否开通IP直通。若不指定该参数，则Linux镜像默认开通，windows镜像暂不支持IP直通。
                     * 
                     */
                    RunEIPDirectServiceEnabled GetEIPDirectService() const;

                    /**
                     * 设置是否开通IP直通。若不指定该参数，则Linux镜像默认开通，windows镜像暂不支持IP直通。
                     * @param _eIPDirectService 是否开通IP直通。若不指定该参数，则Linux镜像默认开通，windows镜像暂不支持IP直通。
                     * 
                     */
                    void SetEIPDirectService(const RunEIPDirectServiceEnabled& _eIPDirectService);

                    /**
                     * 判断参数 EIPDirectService 是否已赋值
                     * @return EIPDirectService 是否已赋值
                     * 
                     */
                    bool EIPDirectServiceHasBeenSet() const;

                private:

                    /**
                     * 是否开启云镜服务。
                     */
                    RunSecurityServiceEnabled m_securityService;
                    bool m_securityServiceHasBeenSet;

                    /**
                     * 是否开启云监控服务。
                     */
                    RunMonitorServiceEnabled m_monitorService;
                    bool m_monitorServiceHasBeenSet;

                    /**
                     * 是否开通IP直通。若不指定该参数，则Linux镜像默认开通，windows镜像暂不支持IP直通。
                     */
                    RunEIPDirectServiceEnabled m_eIPDirectService;
                    bool m_eIPDirectServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ENHANCEDSERVICE_H_
