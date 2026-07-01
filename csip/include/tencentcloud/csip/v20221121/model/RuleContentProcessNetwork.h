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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTPROCESSNETWORK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTPROCESSNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 定义进程网络规则内容结构，用于反弹Shell白名单场景，支持进程匹配 + IP/端口过滤
                */
                class RuleContentProcessNetwork : public AbstractModel
                {
                public:
                    RuleContentProcessNetwork();
                    ~RuleContentProcessNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前进程</p>
                     * @return Process <p>当前进程</p>
                     * 
                     */
                    RuleContentProcessInfo GetProcess() const;

                    /**
                     * 设置<p>当前进程</p>
                     * @param _process <p>当前进程</p>
                     * 
                     */
                    void SetProcess(const RuleContentProcessInfo& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取<p>目标IP（必填）: 支持单个IP/IP范围/CIDR, 支持IPv4和IPv6</p>
                     * @return DstIP <p>目标IP（必填）: 支持单个IP/IP范围/CIDR, 支持IPv4和IPv6</p>
                     * 
                     */
                    std::string GetDstIP() const;

                    /**
                     * 设置<p>目标IP（必填）: 支持单个IP/IP范围/CIDR, 支持IPv4和IPv6</p>
                     * @param _dstIP <p>目标IP（必填）: 支持单个IP/IP范围/CIDR, 支持IPv4和IPv6</p>
                     * 
                     */
                    void SetDstIP(const std::string& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取<p>父进程</p>
                     * @return ParentProcess <p>父进程</p>
                     * 
                     */
                    RuleContentProcessInfo GetParentProcess() const;

                    /**
                     * 设置<p>父进程</p>
                     * @param _parentProcess <p>父进程</p>
                     * 
                     */
                    void SetParentProcess(const RuleContentProcessInfo& _parentProcess);

                    /**
                     * 判断参数 ParentProcess 是否已赋值
                     * @return ParentProcess 是否已赋值
                     * 
                     */
                    bool ParentProcessHasBeenSet() const;

                    /**
                     * 获取<p>目标端口列表（可选）: 支持1-65535, 为空表示不限端口</p>
                     * @return DstPorts <p>目标端口列表（可选）: 支持1-65535, 为空表示不限端口</p>
                     * 
                     */
                    std::vector<uint64_t> GetDstPorts() const;

                    /**
                     * 设置<p>目标端口列表（可选）: 支持1-65535, 为空表示不限端口</p>
                     * @param _dstPorts <p>目标端口列表（可选）: 支持1-65535, 为空表示不限端口</p>
                     * 
                     */
                    void SetDstPorts(const std::vector<uint64_t>& _dstPorts);

                    /**
                     * 判断参数 DstPorts 是否已赋值
                     * @return DstPorts 是否已赋值
                     * 
                     */
                    bool DstPortsHasBeenSet() const;

                private:

                    /**
                     * <p>当前进程</p>
                     */
                    RuleContentProcessInfo m_process;
                    bool m_processHasBeenSet;

                    /**
                     * <p>目标IP（必填）: 支持单个IP/IP范围/CIDR, 支持IPv4和IPv6</p>
                     */
                    std::string m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * <p>父进程</p>
                     */
                    RuleContentProcessInfo m_parentProcess;
                    bool m_parentProcessHasBeenSet;

                    /**
                     * <p>目标端口列表（可选）: 支持1-65535, 为空表示不限端口</p>
                     */
                    std::vector<uint64_t> m_dstPorts;
                    bool m_dstPortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RULECONTENTPROCESSNETWORK_H_
