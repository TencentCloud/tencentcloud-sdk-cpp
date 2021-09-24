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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_KAFKAINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_KAFKAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ckafka地址信息
                */
                class KafkaInfo : public AbstractModel
                {
                public:
                    KafkaInfo();
                    ~KafkaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取kafaka address
                     * @return Address kafaka address
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置kafaka address
                     * @param Address kafaka address
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取kafaka topic
                     * @return Topic kafaka topic
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置kafaka topic
                     * @param Topic kafaka topic
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取kafka username
                     * @return User kafka username
                     */
                    std::string GetUser() const;

                    /**
                     * 设置kafka username
                     * @param User kafka username
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取kafka password
                     * @return Password kafka password
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置kafka password
                     * @param Password kafka password
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取ckafka实例
                     * @return Instance ckafka实例
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置ckafka实例
                     * @param Instance ckafka实例
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取是否走VPC
                     * @return IsVpc 是否走VPC
                     */
                    int64_t GetIsVpc() const;

                    /**
                     * 设置是否走VPC
                     * @param IsVpc 是否走VPC
                     */
                    void SetIsVpc(const int64_t& _isVpc);

                    /**
                     * 判断参数 IsVpc 是否已赋值
                     * @return IsVpc 是否已赋值
                     */
                    bool IsVpcHasBeenSet() const;

                private:

                    /**
                     * kafaka address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * kafaka topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * kafka username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * kafka password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * ckafka实例
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 是否走VPC
                     */
                    int64_t m_isVpc;
                    bool m_isVpcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_KAFKAINFO_H_
