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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDINSTANCEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AppInfo.h>
#include <tencentcloud/ms/v20180408/model/ServiceInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateShieldInstance请求参数结构体
                */
                class CreateShieldInstanceRequest : public AbstractModel
                {
                public:
                    CreateShieldInstanceRequest();
                    ~CreateShieldInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待加固的应用信息
                     * @return AppInfo 待加固的应用信息
                     * 
                     */
                    AppInfo GetAppInfo() const;

                    /**
                     * 设置待加固的应用信息
                     * @param _appInfo 待加固的应用信息
                     * 
                     */
                    void SetAppInfo(const AppInfo& _appInfo);

                    /**
                     * 判断参数 AppInfo 是否已赋值
                     * @return AppInfo 是否已赋值
                     * 
                     */
                    bool AppInfoHasBeenSet() const;

                    /**
                     * 获取加固服务信息
                     * @return ServiceInfo 加固服务信息
                     * 
                     */
                    ServiceInfo GetServiceInfo() const;

                    /**
                     * 设置加固服务信息
                     * @param _serviceInfo 加固服务信息
                     * 
                     */
                    void SetServiceInfo(const ServiceInfo& _serviceInfo);

                    /**
                     * 判断参数 ServiceInfo 是否已赋值
                     * @return ServiceInfo 是否已赋值
                     * 
                     */
                    bool ServiceInfoHasBeenSet() const;

                private:

                    /**
                     * 待加固的应用信息
                     */
                    AppInfo m_appInfo;
                    bool m_appInfoHasBeenSet;

                    /**
                     * 加固服务信息
                     */
                    ServiceInfo m_serviceInfo;
                    bool m_serviceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATESHIELDINSTANCEREQUEST_H_
