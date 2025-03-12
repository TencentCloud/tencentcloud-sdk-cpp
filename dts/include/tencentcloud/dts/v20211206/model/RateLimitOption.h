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
                     * 获取当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     * @return CurrentDumpThread 当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     * 
                     */
                    int64_t GetCurrentDumpThread() const;

                    /**
                     * 设置当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     * @param _currentDumpThread 当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
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
                     * 获取默认的全量导出线程数，该字段仅在出参有意义
                     * @return DefaultDumpThread 默认的全量导出线程数，该字段仅在出参有意义
                     * 
                     */
                    int64_t GetDefaultDumpThread() const;

                    /**
                     * 设置默认的全量导出线程数，该字段仅在出参有意义
                     * @param _defaultDumpThread 默认的全量导出线程数，该字段仅在出参有意义
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
                     * 获取当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000
                     * @return CurrentDumpRps 当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000
                     * 
                     */
                    int64_t GetCurrentDumpRps() const;

                    /**
                     * 设置当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000
                     * @param _currentDumpRps 当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000
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
                     * 获取默认的全量导出Rps，该字段仅在出参有意义
                     * @return DefaultDumpRps 默认的全量导出Rps，该字段仅在出参有意义
                     * 
                     */
                    int64_t GetDefaultDumpRps() const;

                    /**
                     * 设置默认的全量导出Rps，该字段仅在出参有意义
                     * @param _defaultDumpRps 默认的全量导出Rps，该字段仅在出参有意义
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
                     * 获取当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     * @return CurrentLoadThread 当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     * 
                     */
                    int64_t GetCurrentLoadThread() const;

                    /**
                     * 设置当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     * @param _currentLoadThread 当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
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
                     * 获取默认的全量导入线程数，该字段仅在出参有意义
                     * @return DefaultLoadThread 默认的全量导入线程数，该字段仅在出参有意义
                     * 
                     */
                    int64_t GetDefaultLoadThread() const;

                    /**
                     * 设置默认的全量导入线程数，该字段仅在出参有意义
                     * @param _defaultLoadThread 默认的全量导入线程数，该字段仅在出参有意义
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
                     * 获取当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000	
                     * @return CurrentLoadRps 当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000	
                     * 
                     */
                    int64_t GetCurrentLoadRps() const;

                    /**
                     * 设置当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000	
                     * @param _currentLoadRps 当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000	
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
                     * 获取默认的全量导入Rps，该字段仅在出参有意义	
                     * @return DefaultLoadRps 默认的全量导入Rps，该字段仅在出参有意义	
                     * 
                     */
                    int64_t GetDefaultLoadRps() const;

                    /**
                     * 设置默认的全量导入Rps，该字段仅在出参有意义	
                     * @param _defaultLoadRps 默认的全量导入Rps，该字段仅在出参有意义	
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
                     * 获取当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128
                     * @return CurrentSinkerThread 当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128
                     * 
                     */
                    int64_t GetCurrentSinkerThread() const;

                    /**
                     * 设置当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128
                     * @param _currentSinkerThread 当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128
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
                     * 获取默认的增量导入线程数，该字段仅在出参有意义
                     * @return DefaultSinkerThread 默认的增量导入线程数，该字段仅在出参有意义
                     * 
                     */
                    int64_t GetDefaultSinkerThread() const;

                    /**
                     * 设置默认的增量导入线程数，该字段仅在出参有意义
                     * @param _defaultSinkerThread 默认的增量导入线程数，该字段仅在出参有意义
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
                     * 获取enum:"no"/"yes"、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义
                     * @return HasUserSetRateLimit enum:"no"/"yes"、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义
                     * 
                     */
                    std::string GetHasUserSetRateLimit() const;

                    /**
                     * 设置enum:"no"/"yes"、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义
                     * @param _hasUserSetRateLimit enum:"no"/"yes"、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义
                     * 
                     */
                    void SetHasUserSetRateLimit(const std::string& _hasUserSetRateLimit);

                    /**
                     * 判断参数 HasUserSetRateLimit 是否已赋值
                     * @return HasUserSetRateLimit 是否已赋值
                     * 
                     */
                    bool HasUserSetRateLimitHasBeenSet() const;

                private:

                    /**
                     * 当前生效的全量导出线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     */
                    int64_t m_currentDumpThread;
                    bool m_currentDumpThreadHasBeenSet;

                    /**
                     * 默认的全量导出线程数，该字段仅在出参有意义
                     */
                    int64_t m_defaultDumpThread;
                    bool m_defaultDumpThreadHasBeenSet;

                    /**
                     * 当前生效的全量导出Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000
                     */
                    int64_t m_currentDumpRps;
                    bool m_currentDumpRpsHasBeenSet;

                    /**
                     * 默认的全量导出Rps，该字段仅在出参有意义
                     */
                    int64_t m_defaultDumpRps;
                    bool m_defaultDumpRpsHasBeenSet;

                    /**
                     * 当前生效的全量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为16
                     */
                    int64_t m_currentLoadThread;
                    bool m_currentLoadThreadHasBeenSet;

                    /**
                     * 默认的全量导入线程数，该字段仅在出参有意义
                     */
                    int64_t m_defaultLoadThread;
                    bool m_defaultLoadThreadHasBeenSet;

                    /**
                     * 当前生效的全量导入Rps，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为50000000	
                     */
                    int64_t m_currentLoadRps;
                    bool m_currentLoadRpsHasBeenSet;

                    /**
                     * 默认的全量导入Rps，该字段仅在出参有意义	
                     */
                    int64_t m_defaultLoadRps;
                    bool m_defaultLoadRpsHasBeenSet;

                    /**
                     * 当前生效的增量导入线程数，配置任务时可调整该字段值，注意：如果不设置或设置为0则表示保持当前值，最大值为128
                     */
                    int64_t m_currentSinkerThread;
                    bool m_currentSinkerThreadHasBeenSet;

                    /**
                     * 默认的增量导入线程数，该字段仅在出参有意义
                     */
                    int64_t m_defaultSinkerThread;
                    bool m_defaultSinkerThreadHasBeenSet;

                    /**
                     * enum:"no"/"yes"、no表示用户未设置过限速、yes表示设置过限速，该字段仅在出参有意义
                     */
                    std::string m_hasUserSetRateLimit;
                    bool m_hasUserSetRateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMITOPTION_H_
