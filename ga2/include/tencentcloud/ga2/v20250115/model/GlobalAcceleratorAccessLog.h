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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACCESSLOG_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACCESSLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * GA访问日志
                */
                class GlobalAcceleratorAccessLog : public AbstractModel
                {
                public:
                    GlobalAcceleratorAccessLog();
                    ~GlobalAcceleratorAccessLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志唯一Id</p>
                     * @return LogPushTaskId <p>日志唯一Id</p>
                     * 
                     */
                    std::string GetLogPushTaskId() const;

                    /**
                     * 设置<p>日志唯一Id</p>
                     * @param _logPushTaskId <p>日志唯一Id</p>
                     * 
                     */
                    void SetLogPushTaskId(const std::string& _logPushTaskId);

                    /**
                     * 判断参数 LogPushTaskId 是否已赋值
                     * @return LogPushTaskId 是否已赋值
                     * 
                     */
                    bool LogPushTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>GA实例唯一Id</p>
                     * @return GlobalAcceleratorId <p>GA实例唯一Id</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>GA实例唯一Id</p>
                     * @param _globalAcceleratorId <p>GA实例唯一Id</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器唯一Id</p>
                     * @return ListenerId <p>监听器唯一Id</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器唯一Id</p>
                     * @param _listenerId <p>监听器唯一Id</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>终端节点组唯一Id</p>
                     * @return EndpointGroupId <p>终端节点组唯一Id</p>
                     * 
                     */
                    std::string GetEndpointGroupId() const;

                    /**
                     * 设置<p>终端节点组唯一Id</p>
                     * @param _endpointGroupId <p>终端节点组唯一Id</p>
                     * 
                     */
                    void SetEndpointGroupId(const std::string& _endpointGroupId);

                    /**
                     * 判断参数 EndpointGroupId 是否已赋值
                     * @return EndpointGroupId 是否已赋值
                     * 
                     */
                    bool EndpointGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>日志任务描述</p>
                     * @return FlowLogDescription <p>日志任务描述</p>
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置<p>日志任务描述</p>
                     * @param _flowLogDescription <p>日志任务描述</p>
                     * 
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     * 
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>日志所在地域</p>
                     * @return CloudRegion <p>日志所在地域</p>
                     * 
                     */
                    std::string GetCloudRegion() const;

                    /**
                     * 设置<p>日志所在地域</p>
                     * @param _cloudRegion <p>日志所在地域</p>
                     * 
                     */
                    void SetCloudRegion(const std::string& _cloudRegion);

                    /**
                     * 判断参数 CloudRegion 是否已赋值
                     * @return CloudRegion 是否已赋值
                     * 
                     */
                    bool CloudRegionHasBeenSet() const;

                    /**
                     * 获取<p>日志主题Id</p>
                     * @return CloudLogId <p>日志主题Id</p>
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置<p>日志主题Id</p>
                     * @param _cloudLogId <p>日志主题Id</p>
                     * 
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     * 
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取<p>日志集Id</p>
                     * @return CloudLogSetId <p>日志集Id</p>
                     * 
                     */
                    std::string GetCloudLogSetId() const;

                    /**
                     * 设置<p>日志集Id</p>
                     * @param _cloudLogSetId <p>日志集Id</p>
                     * 
                     */
                    void SetCloudLogSetId(const std::string& _cloudLogSetId);

                    /**
                     * 判断参数 CloudLogSetId 是否已赋值
                     * @return CloudLogSetId 是否已赋值
                     * 
                     */
                    bool CloudLogSetIdHasBeenSet() const;

                    /**
                     * 获取<p>选择日志采集字段</p>
                     * @return FieldKeys <p>选择日志采集字段</p>
                     * 
                     */
                    std::vector<std::string> GetFieldKeys() const;

                    /**
                     * 设置<p>选择日志采集字段</p>
                     * @param _fieldKeys <p>选择日志采集字段</p>
                     * 
                     */
                    void SetFieldKeys(const std::vector<std::string>& _fieldKeys);

                    /**
                     * 判断参数 FieldKeys 是否已赋值
                     * @return FieldKeys 是否已赋值
                     * 
                     */
                    bool FieldKeysHasBeenSet() const;

                    /**
                     * 获取<p>日志任务状态</p><p>枚举值：</p><ul><li>active： 运行中</li><li>stopped： 已暂停</li></ul>
                     * @return Status <p>日志任务状态</p><p>枚举值：</p><ul><li>active： 运行中</li><li>stopped： 已暂停</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>日志任务状态</p><p>枚举值：</p><ul><li>active： 运行中</li><li>stopped： 已暂停</li></ul>
                     * @param _status <p>日志任务状态</p><p>枚举值：</p><ul><li>active： 运行中</li><li>stopped： 已暂停</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>日志唯一Id</p>
                     */
                    std::string m_logPushTaskId;
                    bool m_logPushTaskIdHasBeenSet;

                    /**
                     * <p>GA实例唯一Id</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>监听器唯一Id</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>终端节点组唯一Id</p>
                     */
                    std::string m_endpointGroupId;
                    bool m_endpointGroupIdHasBeenSet;

                    /**
                     * <p>日志任务描述</p>
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                    /**
                     * <p>日志所在地域</p>
                     */
                    std::string m_cloudRegion;
                    bool m_cloudRegionHasBeenSet;

                    /**
                     * <p>日志主题Id</p>
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * <p>日志集Id</p>
                     */
                    std::string m_cloudLogSetId;
                    bool m_cloudLogSetIdHasBeenSet;

                    /**
                     * <p>选择日志采集字段</p>
                     */
                    std::vector<std::string> m_fieldKeys;
                    bool m_fieldKeysHasBeenSet;

                    /**
                     * <p>日志任务状态</p><p>枚举值：</p><ul><li>active： 运行中</li><li>stopped： 已暂停</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACCESSLOG_H_
