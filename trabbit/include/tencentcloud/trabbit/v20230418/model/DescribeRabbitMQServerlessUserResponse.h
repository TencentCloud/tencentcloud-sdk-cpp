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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSUSERRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQUser.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessUser返回参数结构体
                */
                class DescribeRabbitMQServerlessUserResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessUserResponse();
                    ~DescribeRabbitMQServerlessUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的User数量
                     * @return TotalCount 返回的User数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取当前已创建的RabbitMQ用户列表
                     * @return RabbitMQUserList 当前已创建的RabbitMQ用户列表
                     * 
                     */
                    std::vector<RabbitMQUser> GetRabbitMQUserList() const;

                    /**
                     * 判断参数 RabbitMQUserList 是否已赋值
                     * @return RabbitMQUserList 是否已赋值
                     * 
                     */
                    bool RabbitMQUserListHasBeenSet() const;

                private:

                    /**
                     * 返回的User数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 当前已创建的RabbitMQ用户列表
                     */
                    std::vector<RabbitMQUser> m_rabbitMQUserList;
                    bool m_rabbitMQUserListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSUSERRESPONSE_H_
