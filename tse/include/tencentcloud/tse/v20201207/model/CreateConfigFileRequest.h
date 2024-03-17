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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATECONFIGFILEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATECONFIGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFile.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateConfigFile请求参数结构体
                */
                class CreateConfigFileRequest : public AbstractModel
                {
                public:
                    CreateConfigFileRequest();
                    ~CreateConfigFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TSE 实例id
                     * @return InstanceId TSE 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TSE 实例id
                     * @param _instanceId TSE 实例id
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
                     * 获取配置文件列表详情
                     * @return ConfigFile 配置文件列表详情
                     * 
                     */
                    ConfigFile GetConfigFile() const;

                    /**
                     * 设置配置文件列表详情
                     * @param _configFile 配置文件列表详情
                     * 
                     */
                    void SetConfigFile(const ConfigFile& _configFile);

                    /**
                     * 判断参数 ConfigFile 是否已赋值
                     * @return ConfigFile 是否已赋值
                     * 
                     */
                    bool ConfigFileHasBeenSet() const;

                private:

                    /**
                     * TSE 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置文件列表详情
                     */
                    ConfigFile m_configFile;
                    bool m_configFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATECONFIGFILEREQUEST_H_
