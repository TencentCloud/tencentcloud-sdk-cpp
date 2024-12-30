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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQPERMISSIONRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQPERMISSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQPermission.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQPermission返回参数结构体
                */
                class DescribeRabbitMQPermissionResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQPermissionResponse();
                    ~DescribeRabbitMQPermissionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回权限数量
                     * @return TotalCount 返回权限数量
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
                     * 获取权限详情列表
                     * @return RabbitMQPermissionList 权限详情列表
                     * 
                     */
                    std::vector<RabbitMQPermission> GetRabbitMQPermissionList() const;

                    /**
                     * 判断参数 RabbitMQPermissionList 是否已赋值
                     * @return RabbitMQPermissionList 是否已赋值
                     * 
                     */
                    bool RabbitMQPermissionListHasBeenSet() const;

                private:

                    /**
                     * 返回权限数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 权限详情列表
                     */
                    std::vector<RabbitMQPermission> m_rabbitMQPermissionList;
                    bool m_rabbitMQPermissionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQPERMISSIONRESPONSE_H_
