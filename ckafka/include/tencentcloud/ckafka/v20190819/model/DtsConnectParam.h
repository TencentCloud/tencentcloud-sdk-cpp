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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DTSCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DTSCONNECTPARAM_H_

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
                * Dts连接源参数
                */
                class DtsConnectParam : public AbstractModel
                {
                public:
                    DtsConnectParam();
                    ~DtsConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return UserName Dts消费分组的账号
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Dts消费分组的账号
                     * @param _userName Dts消费分组的账号
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
                     * 获取Dts消费分组的密码
                     * @return Password Dts消费分组的密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Dts消费分组的密码
                     * @param _password Dts消费分组的密码
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
                     * 获取是否更新到关联的Datahub任务
                     * @return IsUpdate 是否更新到关联的Datahub任务
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否更新到关联的Datahub任务
                     * @param _isUpdate 是否更新到关联的Datahub任务
                     * 
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     * 
                     */
                    bool IsUpdateHasBeenSet() const;

                private:

                    /**
                     * Dts的连接port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Dts消费分组的Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Dts消费分组的账号
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Dts消费分组的密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Dts实例Id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Dts订阅的topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 是否更新到关联的Datahub任务
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DTSCONNECTPARAM_H_
