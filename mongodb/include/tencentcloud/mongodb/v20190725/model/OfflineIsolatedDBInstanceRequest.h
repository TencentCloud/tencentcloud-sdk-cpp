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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_OFFLINEISOLATEDDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_OFFLINEISOLATEDDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * OfflineIsolatedDBInstance请求参数结构体
                */
                class OfflineIsolatedDBInstanceRequest : public AbstractModel
                {
                public:
                    OfflineIsolatedDBInstanceRequest();
                    ~OfflineIsolatedDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。请登录 [MongoDB 控制台回收站](https://console.cloud.tencent.com/mongodb/recycle)在实例列表复制需下线的实例 ID。
                     * @return InstanceId 实例ID。请登录 [MongoDB 控制台回收站](https://console.cloud.tencent.com/mongodb/recycle)在实例列表复制需下线的实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。请登录 [MongoDB 控制台回收站](https://console.cloud.tencent.com/mongodb/recycle)在实例列表复制需下线的实例 ID。
                     * @param _instanceId 实例ID。请登录 [MongoDB 控制台回收站](https://console.cloud.tencent.com/mongodb/recycle)在实例列表复制需下线的实例 ID。
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
                     * 实例ID。请登录 [MongoDB 控制台回收站](https://console.cloud.tencent.com/mongodb/recycle)在实例列表复制需下线的实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_OFFLINEISOLATEDDBINSTANCEREQUEST_H_
