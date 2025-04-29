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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_CREATEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * CreateApplication请求参数结构体
                */
                class CreateApplicationRequest : public AbstractModel
                {
                public:
                    CreateApplicationRequest();
                    ~CreateApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要制作自定义应用的HAI实例ID
                     * @return InstanceId 需要制作自定义应用的HAI实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要制作自定义应用的HAI实例ID
                     * @param _instanceId 需要制作自定义应用的HAI实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取自定义应用的应用名称
                     * @return ApplicationName 自定义应用的应用名称
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置自定义应用的应用名称
                     * @param _applicationName 自定义应用的应用名称
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取自定义应用的描述
                     * @return ApplicationDescription 自定义应用的描述
                     * 
                     */
                    std::string GetApplicationDescription() const;

                    /**
                     * 设置自定义应用的描述
                     * @param _applicationDescription 自定义应用的描述
                     * 
                     */
                    void SetApplicationDescription(const std::string& _applicationDescription);

                    /**
                     * 判断参数 ApplicationDescription 是否已赋值
                     * @return ApplicationDescription 是否已赋值
                     * 
                     */
                    bool ApplicationDescriptionHasBeenSet() const;

                private:

                    /**
                     * 需要制作自定义应用的HAI实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自定义应用的应用名称
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 自定义应用的描述
                     */
                    std::string m_applicationDescription;
                    bool m_applicationDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CREATEAPPLICATIONREQUEST_H_
