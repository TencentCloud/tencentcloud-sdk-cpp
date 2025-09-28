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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPPASSWORDREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyConsumerGroupPassword请求参数结构体
                */
                class ModifyConsumerGroupPasswordRequest : public AbstractModel
                {
                public:
                    ModifyConsumerGroupPasswordRequest();
                    ~ModifyConsumerGroupPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的 ID，可通过[DescribeSubscribeJobs](https://cloud.tencent.com/document/product/571/102943)接口获取。

                     * @return SubscribeId 数据订阅实例的 ID，可通过[DescribeSubscribeJobs](https://cloud.tencent.com/document/product/571/102943)接口获取。

                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅实例的 ID，可通过[DescribeSubscribeJobs](https://cloud.tencent.com/document/product/571/102943)接口获取。

                     * @param _subscribeId 数据订阅实例的 ID，可通过[DescribeSubscribeJobs](https://cloud.tencent.com/document/product/571/102943)接口获取。

                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取账号名称。实际的账户全称形如：account-#{SubscribeId}-#{AccountName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * @return AccountName 账号名称。实际的账户全称形如：account-#{SubscribeId}-#{AccountName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名称。实际的账户全称形如：account-#{SubscribeId}-#{AccountName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * @param _accountName 账号名称。实际的账户全称形如：account-#{SubscribeId}-#{AccountName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * @return ConsumerGroupName 消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * @param _consumerGroupName 消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取新密码。字符长度不小于3，不大于32
                     * @return NewPassword 新密码。字符长度不小于3，不大于32
                     * 
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置新密码。字符长度不小于3，不大于32
                     * @param _newPassword 新密码。字符长度不小于3，不大于32
                     * 
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     * 
                     */
                    bool NewPasswordHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的 ID，可通过[DescribeSubscribeJobs](https://cloud.tencent.com/document/product/571/102943)接口获取。

                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 账号名称。实际的账户全称形如：account-#{SubscribeId}-#{AccountName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 消费组名称。实际的消费组全称形如：consumer-grp-#{SubscribeId}-#{ConsumerGroupName}。可通过[DescribeConsumerGroups](https://cloud.tencent.com/document/product/571/102947)接口获取。
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * 新密码。字符长度不小于3，不大于32
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCONSUMERGROUPPASSWORDREQUEST_H_
