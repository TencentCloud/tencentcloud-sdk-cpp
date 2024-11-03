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
                * domain列表
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
                     * 获取域名所属实例类型。
sparta-waf：SaaS型WAF实例
clb-waf：负载均衡型WAF实例
cdc-clb-waf：CDC环境下负载均衡型WAF实例
                     * @return Edition 域名所属实例类型。
sparta-waf：SaaS型WAF实例
clb-waf：负载均衡型WAF实例
cdc-clb-waf：CDC环境下负载均衡型WAF实例
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置域名所属实例类型。
sparta-waf：SaaS型WAF实例
clb-waf：负载均衡型WAF实例
cdc-clb-waf：CDC环境下负载均衡型WAF实例
                     * @param _edition 域名所属实例类型。
sparta-waf：SaaS型WAF实例
clb-waf：负载均衡型WAF实例
cdc-clb-waf：CDC环境下负载均衡型WAF实例
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
                     * 获取地域。
"多伦多": "ca"
"广州": "gz"
"成都": "cd"
"福州": "fzec"
"深圳": "szx"
"印度": "in"
"济南": "jnec"
"重庆": "cq"
"天津": "tsn"
"欧洲东北": "ru"
"南京": "nj"
"美国硅谷": "usw"
"泰国": "th"
"广州Open": "gzopen"
"深圳金融": "szjr"
"法兰克福": "de"
"日本": "jp"
"弗吉尼亚": "use"
"北京": "bj"
"中国香港": "hk"
"杭州": "hzec"
"北京金融": "bjjr"
"上海金融": "shjr"
"台北": "tpe"
"首尔": "kr"
"上海": "sh"
"新加坡": "sg"
"清远": "qy"
                     * @return Region 地域。
"多伦多": "ca"
"广州": "gz"
"成都": "cd"
"福州": "fzec"
"深圳": "szx"
"印度": "in"
"济南": "jnec"
"重庆": "cq"
"天津": "tsn"
"欧洲东北": "ru"
"南京": "nj"
"美国硅谷": "usw"
"泰国": "th"
"广州Open": "gzopen"
"深圳金融": "szjr"
"法兰克福": "de"
"日本": "jp"
"弗吉尼亚": "use"
"北京": "bj"
"中国香港": "hk"
"杭州": "hzec"
"北京金融": "bjjr"
"上海金融": "shjr"
"台北": "tpe"
"首尔": "kr"
"上海": "sh"
"新加坡": "sg"
"清远": "qy"
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域。
"多伦多": "ca"
"广州": "gz"
"成都": "cd"
"福州": "fzec"
"深圳": "szx"
"印度": "in"
"济南": "jnec"
"重庆": "cq"
"天津": "tsn"
"欧洲东北": "ru"
"南京": "nj"
"美国硅谷": "usw"
"泰国": "th"
"广州Open": "gzopen"
"深圳金融": "szjr"
"法兰克福": "de"
"日本": "jp"
"弗吉尼亚": "use"
"北京": "bj"
"中国香港": "hk"
"杭州": "hzec"
"北京金融": "bjjr"
"上海金融": "shjr"
"台北": "tpe"
"首尔": "kr"
"上海": "sh"
"新加坡": "sg"
"清远": "qy"
                     * @param _region 地域。
"多伦多": "ca"
"广州": "gz"
"成都": "cd"
"福州": "fzec"
"深圳": "szx"
"印度": "in"
"济南": "jnec"
"重庆": "cq"
"天津": "tsn"
"欧洲东北": "ru"
"南京": "nj"
"美国硅谷": "usw"
"泰国": "th"
"广州Open": "gzopen"
"深圳金融": "szjr"
"法兰克福": "de"
"日本": "jp"
"弗吉尼亚": "use"
"北京": "bj"
"中国香港": "hk"
"杭州": "hzec"
"北京金融": "bjjr"
"上海金融": "shjr"
"台北": "tpe"
"首尔": "kr"
"上海": "sh"
"新加坡": "sg"
"清远": "qy"
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
                     * 获取访问日志开关状态。
0：关闭
1：开启
                     * @return ClsStatus 访问日志开关状态。
0：关闭
1：开启
                     * 
                     */
                    uint64_t GetClsStatus() const;

                    /**
                     * 设置访问日志开关状态。
0：关闭
1：开启
                     * @param _clsStatus 访问日志开关状态。
0：关闭
1：开启
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
                     * 获取负载均衡型WAF使用模式。
0：镜像模式 
1：清洗模式
                     * @return FlowMode 负载均衡型WAF使用模式。
0：镜像模式 
1：清洗模式
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置负载均衡型WAF使用模式。
0：镜像模式 
1：清洗模式
                     * @param _flowMode 负载均衡型WAF使用模式。
0：镜像模式 
1：清洗模式
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
                     * 获取waf开关状态。
0：关闭 
1：开启
                     * @return Status waf开关状态。
0：关闭 
1：开启
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置waf开关状态。
0：关闭 
1：开启
                     * @param _status waf开关状态。
0：关闭 
1：开启
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
                     * 获取规则引擎防护模式。
0：观察模式 
1：拦截模式
                     * @return Mode 规则引擎防护模式。
0：观察模式 
1：拦截模式
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置规则引擎防护模式。
0：观察模式 
1：拦截模式
                     * @param _mode 规则引擎防护模式。
0：观察模式 
1：拦截模式
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
                     * 获取规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * @return Engine 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * @param _engine 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
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
                     * 获取沙箱集群回源出口IP列表
                     * @return CCList 沙箱集群回源出口IP列表
                     * 
                     */
                    std::vector<std::string> GetCCList() const;

                    /**
                     * 设置沙箱集群回源出口IP列表
                     * @param _cCList 沙箱集群回源出口IP列表
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
                     * 获取生产集群回源出口IP列表
                     * @return RsList 生产集群回源出口IP列表
                     * 
                     */
                    std::vector<std::string> GetRsList() const;

                    /**
                     * 设置生产集群回源出口IP列表
                     * @param _rsList 生产集群回源出口IP列表
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
                     * 获取负载均衡器相关配置
                     * @return LoadBalancerSet 负载均衡器相关配置
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置负载均衡器相关配置
                     * @param _loadBalancerSet 负载均衡器相关配置
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
                     * 获取负载均衡型WAF域名LB监听器状态。
0：操作成功 
4：正在绑定LB 
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     * @return State 负载均衡型WAF域名LB监听器状态。
0：操作成功 
4：正在绑定LB 
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置负载均衡型WAF域名LB监听器状态。
0：操作成功 
4：正在绑定LB 
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     * @param _state 负载均衡型WAF域名LB监听器状态。
0：操作成功 
4：正在绑定LB 
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
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
                     * 获取Ipv6开关状态。
0：关闭 
1：开启
                     * @return Ipv6Status Ipv6开关状态。
0：关闭 
1：开启
                     * 
                     */
                    int64_t GetIpv6Status() const;

                    /**
                     * 设置Ipv6开关状态。
0：关闭 
1：开启
                     * @param _ipv6Status Ipv6开关状态。
0：关闭 
1：开启
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
                     * 获取BOT开关状态。
0：关闭 
1：关闭
2：开启
3：开启
                     * @return BotStatus BOT开关状态。
0：关闭 
1：关闭
2：开启
3：开启
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置BOT开关状态。
0：关闭 
1：关闭
2：开启
3：开启
                     * @param _botStatus BOT开关状态。
0：关闭 
1：关闭
2：开启
3：开启
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
                     * 获取实例版本信息。
101：小微敏捷版 
102：小微超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     * @return Level 实例版本信息。
101：小微敏捷版 
102：小微超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置实例版本信息。
101：小微敏捷版 
102：小微超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     * @param _level 实例版本信息。
101：小微敏捷版 
102：小微超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
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
                     * 获取投递CLS状态。
0：关闭 
1：开启
                     * @return PostCLSStatus 投递CLS状态。
0：关闭 
1：开启
                     * 
                     */
                    int64_t GetPostCLSStatus() const;

                    /**
                     * 设置投递CLS状态。
0：关闭 
1：开启
                     * @param _postCLSStatus 投递CLS状态。
0：关闭 
1：开启
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
                     * 获取投递CKafka状态。
0：关闭 
1：开启
                     * @return PostCKafkaStatus 投递CKafka状态。
0：关闭 
1：开启
                     * 
                     */
                    int64_t GetPostCKafkaStatus() const;

                    /**
                     * 设置投递CKafka状态。
0：关闭 
1：开启
                     * @param _postCKafkaStatus 投递CKafka状态。
0：关闭 
1：开启
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
                     * 获取cdc实例域名接入的集群信息,非cdc实例忽略。
                     * @return CdcClusters cdc实例域名接入的集群信息,非cdc实例忽略。
                     * 
                     */
                    std::string GetCdcClusters() const;

                    /**
                     * 设置cdc实例域名接入的集群信息,非cdc实例忽略。
                     * @param _cdcClusters cdc实例域名接入的集群信息,非cdc实例忽略。
                     * 
                     */
                    void SetCdcClusters(const std::string& _cdcClusters);

                    /**
                     * 判断参数 CdcClusters 是否已赋值
                     * @return CdcClusters 是否已赋值
                     * 
                     */
                    bool CdcClustersHasBeenSet() const;

                    /**
                     * 获取api安全开关状态。
0：关闭 
1：开启
                     * @return ApiStatus api安全开关状态。
0：关闭 
1：开启
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置api安全开关状态。
0：关闭 
1：开启
                     * @param _apiStatus api安全开关状态。
0：关闭 
1：开启
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
                     * 获取应用型负载均衡类型，默认clb。
clb：七层负载均衡器类型
apisix：apisix网关型
                     * @return AlbType 应用型负载均衡类型，默认clb。
clb：七层负载均衡器类型
apisix：apisix网关型
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置应用型负载均衡类型，默认clb。
clb：七层负载均衡器类型
apisix：apisix网关型
                     * @param _albType 应用型负载均衡类型，默认clb。
clb：七层负载均衡器类型
apisix：apisix网关型
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                    /**
                     * 获取安全组状态。
0：不展示
1：非腾讯云源站
2：安全组绑定失败
3：安全组发生变更
                     * @return SgState 安全组状态。
0：不展示
1：非腾讯云源站
2：安全组绑定失败
3：安全组发生变更
                     * 
                     */
                    int64_t GetSgState() const;

                    /**
                     * 设置安全组状态。
0：不展示
1：非腾讯云源站
2：安全组绑定失败
3：安全组发生变更
                     * @param _sgState 安全组状态。
0：不展示
1：非腾讯云源站
2：安全组绑定失败
3：安全组发生变更
                     * 
                     */
                    void SetSgState(const int64_t& _sgState);

                    /**
                     * 判断参数 SgState 是否已赋值
                     * @return SgState 是否已赋值
                     * 
                     */
                    bool SgStateHasBeenSet() const;

                    /**
                     * 获取安全组状态的详细解释
                     * @return SgDetail 安全组状态的详细解释
                     * 
                     */
                    std::string GetSgDetail() const;

                    /**
                     * 设置安全组状态的详细解释
                     * @param _sgDetail 安全组状态的详细解释
                     * 
                     */
                    void SetSgDetail(const std::string& _sgDetail);

                    /**
                     * 判断参数 SgDetail 是否已赋值
                     * @return SgDetail 是否已赋值
                     * 
                     */
                    bool SgDetailHasBeenSet() const;

                    /**
                     * 获取域名云环境。hybrid：混合云域名
public：公有云域名
                     * @return CloudType 域名云环境。hybrid：混合云域名
public：公有云域名
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置域名云环境。hybrid：混合云域名
public：公有云域名
                     * @param _cloudType 域名云环境。hybrid：混合云域名
public：公有云域名
                     * 
                     */
                    void SetCloudType(const std::string& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取域名备注信息
                     * @return Note 域名备注信息
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置域名备注信息
                     * @param _note 域名备注信息
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取SAASWAF源站IP列表
                     * @return SrcList SAASWAF源站IP列表
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置SAASWAF源站IP列表
                     * @param _srcList SAASWAF源站IP列表
                     * 
                     */
                    void SetSrcList(const std::vector<std::string>& _srcList);

                    /**
                     * 判断参数 SrcList 是否已赋值
                     * @return SrcList 是否已赋值
                     * 
                     */
                    bool SrcListHasBeenSet() const;

                    /**
                     * 获取SAASWAF源站域名列表
                     * @return UpstreamDomainList SAASWAF源站域名列表
                     * 
                     */
                    std::vector<std::string> GetUpstreamDomainList() const;

                    /**
                     * 设置SAASWAF源站域名列表
                     * @param _upstreamDomainList SAASWAF源站域名列表
                     * 
                     */
                    void SetUpstreamDomainList(const std::vector<std::string>& _upstreamDomainList);

                    /**
                     * 判断参数 UpstreamDomainList 是否已赋值
                     * @return UpstreamDomainList 是否已赋值
                     * 
                     */
                    bool UpstreamDomainListHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SgID 安全组ID
                     * 
                     */
                    std::string GetSgID() const;

                    /**
                     * 设置安全组ID
                     * @param _sgID 安全组ID
                     * 
                     */
                    void SetSgID(const std::string& _sgID);

                    /**
                     * 判断参数 SgID 是否已赋值
                     * @return SgID 是否已赋值
                     * 
                     */
                    bool SgIDHasBeenSet() const;

                    /**
                     * 获取clbwaf接入状态
                     * @return AccessStatus clbwaf接入状态
                     * 
                     */
                    int64_t GetAccessStatus() const;

                    /**
                     * 设置clbwaf接入状态
                     * @param _accessStatus clbwaf接入状态
                     * 
                     */
                    void SetAccessStatus(const int64_t& _accessStatus);

                    /**
                     * 判断参数 AccessStatus 是否已赋值
                     * @return AccessStatus 是否已赋值
                     * 
                     */
                    bool AccessStatusHasBeenSet() const;

                    /**
                     * 获取域名标签
                     * @return Labels 域名标签
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置域名标签
                     * @param _labels 域名标签
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

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
                     * 域名所属实例类型。
sparta-waf：SaaS型WAF实例
clb-waf：负载均衡型WAF实例
cdc-clb-waf：CDC环境下负载均衡型WAF实例
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 地域。
"多伦多": "ca"
"广州": "gz"
"成都": "cd"
"福州": "fzec"
"深圳": "szx"
"印度": "in"
"济南": "jnec"
"重庆": "cq"
"天津": "tsn"
"欧洲东北": "ru"
"南京": "nj"
"美国硅谷": "usw"
"泰国": "th"
"广州Open": "gzopen"
"深圳金融": "szjr"
"法兰克福": "de"
"日本": "jp"
"弗吉尼亚": "use"
"北京": "bj"
"中国香港": "hk"
"杭州": "hzec"
"北京金融": "bjjr"
"上海金融": "shjr"
"台北": "tpe"
"首尔": "kr"
"上海": "sh"
"新加坡": "sg"
"清远": "qy"
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 访问日志开关状态。
0：关闭
1：开启
                     */
                    uint64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * 负载均衡型WAF使用模式。
0：镜像模式 
1：清洗模式
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * waf开关状态。
0：关闭 
1：开启
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则引擎防护模式。
0：观察模式 
1：拦截模式
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 沙箱集群回源出口IP列表
                     */
                    std::vector<std::string> m_cCList;
                    bool m_cCListHasBeenSet;

                    /**
                     * 生产集群回源出口IP列表
                     */
                    std::vector<std::string> m_rsList;
                    bool m_rsListHasBeenSet;

                    /**
                     * 服务端口配置
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 负载均衡器相关配置
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * 用户id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 负载均衡型WAF域名LB监听器状态。
0：操作成功 
4：正在绑定LB 
6：正在解绑LB 
7：解绑LB失败 
8：绑定LB失败 
10：内部错误
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Ipv6开关状态。
0：关闭 
1：开启
                     */
                    int64_t m_ipv6Status;
                    bool m_ipv6StatusHasBeenSet;

                    /**
                     * BOT开关状态。
0：关闭 
1：关闭
2：开启
3：开启
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * 实例版本信息。
101：小微敏捷版 
102：小微超轻版
2：高级版
3：企业版
4：旗舰版
6：独享版
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 投递CLS状态。
0：关闭 
1：开启
                     */
                    int64_t m_postCLSStatus;
                    bool m_postCLSStatusHasBeenSet;

                    /**
                     * 投递CKafka状态。
0：关闭 
1：开启
                     */
                    int64_t m_postCKafkaStatus;
                    bool m_postCKafkaStatusHasBeenSet;

                    /**
                     * cdc实例域名接入的集群信息,非cdc实例忽略。
                     */
                    std::string m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * api安全开关状态。
0：关闭 
1：开启
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * 应用型负载均衡类型，默认clb。
clb：七层负载均衡器类型
apisix：apisix网关型
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * 安全组状态。
0：不展示
1：非腾讯云源站
2：安全组绑定失败
3：安全组发生变更
                     */
                    int64_t m_sgState;
                    bool m_sgStateHasBeenSet;

                    /**
                     * 安全组状态的详细解释
                     */
                    std::string m_sgDetail;
                    bool m_sgDetailHasBeenSet;

                    /**
                     * 域名云环境。hybrid：混合云域名
public：公有云域名
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 域名备注信息
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * SAASWAF源站IP列表
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * SAASWAF源站域名列表
                     */
                    std::vector<std::string> m_upstreamDomainList;
                    bool m_upstreamDomainListHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::string m_sgID;
                    bool m_sgIDHasBeenSet;

                    /**
                     * clbwaf接入状态
                     */
                    int64_t m_accessStatus;
                    bool m_accessStatusHasBeenSet;

                    /**
                     * 域名标签
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_
