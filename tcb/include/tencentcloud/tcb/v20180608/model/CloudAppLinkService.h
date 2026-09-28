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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPLINKSERVICE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPLINKSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/BuildCommands.h>
#include <tencentcloud/tcb/v20180608/model/BuildContext.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云应用关联服务
                */
                class CloudAppLinkService : public AbstractModel
                {
                public:
                    CloudAppLinkService();
                    ~CloudAppLinkService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * @return ServiceType <p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * @param _serviceType <p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>服务名称</p>
                     * @return ServiceName <p>服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _serviceName <p>服务名称</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>服务身份</p>
                     * @return Identifier <p>服务身份</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>服务身份</p>
                     * @param _identifier <p>服务身份</p>
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取<p>服务动作</p>
                     * @return Action <p>服务动作</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>服务动作</p>
                     * @param _action <p>服务动作</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>服务构建命令</p>
                     * @return Command <p>服务构建命令</p>
                     * 
                     */
                    BuildCommands GetCommand() const;

                    /**
                     * 设置<p>服务构建命令</p>
                     * @param _command <p>服务构建命令</p>
                     * 
                     */
                    void SetCommand(const BuildCommands& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取<p>服务构建部署上下文</p>
                     * @return BuildContext <p>服务构建部署上下文</p>
                     * 
                     */
                    BuildContext GetBuildContext() const;

                    /**
                     * 设置<p>服务构建部署上下文</p>
                     * @param _buildContext <p>服务构建部署上下文</p>
                     * 
                     */
                    void SetBuildContext(const BuildContext& _buildContext);

                    /**
                     * 判断参数 BuildContext 是否已赋值
                     * @return BuildContext 是否已赋值
                     * 
                     */
                    bool BuildContextHasBeenSet() const;

                private:

                    /**
                     * <p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>服务身份</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>服务动作</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>服务构建命令</p>
                     */
                    BuildCommands m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * <p>服务构建部署上下文</p>
                     */
                    BuildContext m_buildContext;
                    bool m_buildContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPLINKSERVICE_H_
