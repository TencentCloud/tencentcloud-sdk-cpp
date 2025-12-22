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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_SIMPLEVERSION_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_SIMPLEVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 删除版本时需要的简化信息
                */
                class SimpleVersion : public AbstractModel
                {
                public:
                    SimpleVersion();
                    ~SimpleVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要删除版本的环境 Id
                     * @return EnvId 要删除版本的环境 Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置要删除版本的环境 Id
                     * @param _envId 要删除版本的环境 Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取要删除版本的服务名
                     * @return ServerName 要删除版本的服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置要删除版本的服务名
                     * @param _serverName 要删除版本的服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取要删除版本的版本名
                     * @return VersionName 要删除版本的版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置要删除版本的版本名
                     * @param _versionName 要删除版本的版本名
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                private:

                    /**
                     * 要删除版本的环境 Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 要删除版本的服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 要删除版本的版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SIMPLEVERSION_H_
