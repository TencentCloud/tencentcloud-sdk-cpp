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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYFLOWMONITORDETAIL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYFLOWMONITORDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * nat网关流量监控明细。
                */
                class NatGatewayFlowMonitorDetail : public AbstractModel
                {
                public:
                    NatGatewayFlowMonitorDetail();
                    ~NatGatewayFlowMonitorDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源`IP`。
                     * @return PrivateIpAddress 来源`IP`。
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置来源`IP`。
                     * @param _privateIpAddress 来源`IP`。
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取入包量。
                     * @return InPkg 入包量。
                     * 
                     */
                    uint64_t GetInPkg() const;

                    /**
                     * 设置入包量。
                     * @param _inPkg 入包量。
                     * 
                     */
                    void SetInPkg(const uint64_t& _inPkg);

                    /**
                     * 判断参数 InPkg 是否已赋值
                     * @return InPkg 是否已赋值
                     * 
                     */
                    bool InPkgHasBeenSet() const;

                    /**
                     * 获取出包量。
                     * @return OutPkg 出包量。
                     * 
                     */
                    uint64_t GetOutPkg() const;

                    /**
                     * 设置出包量。
                     * @param _outPkg 出包量。
                     * 
                     */
                    void SetOutPkg(const uint64_t& _outPkg);

                    /**
                     * 判断参数 OutPkg 是否已赋值
                     * @return OutPkg 是否已赋值
                     * 
                     */
                    bool OutPkgHasBeenSet() const;

                    /**
                     * 获取入流量，单位：`Byte`。
                     * @return InTraffic 入流量，单位：`Byte`。
                     * 
                     */
                    uint64_t GetInTraffic() const;

                    /**
                     * 设置入流量，单位：`Byte`。
                     * @param _inTraffic 入流量，单位：`Byte`。
                     * 
                     */
                    void SetInTraffic(const uint64_t& _inTraffic);

                    /**
                     * 判断参数 InTraffic 是否已赋值
                     * @return InTraffic 是否已赋值
                     * 
                     */
                    bool InTrafficHasBeenSet() const;

                    /**
                     * 获取出流量，单位：`Byte`。
                     * @return OutTraffic 出流量，单位：`Byte`。
                     * 
                     */
                    uint64_t GetOutTraffic() const;

                    /**
                     * 设置出流量，单位：`Byte`。
                     * @param _outTraffic 出流量，单位：`Byte`。
                     * 
                     */
                    void SetOutTraffic(const uint64_t& _outTraffic);

                    /**
                     * 判断参数 OutTraffic 是否已赋值
                     * @return OutTraffic 是否已赋值
                     * 
                     */
                    bool OutTrafficHasBeenSet() const;

                    /**
                     * 获取并发连接数。仅标准型nat支持此参数。
                     * @return ConcurrentConnectionCount 并发连接数。仅标准型nat支持此参数。
                     * 
                     */
                    uint64_t GetConcurrentConnectionCount() const;

                    /**
                     * 设置并发连接数。仅标准型nat支持此参数。
                     * @param _concurrentConnectionCount 并发连接数。仅标准型nat支持此参数。
                     * 
                     */
                    void SetConcurrentConnectionCount(const uint64_t& _concurrentConnectionCount);

                    /**
                     * 判断参数 ConcurrentConnectionCount 是否已赋值
                     * @return ConcurrentConnectionCount 是否已赋值
                     * 
                     */
                    bool ConcurrentConnectionCountHasBeenSet() const;

                    /**
                     * 获取新建连接速率。仅标准型nat支持此参数。
                     * @return NewConnectionRate 新建连接速率。仅标准型nat支持此参数。
                     * 
                     */
                    uint64_t GetNewConnectionRate() const;

                    /**
                     * 设置新建连接速率。仅标准型nat支持此参数。
                     * @param _newConnectionRate 新建连接速率。仅标准型nat支持此参数。
                     * 
                     */
                    void SetNewConnectionRate(const uint64_t& _newConnectionRate);

                    /**
                     * 判断参数 NewConnectionRate 是否已赋值
                     * @return NewConnectionRate 是否已赋值
                     * 
                     */
                    bool NewConnectionRateHasBeenSet() const;

                private:

                    /**
                     * 来源`IP`。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * 入包量。
                     */
                    uint64_t m_inPkg;
                    bool m_inPkgHasBeenSet;

                    /**
                     * 出包量。
                     */
                    uint64_t m_outPkg;
                    bool m_outPkgHasBeenSet;

                    /**
                     * 入流量，单位：`Byte`。
                     */
                    uint64_t m_inTraffic;
                    bool m_inTrafficHasBeenSet;

                    /**
                     * 出流量，单位：`Byte`。
                     */
                    uint64_t m_outTraffic;
                    bool m_outTrafficHasBeenSet;

                    /**
                     * 并发连接数。仅标准型nat支持此参数。
                     */
                    uint64_t m_concurrentConnectionCount;
                    bool m_concurrentConnectionCountHasBeenSet;

                    /**
                     * 新建连接速率。仅标准型nat支持此参数。
                     */
                    uint64_t m_newConnectionRate;
                    bool m_newConnectionRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYFLOWMONITORDETAIL_H_
