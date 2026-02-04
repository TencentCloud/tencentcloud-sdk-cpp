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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_EXPOSENETWORKCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_EXPOSENETWORKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/SSHConfig.h>
#include <tencentcloud/tione/v20211111/model/ExposePortConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 暴露网络配置
                */
                class ExposeNetworkConfig : public AbstractModel
                {
                public:
                    ExposeNetworkConfig();
                    ~ExposeNetworkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ssh配置
                     * @return SSHConfig ssh配置
                     * 
                     */
                    SSHConfig GetSSHConfig() const;

                    /**
                     * 设置ssh配置
                     * @param _sSHConfig ssh配置
                     * 
                     */
                    void SetSSHConfig(const SSHConfig& _sSHConfig);

                    /**
                     * 判断参数 SSHConfig 是否已赋值
                     * @return SSHConfig 是否已赋值
                     * 
                     */
                    bool SSHConfigHasBeenSet() const;

                    /**
                     * 获取容器端口暴露到公网配置
                     * @return ExposePortConfig 容器端口暴露到公网配置
                     * 
                     */
                    ExposePortConfig GetExposePortConfig() const;

                    /**
                     * 设置容器端口暴露到公网配置
                     * @param _exposePortConfig 容器端口暴露到公网配置
                     * 
                     */
                    void SetExposePortConfig(const ExposePortConfig& _exposePortConfig);

                    /**
                     * 判断参数 ExposePortConfig 是否已赋值
                     * @return ExposePortConfig 是否已赋值
                     * 
                     */
                    bool ExposePortConfigHasBeenSet() const;

                private:

                    /**
                     * ssh配置
                     */
                    SSHConfig m_sSHConfig;
                    bool m_sSHConfigHasBeenSet;

                    /**
                     * 容器端口暴露到公网配置
                     */
                    ExposePortConfig m_exposePortConfig;
                    bool m_exposePortConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_EXPOSENETWORKCONFIG_H_
