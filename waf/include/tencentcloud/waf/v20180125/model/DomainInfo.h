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
#include <tencentcloud/waf/v20180125/model/TagInfo.h>


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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>域名ID</p>
                     * @return DomainId <p>域名ID</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>域名ID</p>
                     * @param _domainId <p>域名ID</p>
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
                     * 获取<p>cname地址</p>
                     * @return Cname <p>cname地址</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>cname地址</p>
                     * @param _cname <p>cname地址</p>
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
                     * 获取<p>域名所属实例类型。<br>sparta-waf：SaaS型WAF实例<br>clb-waf：负载均衡型WAF实例<br>cdc-clb-waf：CDC环境下负载均衡型WAF实例</p>
                     * @return Edition <p>域名所属实例类型。<br>sparta-waf：SaaS型WAF实例<br>clb-waf：负载均衡型WAF实例<br>cdc-clb-waf：CDC环境下负载均衡型WAF实例</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>域名所属实例类型。<br>sparta-waf：SaaS型WAF实例<br>clb-waf：负载均衡型WAF实例<br>cdc-clb-waf：CDC环境下负载均衡型WAF实例</p>
                     * @param _edition <p>域名所属实例类型。<br>sparta-waf：SaaS型WAF实例<br>clb-waf：负载均衡型WAF实例<br>cdc-clb-waf：CDC环境下负载均衡型WAF实例</p>
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
                     * 获取<p>地域。<br>&quot;多伦多&quot;: &quot;ca&quot;<br>&quot;广州&quot;: &quot;gz&quot;<br>&quot;成都&quot;: &quot;cd&quot;<br>&quot;福州&quot;: &quot;fzec&quot;<br>&quot;深圳&quot;: &quot;szx&quot;<br>&quot;印度&quot;: &quot;in&quot;<br>&quot;济南&quot;: &quot;jnec&quot;<br>&quot;重庆&quot;: &quot;cq&quot;<br>&quot;天津&quot;: &quot;tsn&quot;<br>&quot;欧洲东北&quot;: &quot;ru&quot;<br>&quot;南京&quot;: &quot;nj&quot;<br>&quot;美国硅谷&quot;: &quot;usw&quot;<br>&quot;泰国&quot;: &quot;th&quot;<br>&quot;广州Open&quot;: &quot;gzopen&quot;<br>&quot;深圳金融&quot;: &quot;szjr&quot;<br>&quot;法兰克福&quot;: &quot;de&quot;<br>&quot;日本&quot;: &quot;jp&quot;<br>&quot;弗吉尼亚&quot;: &quot;use&quot;<br>&quot;北京&quot;: &quot;bj&quot;<br>&quot;中国香港&quot;: &quot;hk&quot;<br>&quot;杭州&quot;: &quot;hzec&quot;<br>&quot;北京金融&quot;: &quot;bjjr&quot;<br>&quot;上海金融&quot;: &quot;shjr&quot;<br>&quot;台北&quot;: &quot;tpe&quot;<br>&quot;首尔&quot;: &quot;kr&quot;<br>&quot;上海&quot;: &quot;sh&quot;<br>&quot;新加坡&quot;: &quot;sg&quot;<br>&quot;清远&quot;: &quot;qy&quot;</p>
                     * @return Region <p>地域。<br>&quot;多伦多&quot;: &quot;ca&quot;<br>&quot;广州&quot;: &quot;gz&quot;<br>&quot;成都&quot;: &quot;cd&quot;<br>&quot;福州&quot;: &quot;fzec&quot;<br>&quot;深圳&quot;: &quot;szx&quot;<br>&quot;印度&quot;: &quot;in&quot;<br>&quot;济南&quot;: &quot;jnec&quot;<br>&quot;重庆&quot;: &quot;cq&quot;<br>&quot;天津&quot;: &quot;tsn&quot;<br>&quot;欧洲东北&quot;: &quot;ru&quot;<br>&quot;南京&quot;: &quot;nj&quot;<br>&quot;美国硅谷&quot;: &quot;usw&quot;<br>&quot;泰国&quot;: &quot;th&quot;<br>&quot;广州Open&quot;: &quot;gzopen&quot;<br>&quot;深圳金融&quot;: &quot;szjr&quot;<br>&quot;法兰克福&quot;: &quot;de&quot;<br>&quot;日本&quot;: &quot;jp&quot;<br>&quot;弗吉尼亚&quot;: &quot;use&quot;<br>&quot;北京&quot;: &quot;bj&quot;<br>&quot;中国香港&quot;: &quot;hk&quot;<br>&quot;杭州&quot;: &quot;hzec&quot;<br>&quot;北京金融&quot;: &quot;bjjr&quot;<br>&quot;上海金融&quot;: &quot;shjr&quot;<br>&quot;台北&quot;: &quot;tpe&quot;<br>&quot;首尔&quot;: &quot;kr&quot;<br>&quot;上海&quot;: &quot;sh&quot;<br>&quot;新加坡&quot;: &quot;sg&quot;<br>&quot;清远&quot;: &quot;qy&quot;</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域。<br>&quot;多伦多&quot;: &quot;ca&quot;<br>&quot;广州&quot;: &quot;gz&quot;<br>&quot;成都&quot;: &quot;cd&quot;<br>&quot;福州&quot;: &quot;fzec&quot;<br>&quot;深圳&quot;: &quot;szx&quot;<br>&quot;印度&quot;: &quot;in&quot;<br>&quot;济南&quot;: &quot;jnec&quot;<br>&quot;重庆&quot;: &quot;cq&quot;<br>&quot;天津&quot;: &quot;tsn&quot;<br>&quot;欧洲东北&quot;: &quot;ru&quot;<br>&quot;南京&quot;: &quot;nj&quot;<br>&quot;美国硅谷&quot;: &quot;usw&quot;<br>&quot;泰国&quot;: &quot;th&quot;<br>&quot;广州Open&quot;: &quot;gzopen&quot;<br>&quot;深圳金融&quot;: &quot;szjr&quot;<br>&quot;法兰克福&quot;: &quot;de&quot;<br>&quot;日本&quot;: &quot;jp&quot;<br>&quot;弗吉尼亚&quot;: &quot;use&quot;<br>&quot;北京&quot;: &quot;bj&quot;<br>&quot;中国香港&quot;: &quot;hk&quot;<br>&quot;杭州&quot;: &quot;hzec&quot;<br>&quot;北京金融&quot;: &quot;bjjr&quot;<br>&quot;上海金融&quot;: &quot;shjr&quot;<br>&quot;台北&quot;: &quot;tpe&quot;<br>&quot;首尔&quot;: &quot;kr&quot;<br>&quot;上海&quot;: &quot;sh&quot;<br>&quot;新加坡&quot;: &quot;sg&quot;<br>&quot;清远&quot;: &quot;qy&quot;</p>
                     * @param _region <p>地域。<br>&quot;多伦多&quot;: &quot;ca&quot;<br>&quot;广州&quot;: &quot;gz&quot;<br>&quot;成都&quot;: &quot;cd&quot;<br>&quot;福州&quot;: &quot;fzec&quot;<br>&quot;深圳&quot;: &quot;szx&quot;<br>&quot;印度&quot;: &quot;in&quot;<br>&quot;济南&quot;: &quot;jnec&quot;<br>&quot;重庆&quot;: &quot;cq&quot;<br>&quot;天津&quot;: &quot;tsn&quot;<br>&quot;欧洲东北&quot;: &quot;ru&quot;<br>&quot;南京&quot;: &quot;nj&quot;<br>&quot;美国硅谷&quot;: &quot;usw&quot;<br>&quot;泰国&quot;: &quot;th&quot;<br>&quot;广州Open&quot;: &quot;gzopen&quot;<br>&quot;深圳金融&quot;: &quot;szjr&quot;<br>&quot;法兰克福&quot;: &quot;de&quot;<br>&quot;日本&quot;: &quot;jp&quot;<br>&quot;弗吉尼亚&quot;: &quot;use&quot;<br>&quot;北京&quot;: &quot;bj&quot;<br>&quot;中国香港&quot;: &quot;hk&quot;<br>&quot;杭州&quot;: &quot;hzec&quot;<br>&quot;北京金融&quot;: &quot;bjjr&quot;<br>&quot;上海金融&quot;: &quot;shjr&quot;<br>&quot;台北&quot;: &quot;tpe&quot;<br>&quot;首尔&quot;: &quot;kr&quot;<br>&quot;上海&quot;: &quot;sh&quot;<br>&quot;新加坡&quot;: &quot;sg&quot;<br>&quot;清远&quot;: &quot;qy&quot;</p>
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
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
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
                     * 获取<p>访问日志开关状态。<br>0：关闭<br>1：开启</p>
                     * @return ClsStatus <p>访问日志开关状态。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    uint64_t GetClsStatus() const;

                    /**
                     * 设置<p>访问日志开关状态。<br>0：关闭<br>1：开启</p>
                     * @param _clsStatus <p>访问日志开关状态。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>负载均衡型WAF使用模式。<br>0：镜像模式<br>1：清洗模式</p>
                     * @return FlowMode <p>负载均衡型WAF使用模式。<br>0：镜像模式<br>1：清洗模式</p>
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置<p>负载均衡型WAF使用模式。<br>0：镜像模式<br>1：清洗模式</p>
                     * @param _flowMode <p>负载均衡型WAF使用模式。<br>0：镜像模式<br>1：清洗模式</p>
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
                     * 获取<p>waf开关状态。<br>0：关闭<br>1：开启</p>
                     * @return Status <p>waf开关状态。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>waf开关状态。<br>0：关闭<br>1：开启</p>
                     * @param _status <p>waf开关状态。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>规则引擎防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     * @return Mode <p>规则引擎防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置<p>规则引擎防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     * @param _mode <p>规则引擎防护模式。<br>0：观察模式<br>1：拦截模式</p>
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
                     * 获取<p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     * @return Engine <p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置<p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     * @param _engine <p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
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
                     * 获取<p>沙箱集群回源出口IP列表</p>
                     * @return CCList <p>沙箱集群回源出口IP列表</p>
                     * 
                     */
                    std::vector<std::string> GetCCList() const;

                    /**
                     * 设置<p>沙箱集群回源出口IP列表</p>
                     * @param _cCList <p>沙箱集群回源出口IP列表</p>
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
                     * 获取<p>生产集群回源出口IP列表</p>
                     * @return RsList <p>生产集群回源出口IP列表</p>
                     * 
                     */
                    std::vector<std::string> GetRsList() const;

                    /**
                     * 设置<p>生产集群回源出口IP列表</p>
                     * @param _rsList <p>生产集群回源出口IP列表</p>
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
                     * 获取<p>服务端口配置</p>
                     * @return Ports <p>服务端口配置</p>
                     * 
                     */
                    std::vector<PortInfo> GetPorts() const;

                    /**
                     * 设置<p>服务端口配置</p>
                     * @param _ports <p>服务端口配置</p>
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
                     * 获取<p>负载均衡器相关配置</p>
                     * @return LoadBalancerSet <p>负载均衡器相关配置</p>
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置<p>负载均衡器相关配置</p>
                     * @param _loadBalancerSet <p>负载均衡器相关配置</p>
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
                     * 获取<p>用户id</p>
                     * @return AppId <p>用户id</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>用户id</p>
                     * @param _appId <p>用户id</p>
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
                     * 获取<p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     * @return State <p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     * @param _state <p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>编辑时间</p>
                     * @return ModifyTime <p>编辑时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>编辑时间</p>
                     * @param _modifyTime <p>编辑时间</p>
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
                     * 获取<p>Ipv6开关状态。<br>0：关闭<br>1：开启</p>
                     * @return Ipv6Status <p>Ipv6开关状态。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    int64_t GetIpv6Status() const;

                    /**
                     * 设置<p>Ipv6开关状态。<br>0：关闭<br>1：开启</p>
                     * @param _ipv6Status <p>Ipv6开关状态。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>BOT开关状态。<br>0：关闭<br>1：关闭<br>2：开启<br>3：开启</p>
                     * @return BotStatus <p>BOT开关状态。<br>0：关闭<br>1：关闭<br>2：开启<br>3：开启</p>
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置<p>BOT开关状态。<br>0：关闭<br>1：关闭<br>2：开启<br>3：开启</p>
                     * @param _botStatus <p>BOT开关状态。<br>0：关闭<br>1：关闭<br>2：开启<br>3：开启</p>
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
                     * 获取<p>实例版本信息。<br>101：小微敏捷版<br>102：小微超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     * @return Level <p>实例版本信息。<br>101：小微敏捷版<br>102：小微超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>实例版本信息。<br>101：小微敏捷版<br>102：小微超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     * @param _level <p>实例版本信息。<br>101：小微敏捷版<br>102：小微超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
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
                     * 获取<p>投递CLS状态。<br>0：关闭<br>1：开启</p>
                     * @return PostCLSStatus <p>投递CLS状态。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    int64_t GetPostCLSStatus() const;

                    /**
                     * 设置<p>投递CLS状态。<br>0：关闭<br>1：开启</p>
                     * @param _postCLSStatus <p>投递CLS状态。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>投递CKafka状态。<br>0：关闭<br>1：开启</p>
                     * @return PostCKafkaStatus <p>投递CKafka状态。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    int64_t GetPostCKafkaStatus() const;

                    /**
                     * 设置<p>投递CKafka状态。<br>0：关闭<br>1：开启</p>
                     * @param _postCKafkaStatus <p>投递CKafka状态。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>cdc实例域名接入的集群信息,非cdc实例忽略。</p>
                     * @return CdcClusters <p>cdc实例域名接入的集群信息,非cdc实例忽略。</p>
                     * 
                     */
                    std::string GetCdcClusters() const;

                    /**
                     * 设置<p>cdc实例域名接入的集群信息,非cdc实例忽略。</p>
                     * @param _cdcClusters <p>cdc实例域名接入的集群信息,非cdc实例忽略。</p>
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
                     * 获取<p>api安全开关状态。<br>0：关闭<br>1：开启</p>
                     * @return ApiStatus <p>api安全开关状态。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置<p>api安全开关状态。<br>0：关闭<br>1：开启</p>
                     * @param _apiStatus <p>api安全开关状态。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>应用型负载均衡类型，默认clb。<br>clb：七层负载均衡器类型<br>apisix：apisix网关型</p>
                     * @return AlbType <p>应用型负载均衡类型，默认clb。<br>clb：七层负载均衡器类型<br>apisix：apisix网关型</p>
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置<p>应用型负载均衡类型，默认clb。<br>clb：七层负载均衡器类型<br>apisix：apisix网关型</p>
                     * @param _albType <p>应用型负载均衡类型，默认clb。<br>clb：七层负载均衡器类型<br>apisix：apisix网关型</p>
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
                     * 获取<p>安全组状态。<br>0：不展示<br>1：非腾讯云源站<br>2：安全组绑定失败<br>3：安全组发生变更</p>
                     * @return SgState <p>安全组状态。<br>0：不展示<br>1：非腾讯云源站<br>2：安全组绑定失败<br>3：安全组发生变更</p>
                     * 
                     */
                    int64_t GetSgState() const;

                    /**
                     * 设置<p>安全组状态。<br>0：不展示<br>1：非腾讯云源站<br>2：安全组绑定失败<br>3：安全组发生变更</p>
                     * @param _sgState <p>安全组状态。<br>0：不展示<br>1：非腾讯云源站<br>2：安全组绑定失败<br>3：安全组发生变更</p>
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
                     * 获取<p>安全组状态的详细解释</p>
                     * @return SgDetail <p>安全组状态的详细解释</p>
                     * 
                     */
                    std::string GetSgDetail() const;

                    /**
                     * 设置<p>安全组状态的详细解释</p>
                     * @param _sgDetail <p>安全组状态的详细解释</p>
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
                     * 获取<p>域名云环境。hybrid：混合云域名<br>public：公有云域名</p>
                     * @return CloudType <p>域名云环境。hybrid：混合云域名<br>public：公有云域名</p>
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置<p>域名云环境。hybrid：混合云域名<br>public：公有云域名</p>
                     * @param _cloudType <p>域名云环境。hybrid：混合云域名<br>public：公有云域名</p>
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
                     * 获取<p>域名备注信息</p>
                     * @return Note <p>域名备注信息</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>域名备注信息</p>
                     * @param _note <p>域名备注信息</p>
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
                     * 获取<p>SAASWAF源站IP列表</p>
                     * @return SrcList <p>SAASWAF源站IP列表</p>
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置<p>SAASWAF源站IP列表</p>
                     * @param _srcList <p>SAASWAF源站IP列表</p>
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
                     * 获取<p>SAASWAF源站域名列表</p>
                     * @return UpstreamDomainList <p>SAASWAF源站域名列表</p>
                     * 
                     */
                    std::vector<std::string> GetUpstreamDomainList() const;

                    /**
                     * 设置<p>SAASWAF源站域名列表</p>
                     * @param _upstreamDomainList <p>SAASWAF源站域名列表</p>
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
                     * 获取<p>安全组ID</p>
                     * @return SgID <p>安全组ID</p>
                     * 
                     */
                    std::string GetSgID() const;

                    /**
                     * 设置<p>安全组ID</p>
                     * @param _sgID <p>安全组ID</p>
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
                     * 获取<p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     * @return AccessStatus <p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     * 
                     */
                    int64_t GetAccessStatus() const;

                    /**
                     * 设置<p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     * @param _accessStatus <p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
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
                     * 获取<p>域名标签</p>
                     * @return Labels <p>域名标签</p>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置<p>域名标签</p>
                     * @param _labels <p>域名标签</p>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>saaswaf独享ip状态，0是关闭，1是开启，2是开启中</p>
                     * @return PrivateVipStatus <p>saaswaf独享ip状态，0是关闭，1是开启，2是开启中</p>
                     * 
                     */
                    int64_t GetPrivateVipStatus() const;

                    /**
                     * 设置<p>saaswaf独享ip状态，0是关闭，1是开启，2是开启中</p>
                     * @param _privateVipStatus <p>saaswaf独享ip状态，0是关闭，1是开启，2是开启中</p>
                     * 
                     */
                    void SetPrivateVipStatus(const int64_t& _privateVipStatus);

                    /**
                     * 判断参数 PrivateVipStatus 是否已赋值
                     * @return PrivateVipStatus 是否已赋值
                     * 
                     */
                    bool PrivateVipStatusHasBeenSet() const;

                    /**
                     * 获取<p>代表是否是四层clbwaf域名</p>
                     * @return IsREIP <p>代表是否是四层clbwaf域名</p>
                     * 
                     */
                    int64_t GetIsREIP() const;

                    /**
                     * 设置<p>代表是否是四层clbwaf域名</p>
                     * @param _isREIP <p>代表是否是四层clbwaf域名</p>
                     * 
                     */
                    void SetIsREIP(const int64_t& _isREIP);

                    /**
                     * 判断参数 IsREIP 是否已赋值
                     * @return IsREIP 是否已赋值
                     * 
                     */
                    bool IsREIPHasBeenSet() const;

                    /**
                     * 获取<p>四层关联的对象ID</p>
                     * @return REIPObjectId <p>四层关联的对象ID</p>
                     * 
                     */
                    std::string GetREIPObjectId() const;

                    /**
                     * 设置<p>四层关联的对象ID</p>
                     * @param _rEIPObjectId <p>四层关联的对象ID</p>
                     * 
                     */
                    void SetREIPObjectId(const std::string& _rEIPObjectId);

                    /**
                     * 判断参数 REIPObjectId 是否已赋值
                     * @return REIPObjectId 是否已赋值
                     * 
                     */
                    bool REIPObjectIdHasBeenSet() const;

                    /**
                     * 获取<p>标签结构体</p>
                     * @return TagInfos <p>标签结构体</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagInfos() const;

                    /**
                     * 设置<p>标签结构体</p>
                     * @param _tagInfos <p>标签结构体</p>
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
                     * 获取<p>大模型开关</p><p>枚举值：</p><ul><li>0： 大模型开关关闭状态</li><li>1： 大模型开关开启状态</li></ul>
                     * @return LLMStatus <p>大模型开关</p><p>枚举值：</p><ul><li>0： 大模型开关关闭状态</li><li>1： 大模型开关开启状态</li></ul>
                     * 
                     */
                    int64_t GetLLMStatus() const;

                    /**
                     * 设置<p>大模型开关</p><p>枚举值：</p><ul><li>0： 大模型开关关闭状态</li><li>1： 大模型开关开启状态</li></ul>
                     * @param _lLMStatus <p>大模型开关</p><p>枚举值：</p><ul><li>0： 大模型开关关闭状态</li><li>1： 大模型开关开启状态</li></ul>
                     * 
                     */
                    void SetLLMStatus(const int64_t& _lLMStatus);

                    /**
                     * 判断参数 LLMStatus 是否已赋值
                     * @return LLMStatus 是否已赋值
                     * 
                     */
                    bool LLMStatusHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名ID</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>cname地址</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>域名所属实例类型。<br>sparta-waf：SaaS型WAF实例<br>clb-waf：负载均衡型WAF实例<br>cdc-clb-waf：CDC环境下负载均衡型WAF实例</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>地域。<br>&quot;多伦多&quot;: &quot;ca&quot;<br>&quot;广州&quot;: &quot;gz&quot;<br>&quot;成都&quot;: &quot;cd&quot;<br>&quot;福州&quot;: &quot;fzec&quot;<br>&quot;深圳&quot;: &quot;szx&quot;<br>&quot;印度&quot;: &quot;in&quot;<br>&quot;济南&quot;: &quot;jnec&quot;<br>&quot;重庆&quot;: &quot;cq&quot;<br>&quot;天津&quot;: &quot;tsn&quot;<br>&quot;欧洲东北&quot;: &quot;ru&quot;<br>&quot;南京&quot;: &quot;nj&quot;<br>&quot;美国硅谷&quot;: &quot;usw&quot;<br>&quot;泰国&quot;: &quot;th&quot;<br>&quot;广州Open&quot;: &quot;gzopen&quot;<br>&quot;深圳金融&quot;: &quot;szjr&quot;<br>&quot;法兰克福&quot;: &quot;de&quot;<br>&quot;日本&quot;: &quot;jp&quot;<br>&quot;弗吉尼亚&quot;: &quot;use&quot;<br>&quot;北京&quot;: &quot;bj&quot;<br>&quot;中国香港&quot;: &quot;hk&quot;<br>&quot;杭州&quot;: &quot;hzec&quot;<br>&quot;北京金融&quot;: &quot;bjjr&quot;<br>&quot;上海金融&quot;: &quot;shjr&quot;<br>&quot;台北&quot;: &quot;tpe&quot;<br>&quot;首尔&quot;: &quot;kr&quot;<br>&quot;上海&quot;: &quot;sh&quot;<br>&quot;新加坡&quot;: &quot;sg&quot;<br>&quot;清远&quot;: &quot;qy&quot;</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>访问日志开关状态。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * <p>负载均衡型WAF使用模式。<br>0：镜像模式<br>1：清洗模式</p>
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * <p>waf开关状态。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>规则引擎防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>沙箱集群回源出口IP列表</p>
                     */
                    std::vector<std::string> m_cCList;
                    bool m_cCListHasBeenSet;

                    /**
                     * <p>生产集群回源出口IP列表</p>
                     */
                    std::vector<std::string> m_rsList;
                    bool m_rsListHasBeenSet;

                    /**
                     * <p>服务端口配置</p>
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * <p>负载均衡器相关配置</p>
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * <p>用户id</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>编辑时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Ipv6开关状态。<br>0：关闭<br>1：开启</p>
                     */
                    int64_t m_ipv6Status;
                    bool m_ipv6StatusHasBeenSet;

                    /**
                     * <p>BOT开关状态。<br>0：关闭<br>1：关闭<br>2：开启<br>3：开启</p>
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * <p>实例版本信息。<br>101：小微敏捷版<br>102：小微超轻版<br>2：高级版<br>3：企业版<br>4：旗舰版<br>6：独享版</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>投递CLS状态。<br>0：关闭<br>1：开启</p>
                     */
                    int64_t m_postCLSStatus;
                    bool m_postCLSStatusHasBeenSet;

                    /**
                     * <p>投递CKafka状态。<br>0：关闭<br>1：开启</p>
                     */
                    int64_t m_postCKafkaStatus;
                    bool m_postCKafkaStatusHasBeenSet;

                    /**
                     * <p>cdc实例域名接入的集群信息,非cdc实例忽略。</p>
                     */
                    std::string m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * <p>api安全开关状态。<br>0：关闭<br>1：开启</p>
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * <p>应用型负载均衡类型，默认clb。<br>clb：七层负载均衡器类型<br>apisix：apisix网关型</p>
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * <p>安全组状态。<br>0：不展示<br>1：非腾讯云源站<br>2：安全组绑定失败<br>3：安全组发生变更</p>
                     */
                    int64_t m_sgState;
                    bool m_sgStateHasBeenSet;

                    /**
                     * <p>安全组状态的详细解释</p>
                     */
                    std::string m_sgDetail;
                    bool m_sgDetailHasBeenSet;

                    /**
                     * <p>域名云环境。hybrid：混合云域名<br>public：公有云域名</p>
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>域名备注信息</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>SAASWAF源站IP列表</p>
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * <p>SAASWAF源站域名列表</p>
                     */
                    std::vector<std::string> m_upstreamDomainList;
                    bool m_upstreamDomainListHasBeenSet;

                    /**
                     * <p>安全组ID</p>
                     */
                    std::string m_sgID;
                    bool m_sgIDHasBeenSet;

                    /**
                     * <p>clbwaf接入状态，0代表“尚无流量接入”，1代表“流量接入”，2代表“CLB监听器已注销”，3代表“配置生效中”，4代表“配置下发失败中”</p>
                     */
                    int64_t m_accessStatus;
                    bool m_accessStatusHasBeenSet;

                    /**
                     * <p>域名标签</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>saaswaf独享ip状态，0是关闭，1是开启，2是开启中</p>
                     */
                    int64_t m_privateVipStatus;
                    bool m_privateVipStatusHasBeenSet;

                    /**
                     * <p>代表是否是四层clbwaf域名</p>
                     */
                    int64_t m_isREIP;
                    bool m_isREIPHasBeenSet;

                    /**
                     * <p>四层关联的对象ID</p>
                     */
                    std::string m_rEIPObjectId;
                    bool m_rEIPObjectIdHasBeenSet;

                    /**
                     * <p>标签结构体</p>
                     */
                    std::vector<TagInfo> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                    /**
                     * <p>大模型开关</p><p>枚举值：</p><ul><li>0： 大模型开关关闭状态</li><li>1： 大模型开关开启状态</li></ul>
                     */
                    int64_t m_lLMStatus;
                    bool m_lLMStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_
