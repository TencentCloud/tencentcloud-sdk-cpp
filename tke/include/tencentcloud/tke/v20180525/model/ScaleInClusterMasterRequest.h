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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SCALEINCLUSTERMASTERREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SCALEINCLUSTERMASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ScaleInMaster.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ScaleInClusterMaster请求参数结构体
                */
                class ScaleInClusterMasterRequest : public AbstractModel
                {
                public:
                    ScaleInClusterMasterRequest();
                    ~ScaleInClusterMasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return ClusterId 集群实例ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群实例ID
                     * @param _clusterId 集群实例ID
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
                     * 获取master缩容选项
                     * @return ScaleInMasters master缩容选项
                     * 
                     */
                    std::vector<ScaleInMaster> GetScaleInMasters() const;

                    /**
                     * 设置master缩容选项
                     * @param _scaleInMasters master缩容选项
                     * 
                     */
                    void SetScaleInMasters(const std::vector<ScaleInMaster>& _scaleInMasters);

                    /**
                     * 判断参数 ScaleInMasters 是否已赋值
                     * @return ScaleInMasters 是否已赋值
                     * 
                     */
                    bool ScaleInMastersHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * master缩容选项
                     */
                    std::vector<ScaleInMaster> m_scaleInMasters;
                    bool m_scaleInMastersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SCALEINCLUSTERMASTERREQUEST_H_
