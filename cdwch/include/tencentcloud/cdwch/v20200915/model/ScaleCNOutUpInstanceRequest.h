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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALECNOUTUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALECNOUTUPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * ScaleCNOutUpInstance请求参数结构体
                */
                class ScaleCNOutUpInstanceRequest : public AbstractModel
                {
                public:
                    ScaleCNOutUpInstanceRequest();
                    ~ScaleCNOutUpInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例唯一ID
                     * @return InstanceId 实例唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例唯一ID
                     * @param _instanceId 实例唯一ID
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
                     * 获取warehouse名称
                     * @return VirtualCluster warehouse名称
                     * 
                     */
                    std::string GetVirtualCluster() const;

                    /**
                     * 设置warehouse名称
                     * @param _virtualCluster warehouse名称
                     * 
                     */
                    void SetVirtualCluster(const std::string& _virtualCluster);

                    /**
                     * 判断参数 VirtualCluster 是否已赋值
                     * @return VirtualCluster 是否已赋值
                     * 
                     */
                    bool VirtualClusterHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return UserSubnetID 子网id
                     * 
                     */
                    std::string GetUserSubnetID() const;

                    /**
                     * 设置子网id
                     * @param _userSubnetID 子网id
                     * 
                     */
                    void SetUserSubnetID(const std::string& _userSubnetID);

                    /**
                     * 判断参数 UserSubnetID 是否已赋值
                     * @return UserSubnetID 是否已赋值
                     * 
                     */
                    bool UserSubnetIDHasBeenSet() const;

                    /**
                     * 获取新的warehouse的个数
                     * @return NewCount 新的warehouse的个数
                     * 
                     */
                    int64_t GetNewCount() const;

                    /**
                     * 设置新的warehouse的个数
                     * @param _newCount 新的warehouse的个数
                     * 
                     */
                    void SetNewCount(const int64_t& _newCount);

                    /**
                     * 判断参数 NewCount 是否已赋值
                     * @return NewCount 是否已赋值
                     * 
                     */
                    bool NewCountHasBeenSet() const;

                    /**
                     * 获取集群的规格2X-Small、X-Small、Small
                     * @return NewSpecName 集群的规格2X-Small、X-Small、Small
                     * 
                     */
                    std::string GetNewSpecName() const;

                    /**
                     * 设置集群的规格2X-Small、X-Small、Small
                     * @param _newSpecName 集群的规格2X-Small、X-Small、Small
                     * 
                     */
                    void SetNewSpecName(const std::string& _newSpecName);

                    /**
                     * 判断参数 NewSpecName 是否已赋值
                     * @return NewSpecName 是否已赋值
                     * 
                     */
                    bool NewSpecNameHasBeenSet() const;

                private:

                    /**
                     * 实例唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * warehouse名称
                     */
                    std::string m_virtualCluster;
                    bool m_virtualClusterHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_userSubnetID;
                    bool m_userSubnetIDHasBeenSet;

                    /**
                     * 新的warehouse的个数
                     */
                    int64_t m_newCount;
                    bool m_newCountHasBeenSet;

                    /**
                     * 集群的规格2X-Small、X-Small、Small
                     */
                    std::string m_newSpecName;
                    bool m_newSpecNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALECNOUTUPINSTANCEREQUEST_H_
