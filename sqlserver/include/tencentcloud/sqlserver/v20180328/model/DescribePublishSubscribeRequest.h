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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPUBLISHSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPUBLISHSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribePublishSubscribe请求参数结构体
                */
                class DescribePublishSubscribeRequest : public AbstractModel
                {
                public:
                    DescribePublishSubscribeRequest();
                    ~DescribePublishSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-j8kv137v
                     * @return InstanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-j8kv137v
                     * @param _instanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取订阅/发布实例ID，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例ID做筛选；当InstanceId为订阅实例时，本字段按照发布实例ID做筛选；
                     * @return PubOrSubInstanceId 订阅/发布实例ID，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例ID做筛选；当InstanceId为订阅实例时，本字段按照发布实例ID做筛选；
                     * 
                     */
                    std::string GetPubOrSubInstanceId() const;

                    /**
                     * 设置订阅/发布实例ID，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例ID做筛选；当InstanceId为订阅实例时，本字段按照发布实例ID做筛选；
                     * @param _pubOrSubInstanceId 订阅/发布实例ID，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例ID做筛选；当InstanceId为订阅实例时，本字段按照发布实例ID做筛选；
                     * 
                     */
                    void SetPubOrSubInstanceId(const std::string& _pubOrSubInstanceId);

                    /**
                     * 判断参数 PubOrSubInstanceId 是否已赋值
                     * @return PubOrSubInstanceId 是否已赋值
                     * 
                     */
                    bool PubOrSubInstanceIdHasBeenSet() const;

                    /**
                     * 获取订阅/发布实例内网IP，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例内网IP做筛选；当InstanceId为订阅实例时，本字段按照发布实例内网IP做筛选；
                     * @return PubOrSubInstanceIp 订阅/发布实例内网IP，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例内网IP做筛选；当InstanceId为订阅实例时，本字段按照发布实例内网IP做筛选；
                     * 
                     */
                    std::string GetPubOrSubInstanceIp() const;

                    /**
                     * 设置订阅/发布实例内网IP，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例内网IP做筛选；当InstanceId为订阅实例时，本字段按照发布实例内网IP做筛选；
                     * @param _pubOrSubInstanceIp 订阅/发布实例内网IP，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例内网IP做筛选；当InstanceId为订阅实例时，本字段按照发布实例内网IP做筛选；
                     * 
                     */
                    void SetPubOrSubInstanceIp(const std::string& _pubOrSubInstanceIp);

                    /**
                     * 判断参数 PubOrSubInstanceIp 是否已赋值
                     * @return PubOrSubInstanceIp 是否已赋值
                     * 
                     */
                    bool PubOrSubInstanceIpHasBeenSet() const;

                    /**
                     * 获取订阅发布ID，用于筛选
                     * @return PublishSubscribeId 订阅发布ID，用于筛选
                     * 
                     */
                    uint64_t GetPublishSubscribeId() const;

                    /**
                     * 设置订阅发布ID，用于筛选
                     * @param _publishSubscribeId 订阅发布ID，用于筛选
                     * 
                     */
                    void SetPublishSubscribeId(const uint64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取订阅发布名字，用于筛选
                     * @return PublishSubscribeName 订阅发布名字，用于筛选
                     * 
                     */
                    std::string GetPublishSubscribeName() const;

                    /**
                     * 设置订阅发布名字，用于筛选
                     * @param _publishSubscribeName 订阅发布名字，用于筛选
                     * 
                     */
                    void SetPublishSubscribeName(const std::string& _publishSubscribeName);

                    /**
                     * 判断参数 PublishSubscribeName 是否已赋值
                     * @return PublishSubscribeName 是否已赋值
                     * 
                     */
                    bool PublishSubscribeNameHasBeenSet() const;

                    /**
                     * 获取发布库名字，用于筛选
                     * @return PublishDBName 发布库名字，用于筛选
                     * 
                     */
                    std::string GetPublishDBName() const;

                    /**
                     * 设置发布库名字，用于筛选
                     * @param _publishDBName 发布库名字，用于筛选
                     * 
                     */
                    void SetPublishDBName(const std::string& _publishDBName);

                    /**
                     * 判断参数 PublishDBName 是否已赋值
                     * @return PublishDBName 是否已赋值
                     * 
                     */
                    bool PublishDBNameHasBeenSet() const;

                    /**
                     * 获取订阅库名字，用于筛选
                     * @return SubscribeDBName 订阅库名字，用于筛选
                     * 
                     */
                    std::string GetSubscribeDBName() const;

                    /**
                     * 设置订阅库名字，用于筛选
                     * @param _subscribeDBName 订阅库名字，用于筛选
                     * 
                     */
                    void SetSubscribeDBName(const std::string& _subscribeDBName);

                    /**
                     * 判断参数 SubscribeDBName 是否已赋值
                     * @return SubscribeDBName 是否已赋值
                     * 
                     */
                    bool SubscribeDBNameHasBeenSet() const;

                    /**
                     * 获取分页，页数
                     * @return Offset 分页，页数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页，页数
                     * @param _offset 分页，页数
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页，页大小
                     * @return Limit 分页，页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页，页大小
                     * @param _limit 分页，页大小
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 订阅/发布实例ID，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例ID做筛选；当InstanceId为订阅实例时，本字段按照发布实例ID做筛选；
                     */
                    std::string m_pubOrSubInstanceId;
                    bool m_pubOrSubInstanceIdHasBeenSet;

                    /**
                     * 订阅/发布实例内网IP，与InstanceId是发布实例还是订阅实例有关；当InstanceId为发布实例时，本字段按照订阅实例内网IP做筛选；当InstanceId为订阅实例时，本字段按照发布实例内网IP做筛选；
                     */
                    std::string m_pubOrSubInstanceIp;
                    bool m_pubOrSubInstanceIpHasBeenSet;

                    /**
                     * 订阅发布ID，用于筛选
                     */
                    uint64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * 订阅发布名字，用于筛选
                     */
                    std::string m_publishSubscribeName;
                    bool m_publishSubscribeNameHasBeenSet;

                    /**
                     * 发布库名字，用于筛选
                     */
                    std::string m_publishDBName;
                    bool m_publishDBNameHasBeenSet;

                    /**
                     * 订阅库名字，用于筛选
                     */
                    std::string m_subscribeDBName;
                    bool m_subscribeDBNameHasBeenSet;

                    /**
                     * 分页，页数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页，页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPUBLISHSUBSCRIBEREQUEST_H_
