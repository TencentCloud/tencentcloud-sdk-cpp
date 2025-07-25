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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONFIGFILESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONFIGFILESREQUEST_H_

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
                * ModifyConfigFiles请求参数结构体
                */
                class ModifyConfigFilesRequest : public AbstractModel
                {
                public:
                    ModifyConfigFilesRequest();
                    ~ModifyConfigFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ins-df344df5	
                     * @return InstanceId ins-df344df5	
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ins-df344df5	
                     * @param _instanceId ins-df344df5	
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
                     * 获取配置文件列表
                     * @return ConfigFile 配置文件列表
                     * 
                     */
                    ConfigFile GetConfigFile() const;

                    /**
                     * 设置配置文件列表
                     * @param _configFile 配置文件列表
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
                     * ins-df344df5	
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置文件列表
                     */
                    ConfigFile m_configFile;
                    bool m_configFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCONFIGFILESREQUEST_H_
