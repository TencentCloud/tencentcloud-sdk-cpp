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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTCONFIGSETTINGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTCONFIGSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAgentConfigSetting返回参数结构体
                */
                class DescribeAgentConfigSettingResponse : public AbstractModel
                {
                public:
                    DescribeAgentConfigSettingResponse();
                    ~DescribeAgentConfigSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>增强日志模式开关，0-关闭 1-开启（未配置时为空）</p>
                     * @return EnhanceLogMode <p>增强日志模式开关，0-关闭 1-开启（未配置时为空）</p>
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
                     * 获取<p>恶意软件 POC 模式开关，0-关闭 1-开启（未配置时为空）</p>
                     * @return MalwarePocMode <p>恶意软件 POC 模式开关，0-关闭 1-开启（未配置时为空）</p>
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
                     * 获取<p>上报源端口开关（兼容旧版本），0-关闭 1-开启</p>
                     * @return ReportSourcePort <p>上报源端口开关（兼容旧版本），0-关闭 1-开启</p>
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
                     * 获取<p>已开启的日志采集类型列表，如 tcp_ingress、tcp_src_port、http_egress、http_ingress、app_access</p>
                     * @return LogCollectSettings <p>已开启的日志采集类型列表，如 tcp_ingress、tcp_src_port、http_egress、http_ingress、app_access</p>
                     * 
                     */
                    std::vector<std::string> GetLogCollectSettings() const;

                    /**
                     * 判断参数 LogCollectSettings 是否已赋值
                     * @return LogCollectSettings 是否已赋值
                     * 
                     */
                    bool LogCollectSettingsHasBeenSet() const;

                    /**
                     * 获取<p>资产选择方式：all/tag/direct</p>
                     * @return AssetSelectionType <p>资产选择方式：all/tag/direct</p>
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>按标签选择时的标签ID数组</p>
                     * @return TagIds <p>按标签选择时的标签ID数组</p>
                     * 
                     */
                    std::vector<std::string> GetTagIds() const;

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>直接选择的主机instance_id列表</p>
                     * @return InstanceIDs <p>直接选择的主机instance_id列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>排除的主机instance_id列表</p>
                     * @return ExcludeInstanceIDs <p>排除的主机instance_id列表</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>增强日志模式开关，0-关闭 1-开启（未配置时为空）</p>
                     */
                    uint64_t m_enhanceLogMode;
                    bool m_enhanceLogModeHasBeenSet;

                    /**
                     * <p>恶意软件 POC 模式开关，0-关闭 1-开启（未配置时为空）</p>
                     */
                    uint64_t m_malwarePocMode;
                    bool m_malwarePocModeHasBeenSet;

                    /**
                     * <p>上报源端口开关（兼容旧版本），0-关闭 1-开启</p>
                     */
                    uint64_t m_reportSourcePort;
                    bool m_reportSourcePortHasBeenSet;

                    /**
                     * <p>已开启的日志采集类型列表，如 tcp_ingress、tcp_src_port、http_egress、http_ingress、app_access</p>
                     */
                    std::vector<std::string> m_logCollectSettings;
                    bool m_logCollectSettingsHasBeenSet;

                    /**
                     * <p>资产选择方式：all/tag/direct</p>
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>按标签选择时的标签ID数组</p>
                     */
                    std::vector<std::string> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>直接选择的主机instance_id列表</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>排除的主机instance_id列表</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAGENTCONFIGSETTINGRESPONSE_H_
