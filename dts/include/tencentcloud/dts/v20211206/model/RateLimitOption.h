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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 迁移和同步任务限速的详细信息
                */
                class RateLimitOption : public AbstractModel
                {
                public:
                    RateLimitOption();
                    ~RateLimitOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @return CurrentDumpThread <p>当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    int64_t GetCurrentDumpThread() const;

                    /**
                     * 设置<p>当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @param _currentDumpThread <p>当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    void SetCurrentDumpThread(const int64_t& _currentDumpThread);

                    /**
                     * 判断参数 CurrentDumpThread 是否已赋值
                     * @return CurrentDumpThread 是否已赋值
                     * 
                     */
                    bool CurrentDumpThreadHasBeenSet() const;

                    /**
                     * 获取<p>默认的全量导出线程数，该字段仅在出参有意义</p>
                     * @return DefaultDumpThread <p>默认的全量导出线程数，该字段仅在出参有意义</p>
                     * 
                     */
                    int64_t GetDefaultDumpThread() const;

                    /**
                     * 设置<p>默认的全量导出线程数，该字段仅在出参有意义</p>
                     * @param _defaultDumpThread <p>默认的全量导出线程数，该字段仅在出参有意义</p>
                     * 
                     */
                    void SetDefaultDumpThread(const int64_t& _defaultDumpThread);

                    /**
                     * 判断参数 DefaultDumpThread 是否已赋值
                     * @return DefaultDumpThread 是否已赋值
                     * 
                     */
                    bool DefaultDumpThreadHasBeenSet() const;

                    /**
                     * 获取<p>当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * @return CurrentDumpRps <p>当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * 
                     */
                    int64_t GetCurrentDumpRps() const;

                    /**
                     * 设置<p>当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * @param _currentDumpRps <p>当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * 
                     */
                    void SetCurrentDumpRps(const int64_t& _currentDumpRps);

                    /**
                     * 判断参数 CurrentDumpRps 是否已赋值
                     * @return CurrentDumpRps 是否已赋值
                     * 
                     */
                    bool CurrentDumpRpsHasBeenSet() const;

                    /**
                     * 获取<p>默认的全量导出Rps，该字段仅在出参有意义</p>
                     * @return DefaultDumpRps <p>默认的全量导出Rps，该字段仅在出参有意义</p>
                     * 
                     */
                    int64_t GetDefaultDumpRps() const;

                    /**
                     * 设置<p>默认的全量导出Rps，该字段仅在出参有意义</p>
                     * @param _defaultDumpRps <p>默认的全量导出Rps，该字段仅在出参有意义</p>
                     * 
                     */
                    void SetDefaultDumpRps(const int64_t& _defaultDumpRps);

                    /**
                     * 判断参数 DefaultDumpRps 是否已赋值
                     * @return DefaultDumpRps 是否已赋值
                     * 
                     */
                    bool DefaultDumpRpsHasBeenSet() const;

                    /**
                     * 获取<p>当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @return CurrentLoadThread <p>当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    int64_t GetCurrentLoadThread() const;

                    /**
                     * 设置<p>当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @param _currentLoadThread <p>当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    void SetCurrentLoadThread(const int64_t& _currentLoadThread);

                    /**
                     * 判断参数 CurrentLoadThread 是否已赋值
                     * @return CurrentLoadThread 是否已赋值
                     * 
                     */
                    bool CurrentLoadThreadHasBeenSet() const;

                    /**
                     * 获取<p>默认的全量导入线程数，该字段仅在出参有意义</p>
                     * @return DefaultLoadThread <p>默认的全量导入线程数，该字段仅在出参有意义</p>
                     * 
                     */
                    int64_t GetDefaultLoadThread() const;

                    /**
                     * 设置<p>默认的全量导入线程数，该字段仅在出参有意义</p>
                     * @param _defaultLoadThread <p>默认的全量导入线程数，该字段仅在出参有意义</p>
                     * 
                     */
                    void SetDefaultLoadThread(const int64_t& _defaultLoadThread);

                    /**
                     * 判断参数 DefaultLoadThread 是否已赋值
                     * @return DefaultLoadThread 是否已赋值
                     * 
                     */
                    bool DefaultLoadThreadHasBeenSet() const;

                    /**
                     * 获取<p>当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * @return CurrentLoadRps <p>当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * 
                     */
                    int64_t GetCurrentLoadRps() const;

                    /**
                     * 设置<p>当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * @param _currentLoadRps <p>当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * 
                     */
                    void SetCurrentLoadRps(const int64_t& _currentLoadRps);

                    /**
                     * 判断参数 CurrentLoadRps 是否已赋值
                     * @return CurrentLoadRps 是否已赋值
                     * 
                     */
                    bool CurrentLoadRpsHasBeenSet() const;

                    /**
                     * 获取<p>默认的全量导入Rps，该字段仅在出参有意义</p>
                     * @return DefaultLoadRps <p>默认的全量导入Rps，该字段仅在出参有意义</p>
                     * 
                     */
                    int64_t GetDefaultLoadRps() const;

                    /**
                     * 设置<p>默认的全量导入Rps，该字段仅在出参有意义</p>
                     * @param _defaultLoadRps <p>默认的全量导入Rps，该字段仅在出参有意义</p>
                     * 
                     */
                    void SetDefaultLoadRps(const int64_t& _defaultLoadRps);

                    /**
                     * 判断参数 DefaultLoadRps 是否已赋值
                     * @return DefaultLoadRps 是否已赋值
                     * 
                     */
                    bool DefaultLoadRpsHasBeenSet() const;

                    /**
                     * 获取<p>当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * @return CurrentSinkerThread <p>当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * 
                     */
                    int64_t GetCurrentSinkerThread() const;

                    /**
                     * 设置<p>当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * @param _currentSinkerThread <p>当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * 
                     */
                    void SetCurrentSinkerThread(const int64_t& _currentSinkerThread);

                    /**
                     * 判断参数 CurrentSinkerThread 是否已赋值
                     * @return CurrentSinkerThread 是否已赋值
                     * 
                     */
                    bool CurrentSinkerThreadHasBeenSet() const;

                    /**
                     * 获取<p>默认的增量导入线程数，该字段仅在出参有意义</p>
                     * @return DefaultSinkerThread <p>默认的增量导入线程数，该字段仅在出参有意义</p>
                     * 
                     */
                    int64_t GetDefaultSinkerThread() const;

                    /**
                     * 设置<p>默认的增量导入线程数，该字段仅在出参有意义</p>
                     * @param _defaultSinkerThread <p>默认的增量导入线程数，该字段仅在出参有意义</p>
                     * 
                     */
                    void SetDefaultSinkerThread(const int64_t& _defaultSinkerThread);

                    /**
                     * 判断参数 DefaultSinkerThread 是否已赋值
                     * @return DefaultSinkerThread 是否已赋值
                     * 
                     */
                    bool DefaultSinkerThreadHasBeenSet() const;

                    /**
                     * 获取<p>enum:&quot;no&quot;/&quot;yes&quot;、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义</p>
                     * @return HasUserSetRateLimit <p>enum:&quot;no&quot;/&quot;yes&quot;、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义</p>
                     * 
                     */
                    std::string GetHasUserSetRateLimit() const;

                    /**
                     * 设置<p>enum:&quot;no&quot;/&quot;yes&quot;、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义</p>
                     * @param _hasUserSetRateLimit <p>enum:&quot;no&quot;/&quot;yes&quot;、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义</p>
                     * 
                     */
                    void SetHasUserSetRateLimit(const std::string& _hasUserSetRateLimit);

                    /**
                     * 判断参数 HasUserSetRateLimit 是否已赋值
                     * @return HasUserSetRateLimit 是否已赋值
                     * 
                     */
                    bool HasUserSetRateLimitHasBeenSet() const;

                    /**
                     * 获取<p>默认的全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @return DefaultDumpBps <p>默认的全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    int64_t GetDefaultDumpBps() const;

                    /**
                     * 设置<p>默认的全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @param _defaultDumpBps <p>默认的全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    void SetDefaultDumpBps(const int64_t& _defaultDumpBps);

                    /**
                     * 判断参数 DefaultDumpBps 是否已赋值
                     * @return DefaultDumpBps 是否已赋值
                     * 
                     */
                    bool DefaultDumpBpsHasBeenSet() const;

                    /**
                     * 获取<p>增量导入RPS，目前仅支持mongodb链路</p>
                     * @return CurrentSinkerRps <p>增量导入RPS，目前仅支持mongodb链路</p>
                     * 
                     */
                    int64_t GetCurrentSinkerRps() const;

                    /**
                     * 设置<p>增量导入RPS，目前仅支持mongodb链路</p>
                     * @param _currentSinkerRps <p>增量导入RPS，目前仅支持mongodb链路</p>
                     * 
                     */
                    void SetCurrentSinkerRps(const int64_t& _currentSinkerRps);

                    /**
                     * 判断参数 CurrentSinkerRps 是否已赋值
                     * @return CurrentSinkerRps 是否已赋值
                     * 
                     */
                    bool CurrentSinkerRpsHasBeenSet() const;

                    /**
                     * 获取<p>默认的增量导入RPS，目前仅支持mongodb链路</p>
                     * @return DefaultSinkerRps <p>默认的增量导入RPS，目前仅支持mongodb链路</p>
                     * 
                     */
                    int64_t GetDefaultSinkerRps() const;

                    /**
                     * 设置<p>默认的增量导入RPS，目前仅支持mongodb链路</p>
                     * @param _defaultSinkerRps <p>默认的增量导入RPS，目前仅支持mongodb链路</p>
                     * 
                     */
                    void SetDefaultSinkerRps(const int64_t& _defaultSinkerRps);

                    /**
                     * 判断参数 DefaultSinkerRps 是否已赋值
                     * @return DefaultSinkerRps 是否已赋值
                     * 
                     */
                    bool DefaultSinkerRpsHasBeenSet() const;

                    /**
                     * 获取<p>当前导入BPS，暂时只有redis在用，单位MB/s</p>
                     * @return CurrentLoadBps <p>当前导入BPS，暂时只有redis在用，单位MB/s</p>
                     * 
                     */
                    int64_t GetCurrentLoadBps() const;

                    /**
                     * 设置<p>当前导入BPS，暂时只有redis在用，单位MB/s</p>
                     * @param _currentLoadBps <p>当前导入BPS，暂时只有redis在用，单位MB/s</p>
                     * 
                     */
                    void SetCurrentLoadBps(const int64_t& _currentLoadBps);

                    /**
                     * 判断参数 CurrentLoadBps 是否已赋值
                     * @return CurrentLoadBps 是否已赋值
                     * 
                     */
                    bool CurrentLoadBpsHasBeenSet() const;

                    /**
                     * 获取<p>目标库分片数，暂时只有redis在用</p>
                     * @return CurrentDstShardCount <p>目标库分片数，暂时只有redis在用</p>
                     * 
                     */
                    int64_t GetCurrentDstShardCount() const;

                    /**
                     * 设置<p>目标库分片数，暂时只有redis在用</p>
                     * @param _currentDstShardCount <p>目标库分片数，暂时只有redis在用</p>
                     * 
                     */
                    void SetCurrentDstShardCount(const int64_t& _currentDstShardCount);

                    /**
                     * 判断参数 CurrentDstShardCount 是否已赋值
                     * @return CurrentDstShardCount 是否已赋值
                     * 
                     */
                    bool CurrentDstShardCountHasBeenSet() const;

                    /**
                     * 获取<p>全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @return CurrentDumpBps <p>全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    int64_t GetCurrentDumpBps() const;

                    /**
                     * 设置<p>全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @param _currentDumpBps <p>全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    void SetCurrentDumpBps(const int64_t& _currentDumpBps);

                    /**
                     * 判断参数 CurrentDumpBps 是否已赋值
                     * @return CurrentDumpBps 是否已赋值
                     * 
                     */
                    bool CurrentDumpBpsHasBeenSet() const;

                    /**
                     * 获取<p>增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @return CurrentSinkerBps <p>增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    int64_t GetCurrentSinkerBps() const;

                    /**
                     * 设置<p>增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @param _currentSinkerBps <p>增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    void SetCurrentSinkerBps(const int64_t& _currentSinkerBps);

                    /**
                     * 判断参数 CurrentSinkerBps 是否已赋值
                     * @return CurrentSinkerBps 是否已赋值
                     * 
                     */
                    bool CurrentSinkerBpsHasBeenSet() const;

                    /**
                     * 获取<p>默认的增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @return DefaultSinkerBps <p>默认的增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    int64_t GetDefaultSinkerBps() const;

                    /**
                     * 设置<p>默认的增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * @param _defaultSinkerBps <p>默认的增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     * 
                     */
                    void SetDefaultSinkerBps(const int64_t& _defaultSinkerBps);

                    /**
                     * 判断参数 DefaultSinkerBps 是否已赋值
                     * @return DefaultSinkerBps 是否已赋值
                     * 
                     */
                    bool DefaultSinkerBpsHasBeenSet() const;

                private:

                    /**
                     * <p>当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     */
                    int64_t m_currentDumpThread;
                    bool m_currentDumpThreadHasBeenSet;

                    /**
                     * <p>默认的全量导出线程数，该字段仅在出参有意义</p>
                     */
                    int64_t m_defaultDumpThread;
                    bool m_defaultDumpThreadHasBeenSet;

                    /**
                     * <p>当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     */
                    int64_t m_currentDumpRps;
                    bool m_currentDumpRpsHasBeenSet;

                    /**
                     * <p>默认的全量导出Rps，该字段仅在出参有意义</p>
                     */
                    int64_t m_defaultDumpRps;
                    bool m_defaultDumpRpsHasBeenSet;

                    /**
                     * <p>当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     */
                    int64_t m_currentLoadThread;
                    bool m_currentLoadThreadHasBeenSet;

                    /**
                     * <p>默认的全量导入线程数，该字段仅在出参有意义</p>
                     */
                    int64_t m_defaultLoadThread;
                    bool m_defaultLoadThreadHasBeenSet;

                    /**
                     * <p>当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     */
                    int64_t m_currentLoadRps;
                    bool m_currentLoadRpsHasBeenSet;

                    /**
                     * <p>默认的全量导入Rps，该字段仅在出参有意义</p>
                     */
                    int64_t m_defaultLoadRps;
                    bool m_defaultLoadRpsHasBeenSet;

                    /**
                     * <p>当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     */
                    int64_t m_currentSinkerThread;
                    bool m_currentSinkerThreadHasBeenSet;

                    /**
                     * <p>默认的增量导入线程数，该字段仅在出参有意义</p>
                     */
                    int64_t m_defaultSinkerThread;
                    bool m_defaultSinkerThreadHasBeenSet;

                    /**
                     * <p>enum:&quot;no&quot;/&quot;yes&quot;、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义</p>
                     */
                    std::string m_hasUserSetRateLimit;
                    bool m_hasUserSetRateLimitHasBeenSet;

                    /**
                     * <p>默认的全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     */
                    int64_t m_defaultDumpBps;
                    bool m_defaultDumpBpsHasBeenSet;

                    /**
                     * <p>增量导入RPS，目前仅支持mongodb链路</p>
                     */
                    int64_t m_currentSinkerRps;
                    bool m_currentSinkerRpsHasBeenSet;

                    /**
                     * <p>默认的增量导入RPS，目前仅支持mongodb链路</p>
                     */
                    int64_t m_defaultSinkerRps;
                    bool m_defaultSinkerRpsHasBeenSet;

                    /**
                     * <p>当前导入BPS，暂时只有redis在用，单位MB/s</p>
                     */
                    int64_t m_currentLoadBps;
                    bool m_currentLoadBpsHasBeenSet;

                    /**
                     * <p>目标库分片数，暂时只有redis在用</p>
                     */
                    int64_t m_currentDstShardCount;
                    bool m_currentDstShardCountHasBeenSet;

                    /**
                     * <p>全量导出BPS，目前仅支持mongodb链路，单位MB/s</p>
                     */
                    int64_t m_currentDumpBps;
                    bool m_currentDumpBpsHasBeenSet;

                    /**
                     * <p>增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     */
                    int64_t m_currentSinkerBps;
                    bool m_currentSinkerBpsHasBeenSet;

                    /**
                     * <p>默认的增量导入BPS，目前仅支持mongodb链路，单位MB/s</p>
                     */
                    int64_t m_defaultSinkerBps;
                    bool m_defaultSinkerBpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_
