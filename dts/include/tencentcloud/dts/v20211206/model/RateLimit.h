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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMIT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMIT_H_

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
                * 数据迁移限速配置对象
                */
                class RateLimit : public AbstractModel
                {
                public:
                    RateLimit();
                    ~RateLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>全量导出线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @return DumpThread <p>全量导出线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    int64_t GetDumpThread() const;

                    /**
                     * 设置<p>全量导出线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @param _dumpThread <p>全量导出线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    void SetDumpThread(const int64_t& _dumpThread);

                    /**
                     * 判断参数 DumpThread 是否已赋值
                     * @return DumpThread 是否已赋值
                     * 
                     */
                    bool DumpThreadHasBeenSet() const;

                    /**
                     * 获取<p>全量导出Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000。支持mysql系相关链路、mongodb链路。</p>
                     * @return DumpRps <p>全量导出Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000。支持mysql系相关链路、mongodb链路。</p>
                     * 
                     */
                    int64_t GetDumpRps() const;

                    /**
                     * 设置<p>全量导出Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000。支持mysql系相关链路、mongodb链路。</p>
                     * @param _dumpRps <p>全量导出Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000。支持mysql系相关链路、mongodb链路。</p>
                     * 
                     */
                    void SetDumpRps(const int64_t& _dumpRps);

                    /**
                     * 判断参数 DumpRps 是否已赋值
                     * @return DumpRps 是否已赋值
                     * 
                     */
                    bool DumpRpsHasBeenSet() const;

                    /**
                     * 获取<p>全量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @return LoadThread <p>全量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    int64_t GetLoadThread() const;

                    /**
                     * 设置<p>全量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * @param _loadThread <p>全量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     * 
                     */
                    void SetLoadThread(const int64_t& _loadThread);

                    /**
                     * 判断参数 LoadThread 是否已赋值
                     * @return LoadThread 是否已赋值
                     * 
                     */
                    bool LoadThreadHasBeenSet() const;

                    /**
                     * 获取<p>全量导入Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * @return LoadRps <p>全量导入Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * 
                     */
                    int64_t GetLoadRps() const;

                    /**
                     * 设置<p>全量导入Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * @param _loadRps <p>全量导入Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     * 
                     */
                    void SetLoadRps(const int64_t& _loadRps);

                    /**
                     * 判断参数 LoadRps 是否已赋值
                     * @return LoadRps 是否已赋值
                     * 
                     */
                    bool LoadRpsHasBeenSet() const;

                    /**
                     * 获取<p>增量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * @return SinkerThread <p>增量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * 
                     */
                    int64_t GetSinkerThread() const;

                    /**
                     * 设置<p>增量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * @param _sinkerThread <p>增量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     * 
                     */
                    void SetSinkerThread(const int64_t& _sinkerThread);

                    /**
                     * 判断参数 SinkerThread 是否已赋值
                     * @return SinkerThread 是否已赋值
                     * 
                     */
                    bool SinkerThreadHasBeenSet() const;

                    /**
                     * 获取<p>全量导入Bps（暂时只有redis产品生效），单位MB/s</p>
                     * @return LoadBps <p>全量导入Bps（暂时只有redis产品生效），单位MB/s</p>
                     * 
                     */
                    int64_t GetLoadBps() const;

                    /**
                     * 设置<p>全量导入Bps（暂时只有redis产品生效），单位MB/s</p>
                     * @param _loadBps <p>全量导入Bps（暂时只有redis产品生效），单位MB/s</p>
                     * 
                     */
                    void SetLoadBps(const int64_t& _loadBps);

                    /**
                     * 判断参数 LoadBps 是否已赋值
                     * @return LoadBps 是否已赋值
                     * 
                     */
                    bool LoadBpsHasBeenSet() const;

                    /**
                     * 获取<p>目标库分片数，目前暂时只有redis用</p>
                     * @return DstShardCount <p>目标库分片数，目前暂时只有redis用</p>
                     * 
                     */
                    int64_t GetDstShardCount() const;

                    /**
                     * 设置<p>目标库分片数，目前暂时只有redis用</p>
                     * @param _dstShardCount <p>目标库分片数，目前暂时只有redis用</p>
                     * 
                     */
                    void SetDstShardCount(const int64_t& _dstShardCount);

                    /**
                     * 判断参数 DstShardCount 是否已赋值
                     * @return DstShardCount 是否已赋值
                     * 
                     */
                    bool DstShardCountHasBeenSet() const;

                    /**
                     * 获取<p>全量导出Bps（pg链路及MongoDB链路使用。MongoDB上限80），单位MB/s</p>
                     * @return DumpBps <p>全量导出Bps（pg链路及MongoDB链路使用。MongoDB上限80），单位MB/s</p>
                     * 
                     */
                    int64_t GetDumpBps() const;

                    /**
                     * 设置<p>全量导出Bps（pg链路及MongoDB链路使用。MongoDB上限80），单位MB/s</p>
                     * @param _dumpBps <p>全量导出Bps（pg链路及MongoDB链路使用。MongoDB上限80），单位MB/s</p>
                     * 
                     */
                    void SetDumpBps(const int64_t& _dumpBps);

                    /**
                     * 判断参数 DumpBps 是否已赋值
                     * @return DumpBps 是否已赋值
                     * 
                     */
                    bool DumpBpsHasBeenSet() const;

                    /**
                     * 获取<p>增量导入RPS限制，MongoDB专用。上限30000</p>
                     * @return SinkerRps <p>增量导入RPS限制，MongoDB专用。上限30000</p>
                     * 
                     */
                    int64_t GetSinkerRps() const;

                    /**
                     * 设置<p>增量导入RPS限制，MongoDB专用。上限30000</p>
                     * @param _sinkerRps <p>增量导入RPS限制，MongoDB专用。上限30000</p>
                     * 
                     */
                    void SetSinkerRps(const int64_t& _sinkerRps);

                    /**
                     * 判断参数 SinkerRps 是否已赋值
                     * @return SinkerRps 是否已赋值
                     * 
                     */
                    bool SinkerRpsHasBeenSet() const;

                    /**
                     * 获取<p>增量导入BPS限制，单位MB/s，MongoDB专用。上限120</p>
                     * @return SinkerBps <p>增量导入BPS限制，单位MB/s，MongoDB专用。上限120</p>
                     * 
                     */
                    int64_t GetSinkerBps() const;

                    /**
                     * 设置<p>增量导入BPS限制，单位MB/s，MongoDB专用。上限120</p>
                     * @param _sinkerBps <p>增量导入BPS限制，单位MB/s，MongoDB专用。上限120</p>
                     * 
                     */
                    void SetSinkerBps(const int64_t& _sinkerBps);

                    /**
                     * 判断参数 SinkerBps 是否已赋值
                     * @return SinkerBps 是否已赋值
                     * 
                     */
                    bool SinkerBpsHasBeenSet() const;

                private:

                    /**
                     * <p>全量导出线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     */
                    int64_t m_dumpThread;
                    bool m_dumpThreadHasBeenSet;

                    /**
                     * <p>全量导出Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000。支持mysql系相关链路、mongodb链路。</p>
                     */
                    int64_t m_dumpRps;
                    bool m_dumpRpsHasBeenSet;

                    /**
                     * <p>全量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为16</p>
                     */
                    int64_t m_loadThread;
                    bool m_loadThreadHasBeenSet;

                    /**
                     * <p>全量导入Rps，如果不设置或设置为0则表示保持当前值，最大值为50000000</p>
                     */
                    int64_t m_loadRps;
                    bool m_loadRpsHasBeenSet;

                    /**
                     * <p>增量导入线程数，如果不设置或设置为0则表示保持当前值，最大值为128</p>
                     */
                    int64_t m_sinkerThread;
                    bool m_sinkerThreadHasBeenSet;

                    /**
                     * <p>全量导入Bps（暂时只有redis产品生效），单位MB/s</p>
                     */
                    int64_t m_loadBps;
                    bool m_loadBpsHasBeenSet;

                    /**
                     * <p>目标库分片数，目前暂时只有redis用</p>
                     */
                    int64_t m_dstShardCount;
                    bool m_dstShardCountHasBeenSet;

                    /**
                     * <p>全量导出Bps（pg链路及MongoDB链路使用。MongoDB上限80），单位MB/s</p>
                     */
                    int64_t m_dumpBps;
                    bool m_dumpBpsHasBeenSet;

                    /**
                     * <p>增量导入RPS限制，MongoDB专用。上限30000</p>
                     */
                    int64_t m_sinkerRps;
                    bool m_sinkerRpsHasBeenSet;

                    /**
                     * <p>增量导入BPS限制，单位MB/s，MongoDB专用。上限120</p>
                     */
                    int64_t m_sinkerBps;
                    bool m_sinkerBpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_RATELIMIT_H_
