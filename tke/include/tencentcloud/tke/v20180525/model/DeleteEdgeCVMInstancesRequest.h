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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEDGECVMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEDGECVMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteEdgeCVMInstances请求参数结构体
                */
                class DeleteEdgeCVMInstancesRequest : public AbstractModel
                {
                public:
                    DeleteEdgeCVMInstancesRequest();
                    ~DeleteEdgeCVMInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取cvm id集合
                     * @return CvmIdSet cvm id集合
                     * 
                     */
                    std::vector<std::string> GetCvmIdSet() const;

                    /**
                     * 设置cvm id集合
                     * @param _cvmIdSet cvm id集合
                     * 
                     */
                    void SetCvmIdSet(const std::vector<std::string>& _cvmIdSet);

                    /**
                     * 判断参数 CvmIdSet 是否已赋值
                     * @return CvmIdSet 是否已赋值
                     * 
                     */
                    bool CvmIdSetHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * cvm id集合
                     */
                    std::vector<std::string> m_cvmIdSet;
                    bool m_cvmIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEDGECVMINSTANCESREQUEST_H_
