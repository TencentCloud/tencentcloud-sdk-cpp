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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEUSEROTHERCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEUSEROTHERCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 用户级基线其他配置（同步授权、离线清风险、Agent 扫描超时等）。
                */
                class BaselineUserOtherConf : public AbstractModel
                {
                public:
                    BaselineUserOtherConf();
                    ~BaselineUserOtherConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否允许集团管理员将基线配置同步到本账号。true 允许，false 不允许。</p>
                     * @return AllowSync <p>是否允许集团管理员将基线配置同步到本账号。true 允许，false 不允许。</p>
                     * 
                     */
                    bool GetAllowSync() const;

                    /**
                     * 设置<p>是否允许集团管理员将基线配置同步到本账号。true 允许，false 不允许。</p>
                     * @param _allowSync <p>是否允许集团管理员将基线配置同步到本账号。true 允许，false 不允许。</p>
                     * 
                     */
                    void SetAllowSync(const bool& _allowSync);

                    /**
                     * 判断参数 AllowSync 是否已赋值
                     * @return AllowSync 是否已赋值
                     * 
                     */
                    bool AllowSyncHasBeenSet() const;

                    /**
                     * 获取<p>资产离线时是否自动清除其历史风险结果。true 清除，false 保留。</p>
                     * @return CleanRiskWhenOffline <p>资产离线时是否自动清除其历史风险结果。true 清除，false 保留。</p>
                     * 
                     */
                    bool GetCleanRiskWhenOffline() const;

                    /**
                     * 设置<p>资产离线时是否自动清除其历史风险结果。true 清除，false 保留。</p>
                     * @param _cleanRiskWhenOffline <p>资产离线时是否自动清除其历史风险结果。true 清除，false 保留。</p>
                     * 
                     */
                    void SetCleanRiskWhenOffline(const bool& _cleanRiskWhenOffline);

                    /**
                     * 判断参数 CleanRiskWhenOffline 是否已赋值
                     * @return CleanRiskWhenOffline 是否已赋值
                     * 
                     */
                    bool CleanRiskWhenOfflineHasBeenSet() const;

                    /**
                     * 获取<p>Agent 单次扫描的超时时间，单位秒。取值范围 [60, 86400]，默认 1800。</p>
                     * @return AgentScanTimeout <p>Agent 单次扫描的超时时间，单位秒。取值范围 [60, 86400]，默认 1800。</p>
                     * 
                     */
                    uint64_t GetAgentScanTimeout() const;

                    /**
                     * 设置<p>Agent 单次扫描的超时时间，单位秒。取值范围 [60, 86400]，默认 1800。</p>
                     * @param _agentScanTimeout <p>Agent 单次扫描的超时时间，单位秒。取值范围 [60, 86400]，默认 1800。</p>
                     * 
                     */
                    void SetAgentScanTimeout(const uint64_t& _agentScanTimeout);

                    /**
                     * 判断参数 AgentScanTimeout 是否已赋值
                     * @return AgentScanTimeout 是否已赋值
                     * 
                     */
                    bool AgentScanTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>是否允许集团管理员将基线配置同步到本账号。true 允许，false 不允许。</p>
                     */
                    bool m_allowSync;
                    bool m_allowSyncHasBeenSet;

                    /**
                     * <p>资产离线时是否自动清除其历史风险结果。true 清除，false 保留。</p>
                     */
                    bool m_cleanRiskWhenOffline;
                    bool m_cleanRiskWhenOfflineHasBeenSet;

                    /**
                     * <p>Agent 单次扫描的超时时间，单位秒。取值范围 [60, 86400]，默认 1800。</p>
                     */
                    uint64_t m_agentScanTimeout;
                    bool m_agentScanTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEUSEROTHERCONF_H_
