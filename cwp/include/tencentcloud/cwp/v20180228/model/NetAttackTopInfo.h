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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/TopInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 网络攻击top统计数据
                */
                class NetAttackTopInfo : public AbstractModel
                {
                public:
                    NetAttackTopInfo();
                    ~NetAttackTopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络攻击主机维度top统计数据
                     * @return Agent 网络攻击主机维度top统计数据
                     * 
                     */
                    std::vector<TopInfo> GetAgent() const;

                    /**
                     * 设置网络攻击主机维度top统计数据
                     * @param _agent 网络攻击主机维度top统计数据
                     * 
                     */
                    void SetAgent(const std::vector<TopInfo>& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取网络攻击ip来源维度top统计数据
                     * @return SrcIp 网络攻击ip来源维度top统计数据
                     * 
                     */
                    std::vector<TopInfo> GetSrcIp() const;

                    /**
                     * 设置网络攻击ip来源维度top统计数据
                     * @param _srcIp 网络攻击ip来源维度top统计数据
                     * 
                     */
                    void SetSrcIp(const std::vector<TopInfo>& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取网络攻击目标端口维度top统计数据
                     * @return DstPort 网络攻击目标端口维度top统计数据
                     * 
                     */
                    std::vector<TopInfo> GetDstPort() const;

                    /**
                     * 设置网络攻击目标端口维度top统计数据
                     * @param _dstPort 网络攻击目标端口维度top统计数据
                     * 
                     */
                    void SetDstPort(const std::vector<TopInfo>& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取网络攻击漏洞维度top统计数据
                     * @return Vul 网络攻击漏洞维度top统计数据
                     * 
                     */
                    std::vector<TopInfo> GetVul() const;

                    /**
                     * 设置网络攻击漏洞维度top统计数据
                     * @param _vul 网络攻击漏洞维度top统计数据
                     * 
                     */
                    void SetVul(const std::vector<TopInfo>& _vul);

                    /**
                     * 判断参数 Vul 是否已赋值
                     * @return Vul 是否已赋值
                     * 
                     */
                    bool VulHasBeenSet() const;

                private:

                    /**
                     * 网络攻击主机维度top统计数据
                     */
                    std::vector<TopInfo> m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 网络攻击ip来源维度top统计数据
                     */
                    std::vector<TopInfo> m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 网络攻击目标端口维度top统计数据
                     */
                    std::vector<TopInfo> m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 网络攻击漏洞维度top统计数据
                     */
                    std::vector<TopInfo> m_vul;
                    bool m_vulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTOPINFO_H_
