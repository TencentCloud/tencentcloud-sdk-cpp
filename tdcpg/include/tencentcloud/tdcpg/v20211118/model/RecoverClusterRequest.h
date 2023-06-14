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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_RECOVERCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_RECOVERCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * RecoverCluster请求参数结构体
                */
                class RecoverClusterRequest : public AbstractModel
                {
                public:
                    RecoverClusterRequest();
                    ~RecoverClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     * @return Period 购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     * @param _period 购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 购买时长，单位：月。取值范围为[1,60]，默认值为1。
只有当PayMode为PREPAID时生效。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_RECOVERCLUSTERREQUEST_H_
