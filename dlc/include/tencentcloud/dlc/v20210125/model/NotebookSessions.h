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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyUser 代理用户，默认为root
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyUser() const;

                    /**
                     * 设置代理用户，默认为root
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyUser 代理用户，默认为root
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkAppId Spark任务返回的AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkAppId() const;

                    /**
                     * 设置Spark任务返回的AppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkAppId Spark任务返回的AppId
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastRunningTime 最新的运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastRunningTime() const;

                    /**
                     * 设置最新的运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastRunningTime 最新的运行时间
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkUiUrl spark ui地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkUiUrl() const;

                    /**
                     * 设置spark ui地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkUiUrl spark ui地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkUiUrl(const std::string& _sparkUiUrl);

                    /**
                     * 判断参数 SparkUiUrl 是否已赋值
                     * @return SparkUiUrl 是否已赋值
                     * 
                     */
                    bool SparkUiUrlHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkUiUrl;
                    bool m_sparkUiUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NOTEBOOKSESSIONS_H_
