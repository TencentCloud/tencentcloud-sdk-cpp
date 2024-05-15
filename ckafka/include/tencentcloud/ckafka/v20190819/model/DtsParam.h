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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DTSPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DTSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Dts类型入参
                */
                class DtsParam : public AbstractModel
                {
                public:
                    DtsParam();
                    ~DtsParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dts实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource Dts实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Dts实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource Dts实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Dts的连接ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip Dts的连接ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Dts的连接ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip Dts的连接ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Dts的连接port
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port Dts的连接port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Dts的连接port
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port Dts的连接port
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Dts订阅的topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Topic Dts订阅的topic
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Dts订阅的topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topic Dts订阅的topic
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
                     * 获取Dts消费分组的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId Dts消费分组的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Dts消费分组的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId Dts消费分组的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Dts消费分组的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupUser Dts消费分组的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupUser() const;

                    /**
                     * 设置Dts消费分组的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupUser Dts消费分组的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupUser(const std::string& _groupUser);

                    /**
                     * 判断参数 GroupUser 是否已赋值
                     * @return GroupUser 是否已赋值
                     * 
                     */
                    bool GroupUserHasBeenSet() const;

                    /**
                     * 获取Dts消费分组的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupPassword Dts消费分组的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupPassword() const;

                    /**
                     * 设置Dts消费分组的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupPassword Dts消费分组的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupPassword(const std::string& _groupPassword);

                    /**
                     * 判断参数 GroupPassword 是否已赋值
                     * @return GroupPassword 是否已赋值
                     * 
                     */
                    bool GroupPasswordHasBeenSet() const;

                    /**
                     * 获取false同步原始数据，true同步解析后的json格式数据,默认true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TranSql false同步原始数据，true同步解析后的json格式数据,默认true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTranSql() const;

                    /**
                     * 设置false同步原始数据，true同步解析后的json格式数据,默认true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tranSql false同步原始数据，true同步解析后的json格式数据,默认true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTranSql(const bool& _tranSql);

                    /**
                     * 判断参数 TranSql 是否已赋值
                     * @return TranSql 是否已赋值
                     * 
                     */
                    bool TranSqlHasBeenSet() const;

                private:

                    /**
                     * Dts实例Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Dts的连接ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Dts的连接port
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Dts订阅的topic
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Dts消费分组的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Dts消费分组的账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupUser;
                    bool m_groupUserHasBeenSet;

                    /**
                     * Dts消费分组的密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupPassword;
                    bool m_groupPasswordHasBeenSet;

                    /**
                     * false同步原始数据，true同步解析后的json格式数据,默认true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_tranSql;
                    bool m_tranSqlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DTSPARAM_H_
