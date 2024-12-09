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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYPODNUMREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYPODNUMREQUEST_H_

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
                * ModifyPodNum请求参数结构体
                */
                class ModifyPodNumRequest : public AbstractModel
                {
                public:
                    ModifyPodNumRequest();
                    ~ModifyPodNumRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return InstanceId 集群Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群Id
                     * @param _instanceId 集群Id
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
                     * 获取服务编号
                     * @return ServiceGroup 服务编号
                     * 
                     */
                    int64_t GetServiceGroup() const;

                    /**
                     * 设置服务编号
                     * @param _serviceGroup 服务编号
                     * 
                     */
                    void SetServiceGroup(const int64_t& _serviceGroup);

                    /**
                     * 判断参数 ServiceGroup 是否已赋值
                     * @return ServiceGroup 是否已赋值
                     * 
                     */
                    bool ServiceGroupHasBeenSet() const;

                    /**
                     * 获取角色编号
                     * @return ServiceType 角色编号
                     * 
                     */
                    int64_t GetServiceType() const;

                    /**
                     * 设置角色编号
                     * @param _serviceType 角色编号
                     * 
                     */
                    void SetServiceType(const int64_t& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取期望Pod数量
                     * @return PodNum 期望Pod数量
                     * 
                     */
                    int64_t GetPodNum() const;

                    /**
                     * 设置期望Pod数量
                     * @param _podNum 期望Pod数量
                     * 
                     */
                    void SetPodNum(const int64_t& _podNum);

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务编号
                     */
                    int64_t m_serviceGroup;
                    bool m_serviceGroupHasBeenSet;

                    /**
                     * 角色编号
                     */
                    int64_t m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 期望Pod数量
                     */
                    int64_t m_podNum;
                    bool m_podNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYPODNUMREQUEST_H_
