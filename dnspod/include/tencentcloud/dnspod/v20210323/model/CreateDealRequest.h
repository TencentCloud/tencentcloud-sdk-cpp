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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDEALREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDEALREQUEST_H_

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
                * CreateDeal请求参数结构体
                */
                class CreateDealRequest : public AbstractModel
                {
                public:
                    CreateDealRequest();
                    ~CreateDealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）
                     * @return DealType 询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）
                     * 
                     */
                    uint64_t GetDealType() const;

                    /**
                     * 设置询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）
                     * @param _dealType 询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）
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
                     * 获取商品类型，1 域名套餐 2 增值服务
                     * @return GoodsType 商品类型，1 域名套餐 2 增值服务
                     * 
                     */
                    uint64_t GetGoodsType() const;

                    /**
                     * 设置商品类型，1 域名套餐 2 增值服务
                     * @param _goodsType 商品类型，1 域名套餐 2 增值服务
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
                     * 获取套餐类型：
DP_PLUS：专业版
DP_EXPERT：企业版
DP_ULTRA：尊享版

增值服务类型
LB：负载均衡
URL：URL转发
DMONITOR_TASKS：D监控任务数
DMONITOR_IP：D监控备用 IP 数
CUSTOMLINE：自定义线路数
                     * @return GoodsChildType 套餐类型：
DP_PLUS：专业版
DP_EXPERT：企业版
DP_ULTRA：尊享版

增值服务类型
LB：负载均衡
URL：URL转发
DMONITOR_TASKS：D监控任务数
DMONITOR_IP：D监控备用 IP 数
CUSTOMLINE：自定义线路数
                     * 
                     */
                    std::string GetGoodsChildType() const;

                    /**
                     * 设置套餐类型：
DP_PLUS：专业版
DP_EXPERT：企业版
DP_ULTRA：尊享版

增值服务类型
LB：负载均衡
URL：URL转发
DMONITOR_TASKS：D监控任务数
DMONITOR_IP：D监控备用 IP 数
CUSTOMLINE：自定义线路数
                     * @param _goodsChildType 套餐类型：
DP_PLUS：专业版
DP_EXPERT：企业版
DP_ULTRA：尊享版

增值服务类型
LB：负载均衡
URL：URL转发
DMONITOR_TASKS：D监控任务数
DMONITOR_IP：D监控备用 IP 数
CUSTOMLINE：自定义线路数
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
                     * 获取增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：
负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）
                     * @return GoodsNum 增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：
负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：
负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）
                     * @param _goodsNum 增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：
负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）
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
                     * 获取是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启
                     * @return AutoRenew 是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启
                     * @param _autoRenew 是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启
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
                     * 获取需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。
                     * @return Domain 需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。
                     * @param _domain 需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。
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
                     * 获取套餐时长：
1. 套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）
2. 升级套餐时不需要传。
3. 增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）
                     * @return TimeSpan 套餐时长：
1. 套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）
2. 升级套餐时不需要传。
3. 增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置套餐时长：
1. 套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）
2. 升级套餐时不需要传。
3. 增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）
                     * @param _timeSpan 套餐时长：
1. 套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）
2. 升级套餐时不需要传。
3. 增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）
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
                     * 获取套餐类型，需要升级到的套餐类型，只有升级时需要。
                     * @return NewPackageType 套餐类型，需要升级到的套餐类型，只有升级时需要。
                     * 
                     */
                    std::string GetNewPackageType() const;

                    /**
                     * 设置套餐类型，需要升级到的套餐类型，只有升级时需要。
                     * @param _newPackageType 套餐类型，需要升级到的套餐类型，只有升级时需要。
                     * 
                     */
                    void SetNewPackageType(const std::string& _newPackageType);

                    /**
                     * 判断参数 NewPackageType 是否已赋值
                     * @return NewPackageType 是否已赋值
                     * 
                     */
                    bool NewPackageTypeHasBeenSet() const;

                private:

                    /**
                     * 询价类型，1 新购，2 续费，3 套餐升级（增值服务暂时只支持新购）
                     */
                    uint64_t m_dealType;
                    bool m_dealTypeHasBeenSet;

                    /**
                     * 商品类型，1 域名套餐 2 增值服务
                     */
                    uint64_t m_goodsType;
                    bool m_goodsTypeHasBeenSet;

                    /**
                     * 套餐类型：
DP_PLUS：专业版
DP_EXPERT：企业版
DP_ULTRA：尊享版

增值服务类型
LB：负载均衡
URL：URL转发
DMONITOR_TASKS：D监控任务数
DMONITOR_IP：D监控备用 IP 数
CUSTOMLINE：自定义线路数
                     */
                    std::string m_goodsChildType;
                    bool m_goodsChildTypeHasBeenSet;

                    /**
                     * 增值服务购买数量，如果是域名套餐固定为1，如果是增值服务则按以下规则：
负载均衡、D监控任务数、D监控备用 IP 数、自定义线路数、URL 转发（必须是5的正整数倍，如 5、10、15 等）
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 是否开启自动续费，1 开启，2 不开启（增值服务暂不支持自动续费），默认值为 2 不开启
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 需要绑定套餐的域名，如 dnspod.cn，如果是续费或升级，domain 参数必须要传，新购可不传。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 套餐时长：
1. 套餐以月为单位（按月只能是 3、6 还有 12 的倍数），套餐例如购买一年则传12，最大120 。（续费最低一年）
2. 升级套餐时不需要传。
3. 增值服务的时长单位为年，买一年传1（增值服务新购按年只能是 1，增值服务续费最大为 10）
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 套餐类型，需要升级到的套餐类型，只有升级时需要。
                     */
                    std::string m_newPackageType;
                    bool m_newPackageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDEALREQUEST_H_
