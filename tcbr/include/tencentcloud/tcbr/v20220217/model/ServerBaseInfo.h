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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASEINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASEINFO_H_

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
                * 服务基本信息
                */
                class ServerBaseInfo : public AbstractModel
                {
                public:
                    ServerBaseInfo();
                    ~ServerBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param ServerName 服务名
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取默认服务域名
                     * @return DefaultDomainName 默认服务域名
                     */
                    std::string GetDefaultDomainName() const;

                    /**
                     * 设置默认服务域名
                     * @param DefaultDomainName 默认服务域名
                     */
                    void SetDefaultDomainName(const std::string& _defaultDomainName);

                    /**
                     * 判断参数 DefaultDomainName 是否已赋值
                     * @return DefaultDomainName 是否已赋值
                     */
                    bool DefaultDomainNameHasBeenSet() const;

                    /**
                     * 获取自定义域名
                     * @return CustomDomainName 自定义域名
                     */
                    std::string GetCustomDomainName() const;

                    /**
                     * 设置自定义域名
                     * @param CustomDomainName 自定义域名
                     */
                    void SetCustomDomainName(const std::string& _customDomainName);

                    /**
                     * 判断参数 CustomDomainName 是否已赋值
                     * @return CustomDomainName 是否已赋值
                     */
                    bool CustomDomainNameHasBeenSet() const;

                    /**
                     * 获取服务状态：running/deploying/deploy_failed
                     * @return Status 服务状态：running/deploying/deploy_failed
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置服务状态：running/deploying/deploy_failed
                     * @param Status 服务状态：running/deploying/deploy_failed
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取公网访问类型
                     * @return AccessTypes 公网访问类型
                     */
                    std::vector<std::string> GetAccessTypes() const;

                    /**
                     * 设置公网访问类型
                     * @param AccessTypes 公网访问类型
                     */
                    void SetAccessTypes(const std::vector<std::string>& _accessTypes);

                    /**
                     * 判断参数 AccessTypes 是否已赋值
                     * @return AccessTypes 是否已赋值
                     */
                    bool AccessTypesHasBeenSet() const;

                private:

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 默认服务域名
                     */
                    std::string m_defaultDomainName;
                    bool m_defaultDomainNameHasBeenSet;

                    /**
                     * 自定义域名
                     */
                    std::string m_customDomainName;
                    bool m_customDomainNameHasBeenSet;

                    /**
                     * 服务状态：running/deploying/deploy_failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 公网访问类型
                     */
                    std::vector<std::string> m_accessTypes;
                    bool m_accessTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASEINFO_H_
