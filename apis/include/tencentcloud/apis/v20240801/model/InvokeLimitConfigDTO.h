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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_INVOKELIMITCONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_INVOKELIMITCONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * InvokeLimitConfigDTO
                */
                class InvokeLimitConfigDTO : public AbstractModel
                {
                public:
                    InvokeLimitConfigDTO();
                    ~InvokeLimitConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取令牌桶最大容量

注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenBucketMaxNum 令牌桶最大容量

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTokenBucketMaxNum() const;

                    /**
                     * 设置令牌桶最大容量

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenBucketMaxNum 令牌桶最大容量

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenBucketMaxNum(const int64_t& _tokenBucketMaxNum);

                    /**
                     * 判断参数 TokenBucketMaxNum 是否已赋值
                     * @return TokenBucketMaxNum 是否已赋值
                     * 
                     */
                    bool TokenBucketMaxNumHasBeenSet() const;

                    /**
                     * 获取令牌生成速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenBucketRate 令牌生成速率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTokenBucketRate() const;

                    /**
                     * 设置令牌生成速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenBucketRate 令牌生成速率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenBucketRate(const int64_t& _tokenBucketRate);

                    /**
                     * 判断参数 TokenBucketRate 是否已赋值
                     * @return TokenBucketRate 是否已赋值
                     * 
                     */
                    bool TokenBucketRateHasBeenSet() const;

                    /**
                     * 获取漏斗容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunnelMaxNum 漏斗容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFunnelMaxNum() const;

                    /**
                     * 设置漏斗容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _funnelMaxNum 漏斗容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunnelMaxNum(const int64_t& _funnelMaxNum);

                    /**
                     * 判断参数 FunnelMaxNum 是否已赋值
                     * @return FunnelMaxNum 是否已赋值
                     * 
                     */
                    bool FunnelMaxNumHasBeenSet() const;

                    /**
                     * 获取漏嘴流速
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunnelRate 漏嘴流速
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFunnelRate() const;

                    /**
                     * 设置漏嘴流速
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _funnelRate 漏嘴流速
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunnelRate(const int64_t& _funnelRate);

                    /**
                     * 判断参数 FunnelRate 是否已赋值
                     * @return FunnelRate 是否已赋值
                     * 
                     */
                    bool FunnelRateHasBeenSet() const;

                    /**
                     * 获取滑动窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlidingWindowMaxNum 滑动窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSlidingWindowMaxNum() const;

                    /**
                     * 设置滑动窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slidingWindowMaxNum 滑动窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlidingWindowMaxNum(const int64_t& _slidingWindowMaxNum);

                    /**
                     * 判断参数 SlidingWindowMaxNum 是否已赋值
                     * @return SlidingWindowMaxNum 是否已赋值
                     * 
                     */
                    bool SlidingWindowMaxNumHasBeenSet() const;

                    /**
                     * 获取滑动窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlidingWindowSize 滑动窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSlidingWindowSize() const;

                    /**
                     * 设置滑动窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slidingWindowSize 滑动窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlidingWindowSize(const int64_t& _slidingWindowSize);

                    /**
                     * 判断参数 SlidingWindowSize 是否已赋值
                     * @return SlidingWindowSize 是否已赋值
                     * 
                     */
                    bool SlidingWindowSizeHasBeenSet() const;

                    /**
                     * 获取时间窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeWindow 时间窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeWindow() const;

                    /**
                     * 设置时间窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeWindow 时间窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeWindow(const int64_t& _timeWindow);

                    /**
                     * 判断参数 TimeWindow 是否已赋值
                     * @return TimeWindow 是否已赋值
                     * 
                     */
                    bool TimeWindowHasBeenSet() const;

                    /**
                     * 获取时间窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeWindowInterval 时间窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeWindowInterval() const;

                    /**
                     * 设置时间窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeWindowInterval 时间窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeWindowInterval(const int64_t& _timeWindowInterval);

                    /**
                     * 判断参数 TimeWindowInterval 是否已赋值
                     * @return TimeWindowInterval 是否已赋值
                     * 
                     */
                    bool TimeWindowIntervalHasBeenSet() const;

                    /**
                     * 获取请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * Type类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 令牌桶最大容量

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tokenBucketMaxNum;
                    bool m_tokenBucketMaxNumHasBeenSet;

                    /**
                     * 令牌生成速率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tokenBucketRate;
                    bool m_tokenBucketRateHasBeenSet;

                    /**
                     * 漏斗容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_funnelMaxNum;
                    bool m_funnelMaxNumHasBeenSet;

                    /**
                     * 漏嘴流速
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_funnelRate;
                    bool m_funnelRateHasBeenSet;

                    /**
                     * 滑动窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_slidingWindowMaxNum;
                    bool m_slidingWindowMaxNumHasBeenSet;

                    /**
                     * 滑动窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_slidingWindowSize;
                    bool m_slidingWindowSizeHasBeenSet;

                    /**
                     * 时间窗口最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeWindow;
                    bool m_timeWindowHasBeenSet;

                    /**
                     * 时间窗口长度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeWindowInterval;
                    bool m_timeWindowIntervalHasBeenSet;

                    /**
                     * 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_INVOKELIMITCONFIGDTO_H_
