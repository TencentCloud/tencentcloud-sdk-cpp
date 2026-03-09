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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ENABLEETCDINSTANCEDELETIONPROTECTIONREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ENABLEETCDINSTANCEDELETIONPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * EnableEtcdInstanceDeletionProtection请求参数结构体
                */
                class EnableEtcdInstanceDeletionProtectionRequest : public AbstractModel
                {
                public:
                    EnableEtcdInstanceDeletionProtectionRequest();
                    ~EnableEtcdInstanceDeletionProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取etcd实例ID
                     * @return InstanceId etcd实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置etcd实例ID
                     * @param _instanceId etcd实例ID
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
                     * etcd实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ENABLEETCDINSTANCEDELETIONPROTECTIONREQUEST_H_
