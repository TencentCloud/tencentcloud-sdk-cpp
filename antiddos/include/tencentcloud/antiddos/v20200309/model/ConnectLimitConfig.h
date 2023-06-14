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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CONNECTLIMITCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CONNECTLIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 连接抑制相关配置
                */
                class ConnectLimitConfig : public AbstractModel
                {
                public:
                    ConnectLimitConfig();
                    ~ConnectLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基于源IP+目的IP的每秒新建数限制
                     * @return SdNewLimit 基于源IP+目的IP的每秒新建数限制
                     * 
                     */
                    uint64_t GetSdNewLimit() const;

                    /**
                     * 设置基于源IP+目的IP的每秒新建数限制
                     * @param _sdNewLimit 基于源IP+目的IP的每秒新建数限制
                     * 
                     */
                    void SetSdNewLimit(const uint64_t& _sdNewLimit);

                    /**
                     * 判断参数 SdNewLimit 是否已赋值
                     * @return SdNewLimit 是否已赋值
                     * 
                     */
                    bool SdNewLimitHasBeenSet() const;

                    /**
                     * 获取基于目的IP的每秒新建数限制
                     * @return DstNewLimit 基于目的IP的每秒新建数限制
                     * 
                     */
                    uint64_t GetDstNewLimit() const;

                    /**
                     * 设置基于目的IP的每秒新建数限制
                     * @param _dstNewLimit 基于目的IP的每秒新建数限制
                     * 
                     */
                    void SetDstNewLimit(const uint64_t& _dstNewLimit);

                    /**
                     * 判断参数 DstNewLimit 是否已赋值
                     * @return DstNewLimit 是否已赋值
                     * 
                     */
                    bool DstNewLimitHasBeenSet() const;

                    /**
                     * 获取基于源IP+目的IP的并发连接控制
                     * @return SdConnLimit 基于源IP+目的IP的并发连接控制
                     * 
                     */
                    uint64_t GetSdConnLimit() const;

                    /**
                     * 设置基于源IP+目的IP的并发连接控制
                     * @param _sdConnLimit 基于源IP+目的IP的并发连接控制
                     * 
                     */
                    void SetSdConnLimit(const uint64_t& _sdConnLimit);

                    /**
                     * 判断参数 SdConnLimit 是否已赋值
                     * @return SdConnLimit 是否已赋值
                     * 
                     */
                    bool SdConnLimitHasBeenSet() const;

                    /**
                     * 获取基于目的IP+目的端口的并发连接控制
                     * @return DstConnLimit 基于目的IP+目的端口的并发连接控制
                     * 
                     */
                    uint64_t GetDstConnLimit() const;

                    /**
                     * 设置基于目的IP+目的端口的并发连接控制
                     * @param _dstConnLimit 基于目的IP+目的端口的并发连接控制
                     * 
                     */
                    void SetDstConnLimit(const uint64_t& _dstConnLimit);

                    /**
                     * 判断参数 DstConnLimit 是否已赋值
                     * @return DstConnLimit 是否已赋值
                     * 
                     */
                    bool DstConnLimitHasBeenSet() const;

                    /**
                     * 获取基于连接抑制触发阈值，取值范围[0,4294967295]
                     * @return BadConnThreshold 基于连接抑制触发阈值，取值范围[0,4294967295]
                     * 
                     */
                    uint64_t GetBadConnThreshold() const;

                    /**
                     * 设置基于连接抑制触发阈值，取值范围[0,4294967295]
                     * @param _badConnThreshold 基于连接抑制触发阈值，取值范围[0,4294967295]
                     * 
                     */
                    void SetBadConnThreshold(const uint64_t& _badConnThreshold);

                    /**
                     * 判断参数 BadConnThreshold 是否已赋值
                     * @return BadConnThreshold 是否已赋值
                     * 
                     */
                    bool BadConnThresholdHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * @return NullConnEnable 异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * 
                     */
                    uint64_t GetNullConnEnable() const;

                    /**
                     * 设置异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * @param _nullConnEnable 异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     * 
                     */
                    void SetNullConnEnable(const uint64_t& _nullConnEnable);

                    /**
                     * 判断参数 NullConnEnable 是否已赋值
                     * @return NullConnEnable 是否已赋值
                     * 
                     */
                    bool NullConnEnableHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，连接超时，，取值范围[0,65535]
                     * @return ConnTimeout 异常连接检测条件，连接超时，，取值范围[0,65535]
                     * 
                     */
                    uint64_t GetConnTimeout() const;

                    /**
                     * 设置异常连接检测条件，连接超时，，取值范围[0,65535]
                     * @param _connTimeout 异常连接检测条件，连接超时，，取值范围[0,65535]
                     * 
                     */
                    void SetConnTimeout(const uint64_t& _connTimeout);

                    /**
                     * 判断参数 ConnTimeout 是否已赋值
                     * @return ConnTimeout 是否已赋值
                     * 
                     */
                    bool ConnTimeoutHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * @return SynRate 异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * 
                     */
                    uint64_t GetSynRate() const;

                    /**
                     * 设置异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * @param _synRate 异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     * 
                     */
                    void SetSynRate(const uint64_t& _synRate);

                    /**
                     * 判断参数 SynRate 是否已赋值
                     * @return SynRate 是否已赋值
                     * 
                     */
                    bool SynRateHasBeenSet() const;

                    /**
                     * 获取异常连接检测条件，syn阈值，取值范围[0,100]
                     * @return SynLimit 异常连接检测条件，syn阈值，取值范围[0,100]
                     * 
                     */
                    uint64_t GetSynLimit() const;

                    /**
                     * 设置异常连接检测条件，syn阈值，取值范围[0,100]
                     * @param _synLimit 异常连接检测条件，syn阈值，取值范围[0,100]
                     * 
                     */
                    void SetSynLimit(const uint64_t& _synLimit);

                    /**
                     * 判断参数 SynLimit 是否已赋值
                     * @return SynLimit 是否已赋值
                     * 
                     */
                    bool SynLimitHasBeenSet() const;

                private:

                    /**
                     * 基于源IP+目的IP的每秒新建数限制
                     */
                    uint64_t m_sdNewLimit;
                    bool m_sdNewLimitHasBeenSet;

                    /**
                     * 基于目的IP的每秒新建数限制
                     */
                    uint64_t m_dstNewLimit;
                    bool m_dstNewLimitHasBeenSet;

                    /**
                     * 基于源IP+目的IP的并发连接控制
                     */
                    uint64_t m_sdConnLimit;
                    bool m_sdConnLimitHasBeenSet;

                    /**
                     * 基于目的IP+目的端口的并发连接控制
                     */
                    uint64_t m_dstConnLimit;
                    bool m_dstConnLimitHasBeenSet;

                    /**
                     * 基于连接抑制触发阈值，取值范围[0,4294967295]
                     */
                    uint64_t m_badConnThreshold;
                    bool m_badConnThresholdHasBeenSet;

                    /**
                     * 异常连接检测条件，空连接防护开关，，取值范围[0,1]
                     */
                    uint64_t m_nullConnEnable;
                    bool m_nullConnEnableHasBeenSet;

                    /**
                     * 异常连接检测条件，连接超时，，取值范围[0,65535]
                     */
                    uint64_t m_connTimeout;
                    bool m_connTimeoutHasBeenSet;

                    /**
                     * 异常连接检测条件，syn占比ack百分比，，取值范围[0,100]
                     */
                    uint64_t m_synRate;
                    bool m_synRateHasBeenSet;

                    /**
                     * 异常连接检测条件，syn阈值，取值范围[0,100]
                     */
                    uint64_t m_synLimit;
                    bool m_synLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CONNECTLIMITCONFIG_H_
