/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/waf/v20180125/model/TagInfo.h>
#include <tencentcloud/waf/v20180125/model/DomainInfo.h>


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
                     * 获取<p>对象ID</p>
                     * @return ObjectId <p>对象ID</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>对象ID</p>
                     * @param _objectId <p>对象ID</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>精准域名列表</p>
                     * @return PreciseDomains <p>精准域名列表</p>
                     * 
                     */
                    std::vector<std::string> GetPreciseDomains() const;

                    /**
                     * 设置<p>精准域名列表</p>
                     * @param _preciseDomains <p>精准域名列表</p>
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
                     * 获取<p>WAF功能开关状态，0关闭1开启</p>
                     * @return Status <p>WAF功能开关状态，0关闭1开启</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>WAF功能开关状态，0关闭1开启</p>
                     * @param _status <p>WAF功能开关状态，0关闭1开启</p>
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
                     * 获取<p>WAF日志开关状态，0关闭1开启</p>
                     * @return ClsStatus <p>WAF日志开关状态，0关闭1开启</p>
                     * 
                     */
                    int64_t GetClsStatus() const;

                    /**
                     * 设置<p>WAF日志开关状态，0关闭1开启</p>
                     * @param _clsStatus <p>WAF日志开关状态，0关闭1开启</p>
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
                     * 获取<p>CLB对象对应的虚拟域名</p>
                     * @return VirtualDomain <p>CLB对象对应的虚拟域名</p>
                     * 
                     */
                    std::string GetVirtualDomain() const;

                    /**
                     * 设置<p>CLB对象对应的虚拟域名</p>
                     * @param _virtualDomain <p>CLB对象对应的虚拟域名</p>
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
                     * 获取<p>对象名称</p>
                     * @return ObjectName <p>对象名称</p>
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置<p>对象名称</p>
                     * @param _objectName <p>对象名称</p>
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
                     * 获取<p>公网地址</p>
                     * @return PublicIp <p>公网地址</p>
                     * 
                     */
                    std::vector<std::string> GetPublicIp() const;

                    /**
                     * 设置<p>公网地址</p>
                     * @param _publicIp <p>公网地址</p>
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
                     * 获取<p>内网地址</p>
                     * @return PrivateIp <p>内网地址</p>
                     * 
                     */
                    std::vector<std::string> GetPrivateIp() const;

                    /**
                     * 设置<p>内网地址</p>
                     * @param _privateIp <p>内网地址</p>
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
                     * 获取<p>VPC名称</p>
                     * @return VpcName <p>VPC名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>VPC名称</p>
                     * @param _vpcName <p>VPC名称</p>
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
                     * 获取<p>VPC ID</p>
                     * @return Vpc <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpc <p>VPC ID</p>
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
                     * 获取<p>waf实例等级，如果未绑定实例为0</p>
                     * @return InstanceLevel <p>waf实例等级，如果未绑定实例为0</p>
                     * 
                     */
                    int64_t GetInstanceLevel() const;

                    /**
                     * 设置<p>waf实例等级，如果未绑定实例为0</p>
                     * @param _instanceLevel <p>waf实例等级，如果未绑定实例为0</p>
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
                     * 获取<p>clb投递开关</p>
                     * @return PostCLSStatus <p>clb投递开关</p>
                     * 
                     */
                    int64_t GetPostCLSStatus() const;

                    /**
                     * 设置<p>clb投递开关</p>
                     * @param _postCLSStatus <p>clb投递开关</p>
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
                     * 获取<p>kafka投递开关</p>
                     * @return PostCKafkaStatus <p>kafka投递开关</p>
                     * 
                     */
                    int64_t GetPostCKafkaStatus() const;

                    /**
                     * 设置<p>kafka投递开关</p>
                     * @param _postCKafkaStatus <p>kafka投递开关</p>
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
                     * 获取<p>对象类型：CLB:负载均衡器，TSE:云原生网关</p>
                     * @return Type <p>对象类型：CLB:负载均衡器，TSE:云原生网关</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>对象类型：CLB:负载均衡器，TSE:云原生网关</p>
                     * @param _type <p>对象类型：CLB:负载均衡器，TSE:云原生网关</p>
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
                     * 获取<p>对象地域</p>
                     * @return Region <p>对象地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>对象地域</p>
                     * @param _region <p>对象地域</p>
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
                     * 获取<p>代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出</p>
                     * @return Proxy <p>代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出</p>
                     * 
                     */
                    uint64_t GetProxy() const;

                    /**
                     * 设置<p>代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出</p>
                     * @param _proxy <p>代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出</p>
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
                     * 获取<p>指定获取客户端IP的头部字段列表。IsCdn为3时有效</p>
                     * @return IpHeaders <p>指定获取客户端IP的头部字段列表。IsCdn为3时有效</p>
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置<p>指定获取客户端IP的头部字段列表。IsCdn为3时有效</p>
                     * @param _ipHeaders <p>指定获取客户端IP的头部字段列表。IsCdn为3时有效</p>
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
                     * 获取<p>bot防护开关</p>
                     * @return BotStatus <p>bot防护开关</p>
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置<p>bot防护开关</p>
                     * @param _botStatus <p>bot防护开关</p>
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
                     * 获取<p>api防护开关</p>
                     * @return ApiStatus <p>api防护开关</p>
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置<p>api防护开关</p>
                     * @param _apiStatus <p>api防护开关</p>
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
                     * 获取<p>对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式</p>
                     * @return ObjectFlowMode <p>对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式</p>
                     * 
                     */
                    int64_t GetObjectFlowMode() const;

                    /**
                     * 设置<p>对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式</p>
                     * @param _objectFlowMode <p>对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式</p>
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
                     * 获取<p>数值形式的私有网络 ID</p>
                     * @return NumericalVpcId <p>数值形式的私有网络 ID</p>
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置<p>数值形式的私有网络 ID</p>
                     * @param _numericalVpcId <p>数值形式的私有网络 ID</p>
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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
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
                     * 获取<p>创建时间</p>
                     * @return AddTime <p>创建时间</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _addTime <p>创建时间</p>
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>跨账号时，表示成员账号的appid</p>
                     * @return MemberAppId <p>跨账号时，表示成员账号的appid</p>
                     * 
                     */
                    uint64_t GetMemberAppId() const;

                    /**
                     * 设置<p>跨账号时，表示成员账号的appid</p>
                     * @param _memberAppId <p>跨账号时，表示成员账号的appid</p>
                     * 
                     */
                    void SetMemberAppId(const uint64_t& _memberAppId);

                    /**
                     * 判断参数 MemberAppId 是否已赋值
                     * @return MemberAppId 是否已赋值
                     * 
                     */
                    bool MemberAppIdHasBeenSet() const;

                    /**
                     * 获取<p>跨账号时，表示成员账号的uin</p>
                     * @return MemberUin <p>跨账号时，表示成员账号的uin</p>
                     * 
                     */
                    std::string GetMemberUin() const;

                    /**
                     * 设置<p>跨账号时，表示成员账号的uin</p>
                     * @param _memberUin <p>跨账号时，表示成员账号的uin</p>
                     * 
                     */
                    void SetMemberUin(const std::string& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取<p>跨账号时，表示成员账号的昵称</p>
                     * @return MemberNickName <p>跨账号时，表示成员账号的昵称</p>
                     * 
                     */
                    std::string GetMemberNickName() const;

                    /**
                     * 设置<p>跨账号时，表示成员账号的昵称</p>
                     * @param _memberNickName <p>跨账号时，表示成员账号的昵称</p>
                     * 
                     */
                    void SetMemberNickName(const std::string& _memberNickName);

                    /**
                     * 判断参数 MemberNickName 是否已赋值
                     * @return MemberNickName 是否已赋值
                     * 
                     */
                    bool MemberNickNameHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return TagInfos <p>标签信息</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagInfos() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tagInfos <p>标签信息</p>
                     * 
                     */
                    void SetTagInfos(const std::vector<TagInfo>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * 
                     */
                    bool TagInfosHasBeenSet() const;

                    /**
                     * 获取<p>精准域名信息</p>
                     * @return PreciseDomainDetails <p>精准域名信息</p>
                     * 
                     */
                    std::vector<DomainInfo> GetPreciseDomainDetails() const;

                    /**
                     * 设置<p>精准域名信息</p>
                     * @param _preciseDomainDetails <p>精准域名信息</p>
                     * 
                     */
                    void SetPreciseDomainDetails(const std::vector<DomainInfo>& _preciseDomainDetails);

                    /**
                     * 判断参数 PreciseDomainDetails 是否已赋值
                     * @return PreciseDomainDetails 是否已赋值
                     * 
                     */
                    bool PreciseDomainDetailsHasBeenSet() const;

                    /**
                     * 获取<p>waf接入状态</p>
                     * @return WafAccessStatus <p>waf接入状态</p>
                     * 
                     */
                    int64_t GetWafAccessStatus() const;

                    /**
                     * 设置<p>waf接入状态</p>
                     * @param _wafAccessStatus <p>waf接入状态</p>
                     * 
                     */
                    void SetWafAccessStatus(const int64_t& _wafAccessStatus);

                    /**
                     * 判断参数 WafAccessStatus 是否已赋值
                     * @return WafAccessStatus 是否已赋值
                     * 
                     */
                    bool WafAccessStatusHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Note <p>备注</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _note <p>备注</p>
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * <p>对象ID</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>精准域名列表</p>
                     */
                    std::vector<std::string> m_preciseDomains;
                    bool m_preciseDomainsHasBeenSet;

                    /**
                     * <p>WAF功能开关状态，0关闭1开启</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>WAF日志开关状态，0关闭1开启</p>
                     */
                    int64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * <p>CLB对象对应的虚拟域名</p>
                     */
                    std::string m_virtualDomain;
                    bool m_virtualDomainHasBeenSet;

                    /**
                     * <p>对象名称</p>
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * <p>公网地址</p>
                     */
                    std::vector<std::string> m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网地址</p>
                     */
                    std::vector<std::string> m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>VPC名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * <p>waf实例等级，如果未绑定实例为0</p>
                     */
                    int64_t m_instanceLevel;
                    bool m_instanceLevelHasBeenSet;

                    /**
                     * <p>clb投递开关</p>
                     */
                    int64_t m_postCLSStatus;
                    bool m_postCLSStatusHasBeenSet;

                    /**
                     * <p>kafka投递开关</p>
                     */
                    int64_t m_postCKafkaStatus;
                    bool m_postCKafkaStatusHasBeenSet;

                    /**
                     * <p>对象类型：CLB:负载均衡器，TSE:云原生网关</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>对象地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>代理状态: 0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出</p>
                     */
                    uint64_t m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * <p>指定获取客户端IP的头部字段列表。IsCdn为3时有效</p>
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * <p>bot防护开关</p>
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * <p>api防护开关</p>
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * <p>对象接入模式，0表示镜像模式，1表示清洗模式，2表示体检模式，默认为清洗模式</p>
                     */
                    int64_t m_objectFlowMode;
                    bool m_objectFlowModeHasBeenSet;

                    /**
                     * <p>数值形式的私有网络 ID</p>
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>跨账号时，表示成员账号的appid</p>
                     */
                    uint64_t m_memberAppId;
                    bool m_memberAppIdHasBeenSet;

                    /**
                     * <p>跨账号时，表示成员账号的uin</p>
                     */
                    std::string m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * <p>跨账号时，表示成员账号的昵称</p>
                     */
                    std::string m_memberNickName;
                    bool m_memberNickNameHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagInfo> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                    /**
                     * <p>精准域名信息</p>
                     */
                    std::vector<DomainInfo> m_preciseDomainDetails;
                    bool m_preciseDomainDetailsHasBeenSet;

                    /**
                     * <p>waf接入状态</p>
                     */
                    int64_t m_wafAccessStatus;
                    bool m_wafAccessStatusHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBOBJECT_H_
