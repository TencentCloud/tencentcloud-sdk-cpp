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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYSUPPORTPARAMRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYSUPPORTPARAMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeProxySupportParam返回参数结构体
                */
                class DescribeProxySupportParamResponse : public AbstractModel
                {
                public:
                    DescribeProxySupportParamResponse();
                    ~DescribeProxySupportParamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持最大代理版本
                     * @return ProxyVersion 支持最大代理版本
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取是否支持连接池
                     * @return SupportPool 是否支持连接池
                     * 
                     */
                    bool GetSupportPool() const;

                    /**
                     * 判断参数 SupportPool 是否已赋值
                     * @return SupportPool 是否已赋值
                     * 
                     */
                    bool SupportPoolHasBeenSet() const;

                    /**
                     * 获取连接池最小值
                     * @return PoolMin 连接池最小值
                     * 
                     */
                    uint64_t GetPoolMin() const;

                    /**
                     * 判断参数 PoolMin 是否已赋值
                     * @return PoolMin 是否已赋值
                     * 
                     */
                    bool PoolMinHasBeenSet() const;

                    /**
                     * 获取连接池最大值
                     * @return PoolMax 连接池最大值
                     * 
                     */
                    uint64_t GetPoolMax() const;

                    /**
                     * 判断参数 PoolMax 是否已赋值
                     * @return PoolMax 是否已赋值
                     * 
                     */
                    bool PoolMaxHasBeenSet() const;

                    /**
                     * 获取是否支持事务拆分
                     * @return SupportTransSplit 是否支持事务拆分
                     * 
                     */
                    bool GetSupportTransSplit() const;

                    /**
                     * 判断参数 SupportTransSplit 是否已赋值
                     * @return SupportTransSplit 是否已赋值
                     * 
                     */
                    bool SupportTransSplitHasBeenSet() const;

                    /**
                     * 获取支持连接池的最小代理版本
                     * @return SupportPoolMinVersion 支持连接池的最小代理版本
                     * 
                     */
                    std::string GetSupportPoolMinVersion() const;

                    /**
                     * 判断参数 SupportPoolMinVersion 是否已赋值
                     * @return SupportPoolMinVersion 是否已赋值
                     * 
                     */
                    bool SupportPoolMinVersionHasBeenSet() const;

                    /**
                     * 获取支持事务拆分的最小代理版本
                     * @return SupportTransSplitMinVersion 支持事务拆分的最小代理版本
                     * 
                     */
                    std::string GetSupportTransSplitMinVersion() const;

                    /**
                     * 判断参数 SupportTransSplitMinVersion 是否已赋值
                     * @return SupportTransSplitMinVersion 是否已赋值
                     * 
                     */
                    bool SupportTransSplitMinVersionHasBeenSet() const;

                    /**
                     * 获取是否支持设置只读
                     * @return SupportReadOnly 是否支持设置只读
                     * 
                     */
                    bool GetSupportReadOnly() const;

                    /**
                     * 判断参数 SupportReadOnly 是否已赋值
                     * @return SupportReadOnly 是否已赋值
                     * 
                     */
                    bool SupportReadOnlyHasBeenSet() const;

                    /**
                     * 获取是否自动均衡负载
                     * @return SupportAutoLoadBalance 是否自动均衡负载
                     * 
                     */
                    bool GetSupportAutoLoadBalance() const;

                    /**
                     * 判断参数 SupportAutoLoadBalance 是否已赋值
                     * @return SupportAutoLoadBalance 是否已赋值
                     * 
                     */
                    bool SupportAutoLoadBalanceHasBeenSet() const;

                    /**
                     * 获取是否支持接入模式
                     * @return SupportAccessMode 是否支持接入模式
                     * 
                     */
                    bool GetSupportAccessMode() const;

                    /**
                     * 判断参数 SupportAccessMode 是否已赋值
                     * @return SupportAccessMode 是否已赋值
                     * 
                     */
                    bool SupportAccessModeHasBeenSet() const;

                private:

                    /**
                     * 支持最大代理版本
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * 是否支持连接池
                     */
                    bool m_supportPool;
                    bool m_supportPoolHasBeenSet;

                    /**
                     * 连接池最小值
                     */
                    uint64_t m_poolMin;
                    bool m_poolMinHasBeenSet;

                    /**
                     * 连接池最大值
                     */
                    uint64_t m_poolMax;
                    bool m_poolMaxHasBeenSet;

                    /**
                     * 是否支持事务拆分
                     */
                    bool m_supportTransSplit;
                    bool m_supportTransSplitHasBeenSet;

                    /**
                     * 支持连接池的最小代理版本
                     */
                    std::string m_supportPoolMinVersion;
                    bool m_supportPoolMinVersionHasBeenSet;

                    /**
                     * 支持事务拆分的最小代理版本
                     */
                    std::string m_supportTransSplitMinVersion;
                    bool m_supportTransSplitMinVersionHasBeenSet;

                    /**
                     * 是否支持设置只读
                     */
                    bool m_supportReadOnly;
                    bool m_supportReadOnlyHasBeenSet;

                    /**
                     * 是否自动均衡负载
                     */
                    bool m_supportAutoLoadBalance;
                    bool m_supportAutoLoadBalanceHasBeenSet;

                    /**
                     * 是否支持接入模式
                     */
                    bool m_supportAccessMode;
                    bool m_supportAccessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYSUPPORTPARAMRESPONSE_H_
