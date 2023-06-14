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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOMEMBER_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Assignment.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * consumer信息
                */
                class GroupInfoMember : public AbstractModel
                {
                public:
                    GroupInfoMember();
                    ~GroupInfoMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取coordinator 为消费分组中的消费者生成的唯一 ID
                     * @return MemberId coordinator 为消费分组中的消费者生成的唯一 ID
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置coordinator 为消费分组中的消费者生成的唯一 ID
                     * @param _memberId coordinator 为消费分组中的消费者生成的唯一 ID
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取客户消费者 SDK 自己设置的 client.id 信息
                     * @return ClientId 客户消费者 SDK 自己设置的 client.id 信息
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户消费者 SDK 自己设置的 client.id 信息
                     * @param _clientId 客户消费者 SDK 自己设置的 client.id 信息
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取一般存储客户的 IP 地址
                     * @return ClientHost 一般存储客户的 IP 地址
                     * 
                     */
                    std::string GetClientHost() const;

                    /**
                     * 设置一般存储客户的 IP 地址
                     * @param _clientHost 一般存储客户的 IP 地址
                     * 
                     */
                    void SetClientHost(const std::string& _clientHost);

                    /**
                     * 判断参数 ClientHost 是否已赋值
                     * @return ClientHost 是否已赋值
                     * 
                     */
                    bool ClientHostHasBeenSet() const;

                    /**
                     * 获取存储着分配给该消费者的 partition 信息
                     * @return Assignment 存储着分配给该消费者的 partition 信息
                     * 
                     */
                    Assignment GetAssignment() const;

                    /**
                     * 设置存储着分配给该消费者的 partition 信息
                     * @param _assignment 存储着分配给该消费者的 partition 信息
                     * 
                     */
                    void SetAssignment(const Assignment& _assignment);

                    /**
                     * 判断参数 Assignment 是否已赋值
                     * @return Assignment 是否已赋值
                     * 
                     */
                    bool AssignmentHasBeenSet() const;

                private:

                    /**
                     * coordinator 为消费分组中的消费者生成的唯一 ID
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 客户消费者 SDK 自己设置的 client.id 信息
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 一般存储客户的 IP 地址
                     */
                    std::string m_clientHost;
                    bool m_clientHostHasBeenSet;

                    /**
                     * 存储着分配给该消费者的 partition 信息
                     */
                    Assignment m_assignment;
                    bool m_assignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOMEMBER_H_
