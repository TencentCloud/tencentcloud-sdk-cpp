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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRROR_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRROR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取流量镜像实例的列表信息时返回的流量镜像信息。
                */
                class TrafficMirror : public AbstractModel
                {
                public:
                    TrafficMirror();
                    ~TrafficMirror() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量镜像ID。
                     * @return TrafficMirrorId 流量镜像ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像ID。
                     * @param _trafficMirrorId 流量镜像ID。
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取流量镜像名称。
                     * @return Alias 流量镜像名称。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置流量镜像名称。
                     * @param _alias 流量镜像名称。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取流量镜像所在的私有网络ID。
                     * @return VpcId 流量镜像所在的私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置流量镜像所在的私有网络ID。
                     * @param _vpcId 流量镜像所在的私有网络ID。
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
                     * 获取接收机负载均衡方式。wrr，ip_hash，wlc。
                     * @return LoadBalancerType 接收机负载均衡方式。wrr，ip_hash，wlc。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置接收机负载均衡方式。wrr，ip_hash，wlc。
                     * @param _loadBalancerType 接收机负载均衡方式。wrr，ip_hash，wlc。
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取是否开始对接收机的健康检查。0：关闭，非0：开启。
                     * @return HealthSwitch 是否开始对接收机的健康检查。0：关闭，非0：开启。
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置是否开始对接收机的健康检查。0：关闭，非0：开启。
                     * @param _healthSwitch 是否开始对接收机的健康检查。0：关闭，非0：开启。
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取健康阈值。
                     * @return HealthNum 健康阈值。
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置健康阈值。
                     * @param _healthNum 健康阈值。
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取不健康阈值。
                     * @return UnhealthNum 不健康阈值。
                     * 
                     */
                    int64_t GetUnhealthNum() const;

                    /**
                     * 设置不健康阈值。
                     * @param _unhealthNum 不健康阈值。
                     * 
                     */
                    void SetUnhealthNum(const int64_t& _unhealthNum);

                    /**
                     * 判断参数 UnhealthNum 是否已赋值
                     * @return UnhealthNum 是否已赋值
                     * 
                     */
                    bool UnhealthNumHasBeenSet() const;

                    /**
                     * 获取检查间隔。
                     * @return IntervalTime 检查间隔。
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置检查间隔。
                     * @param _intervalTime 检查间隔。
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取检查域名。
                     * @return HttpCheckDomain 检查域名。
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置检查域名。
                     * @param _httpCheckDomain 检查域名。
                     * 
                     */
                    void SetHttpCheckDomain(const std::string& _httpCheckDomain);

                    /**
                     * 判断参数 HttpCheckDomain 是否已赋值
                     * @return HttpCheckDomain 是否已赋值
                     * 
                     */
                    bool HttpCheckDomainHasBeenSet() const;

                    /**
                     * 获取检查目录。
                     * @return HttpCheckPath 检查目录。
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置检查目录。
                     * @param _httpCheckPath 检查目录。
                     * 
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     * 
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取健康检查返回码。 1：1xx，2：2xx，3：3xx，4：4xx，5：5xx。
                     * @return HttpCodes 健康检查返回码。 1：1xx，2：2xx，3：3xx，4：4xx，5：5xx。
                     * 
                     */
                    std::vector<int64_t> GetHttpCodes() const;

                    /**
                     * 设置健康检查返回码。 1：1xx，2：2xx，3：3xx，4：4xx，5：5xx。
                     * @param _httpCodes 健康检查返回码。 1：1xx，2：2xx，3：3xx，4：4xx，5：5xx。
                     * 
                     */
                    void SetHttpCodes(const std::vector<int64_t>& _httpCodes);

                    /**
                     * 判断参数 HttpCodes 是否已赋值
                     * @return HttpCodes 是否已赋值
                     * 
                     */
                    bool HttpCodesHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取流量镜像所在私有网络的Cidr。
                     * @return VpcCidrBlock 流量镜像所在私有网络的Cidr。
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置流量镜像所在私有网络的Cidr。
                     * @param _vpcCidrBlock 流量镜像所在私有网络的Cidr。
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取流量镜像所在私有网络的名称。
                     * @return VpcName 流量镜像所在私有网络的名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置流量镜像所在私有网络的名称。
                     * @param _vpcName 流量镜像所在私有网络的名称。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                private:

                    /**
                     * 流量镜像ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像名称。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 流量镜像所在的私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 接收机负载均衡方式。wrr，ip_hash，wlc。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 是否开始对接收机的健康检查。0：关闭，非0：开启。
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 健康阈值。
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * 不健康阈值。
                     */
                    int64_t m_unhealthNum;
                    bool m_unhealthNumHasBeenSet;

                    /**
                     * 检查间隔。
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 检查域名。
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 检查目录。
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 健康检查返回码。 1：1xx，2：2xx，3：3xx，4：4xx，5：5xx。
                     */
                    std::vector<int64_t> m_httpCodes;
                    bool m_httpCodesHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 流量镜像所在私有网络的Cidr。
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 流量镜像所在私有网络的名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_TRAFFICMIRROR_H_
