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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDSNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDSNAPSHOTSREQUEST_H_

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
                * DescribeEtcdSnapshots请求参数结构体
                */
                class DescribeEtcdSnapshotsRequest : public AbstractModel
                {
                public:
                    DescribeEtcdSnapshotsRequest();
                    ~DescribeEtcdSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取etcd实例Id
                     * @return InstanceId etcd实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置etcd实例Id
                     * @param _instanceId etcd实例Id
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
                     * etcd实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDSNAPSHOTSREQUEST_H_
