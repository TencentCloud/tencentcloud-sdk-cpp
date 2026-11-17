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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATERATELIMITREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATERATELIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyMigrateRateLimit请求参数结构体
                */
                class ModifyMigrateRateLimitRequest : public AbstractModel
                {
                public:
                    ModifyMigrateRateLimitRequest();
                    ~ModifyMigrateRateLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>迁移任务 Id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     * @return JobId <p>迁移任务 Id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>迁移任务 Id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     * @param _jobId <p>迁移任务 Id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>迁移任务全量导出线程数、有效值为 1-16</p>
                     * @return DumpThread <p>迁移任务全量导出线程数、有效值为 1-16</p>
                     * 
                     */
                    int64_t GetDumpThread() const;

                    /**
                     * 设置<p>迁移任务全量导出线程数、有效值为 1-16</p>
                     * @param _dumpThread <p>迁移任务全量导出线程数、有效值为 1-16</p>
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
                     * 获取<p>迁移全量导出的 Rps 限制、需要大于 0</p>
                     * @return DumpRps <p>迁移全量导出的 Rps 限制、需要大于 0</p>
                     * 
                     */
                    int64_t GetDumpRps() const;

                    /**
                     * 设置<p>迁移全量导出的 Rps 限制、需要大于 0</p>
                     * @param _dumpRps <p>迁移全量导出的 Rps 限制、需要大于 0</p>
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
                     * 获取<p>全量导出Bps，单位MB/s，MongoDB专用，上限80</p>
                     * @return DumpBps <p>全量导出Bps，单位MB/s，MongoDB专用，上限80</p>
                     * 
                     */
                    int64_t GetDumpBps() const;

                    /**
                     * 设置<p>全量导出Bps，单位MB/s，MongoDB专用，上限80</p>
                     * @param _dumpBps <p>全量导出Bps，单位MB/s，MongoDB专用，上限80</p>
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
                     * 获取<p>迁移任务全量导入线程数、有效值为 1-16</p>
                     * @return LoadThread <p>迁移任务全量导入线程数、有效值为 1-16</p>
                     * 
                     */
                    int64_t GetLoadThread() const;

                    /**
                     * 设置<p>迁移任务全量导入线程数、有效值为 1-16</p>
                     * @param _loadThread <p>迁移任务全量导入线程数、有效值为 1-16</p>
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
                     * 获取<p>迁移任务增量导入线程数、有效值为 1-128</p>
                     * @return SinkerThread <p>迁移任务增量导入线程数、有效值为 1-128</p>
                     * 
                     */
                    int64_t GetSinkerThread() const;

                    /**
                     * 设置<p>迁移任务增量导入线程数、有效值为 1-128</p>
                     * @param _sinkerThread <p>迁移任务增量导入线程数、有效值为 1-128</p>
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
                     * 获取<p>全量导入Rps限制</p>
                     * @return LoadRps <p>全量导入Rps限制</p>
                     * 
                     */
                    int64_t GetLoadRps() const;

                    /**
                     * 设置<p>全量导入Rps限制</p>
                     * @param _loadRps <p>全量导入Rps限制</p>
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
                     * 获取<p>导入BPS，单位MB/s。目前仅对redis生效，表示目标库单分片流量限制大小</p>
                     * @return LoadBps <p>导入BPS，单位MB/s。目前仅对redis生效，表示目标库单分片流量限制大小</p>
                     * 
                     */
                    int64_t GetLoadBps() const;

                    /**
                     * 设置<p>导入BPS，单位MB/s。目前仅对redis生效，表示目标库单分片流量限制大小</p>
                     * @param _loadBps <p>导入BPS，单位MB/s。目前仅对redis生效，表示目标库单分片流量限制大小</p>
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
                     * 获取<p>目标库分片数，目前仅对redis生效</p>
                     * @return DstShardCount <p>目标库分片数，目前仅对redis生效</p>
                     * 
                     */
                    int64_t GetDstShardCount() const;

                    /**
                     * 设置<p>目标库分片数，目前仅对redis生效</p>
                     * @param _dstShardCount <p>目标库分片数，目前仅对redis生效</p>
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
                     * 获取<p>增量导入Rps，MongoDB专用，上限30000</p>
                     * @return SinkerRps <p>增量导入Rps，MongoDB专用，上限30000</p>
                     * 
                     */
                    int64_t GetSinkerRps() const;

                    /**
                     * 设置<p>增量导入Rps，MongoDB专用，上限30000</p>
                     * @param _sinkerRps <p>增量导入Rps，MongoDB专用，上限30000</p>
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
                     * 获取<p>增量导入Bps，单位MB/s，MongoDB专用，上限120</p>
                     * @return SinkerBps <p>增量导入Bps，单位MB/s，MongoDB专用，上限120</p>
                     * 
                     */
                    int64_t GetSinkerBps() const;

                    /**
                     * 设置<p>增量导入Bps，单位MB/s，MongoDB专用，上限120</p>
                     * @param _sinkerBps <p>增量导入Bps，单位MB/s，MongoDB专用，上限120</p>
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
                     * <p>迁移任务 Id，可通过<a href="https://cloud.tencent.com/document/product/571/82084">DescribeMigrationJobs</a>接口获取。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>迁移任务全量导出线程数、有效值为 1-16</p>
                     */
                    int64_t m_dumpThread;
                    bool m_dumpThreadHasBeenSet;

                    /**
                     * <p>迁移全量导出的 Rps 限制、需要大于 0</p>
                     */
                    int64_t m_dumpRps;
                    bool m_dumpRpsHasBeenSet;

                    /**
                     * <p>全量导出Bps，单位MB/s，MongoDB专用，上限80</p>
                     */
                    int64_t m_dumpBps;
                    bool m_dumpBpsHasBeenSet;

                    /**
                     * <p>迁移任务全量导入线程数、有效值为 1-16</p>
                     */
                    int64_t m_loadThread;
                    bool m_loadThreadHasBeenSet;

                    /**
                     * <p>迁移任务增量导入线程数、有效值为 1-128</p>
                     */
                    int64_t m_sinkerThread;
                    bool m_sinkerThreadHasBeenSet;

                    /**
                     * <p>全量导入Rps限制</p>
                     */
                    int64_t m_loadRps;
                    bool m_loadRpsHasBeenSet;

                    /**
                     * <p>导入BPS，单位MB/s。目前仅对redis生效，表示目标库单分片流量限制大小</p>
                     */
                    int64_t m_loadBps;
                    bool m_loadBpsHasBeenSet;

                    /**
                     * <p>目标库分片数，目前仅对redis生效</p>
                     */
                    int64_t m_dstShardCount;
                    bool m_dstShardCountHasBeenSet;

                    /**
                     * <p>增量导入Rps，MongoDB专用，上限30000</p>
                     */
                    int64_t m_sinkerRps;
                    bool m_sinkerRpsHasBeenSet;

                    /**
                     * <p>增量导入Bps，单位MB/s，MongoDB专用，上限120</p>
                     */
                    int64_t m_sinkerBps;
                    bool m_sinkerBpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATERATELIMITREQUEST_H_
