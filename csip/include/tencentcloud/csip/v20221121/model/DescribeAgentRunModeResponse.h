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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTRUNMODERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTRUNMODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CustomAgentRunModePolicy.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAgentRunMode返回参数结构体
                */
                class DescribeAgentRunModeResponse : public AbstractModel
                {
                public:
                    DescribeAgentRunModeResponse();
                    ~DescribeAgentRunModeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>自定义模式配置</p>
                     * @return CustomPolicy <p>自定义模式配置</p>
                     * 
                     */
                    CustomAgentRunModePolicy GetCustomPolicy() const;

                    /**
                     * 判断参数 CustomPolicy 是否已赋值
                     * @return CustomPolicy 是否已赋值
                     * 
                     */
                    bool CustomPolicyHasBeenSet() const;

                    /**
                     * 获取<p>高安全防护模式quuid列表</p>
                     * @return AdvanceModeQuuids <p>高安全防护模式quuid列表</p>
                     * 
                     */
                    std::vector<std::string> GetAdvanceModeQuuids() const;

                    /**
                     * 判断参数 AdvanceModeQuuids 是否已赋值
                     * @return AdvanceModeQuuids 是否已赋值
                     * 
                     */
                    bool AdvanceModeQuuidsHasBeenSet() const;

                    /**
                     * 获取<p>自定义模式quuid列表</p>
                     * @return CustomModeQuuids <p>自定义模式quuid列表</p>
                     * 
                     */
                    std::vector<std::string> GetCustomModeQuuids() const;

                    /**
                     * 判断参数 CustomModeQuuids 是否已赋值
                     * @return CustomModeQuuids 是否已赋值
                     * 
                     */
                    bool CustomModeQuuidsHasBeenSet() const;

                    /**
                     * 获取<p>日志增强开关,0：关闭，1：打开</p>
                     * @return EnhanceLogMode <p>日志增强开关,0：关闭，1：打开</p>
                     * 
                     */
                    uint64_t GetEnhanceLogMode() const;

                    /**
                     * 判断参数 EnhanceLogMode 是否已赋值
                     * @return EnhanceLogMode 是否已赋值
                     * 
                     */
                    bool EnhanceLogModeHasBeenSet() const;

                    /**
                     * 获取<p>文件查杀自动poc模式开关，0：关闭，1：打开</p>
                     * @return MalwarePocMode <p>文件查杀自动poc模式开关，0：关闭，1：打开</p>
                     * 
                     */
                    uint64_t GetMalwarePocMode() const;

                    /**
                     * 判断参数 MalwarePocMode 是否已赋值
                     * @return MalwarePocMode 是否已赋值
                     * 
                     */
                    bool MalwarePocModeHasBeenSet() const;

                    /**
                     * 获取<p>五元组日志是否上报源端口，0：不上报，1：上报</p>
                     * @return ReportSourcePort <p>五元组日志是否上报源端口，0：不上报，1：上报</p>
                     * 
                     */
                    uint64_t GetReportSourcePort() const;

                    /**
                     * 判断参数 ReportSourcePort 是否已赋值
                     * @return ReportSourcePort 是否已赋值
                     * 
                     */
                    bool ReportSourcePortHasBeenSet() const;

                    /**
                     * 获取<p>业务优先配置</p>
                     * @return BasicPolicy <p>业务优先配置</p>
                     * 
                     */
                    CustomAgentRunModePolicy GetBasicPolicy() const;

                    /**
                     * 判断参数 BasicPolicy 是否已赋值
                     * @return BasicPolicy 是否已赋值
                     * 
                     */
                    bool BasicPolicyHasBeenSet() const;

                    /**
                     * 获取<p>安全优先配置</p>
                     * @return AdvancePolicy <p>安全优先配置</p>
                     * 
                     */
                    CustomAgentRunModePolicy GetAdvancePolicy() const;

                    /**
                     * 判断参数 AdvancePolicy 是否已赋值
                     * @return AdvancePolicy 是否已赋值
                     * 
                     */
                    bool AdvancePolicyHasBeenSet() const;

                    /**
                     * 获取<p>日志采集设置，采集TCP源端口tcp_src_port，TCP入向日志tcp_ingress，HTTP出向连接日志http_egress，HTTP入向连接日志http_ingress，应用访问日志app_access</p>
                     * @return LogCollectSettings <p>日志采集设置，采集TCP源端口tcp_src_port，TCP入向日志tcp_ingress，HTTP出向连接日志http_egress，HTTP入向连接日志http_ingress，应用访问日志app_access</p>
                     * 
                     */
                    std::vector<std::string> GetLogCollectSettings() const;

                    /**
                     * 判断参数 LogCollectSettings 是否已赋值
                     * @return LogCollectSettings 是否已赋值
                     * 
                     */
                    bool LogCollectSettingsHasBeenSet() const;

                private:

                    /**
                     * <p>自定义模式配置</p>
                     */
                    CustomAgentRunModePolicy m_customPolicy;
                    bool m_customPolicyHasBeenSet;

                    /**
                     * <p>高安全防护模式quuid列表</p>
                     */
                    std::vector<std::string> m_advanceModeQuuids;
                    bool m_advanceModeQuuidsHasBeenSet;

                    /**
                     * <p>自定义模式quuid列表</p>
                     */
                    std::vector<std::string> m_customModeQuuids;
                    bool m_customModeQuuidsHasBeenSet;

                    /**
                     * <p>日志增强开关,0：关闭，1：打开</p>
                     */
                    uint64_t m_enhanceLogMode;
                    bool m_enhanceLogModeHasBeenSet;

                    /**
                     * <p>文件查杀自动poc模式开关，0：关闭，1：打开</p>
                     */
                    uint64_t m_malwarePocMode;
                    bool m_malwarePocModeHasBeenSet;

                    /**
                     * <p>五元组日志是否上报源端口，0：不上报，1：上报</p>
                     */
                    uint64_t m_reportSourcePort;
                    bool m_reportSourcePortHasBeenSet;

                    /**
                     * <p>业务优先配置</p>
                     */
                    CustomAgentRunModePolicy m_basicPolicy;
                    bool m_basicPolicyHasBeenSet;

                    /**
                     * <p>安全优先配置</p>
                     */
                    CustomAgentRunModePolicy m_advancePolicy;
                    bool m_advancePolicyHasBeenSet;

                    /**
                     * <p>日志采集设置，采集TCP源端口tcp_src_port，TCP入向日志tcp_ingress，HTTP出向连接日志http_egress，HTTP入向连接日志http_ingress，应用访问日志app_access</p>
                     */
                    std::vector<std::string> m_logCollectSettings;
                    bool m_logCollectSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTRUNMODERESPONSE_H_
