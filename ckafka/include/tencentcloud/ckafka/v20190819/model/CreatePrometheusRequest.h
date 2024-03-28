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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPROMETHEUSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPROMETHEUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreatePrometheus请求参数结构体
                */
                class CreatePrometheusRequest : public AbstractModel
                {
                public:
                    CreatePrometheusRequest();
                    ~CreatePrometheusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka实例id
                     * @return InstanceId ckafka实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka实例id
                     * @param _instanceId ckafka实例id
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
                     * 获取vpc地址
                     * @return VpcId vpc地址
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc地址
                     * @param _vpcId vpc地址
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网地址
                     * @return SubnetId 子网地址
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网地址
                     * @param _subnetId 子网地址
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * ckafka实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * vpc地址
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网地址
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPROMETHEUSREQUEST_H_
