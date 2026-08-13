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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCRATELIMITREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCRATELIMITREQUEST_H_

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
                * ModifySyncRateLimit请求参数结构体
                */
                class ModifySyncRateLimitRequest : public AbstractModel
                {
                public:
                    ModifySyncRateLimitRequest();
                    ~ModifySyncRateLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>同步任务ID，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @return JobId <p>同步任务ID，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>同步任务ID，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     * @param _jobId <p>同步任务ID，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
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
                     * 获取<p>同步任务全量导出线程数、有效值为 1-16</p>
                     * @return DumpThread <p>同步任务全量导出线程数、有效值为 1-16</p>
                     * 
                     */
                    int64_t GetDumpThread() const;

                    /**
                     * 设置<p>同步任务全量导出线程数、有效值为 1-16</p>
                     * @param _dumpThread <p>同步任务全量导出线程数、有效值为 1-16</p>
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
                     * 获取<p>同步任务全量导出的 Rps 限制、需要大于 0;对于mongodb最大值为20000，其他数据库最大值为50000000</p>
                     * @return DumpRps <p>同步任务全量导出的 Rps 限制、需要大于 0;对于mongodb最大值为20000，其他数据库最大值为50000000</p>
                     * 
                     */
                    int64_t GetDumpRps() const;

                    /**
                     * 设置<p>同步任务全量导出的 Rps 限制、需要大于 0;对于mongodb最大值为20000，其他数据库最大值为50000000</p>
                     * @param _dumpRps <p>同步任务全量导出的 Rps 限制、需要大于 0;对于mongodb最大值为20000，其他数据库最大值为50000000</p>
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
                     * 获取<p>同步任务全量导入线程数、有效值为 1-16</p>
                     * @return LoadThread <p>同步任务全量导入线程数、有效值为 1-16</p>
                     * 
                     */
                    int64_t GetLoadThread() const;

                    /**
                     * 设置<p>同步任务全量导入线程数、有效值为 1-16</p>
                     * @param _loadThread <p>同步任务全量导入线程数、有效值为 1-16</p>
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
                     * 获取<p>同步任务增量导入线程数、有效值为 1-128</p>
                     * @return SinkerThread <p>同步任务增量导入线程数、有效值为 1-128</p>
                     * 
                     */
                    int64_t GetSinkerThread() const;

                    /**
                     * 设置<p>同步任务增量导入线程数、有效值为 1-128</p>
                     * @param _sinkerThread <p>同步任务增量导入线程数、有效值为 1-128</p>
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
                     * 获取<p>同步任务全量导入的Rps</p>
                     * @return LoadRps <p>同步任务全量导入的Rps</p>
                     * 
                     */
                    int64_t GetLoadRps() const;

                    /**
                     * 设置<p>同步任务全量导入的Rps</p>
                     * @param _loadRps <p>同步任务全量导入的Rps</p>
                     * 
                     */
                    void SetLoadRps(const int64_t& _loadRps);

                    /**
                     * 判断参数 LoadRps 是否已赋值
                     * @return LoadRps 是否已赋值
                     * 
                     */
                    bool LoadRpsHasBeenSet() const;

                private:

                    /**
                     * <p>同步任务ID，可通过<a href="https://cloud.tencent.com/document/product/571/82103">DescribeSyncJobs</a>接口获取。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>同步任务全量导出线程数、有效值为 1-16</p>
                     */
                    int64_t m_dumpThread;
                    bool m_dumpThreadHasBeenSet;

                    /**
                     * <p>同步任务全量导出的 Rps 限制、需要大于 0;对于mongodb最大值为20000，其他数据库最大值为50000000</p>
                     */
                    int64_t m_dumpRps;
                    bool m_dumpRpsHasBeenSet;

                    /**
                     * <p>同步任务全量导入线程数、有效值为 1-16</p>
                     */
                    int64_t m_loadThread;
                    bool m_loadThreadHasBeenSet;

                    /**
                     * <p>同步任务增量导入线程数、有效值为 1-128</p>
                     */
                    int64_t m_sinkerThread;
                    bool m_sinkerThreadHasBeenSet;

                    /**
                     * <p>同步任务全量导入的Rps</p>
                     */
                    int64_t m_loadRps;
                    bool m_loadRpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCRATELIMITREQUEST_H_
