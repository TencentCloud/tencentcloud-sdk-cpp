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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCEMAINTENANCEWINDOWREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCEMAINTENANCEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeInstanceMaintenanceWindow请求参数结构体
                */
                class DescribeInstanceMaintenanceWindowRequest : public AbstractModel
                {
                public:
                    DescribeInstanceMaintenanceWindowRequest();
                    ~DescribeInstanceMaintenanceWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定查询维护时间窗的具体实例 ID。
                     * @return InstanceId 指定查询维护时间窗的具体实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定查询维护时间窗的具体实例 ID。
                     * @param _instanceId 指定查询维护时间窗的具体实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 指定查询维护时间窗的具体实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_DESCRIBEINSTANCEMAINTENANCEWINDOWREQUEST_H_
