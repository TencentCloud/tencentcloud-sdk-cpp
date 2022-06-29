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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_

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
                * ModifyNetworkConfig请求参数结构体
                */
                class ModifyNetworkConfigRequest : public AbstractModel
                {
                public:
                    ModifyNetworkConfigRequest();
                    ~ModifyNetworkConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取操作类型：changeVip——修改实例VIP；changeVpc——修改实例子网；changeBaseToVpc——基础网络转VPC网络
                     * @return Operation 操作类型：changeVip——修改实例VIP；changeVpc——修改实例子网；changeBaseToVpc——基础网络转VPC网络
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型：changeVip——修改实例VIP；changeVpc——修改实例子网；changeBaseToVpc——基础网络转VPC网络
                     * @param Operation 操作类型：changeVip——修改实例VIP；changeVpc——修改实例子网；changeBaseToVpc——基础网络转VPC网络
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取VIP地址，changeVip的时候填写，不填则默认分配
                     * @return Vip VIP地址，changeVip的时候填写，不填则默认分配
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP地址，changeVip的时候填写，不填则默认分配
                     * @param Vip VIP地址，changeVip的时候填写，不填则默认分配
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取私有网络ID，changeVpc、changeBaseToVpc的时候需要提供
                     * @return VpcId 私有网络ID，changeVpc、changeBaseToVpc的时候需要提供
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，changeVpc、changeBaseToVpc的时候需要提供
                     * @param VpcId 私有网络ID，changeVpc、changeBaseToVpc的时候需要提供
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID，changeVpc、changeBaseToVpc的时候需要提供
                     * @return SubnetId 子网ID，changeVpc、changeBaseToVpc的时候需要提供
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID，changeVpc、changeBaseToVpc的时候需要提供
                     * @param SubnetId 子网ID，changeVpc、changeBaseToVpc的时候需要提供
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取原VIP保留时间，单位：天，注：需要最新版SDK，否则原VIP立即释放，查看SDK版本，详见 [SDK中心](https://cloud.tencent.com/document/sdk)
                     * @return Recycle 原VIP保留时间，单位：天，注：需要最新版SDK，否则原VIP立即释放，查看SDK版本，详见 [SDK中心](https://cloud.tencent.com/document/sdk)
                     */
                    int64_t GetRecycle() const;

                    /**
                     * 设置原VIP保留时间，单位：天，注：需要最新版SDK，否则原VIP立即释放，查看SDK版本，详见 [SDK中心](https://cloud.tencent.com/document/sdk)
                     * @param Recycle 原VIP保留时间，单位：天，注：需要最新版SDK，否则原VIP立即释放，查看SDK版本，详见 [SDK中心](https://cloud.tencent.com/document/sdk)
                     */
                    void SetRecycle(const int64_t& _recycle);

                    /**
                     * 判断参数 Recycle 是否已赋值
                     * @return Recycle 是否已赋值
                     */
                    bool RecycleHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作类型：changeVip——修改实例VIP；changeVpc——修改实例子网；changeBaseToVpc——基础网络转VPC网络
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * VIP地址，changeVip的时候填写，不填则默认分配
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 私有网络ID，changeVpc、changeBaseToVpc的时候需要提供
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID，changeVpc、changeBaseToVpc的时候需要提供
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 原VIP保留时间，单位：天，注：需要最新版SDK，否则原VIP立即释放，查看SDK版本，详见 [SDK中心](https://cloud.tencent.com/document/sdk)
                     */
                    int64_t m_recycle;
                    bool m_recycleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_
