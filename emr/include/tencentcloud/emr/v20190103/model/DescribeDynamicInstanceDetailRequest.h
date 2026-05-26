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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeDynamicInstanceDetail请求参数结构体
                */
                class DescribeDynamicInstanceDetailRequest : public AbstractModel
                {
                public:
                    DescribeDynamicInstanceDetailRequest();
                    ~DescribeDynamicInstanceDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>EMR 集群 id</p>
                     * @return InstanceId <p>EMR 集群 id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>EMR 集群 id</p>
                     * @param _instanceId <p>EMR 集群 id</p>
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
                     * 获取<p>Ray集群Id</p>
                     * @return RayClusterId <p>Ray集群Id</p>
                     * 
                     */
                    int64_t GetRayClusterId() const;

                    /**
                     * 设置<p>Ray集群Id</p>
                     * @param _rayClusterId <p>Ray集群Id</p>
                     * 
                     */
                    void SetRayClusterId(const int64_t& _rayClusterId);

                    /**
                     * 判断参数 RayClusterId 是否已赋值
                     * @return RayClusterId 是否已赋值
                     * 
                     */
                    bool RayClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>EMR 集群 id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Ray集群Id</p>
                     */
                    int64_t m_rayClusterId;
                    bool m_rayClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILREQUEST_H_
