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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * notebook session列表信息。
                */
                class NotebookSessions : public AbstractModel
                {
                public:
                    NotebookSessions();
                    ~NotebookSessions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型，当前支持：spark、pyspark、sparkr、sql
                     * @return Kind 类型，当前支持：spark、pyspark、sparkr、sql
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置类型，当前支持：spark、pyspark、sparkr、sql
                     * @param _kind 类型，当前支持：spark、pyspark、sparkr、sql
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Session唯一标识
                     * @return SessionId Session唯一标识
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session唯一标识
                     * @param _sessionId Session唯一标识
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取代理用户，默认为root
                     * @return ProxyUser 代理用户，默认为root
                     * 
                     */
                    std::string GetProxyUser() const;

                    /**
                     * 设置代理用户，默认为root
                     * @param _proxyUser 代理用户，默认为root
                     * 
                     */
                    void SetProxyUser(const std::string& _proxyUser);

                    /**
                     * 判断参数 ProxyUser 是否已赋值
                     * @return ProxyUser 是否已赋值
                     * 
                     */
                    bool ProxyUserHasBeenSet() const;

                    /**
                     * 获取Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * @return State Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * @param _state Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Spark任务返回的AppId
                     * @return SparkAppId Spark任务返回的AppId
                     * 
                     */
                    std::string GetSparkAppId() const;

                    /**
                     * 设置Spark任务返回的AppId
                     * @param _sparkAppId Spark任务返回的AppId
                     * 
                     */
                    void SetSparkAppId(const std::string& _sparkAppId);

                    /**
                     * 判断参数 SparkAppId 是否已赋值
                     * @return SparkAppId 是否已赋值
                     * 
                     */
                    bool SparkAppIdHasBeenSet() const;

                    /**
                     * 获取Session名称
                     * @return Name Session名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Session名称
                     * @param _name Session名称
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
                     * 获取Session创建时间
                     * @return CreateTime Session创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Session创建时间
                     * @param _createTime Session创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取引擎名称
                     * @return DataEngineName 引擎名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置引擎名称
                     * @param _dataEngineName 引擎名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取最新的运行时间
                     * @return LastRunningTime 最新的运行时间
                     * 
                     */
                    std::string GetLastRunningTime() const;

                    /**
                     * 设置最新的运行时间
                     * @param _lastRunningTime 最新的运行时间
                     * 
                     */
                    void SetLastRunningTime(const std::string& _lastRunningTime);

                    /**
                     * 判断参数 LastRunningTime 是否已赋值
                     * @return LastRunningTime 是否已赋值
                     * 
                     */
                    bool LastRunningTimeHasBeenSet() const;

                    /**
                     * 获取创建者
                     * @return Creator 创建者
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者
                     * @param _creator 创建者
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取spark ui地址
                     * @return SparkUiUrl spark ui地址
                     * 
                     */
                    std::string GetSparkUiUrl() const;

                    /**
                     * 设置spark ui地址
                     * @param _sparkUiUrl spark ui地址
                     * 
                     */
                    void SetSparkUiUrl(const std::string& _sparkUiUrl);

                    /**
                     * 判断参数 SparkUiUrl 是否已赋值
                     * @return SparkUiUrl 是否已赋值
                     * 
                     */
                    bool SparkUiUrlHasBeenSet() const;

                    /**
                     * 获取session类型，group：资源组session independent：独立资源session，不依赖资源组
                     * @return SessionType session类型，group：资源组session independent：独立资源session，不依赖资源组
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置session类型，group：资源组session independent：独立资源session，不依赖资源组
                     * @param _sessionType session类型，group：资源组session independent：独立资源session，不依赖资源组
                     * 
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取引擎id
                     * @return DataEngineId 引擎id
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎id
                     * @param _dataEngineId 引擎id
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取资源组id
                     * @return ResourceGroupId 资源组id
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组id
                     * @param _resourceGroupId 资源组id
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名字
                     * @return ResourceGroupName 资源组名字
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置资源组名字
                     * @param _resourceGroupName 资源组名字
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * 类型，当前支持：spark、pyspark、sparkr、sql
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Session唯一标识
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 代理用户，默认为root
                     */
                    std::string m_proxyUser;
                    bool m_proxyUserHasBeenSet;

                    /**
                     * Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Spark任务返回的AppId
                     */
                    std::string m_sparkAppId;
                    bool m_sparkAppIdHasBeenSet;

                    /**
                     * Session名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Session创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 最新的运行时间
                     */
                    std::string m_lastRunningTime;
                    bool m_lastRunningTimeHasBeenSet;

                    /**
                     * 创建者
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * spark ui地址
                     */
                    std::string m_sparkUiUrl;
                    bool m_sparkUiUrlHasBeenSet;

                    /**
                     * session类型，group：资源组session independent：独立资源session，不依赖资源组
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 引擎id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 资源组id
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源组名字
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONS_H_
