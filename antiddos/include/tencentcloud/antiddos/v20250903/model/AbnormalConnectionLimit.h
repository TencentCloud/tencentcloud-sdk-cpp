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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_ABNORMALCONNECTIONLIMIT_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_ABNORMALCONNECTIONLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/AbnormalConnectCondition.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 异常连接防护配置。
                */
                class AbnormalConnectionLimit : public AbstractModel
                {
                public:
                    AbnormalConnectionLimit();
                    ~AbnormalConnectionLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>异常连接数限制，限制同一时间单个源 IP 异常连接数量， 0为不启用, 范围: 0-4294967295。</p><p>取值范围：[0, 4294967295]</p>
                     * @return AbnormalConnectThreshold <p>异常连接数限制，限制同一时间单个源 IP 异常连接数量， 0为不启用, 范围: 0-4294967295。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    uint64_t GetAbnormalConnectThreshold() const;

                    /**
                     * 设置<p>异常连接数限制，限制同一时间单个源 IP 异常连接数量， 0为不启用, 范围: 0-4294967295。</p><p>取值范围：[0, 4294967295]</p>
                     * @param _abnormalConnectThreshold <p>异常连接数限制，限制同一时间单个源 IP 异常连接数量， 0为不启用, 范围: 0-4294967295。</p><p>取值范围：[0, 4294967295]</p>
                     * 
                     */
                    void SetAbnormalConnectThreshold(const uint64_t& _abnormalConnectThreshold);

                    /**
                     * 判断参数 AbnormalConnectThreshold 是否已赋值
                     * @return AbnormalConnectThreshold 是否已赋值
                     * 
                     */
                    bool AbnormalConnectThresholdHasBeenSet() const;

                    /**
                     * 获取<p>异常连接判定条件。满足任意条件则计为一次异常统计。</p>
                     * @return AbnormalConnectCondition <p>异常连接判定条件。满足任意条件则计为一次异常统计。</p>
                     * 
                     */
                    AbnormalConnectCondition GetAbnormalConnectCondition() const;

                    /**
                     * 设置<p>异常连接判定条件。满足任意条件则计为一次异常统计。</p>
                     * @param _abnormalConnectCondition <p>异常连接判定条件。满足任意条件则计为一次异常统计。</p>
                     * 
                     */
                    void SetAbnormalConnectCondition(const AbnormalConnectCondition& _abnormalConnectCondition);

                    /**
                     * 判断参数 AbnormalConnectCondition 是否已赋值
                     * @return AbnormalConnectCondition 是否已赋值
                     * 
                     */
                    bool AbnormalConnectConditionHasBeenSet() const;

                private:

                    /**
                     * <p>异常连接数限制，限制同一时间单个源 IP 异常连接数量， 0为不启用, 范围: 0-4294967295。</p><p>取值范围：[0, 4294967295]</p>
                     */
                    uint64_t m_abnormalConnectThreshold;
                    bool m_abnormalConnectThresholdHasBeenSet;

                    /**
                     * <p>异常连接判定条件。满足任意条件则计为一次异常统计。</p>
                     */
                    AbnormalConnectCondition m_abnormalConnectCondition;
                    bool m_abnormalConnectConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_ABNORMALCONNECTIONLIMIT_H_
