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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNMODEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNMODEREQUEST_H_

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
                * ModifyAgentRunMode请求参数结构体
                */
                class ModifyAgentRunModeRequest : public AbstractModel
                {
                public:
                    ModifyAgentRunModeRequest();
                    ~ModifyAgentRunModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义模式配置</p>
                     * @return CustomPolicy <p>自定义模式配置</p>
                     * 
                     */
                    CustomAgentRunModePolicy GetCustomPolicy() const;

                    /**
                     * 设置<p>自定义模式配置</p>
                     * @param _customPolicy <p>自定义模式配置</p>
                     * 
                     */
                    void SetCustomPolicy(const CustomAgentRunModePolicy& _customPolicy);

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
                     * 设置<p>高安全防护模式quuid列表</p>
                     * @param _advanceModeQuuids <p>高安全防护模式quuid列表</p>
                     * 
                     */
                    void SetAdvanceModeQuuids(const std::vector<std::string>& _advanceModeQuuids);

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
                     * 设置<p>自定义模式quuid列表</p>
                     * @param _customModeQuuids <p>自定义模式quuid列表</p>
                     * 
                     */
                    void SetCustomModeQuuids(const std::vector<std::string>& _customModeQuuids);

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
                     * 设置<p>日志增强开关,0：关闭，1：打开</p>
                     * @param _enhanceLogMode <p>日志增强开关,0：关闭，1：打开</p>
                     * 
                     */
                    void SetEnhanceLogMode(const uint64_t& _enhanceLogMode);

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
                     * 设置<p>文件查杀自动poc模式开关，0：关闭，1：打开</p>
                     * @param _malwarePocMode <p>文件查杀自动poc模式开关，0：关闭，1：打开</p>
                     * 
                     */
                    void SetMalwarePocMode(const uint64_t& _malwarePocMode);

                    /**
                     * 判断参数 MalwarePocMode 是否已赋值
                     * @return MalwarePocMode 是否已赋值
                     * 
                     */
                    bool MalwarePocModeHasBeenSet() const;

                    /**
                     * 获取<p>五元组是否上报源端口，0:不上报，1:上报</p>
                     * @return ReportSourcePort <p>五元组是否上报源端口，0:不上报，1:上报</p>
                     * 
                     */
                    uint64_t GetReportSourcePort() const;

                    /**
                     * 设置<p>五元组是否上报源端口，0:不上报，1:上报</p>
                     * @param _reportSourcePort <p>五元组是否上报源端口，0:不上报，1:上报</p>
                     * 
                     */
                    void SetReportSourcePort(const uint64_t& _reportSourcePort);

                    /**
                     * 判断参数 ReportSourcePort 是否已赋值
                     * @return ReportSourcePort 是否已赋值
                     * 
                     */
                    bool ReportSourcePortHasBeenSet() const;

                    /**
                     * 获取<p>日志采集设置，采集TCP源端口tcp_src_port，TCP入向日志tcp_ingress，HTTP出向连接日志http_egress，HTTP入向连接日志http_ingress，应用访问日志app_access</p>
                     * @return LogCollectSettings <p>日志采集设置，采集TCP源端口tcp_src_port，TCP入向日志tcp_ingress，HTTP出向连接日志http_egress，HTTP入向连接日志http_ingress，应用访问日志app_access</p>
                     * 
                     */
                    std::vector<std::string> GetLogCollectSettings() const;

                    /**
                     * 设置<p>日志采集设置，采集TCP源端口tcp_src_port，TCP入向日志tcp_ingress，HTTP出向连接日志http_egress，HTTP入向连接日志http_ingress，应用访问日志app_access</p>
                     * @param _logCollectSettings <p>日志采集设置，采集TCP源端口tcp_src_port，TCP入向日志tcp_ingress，HTTP出向连接日志http_egress，HTTP入向连接日志http_ingress，应用访问日志app_access</p>
                     * 
                     */
                    void SetLogCollectSettings(const std::vector<std::string>& _logCollectSettings);

                    /**
                     * 判断参数 LogCollectSettings 是否已赋值
                     * @return LogCollectSettings 是否已赋值
                     * 
                     */
                    bool LogCollectSettingsHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

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
                     * <p>五元组是否上报源端口，0:不上报，1:上报</p>
                     */
                    uint64_t m_reportSourcePort;
                    bool m_reportSourcePortHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAGENTRUNMODEREQUEST_H_
