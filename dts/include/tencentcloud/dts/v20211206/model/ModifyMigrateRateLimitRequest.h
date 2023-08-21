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
                     * 获取迁移任务ID
                     * @return JobId 迁移任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务ID
                     * @param _jobId 迁移任务ID
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
                     * 获取迁移任务全量导出线程数、有效值为 1-16
                     * @return DumpThread 迁移任务全量导出线程数、有效值为 1-16
                     * 
                     */
                    int64_t GetDumpThread() const;

                    /**
                     * 设置迁移任务全量导出线程数、有效值为 1-16
                     * @param _dumpThread 迁移任务全量导出线程数、有效值为 1-16
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
                     * 获取迁移全量导出的 Rps 限制、需要大于 0
                     * @return DumpRps 迁移全量导出的 Rps 限制、需要大于 0
                     * 
                     */
                    int64_t GetDumpRps() const;

                    /**
                     * 设置迁移全量导出的 Rps 限制、需要大于 0
                     * @param _dumpRps 迁移全量导出的 Rps 限制、需要大于 0
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
                     * 获取迁移任务全量导入线程数、有效值为 1-16
                     * @return LoadThread 迁移任务全量导入线程数、有效值为 1-16
                     * 
                     */
                    int64_t GetLoadThread() const;

                    /**
                     * 设置迁移任务全量导入线程数、有效值为 1-16
                     * @param _loadThread 迁移任务全量导入线程数、有效值为 1-16
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
                     * 获取迁移任务增量导入线程数、有效值为 1-128
                     * @return SinkerThread 迁移任务增量导入线程数、有效值为 1-128
                     * 
                     */
                    int64_t GetSinkerThread() const;

                    /**
                     * 设置迁移任务增量导入线程数、有效值为 1-128
                     * @param _sinkerThread 迁移任务增量导入线程数、有效值为 1-128
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
                     * 获取全量导入Rps限制
                     * @return LoadRps 全量导入Rps限制
                     * 
                     */
                    int64_t GetLoadRps() const;

                    /**
                     * 设置全量导入Rps限制
                     * @param _loadRps 全量导入Rps限制
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
                     * 迁移任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 迁移任务全量导出线程数、有效值为 1-16
                     */
                    int64_t m_dumpThread;
                    bool m_dumpThreadHasBeenSet;

                    /**
                     * 迁移全量导出的 Rps 限制、需要大于 0
                     */
                    int64_t m_dumpRps;
                    bool m_dumpRpsHasBeenSet;

                    /**
                     * 迁移任务全量导入线程数、有效值为 1-16
                     */
                    int64_t m_loadThread;
                    bool m_loadThreadHasBeenSet;

                    /**
                     * 迁移任务增量导入线程数、有效值为 1-128
                     */
                    int64_t m_sinkerThread;
                    bool m_sinkerThreadHasBeenSet;

                    /**
                     * 全量导入Rps限制
                     */
                    int64_t m_loadRps;
                    bool m_loadRpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYMIGRATERATELIMITREQUEST_H_
