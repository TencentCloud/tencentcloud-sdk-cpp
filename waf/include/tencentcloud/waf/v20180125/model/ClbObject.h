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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CLBOBJECT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CLBOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Clb类型防护对象
                */
                class ClbObject : public AbstractModel
                {
                public:
                    ClbObject();
                    ~ClbObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象ID
                     * @return ObjectId 对象ID
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置对象ID
                     * @param _objectId 对象ID
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取精准域名列表
                     * @return PreciseDomains 精准域名列表
                     * 
                     */
                    std::vector<std::string> GetPreciseDomains() const;

                    /**
                     * 设置精准域名列表
                     * @param _preciseDomains 精准域名列表
                     * 
                     */
                    void SetPreciseDomains(const std::vector<std::string>& _preciseDomains);

                    /**
                     * 判断参数 PreciseDomains 是否已赋值
                     * @return PreciseDomains 是否已赋值
                     * 
                     */
                    bool PreciseDomainsHasBeenSet() const;

                    /**
                     * 获取WAF功能开关状态，0关闭1开启
                     * @return Status WAF功能开关状态，0关闭1开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置WAF功能开关状态，0关闭1开启
                     * @param _status WAF功能开关状态，0关闭1开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取WAF日志开关状态，0关闭1开启
                     * @return ClsStatus WAF日志开关状态，0关闭1开启
                     * 
                     */
                    int64_t GetClsStatus() const;

                    /**
                     * 设置WAF日志开关状态，0关闭1开启
                     * @param _clsStatus WAF日志开关状态，0关闭1开启
                     * 
                     */
                    void SetClsStatus(const int64_t& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     * 
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取CLB对象对应的虚拟域名
                     * @return VirtualDomain CLB对象对应的虚拟域名
                     * 
                     */
                    std::string GetVirtualDomain() const;

                    /**
                     * 设置CLB对象对应的虚拟域名
                     * @param _virtualDomain CLB对象对应的虚拟域名
                     * 
                     */
                    void SetVirtualDomain(const std::string& _virtualDomain);

                    /**
                     * 判断参数 VirtualDomain 是否已赋值
                     * @return VirtualDomain 是否已赋值
                     * 
                     */
                    bool VirtualDomainHasBeenSet() const;

                    /**
                     * 获取对象名称
                     * @return ObjectName 对象名称
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置对象名称
                     * @param _objectName 对象名称
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取公网地址
                     * @return PublicIp 公网地址
                     * 
                     */
                    std::vector<std::string> GetPublicIp() const;

                    /**
                     * 设置公网地址
                     * @param _publicIp 公网地址
                     * 
                     */
                    void SetPublicIp(const std::vector<std::string>& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取内网地址
                     * @return PrivateIp 内网地址
                     * 
                     */
                    std::vector<std::string> GetPrivateIp() const;

                    /**
                     * 设置内网地址
                     * @param _privateIp 内网地址
                     * 
                     */
                    void SetPrivateIp(const std::vector<std::string>& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取VPC名称
                     * @return VpcName VPC名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC名称
                     * @param _vpcName VPC名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return Vpc VPC ID
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC ID
                     * @param _vpc VPC ID
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取waf实例等级，如果未绑定实例为0
                     * @return InstanceLevel waf实例等级，如果未绑定实例为0
                     * 
                     */
                    int64_t GetInstanceLevel() const;

                    /**
                     * 设置waf实例等级，如果未绑定实例为0
                     * @param _instanceLevel waf实例等级，如果未绑定实例为0
                     * 
                     */
                    void SetInstanceLevel(const int64_t& _instanceLevel);

                    /**
                     * 判断参数 InstanceLevel 是否已赋值
                     * @return InstanceLevel 是否已赋值
                     * 
                     */
                    bool InstanceLevelHasBeenSet() const;

                    /**
                     * 获取clb投递开关
                     * @return PostCLSStatus clb投递开关
                     * 
                     */
                    int64_t GetPostCLSStatus() const;

                    /**
                     * 设置clb投递开关
                     * @param _postCLSStatus clb投递开关
                     * 
                     */
                    void SetPostCLSStatus(const int64_t& _postCLSStatus);

                    /**
                     * 判断参数 PostCLSStatus 是否已赋值
                     * @return PostCLSStatus 是否已赋值
                     * 
                     */
                    bool PostCLSStatusHasBeenSet() const;

                    /**
                     * 获取kafka投递开关
                     * @return PostCKafkaStatus kafka投递开关
                     * 
                     */
                    int64_t GetPostCKafkaStatus() const;

                    /**
                     * 设置kafka投递开关
                     * @param _postCKafkaStatus kafka投递开关
                     * 
                     */
                    void SetPostCKafkaStatus(const int64_t& _postCKafkaStatus);

                    /**
                     * 判断参数 PostCKafkaStatus 是否已赋值
                     * @return PostCKafkaStatus 是否已赋值
                     * 
                     */
                    bool PostCKafkaStatusHasBeenSet() const;

                    /**
                     * 获取对象类型：CLB:负载均衡器，TSE:云原生网关
                     * @return Type 对象类型：CLB:负载均衡器，TSE:云原生网关
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置对象类型：CLB:负载均衡器，TSE:云原生网关
                     * @param _type 对象类型：CLB:负载均衡器，TSE:云原生网关
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取对象地域
                     * @return Region 对象地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置对象地域
                     * @param _region 对象地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出
                     * @return Proxy 代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出
                     * 
                     */
                    uint64_t GetProxy() const;

                    /**
                     * 设置代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出
                     * @param _proxy 代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出
                     * 
                     */
                    void SetProxy(const uint64_t& _proxy);

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取指定获取客户端IP的头部字段列表。IsCdn为3时有效
                     * @return IpHeaders 指定获取客户端IP的头部字段列表。IsCdn为3时有效
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置指定获取客户端IP的头部字段列表。IsCdn为3时有效
                     * @param _ipHeaders 指定获取客户端IP的头部字段列表。IsCdn为3时有效
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取bot防护开关
                     * @return BotStatus bot防护开关
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置bot防护开关
                     * @param _botStatus bot防护开关
                     * 
                     */
                    void SetBotStatus(const int64_t& _botStatus);

                    /**
                     * 判断参数 BotStatus 是否已赋值
                     * @return BotStatus 是否已赋值
                     * 
                     */
                    bool BotStatusHasBeenSet() const;

                    /**
                     * 获取api防护开关
                     * @return ApiStatus api防护开关
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置api防护开关
                     * @param _apiStatus api防护开关
                     * 
                     */
                    void SetApiStatus(const int64_t& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                    /**
                     * 获取对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式
                     * @return ObjectFlowMode 对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式
                     * 
                     */
                    int64_t GetObjectFlowMode() const;

                    /**
                     * 设置对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式
                     * @param _objectFlowMode 对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式
                     * 
                     */
                    void SetObjectFlowMode(const int64_t& _objectFlowMode);

                    /**
                     * 判断参数 ObjectFlowMode 是否已赋值
                     * @return ObjectFlowMode 是否已赋值
                     * 
                     */
                    bool ObjectFlowModeHasBeenSet() const;

                    /**
                     * 获取数值形式的私有网络 ID
                     * @return NumericalVpcId 数值形式的私有网络 ID
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置数值形式的私有网络 ID
                     * @param _numericalVpcId 数值形式的私有网络 ID
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return AddTime 创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
                     * @param _addTime 创建时间
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                private:

                    /**
                     * 对象ID
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 精准域名列表
                     */
                    std::vector<std::string> m_preciseDomains;
                    bool m_preciseDomainsHasBeenSet;

                    /**
                     * WAF功能开关状态，0关闭1开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * WAF日志开关状态，0关闭1开启
                     */
                    int64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * CLB对象对应的虚拟域名
                     */
                    std::string m_virtualDomain;
                    bool m_virtualDomainHasBeenSet;

                    /**
                     * 对象名称
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * 公网地址
                     */
                    std::vector<std::string> m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网地址
                     */
                    std::vector<std::string> m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * VPC名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * waf实例等级，如果未绑定实例为0
                     */
                    int64_t m_instanceLevel;
                    bool m_instanceLevelHasBeenSet;

                    /**
                     * clb投递开关
                     */
                    int64_t m_postCLSStatus;
                    bool m_postCLSStatusHasBeenSet;

                    /**
                     * kafka投递开关
                     */
                    int64_t m_postCKafkaStatus;
                    bool m_postCKafkaStatusHasBeenSet;

                    /**
                     * 对象类型：CLB:负载均衡器，TSE:云原生网关
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 对象地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出
                     */
                    uint64_t m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * 指定获取客户端IP的头部字段列表。IsCdn为3时有效
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * bot防护开关
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * api防护开关
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * 对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式
                     */
                    int64_t m_objectFlowMode;
                    bool m_objectFlowModeHasBeenSet;

                    /**
                     * 数值形式的私有网络 ID
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBOBJECT_H_
