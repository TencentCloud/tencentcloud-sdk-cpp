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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_

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
                * DescribeNodeDataDisks请求参数结构体
                */
                class DescribeNodeDataDisksRequest : public AbstractModel
                {
                public:
                    DescribeNodeDataDisksRequest();
                    ~DescribeNodeDataDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR集群实例ID
                     * @return InstanceId EMR集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR集群实例ID
                     * @param _instanceId EMR集群实例ID
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
                     * 获取节点CVM实例Id列表
                     * @return CvmInstanceIds 节点CVM实例Id列表
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置节点CVM实例Id列表
                     * @param _cvmInstanceIds 节点CVM实例Id列表
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * EMR集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点CVM实例Id列表
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_
