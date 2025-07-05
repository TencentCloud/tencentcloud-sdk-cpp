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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETECLUSTERREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteCluster请求参数结构体
                */
                class DeleteClusterRequest : public AbstractModel
                {
                public:
                    DeleteClusterRequest();
                    ~DeleteClusterRequest() = default;
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
                     * 获取是否只解绑，不删除容器集群，默认不传则删除容器集群。
                     * @return Unbind 是否只解绑，不删除容器集群，默认不传则删除容器集群。
                     * 
                     */
                    bool GetUnbind() const;

                    /**
                     * 设置是否只解绑，不删除容器集群，默认不传则删除容器集群。
                     * @param _unbind 是否只解绑，不删除容器集群，默认不传则删除容器集群。
                     * 
                     */
                    void SetUnbind(const bool& _unbind);

                    /**
                     * 判断参数 Unbind 是否已赋值
                     * @return Unbind 是否已赋值
                     * 
                     */
                    bool UnbindHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否只解绑，不删除容器集群，默认不传则删除容器集群。
                     */
                    bool m_unbind;
                    bool m_unbindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETECLUSTERREQUEST_H_
