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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERTENCENTMQTTTARGET_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERTENCENTMQTTTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * MQTT 目标集群信息
                */
                class RouterTencentMQTTTarget : public AbstractModel
                {
                public:
                    RouterTencentMQTTTarget();
                    ~RouterTencentMQTTTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MQTT 集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>MQTT 集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>MQTT 集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>MQTT 集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>主题名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic <p>主题名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>主题名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic <p>主题名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceRegion <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceRegion <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceRegion(const std::string& _sourceRegion);

                    /**
                     * 判断参数 SourceRegion 是否已赋值
                     * @return SourceRegion 是否已赋值
                     * 
                     */
                    bool SourceRegionHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password <p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password <p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>消费者并发数，0 ～ 100</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetProduceConcurrentThreadCount <p>消费者并发数，0 ～ 100</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetProduceConcurrentThreadCount() const;

                    /**
                     * 设置<p>消费者并发数，0 ～ 100</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetProduceConcurrentThreadCount <p>消费者并发数，0 ～ 100</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetProduceConcurrentThreadCount(const int64_t& _targetProduceConcurrentThreadCount);

                    /**
                     * 判断参数 TargetProduceConcurrentThreadCount 是否已赋值
                     * @return TargetProduceConcurrentThreadCount 是否已赋值
                     * 
                     */
                    bool TargetProduceConcurrentThreadCountHasBeenSet() const;

                    /**
                     * 获取<p>过滤时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterFromTimestampMs <p>过滤时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFilterFromTimestampMs() const;

                    /**
                     * 设置<p>过滤时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterFromTimestampMs <p>过滤时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilterFromTimestampMs(const int64_t& _filterFromTimestampMs);

                    /**
                     * 判断参数 FilterFromTimestampMs 是否已赋值
                     * @return FilterFromTimestampMs 是否已赋值
                     * 
                     */
                    bool FilterFromTimestampMsHasBeenSet() const;

                    /**
                     * 获取<p>MQTT集群接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoint <p>MQTT集群接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>MQTT集群接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoint <p>MQTT集群接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                private:

                    /**
                     * <p>MQTT 集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>主题名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceRegion;
                    bool m_sourceRegionHasBeenSet;

                    /**
                     * <p>用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>用户密码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>消费者并发数，0 ～ 100</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetProduceConcurrentThreadCount;
                    bool m_targetProduceConcurrentThreadCountHasBeenSet;

                    /**
                     * <p>过滤时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_filterFromTimestampMs;
                    bool m_filterFromTimestampMsHasBeenSet;

                    /**
                     * <p>MQTT集群接入点信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROUTERTENCENTMQTTTARGET_H_
