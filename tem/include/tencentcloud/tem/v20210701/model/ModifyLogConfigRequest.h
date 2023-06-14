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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYLOGCONFIGREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYLOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/LogConfig.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * ModifyLogConfig请求参数结构体
                */
                class ModifyLogConfigRequest : public AbstractModel
                {
                public:
                    ModifyLogConfigRequest();
                    ~ModifyLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 ID
                     * @return EnvironmentId 环境 ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境 ID
                     * @param _environmentId 环境 ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取配置名
                     * @return Name 配置名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名
                     * @param _name 配置名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取日志收集配置信息
                     * @return Data 日志收集配置信息
                     * 
                     */
                    LogConfig GetData() const;

                    /**
                     * 设置日志收集配置信息
                     * @param _data 日志收集配置信息
                     * 
                     */
                    void SetData(const LogConfig& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取应用 ID
                     * @return ApplicationId 应用 ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用 ID
                     * @param _applicationId 应用 ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 环境 ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 配置名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志收集配置信息
                     */
                    LogConfig m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 应用 ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_MODIFYLOGCONFIGREQUEST_H_
