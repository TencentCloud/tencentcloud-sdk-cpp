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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DASHMANIFESTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DASHMANIFESTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Type为DASH时manifest配置使用的字段。
                */
                class DashManifestInfo : public AbstractModel
                {
                public:
                    DashManifestInfo();
                    ~DashManifestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每个清单的总持续时间（以秒为单位）。[30, 3600]，类型：整数，默认值60。
                     * @return Windows 每个清单的总持续时间（以秒为单位）。[30, 3600]，类型：整数，默认值60。
                     * 
                     */
                    int64_t GetWindows() const;

                    /**
                     * 设置每个清单的总持续时间（以秒为单位）。[30, 3600]，类型：整数，默认值60。
                     * @param _windows 每个清单的总持续时间（以秒为单位）。[30, 3600]，类型：整数，默认值60。
                     * 
                     */
                    void SetWindows(const int64_t& _windows);

                    /**
                     * 判断参数 Windows 是否已赋值
                     * @return Windows 是否已赋值
                     * 
                     */
                    bool WindowsHasBeenSet() const;

                    /**
                     * 获取播放器在缓冲区中保持的最小缓存时间（以秒为单位）。[2, 60]，类型：整数，默认值30。
                     * @return MinBufferTime 播放器在缓冲区中保持的最小缓存时间（以秒为单位）。[2, 60]，类型：整数，默认值30。
                     * 
                     */
                    int64_t GetMinBufferTime() const;

                    /**
                     * 设置播放器在缓冲区中保持的最小缓存时间（以秒为单位）。[2, 60]，类型：整数，默认值30。
                     * @param _minBufferTime 播放器在缓冲区中保持的最小缓存时间（以秒为单位）。[2, 60]，类型：整数，默认值30。
                     * 
                     */
                    void SetMinBufferTime(const int64_t& _minBufferTime);

                    /**
                     * 判断参数 MinBufferTime 是否已赋值
                     * @return MinBufferTime 是否已赋值
                     * 
                     */
                    bool MinBufferTimeHasBeenSet() const;

                    /**
                     * 获取播放器在请求更新清单之前应等待的最短时间（以秒为单位）。[2, 60]，类型：整数，默认值2。
                     * @return MinUpdatePeriod 播放器在请求更新清单之前应等待的最短时间（以秒为单位）。[2, 60]，类型：整数，默认值2。
                     * 
                     */
                    int64_t GetMinUpdatePeriod() const;

                    /**
                     * 设置播放器在请求更新清单之前应等待的最短时间（以秒为单位）。[2, 60]，类型：整数，默认值2。
                     * @param _minUpdatePeriod 播放器在请求更新清单之前应等待的最短时间（以秒为单位）。[2, 60]，类型：整数，默认值2。
                     * 
                     */
                    void SetMinUpdatePeriod(const int64_t& _minUpdatePeriod);

                    /**
                     * 判断参数 MinUpdatePeriod 是否已赋值
                     * @return MinUpdatePeriod 是否已赋值
                     * 
                     */
                    bool MinUpdatePeriodHasBeenSet() const;

                    /**
                     * 获取播放器启播时距离最新直播时间点的时间，是一个回退量（以秒为单位）。[2, 60]，类型：整数，默认值10。
                     * @return SuggestedPresentationDelay 播放器启播时距离最新直播时间点的时间，是一个回退量（以秒为单位）。[2, 60]，类型：整数，默认值10。
                     * 
                     */
                    int64_t GetSuggestedPresentationDelay() const;

                    /**
                     * 设置播放器启播时距离最新直播时间点的时间，是一个回退量（以秒为单位）。[2, 60]，类型：整数，默认值10。
                     * @param _suggestedPresentationDelay 播放器启播时距离最新直播时间点的时间，是一个回退量（以秒为单位）。[2, 60]，类型：整数，默认值10。
                     * 
                     */
                    void SetSuggestedPresentationDelay(const int64_t& _suggestedPresentationDelay);

                    /**
                     * 判断参数 SuggestedPresentationDelay 是否已赋值
                     * @return SuggestedPresentationDelay 是否已赋值
                     * 
                     */
                    bool SuggestedPresentationDelayHasBeenSet() const;

                private:

                    /**
                     * 每个清单的总持续时间（以秒为单位）。[30, 3600]，类型：整数，默认值60。
                     */
                    int64_t m_windows;
                    bool m_windowsHasBeenSet;

                    /**
                     * 播放器在缓冲区中保持的最小缓存时间（以秒为单位）。[2, 60]，类型：整数，默认值30。
                     */
                    int64_t m_minBufferTime;
                    bool m_minBufferTimeHasBeenSet;

                    /**
                     * 播放器在请求更新清单之前应等待的最短时间（以秒为单位）。[2, 60]，类型：整数，默认值2。
                     */
                    int64_t m_minUpdatePeriod;
                    bool m_minUpdatePeriodHasBeenSet;

                    /**
                     * 播放器启播时距离最新直播时间点的时间，是一个回退量（以秒为单位）。[2, 60]，类型：整数，默认值10。
                     */
                    int64_t m_suggestedPresentationDelay;
                    bool m_suggestedPresentationDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DASHMANIFESTINFO_H_
