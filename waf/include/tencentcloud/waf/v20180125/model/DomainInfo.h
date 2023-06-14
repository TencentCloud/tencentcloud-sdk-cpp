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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PortInfo.h>
#include <tencentcloud/waf/v20180125/model/LoadBalancerPackageNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 域名的详细信息
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

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
                     * 获取cname地址
                     * @return Cname cname地址
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置cname地址
                     * @param _cname cname地址
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return Edition 实例类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置实例类型
                     * @param _edition 实例类型
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取日志包
                     * @return ClsStatus 日志包
                     * 
                     */
                    uint64_t GetClsStatus() const;

                    /**
                     * 设置日志包
                     * @param _clsStatus 日志包
                     * 
                     */
                    void SetClsStatus(const uint64_t& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     * 
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取clb模式
                     * @return FlowMode clb模式
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置clb模式
                     * @param _flowMode clb模式
                     * 
                     */
                    void SetFlowMode(const uint64_t& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     * 
                     */
                    bool FlowModeHasBeenSet() const;

                    /**
                     * 获取waf开关
                     * @return Status waf开关
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置waf开关
                     * @param _status waf开关
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取防御模式
                     * @return Mode 防御模式
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置防御模式
                     * @param _mode 防御模式
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取AI防御模式
                     * @return Engine AI防御模式
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置AI防御模式
                     * @param _engine AI防御模式
                     * 
                     */
                    void SetEngine(const uint64_t& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取CC列表
                     * @return CCList CC列表
                     * 
                     */
                    std::vector<std::string> GetCCList() const;

                    /**
                     * 设置CC列表
                     * @param _cCList CC列表
                     * 
                     */
                    void SetCCList(const std::vector<std::string>& _cCList);

                    /**
                     * 判断参数 CCList 是否已赋值
                     * @return CCList 是否已赋值
                     * 
                     */
                    bool CCListHasBeenSet() const;

                    /**
                     * 获取回源ip
                     * @return RsList 回源ip
                     * 
                     */
                    std::vector<std::string> GetRsList() const;

                    /**
                     * 设置回源ip
                     * @param _rsList 回源ip
                     * 
                     */
                    void SetRsList(const std::vector<std::string>& _rsList);

                    /**
                     * 判断参数 RsList 是否已赋值
                     * @return RsList 是否已赋值
                     * 
                     */
                    bool RsListHasBeenSet() const;

                    /**
                     * 获取服务端口配置
                     * @return Ports 服务端口配置
                     * 
                     */
                    std::vector<PortInfo> GetPorts() const;

                    /**
                     * 设置服务端口配置
                     * @param _ports 服务端口配置
                     * 
                     */
                    void SetPorts(const std::vector<PortInfo>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取负载均衡器
                     * @return LoadBalancerSet 负载均衡器
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置负载均衡器
                     * @param _loadBalancerSet 负载均衡器
                     * 
                     */
                    void SetLoadBalancerSet(const std::vector<LoadBalancerPackageNew>& _loadBalancerSet);

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取用户id
                     * @return AppId 用户id
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户id
                     * @param _appId 用户id
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取clb状态
                     * @return State clb状态
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置clb状态
                     * @param _state clb状态
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取0关闭 1开启
                     * @return Ipv6Status 0关闭 1开启
                     * 
                     */
                    int64_t GetIpv6Status() const;

                    /**
                     * 设置0关闭 1开启
                     * @param _ipv6Status 0关闭 1开启
                     * 
                     */
                    void SetIpv6Status(const int64_t& _ipv6Status);

                    /**
                     * 判断参数 Ipv6Status 是否已赋值
                     * @return Ipv6Status 是否已赋值
                     * 
                     */
                    bool Ipv6StatusHasBeenSet() const;

                    /**
                     * 获取0关闭 1开启
                     * @return BotStatus 0关闭 1开启
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置0关闭 1开启
                     * @param _botStatus 0关闭 1开启
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
                     * 获取版本信息
                     * @return Level 版本信息
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置版本信息
                     * @param _level 版本信息
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取是否开启投递CLS功能
                     * @return PostCLSStatus 是否开启投递CLS功能
                     * 
                     */
                    int64_t GetPostCLSStatus() const;

                    /**
                     * 设置是否开启投递CLS功能
                     * @param _postCLSStatus 是否开启投递CLS功能
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
                     * 获取是否开启投递CKafka功能
                     * @return PostCKafkaStatus 是否开启投递CKafka功能
                     * 
                     */
                    int64_t GetPostCKafkaStatus() const;

                    /**
                     * 设置是否开启投递CKafka功能
                     * @param _postCKafkaStatus 是否开启投递CKafka功能
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
                     * 获取应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlbType 应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _albType 应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * cname地址
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 日志包
                     */
                    uint64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * clb模式
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * waf开关
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 防御模式
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * AI防御模式
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * CC列表
                     */
                    std::vector<std::string> m_cCList;
                    bool m_cCListHasBeenSet;

                    /**
                     * 回源ip
                     */
                    std::vector<std::string> m_rsList;
                    bool m_rsListHasBeenSet;

                    /**
                     * 服务端口配置
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 负载均衡器
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * 用户id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * clb状态
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 0关闭 1开启
                     */
                    int64_t m_ipv6Status;
                    bool m_ipv6StatusHasBeenSet;

                    /**
                     * 0关闭 1开启
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * 版本信息
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 是否开启投递CLS功能
                     */
                    int64_t m_postCLSStatus;
                    bool m_postCLSStatusHasBeenSet;

                    /**
                     * 是否开启投递CKafka功能
                     */
                    int64_t m_postCKafkaStatus;
                    bool m_postCKafkaStatusHasBeenSet;

                    /**
                     * 应用型负载均衡类型: clb或者apisix，默认clb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_
