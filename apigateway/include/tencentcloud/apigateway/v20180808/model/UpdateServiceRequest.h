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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * UpdateService请求参数结构体
                */
                class UpdateServiceRequest : public AbstractModel
                {
                public:
                    UpdateServiceRequest();
                    ~UpdateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待切换服务的唯一 Id。
                     * @return ServiceId 待切换服务的唯一 Id。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待切换服务的唯一 Id。
                     * @param _serviceId 待切换服务的唯一 Id。
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
                     * 获取待切换的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * @return EnvironmentName 待切换的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置待切换的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * @param _environmentName 待切换的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取切换的版本号。
                     * @return VersionName 切换的版本号。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置切换的版本号。
                     * @param _versionName 切换的版本号。
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取本次的切换描述。
                     * @return UpdateDesc 本次的切换描述。
                     * 
                     */
                    std::string GetUpdateDesc() const;

                    /**
                     * 设置本次的切换描述。
                     * @param _updateDesc 本次的切换描述。
                     * 
                     */
                    void SetUpdateDesc(const std::string& _updateDesc);

                    /**
                     * 判断参数 UpdateDesc 是否已赋值
                     * @return UpdateDesc 是否已赋值
                     * 
                     */
                    bool UpdateDescHasBeenSet() const;

                private:

                    /**
                     * 待切换服务的唯一 Id。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 待切换的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 切换的版本号。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 本次的切换描述。
                     */
                    std::string m_updateDesc;
                    bool m_updateDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATESERVICEREQUEST_H_
