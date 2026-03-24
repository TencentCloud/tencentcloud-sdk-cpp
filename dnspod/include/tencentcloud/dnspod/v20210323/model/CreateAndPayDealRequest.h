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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEANDPAYDEALREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEANDPAYDEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateAndPayDeal请求参数结构体
                */
                class CreateAndPayDealRequest : public AbstractModel
                {
                public:
                    CreateAndPayDealRequest();
                    ~CreateAndPayDealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）</p>
                     * @return DealType <p>询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）</p>
                     * 
                     */
                    uint64_t GetDealType() const;

                    /**
                     * 设置<p>询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）</p>
                     * @param _dealType <p>询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）</p>
                     * 
                     */
                    void SetDealType(const uint64_t& _dealType);

                    /**
                     * 判断参数 DealType 是否已赋值
                     * @return DealType 是否已赋值
                     * 
                     */
                    bool DealTypeHasBeenSet() const;

                    /**
                     * 获取<p>商品类型，1 域名套餐 2 增值服务</p>
                     * @return GoodsType <p>商品类型，1 域名套餐 2 增值服务</p>
                     * 
                     */
                    uint64_t GetGoodsType() const;

                    /**
                     * 设置<p>商品类型，1 域名套餐 2 增值服务</p>
                     * @param _goodsType <p>商品类型，1 域名套餐 2 增值服务</p>
                     * 
                     */
                    void SetGoodsType(const uint64_t& _goodsType);

                    /**
                     * 判断参数 GoodsType 是否已赋值
                     * @return GoodsType 是否已赋值
                     * 
                     */
                    bool GoodsTypeHasBeenSet() const;

                    /**
                     * 获取<p>套餐类型：<br>DP_PLUS：专业版<br>DP_EXPERT：企业版<br>DP_ULTRA：尊享版</p><p>增值服务类型<br>LB：负载均衡<br>URL：URL转发<br>DMONITOR_TASKS：D监控任务数<br>DMONITOR_IP：D监控备用 IP 数<br>CUSTOMLINE：自定义线路数</p>
                     * @return GoodsChildType <p>套餐类型：<br>DP_PLUS：专业版<br>DP_EXPERT：企业版<br>DP_ULTRA：尊享版</p><p>增值服务类型<br>LB：负载均衡<br>URL：URL转发<br>DMONITOR_TASKS：D监控任务数<br>DMONITOR_IP：D监控备用 IP 数<br>CUSTOMLINE：自定义线路数</p>
                     * 
                     */
                    std::string GetGoodsChildType() const;

                    /**
                     * 设置<p>套餐类型：<br>DP_PLUS：专业版<br>DP_EXPERT：企业版<br>DP_ULTRA：尊享版</p><p>增值服务类型<br>LB：负载均衡<br>URL：URL转发<br>DMONITOR_TASKS：D监控任务数<br>DMONITOR_IP：D监控备用 IP 数<br>CUSTOMLINE：自定义线路数</p>
                     * @param _goodsChildType <p>套餐类型：<br>DP_PLUS：专业版<br>DP_EXPERT：企业版<br>DP_ULTRA：尊享版</p><p>增值服务类型<br>LB：负载均衡<br>URL：URL转发<br>DMONITOR_TASKS：D监控任务数<br>DMONITOR_IP：D监控备用 IP 数<br>CUSTOMLINE：自定义线路数</p>
                     * 
                     */
                    void SetGoodsChildType(const std::string& _goodsChildType);

                    /**
                     * 判断参数 GoodsChildType 是否已赋值
                     * @return GoodsChildType 是否已赋值
                     * 
                     */
                    bool GoodsChildTypeHasBeenSet() const;

                    /**
                     * 获取<p>增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：<br>负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）</p>
                     * @return GoodsNum <p>增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：<br>负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：<br>负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）</p>
                     * @param _goodsNum <p>增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：<br>负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）</p>
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启</p>
                     * @return AutoRenew <p>是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启</p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启</p>
                     * @param _autoRenew <p>是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启</p>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。</p>
                     * @return Domain <p>需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。</p>
                     * @param _domain <p>需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。</p>
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
                     * 获取<p>套餐时长：</p><ol><li>套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）</li><li>升级套餐时不需要传。</li><li>增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）</li></ol>
                     * @return TimeSpan <p>套餐时长：</p><ol><li>套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）</li><li>升级套餐时不需要传。</li><li>增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）</li></ol>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>套餐时长：</p><ol><li>套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）</li><li>升级套餐时不需要传。</li><li>增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）</li></ol>
                     * @param _timeSpan <p>套餐时长：</p><ol><li>套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）</li><li>升级套餐时不需要传。</li><li>增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）</li></ol>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>套餐类型，需要升级到的套餐类型，只有升级时需要。</p>
                     * @return NewPackageType <p>套餐类型，需要升级到的套餐类型，只有升级时需要。</p>
                     * 
                     */
                    std::string GetNewPackageType() const;

                    /**
                     * 设置<p>套餐类型，需要升级到的套餐类型，只有升级时需要。</p>
                     * @param _newPackageType <p>套餐类型，需要升级到的套餐类型，只有升级时需要。</p>
                     * 
                     */
                    void SetNewPackageType(const std::string& _newPackageType);

                    /**
                     * 判断参数 NewPackageType 是否已赋值
                     * @return NewPackageType 是否已赋值
                     * 
                     */
                    bool NewPackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>可重入ID，避免接口重试场景生成额外订单和实例</p><p>入参限制：长度不超过70个字符</p>
                     * @return ClientToken <p>可重入ID，避免接口重试场景生成额外订单和实例</p><p>入参限制：长度不超过70个字符</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>可重入ID，避免接口重试场景生成额外订单和实例</p><p>入参限制：长度不超过70个字符</p>
                     * @param _clientToken <p>可重入ID，避免接口重试场景生成额外订单和实例</p><p>入参限制：长度不超过70个字符</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * <p>询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）</p>
                     */
                    uint64_t m_dealType;
                    bool m_dealTypeHasBeenSet;

                    /**
                     * <p>商品类型，1 域名套餐 2 增值服务</p>
                     */
                    uint64_t m_goodsType;
                    bool m_goodsTypeHasBeenSet;

                    /**
                     * <p>套餐类型：<br>DP_PLUS：专业版<br>DP_EXPERT：企业版<br>DP_ULTRA：尊享版</p><p>增值服务类型<br>LB：负载均衡<br>URL：URL转发<br>DMONITOR_TASKS：D监控任务数<br>DMONITOR_IP：D监控备用 IP 数<br>CUSTOMLINE：自定义线路数</p>
                     */
                    std::string m_goodsChildType;
                    bool m_goodsChildTypeHasBeenSet;

                    /**
                     * <p>增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：<br>负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启</p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>套餐时长：</p><ol><li>套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）</li><li>升级套餐时不需要传。</li><li>增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）</li></ol>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>套餐类型，需要升级到的套餐类型，只有升级时需要。</p>
                     */
                    std::string m_newPackageType;
                    bool m_newPackageTypeHasBeenSet;

                    /**
                     * <p>可重入ID，避免接口重试场景生成额外订单和实例</p><p>入参限制：长度不超过70个字符</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEANDPAYDEALREQUEST_H_
