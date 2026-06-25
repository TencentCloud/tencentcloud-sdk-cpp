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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSESSIONCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSESSIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWRedisConfig.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 云原生网关MCP会话配置
                */
                class AIGWMCPSessionConfig : public AbstractModel
                {
                public:
                    AIGWMCPSessionConfig();
                    ~AIGWMCPSessionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>会话存储类型</p><p>枚举值：</p><ul><li>memory： 内存</li><li>redis： redis</li></ul>
                     * @return SessionStorage <p>会话存储类型</p><p>枚举值：</p><ul><li>memory： 内存</li><li>redis： redis</li></ul>
                     * 
                     */
                    std::string GetSessionStorage() const;

                    /**
                     * 设置<p>会话存储类型</p><p>枚举值：</p><ul><li>memory： 内存</li><li>redis： redis</li></ul>
                     * @param _sessionStorage <p>会话存储类型</p><p>枚举值：</p><ul><li>memory： 内存</li><li>redis： redis</li></ul>
                     * 
                     */
                    void SetSessionStorage(const std::string& _sessionStorage);

                    /**
                     * 判断参数 SessionStorage 是否已赋值
                     * @return SessionStorage 是否已赋值
                     * 
                     */
                    bool SessionStorageHasBeenSet() const;

                    /**
                     * 获取<p>Redis配置</p>
                     * @return RedisConfig <p>Redis配置</p>
                     * 
                     */
                    AIGWRedisConfig GetRedisConfig() const;

                    /**
                     * 设置<p>Redis配置</p>
                     * @param _redisConfig <p>Redis配置</p>
                     * 
                     */
                    void SetRedisConfig(const AIGWRedisConfig& _redisConfig);

                    /**
                     * 判断参数 RedisConfig 是否已赋值
                     * @return RedisConfig 是否已赋值
                     * 
                     */
                    bool RedisConfigHasBeenSet() const;

                private:

                    /**
                     * <p>会话存储类型</p><p>枚举值：</p><ul><li>memory： 内存</li><li>redis： redis</li></ul>
                     */
                    std::string m_sessionStorage;
                    bool m_sessionStorageHasBeenSet;

                    /**
                     * <p>Redis配置</p>
                     */
                    AIGWRedisConfig m_redisConfig;
                    bool m_redisConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSESSIONCONFIG_H_
