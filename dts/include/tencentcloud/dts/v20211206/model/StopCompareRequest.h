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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_STOPCOMPAREREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_STOPCOMPAREREQUEST_H_

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
                * StopCompare请求参数结构体
                */
                class StopCompareRequest : public AbstractModel
                {
                public:
                    StopCompareRequest();
                    ~StopCompareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务 Id
                     * @return JobId 迁移任务 Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务 Id
                     * @param _jobId 迁移任务 Id
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
                     * 获取对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * @return CompareTaskId 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * @param _compareTaskId 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取是否强制停止。如果填true，同步任务增量阶段会跳过一致性校验产生的binlog，达到快速恢复任务的效果
                     * @return ForceStop 是否强制停止。如果填true，同步任务增量阶段会跳过一致性校验产生的binlog，达到快速恢复任务的效果
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置是否强制停止。如果填true，同步任务增量阶段会跳过一致性校验产生的binlog，达到快速恢复任务的效果
                     * @param _forceStop 是否强制停止。如果填true，同步任务增量阶段会跳过一致性校验产生的binlog，达到快速恢复任务的效果
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * 迁移任务 Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 是否强制停止。如果填true，同步任务增量阶段会跳过一致性校验产生的binlog，达到快速恢复任务的效果
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_STOPCOMPAREREQUEST_H_
