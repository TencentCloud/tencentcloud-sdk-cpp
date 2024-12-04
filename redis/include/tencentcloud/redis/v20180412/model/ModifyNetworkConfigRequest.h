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
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
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
                     * 获取指预修改网络的类别，包括：
- changeVip：指切换私有网络，包含其内网IPv4地址及端口。
- changeVpc：指切换私有网络所属子网。
- changeBaseToVpc：指基础网络切换为私有网络。
- changeVPort：指仅修改实例网络端口。
                     * @return Operation 指预修改网络的类别，包括：
- changeVip：指切换私有网络，包含其内网IPv4地址及端口。
- changeVpc：指切换私有网络所属子网。
- changeBaseToVpc：指基础网络切换为私有网络。
- changeVPort：指仅修改实例网络端口。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置指预修改网络的类别，包括：
- changeVip：指切换私有网络，包含其内网IPv4地址及端口。
- changeVpc：指切换私有网络所属子网。
- changeBaseToVpc：指基础网络切换为私有网络。
- changeVPort：指仅修改实例网络端口。
                     * @param _operation 指预修改网络的类别，包括：
- changeVip：指切换私有网络，包含其内网IPv4地址及端口。
- changeVpc：指切换私有网络所属子网。
- changeBaseToVpc：指基础网络切换为私有网络。
- changeVPort：指仅修改实例网络端口。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取指实例私有网络内网 IPv4 地址。当**Operation**为**changeVip**时，需配置该参数。
                     * @return Vip 指实例私有网络内网 IPv4 地址。当**Operation**为**changeVip**时，需配置该参数。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置指实例私有网络内网 IPv4 地址。当**Operation**为**changeVip**时，需配置该参数。
                     * @param _vip 指实例私有网络内网 IPv4 地址。当**Operation**为**changeVip**时，需配置该参数。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取指修改后的私有网络 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的私有网络名称，获取私有网络 ID。

                     * @return VpcId 指修改后的私有网络 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的私有网络名称，获取私有网络 ID。

                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置指修改后的私有网络 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的私有网络名称，获取私有网络 ID。

                     * @param _vpcId 指修改后的私有网络 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的私有网络名称，获取私有网络 ID。

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
                     * 获取指修改后的私有网络所属子网 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的子网名称，获取子网ID。
                     * @return SubnetId 指修改后的私有网络所属子网 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的子网名称，获取子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置指修改后的私有网络所属子网 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的子网名称，获取子网ID。
                     * @param _subnetId 指修改后的私有网络所属子网 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的子网名称，获取子网ID。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取原内网 IPv4 地址保留时长。
- 单位：天。
- 取值范围：0、1、2、3、7、15。
**说明**：保留时长不设置或者设置为0，原网络地址将立即释放。
                     * @return Recycle 原内网 IPv4 地址保留时长。
- 单位：天。
- 取值范围：0、1、2、3、7、15。
**说明**：保留时长不设置或者设置为0，原网络地址将立即释放。
                     * 
                     */
                    int64_t GetRecycle() const;

                    /**
                     * 设置原内网 IPv4 地址保留时长。
- 单位：天。
- 取值范围：0、1、2、3、7、15。
**说明**：保留时长不设置或者设置为0，原网络地址将立即释放。
                     * @param _recycle 原内网 IPv4 地址保留时长。
- 单位：天。
- 取值范围：0、1、2、3、7、15。
**说明**：保留时长不设置或者设置为0，原网络地址将立即释放。
                     * 
                     */
                    void SetRecycle(const int64_t& _recycle);

                    /**
                     * 判断参数 Recycle 是否已赋值
                     * @return Recycle 是否已赋值
                     * 
                     */
                    bool RecycleHasBeenSet() const;

                    /**
                     * 获取指修改后的网络端口。当**Operation**为**changeVPort**或**changeVip**时，需配置该参数。取值范围为[1024,65535]。
                     * @return VPort 指修改后的网络端口。当**Operation**为**changeVPort**或**changeVip**时，需配置该参数。取值范围为[1024,65535]。
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置指修改后的网络端口。当**Operation**为**changeVPort**或**changeVip**时，需配置该参数。取值范围为[1024,65535]。
                     * @param _vPort 指修改后的网络端口。当**Operation**为**changeVPort**或**changeVip**时，需配置该参数。取值范围为[1024,65535]。
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指预修改网络的类别，包括：
- changeVip：指切换私有网络，包含其内网IPv4地址及端口。
- changeVpc：指切换私有网络所属子网。
- changeBaseToVpc：指基础网络切换为私有网络。
- changeVPort：指仅修改实例网络端口。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 指实例私有网络内网 IPv4 地址。当**Operation**为**changeVip**时，需配置该参数。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 指修改后的私有网络 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的私有网络名称，获取私有网络 ID。

                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 指修改后的私有网络所属子网 ID。
- 当**Operation**为**changeVpc**或**changeBaseToVpc**时，需配置该参数。
- 请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)，切换至**实例详情**页面，在**网络信息**区域，单击所属网络后面的子网名称，获取子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 原内网 IPv4 地址保留时长。
- 单位：天。
- 取值范围：0、1、2、3、7、15。
**说明**：保留时长不设置或者设置为0，原网络地址将立即释放。
                     */
                    int64_t m_recycle;
                    bool m_recycleHasBeenSet;

                    /**
                     * 指修改后的网络端口。当**Operation**为**changeVPort**或**changeVip**时，需配置该参数。取值范围为[1024,65535]。
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGREQUEST_H_
