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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYVERSIONINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * TDSQL-C MySQL支持的proxy版本信息
                */
                class ProxyVersionInfo : public AbstractModel
                {
                public:
                    ProxyVersionInfo();
                    ~ProxyVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取proxy版本号
                     * @return ProxyVersion proxy版本号
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 设置proxy版本号
                     * @param _proxyVersion proxy版本号
                     * 
                     */
                    void SetProxyVersion(const std::string& _proxyVersion);

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取版本描述：GA:稳定版  BETA:尝鲜版，DEPRECATED:过旧，
                     * @return ProxyVersionType 版本描述：GA:稳定版  BETA:尝鲜版，DEPRECATED:过旧，
                     * 
                     */
                    std::string GetProxyVersionType() const;

                    /**
                     * 设置版本描述：GA:稳定版  BETA:尝鲜版，DEPRECATED:过旧，
                     * @param _proxyVersionType 版本描述：GA:稳定版  BETA:尝鲜版，DEPRECATED:过旧，
                     * 
                     */
                    void SetProxyVersionType(const std::string& _proxyVersionType);

                    /**
                     * 判断参数 ProxyVersionType 是否已赋值
                     * @return ProxyVersionType 是否已赋值
                     * 
                     */
                    bool ProxyVersionTypeHasBeenSet() const;

                private:

                    /**
                     * proxy版本号
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * 版本描述：GA:稳定版  BETA:尝鲜版，DEPRECATED:过旧，
                     */
                    std::string m_proxyVersionType;
                    bool m_proxyVersionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYVERSIONINFO_H_
