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
                     * @return Resource Dts实例Id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Dts实例Id
                     * @param _resource Dts实例Id
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
                     * @return Ip Dts的连接ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Dts的连接ip
                     * @param _ip Dts的连接ip
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
                     * @return Port Dts的连接port
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Dts的连接port
                     * @param _port Dts的连接port
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
                     * @return Topic Dts订阅的topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Dts订阅的topic
                     * @param _topic Dts订阅的topic
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
                     * @return GroupId Dts消费分组的Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Dts消费分组的Id
                     * @param _groupId Dts消费分组的Id
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
                     * @return GroupUser Dts消费分组的账号
                     * 
                     */
                    std::string GetGroupUser() const;

                    /**
                     * 设置Dts消费分组的账号
                     * @param _groupUser Dts消费分组的账号
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
                     * @return GroupPassword Dts消费分组的密码
                     * 
                     */
                    std::string GetGroupPassword() const;

                    /**
                     * 设置Dts消费分组的密码
                     * @param _groupPassword Dts消费分组的密码
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
                     * @return TranSql false同步原始数据，true同步解析后的json格式数据,默认true
                     * 
                     */
                    bool GetTranSql() const;

                    /**
                     * 设置false同步原始数据，true同步解析后的json格式数据,默认true
                     * @param _tranSql false同步原始数据，true同步解析后的json格式数据,默认true
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
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Dts的连接ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Dts的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Dts订阅的topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Dts消费分组的Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Dts消费分组的账号
                     */
                    std::string m_groupUser;
                    bool m_groupUserHasBeenSet;

                    /**
                     * Dts消费分组的密码
                     */
                    std::string m_groupPassword;
                    bool m_groupPasswordHasBeenSet;

                    /**
                     * false同步原始数据，true同步解析后的json格式数据,默认true
                     */
                    bool m_tranSql;
                    bool m_tranSqlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DTSPARAM_H_
