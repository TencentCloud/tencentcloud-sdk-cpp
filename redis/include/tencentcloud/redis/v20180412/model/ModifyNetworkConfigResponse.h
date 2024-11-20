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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyNetworkConfig返回参数结构体
                */
                class ModifyNetworkConfigResponse : public AbstractModel
                {
                public:
                    ModifyNetworkConfigResponse();
                    ~ModifyNetworkConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取执行状态，请忽略该参数。
                     * @return Status 执行状态，请忽略该参数。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取指实例新私有网络所属子网 ID。
                     * @return SubnetId 指实例新私有网络所属子网 ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取指实例新的私有网络ID。
                     * @return VpcId 指实例新的私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取指实例新的内网 IPv4 地址。
                     * @return Vip 指实例新的内网 IPv4 地址。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取任务 ID。获取**taskId**，通过接口 [DescribeTaskInfo](https://cloud.tencent.com/document/product/239/30601) 查询任务执行状态。
                     * @return TaskId 任务 ID。获取**taskId**，通过接口 [DescribeTaskInfo](https://cloud.tencent.com/document/product/239/30601) 查询任务执行状态。
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 执行状态，请忽略该参数。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 指实例新私有网络所属子网 ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指实例新的私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 指实例新的内网 IPv4 地址。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 任务 ID。获取**taskId**，通过接口 [DescribeTaskInfo](https://cloud.tencent.com/document/product/239/30601) 查询任务执行状态。
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGRESPONSE_H_
