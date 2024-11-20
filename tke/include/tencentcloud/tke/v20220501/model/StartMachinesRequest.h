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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_STARTMACHINESREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_STARTMACHINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * StartMachines请求参数结构体
                */
                class StartMachinesRequest : public AbstractModel
                {
                public:
                    StartMachinesRequest();
                    ~StartMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 ID
                     * @return ClusterId 集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 ID
                     * @param _clusterId 集群 ID
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
                     * 获取节点名字列表，一次请求，传入节点数量上限为100个
                     * @return MachineNames 节点名字列表，一次请求，传入节点数量上限为100个
                     * 
                     */
                    std::vector<std::string> GetMachineNames() const;

                    /**
                     * 设置节点名字列表，一次请求，传入节点数量上限为100个
                     * @param _machineNames 节点名字列表，一次请求，传入节点数量上限为100个
                     * 
                     */
                    void SetMachineNames(const std::vector<std::string>& _machineNames);

                    /**
                     * 判断参数 MachineNames 是否已赋值
                     * @return MachineNames 是否已赋值
                     * 
                     */
                    bool MachineNamesHasBeenSet() const;

                private:

                    /**
                     * 集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 节点名字列表，一次请求，传入节点数量上限为100个
                     */
                    std::vector<std::string> m_machineNames;
                    bool m_machineNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_STARTMACHINESREQUEST_H_
