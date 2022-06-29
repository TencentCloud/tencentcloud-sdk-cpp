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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYSESSIONKILLTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYSESSIONKILLTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeProxySessionKillTasks请求参数结构体
                */
                class DescribeProxySessionKillTasksRequest : public AbstractModel
                {
                public:
                    DescribeProxySessionKillTasksRequest();
                    ~DescribeProxySessionKillTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param InstanceId 实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取kill 会话异步任务 ID,  接口 CreateProxySessionKillTask 调用成功后获取。
                     * @return AsyncRequestIds kill 会话异步任务 ID,  接口 CreateProxySessionKillTask 调用成功后获取。
                     */
                    std::vector<int64_t> GetAsyncRequestIds() const;

                    /**
                     * 设置kill 会话异步任务 ID,  接口 CreateProxySessionKillTask 调用成功后获取。
                     * @param AsyncRequestIds kill 会话异步任务 ID,  接口 CreateProxySessionKillTask 调用成功后获取。
                     */
                    void SetAsyncRequestIds(const std::vector<int64_t>& _asyncRequestIds);

                    /**
                     * 判断参数 AsyncRequestIds 是否已赋值
                     * @return AsyncRequestIds 是否已赋值
                     */
                    bool AsyncRequestIdsHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * @return Product 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * @param Product 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * kill 会话异步任务 ID,  接口 CreateProxySessionKillTask 调用成功后获取。
                     */
                    std::vector<int64_t> m_asyncRequestIds;
                    bool m_asyncRequestIdsHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYSESSIONKILLTASKSREQUEST_H_
