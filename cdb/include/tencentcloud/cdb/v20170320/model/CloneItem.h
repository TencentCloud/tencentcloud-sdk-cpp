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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLONEITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLONEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 克隆任务记录。
                */
                class CloneItem : public AbstractModel
                {
                public:
                    CloneItem();
                    ~CloneItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取克隆任务的源实例Id。
                     * @return SrcInstanceId 克隆任务的源实例Id。
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置克隆任务的源实例Id。
                     * @param _srcInstanceId 克隆任务的源实例Id。
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取克隆任务的新产生实例Id。
                     * @return DstInstanceId 克隆任务的新产生实例Id。
                     * 
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置克隆任务的新产生实例Id。
                     * @param _dstInstanceId 克隆任务的新产生实例Id。
                     * 
                     */
                    void SetDstInstanceId(const std::string& _dstInstanceId);

                    /**
                     * 判断参数 DstInstanceId 是否已赋值
                     * @return DstInstanceId 是否已赋值
                     * 
                     */
                    bool DstInstanceIdHasBeenSet() const;

                    /**
                     * 获取克隆任务对应的任务列表Id。
                     * @return CloneJobId 克隆任务对应的任务列表Id。
                     * 
                     */
                    int64_t GetCloneJobId() const;

                    /**
                     * 设置克隆任务对应的任务列表Id。
                     * @param _cloneJobId 克隆任务对应的任务列表Id。
                     * 
                     */
                    void SetCloneJobId(const int64_t& _cloneJobId);

                    /**
                     * 判断参数 CloneJobId 是否已赋值
                     * @return CloneJobId 是否已赋值
                     * 
                     */
                    bool CloneJobIdHasBeenSet() const;

                    /**
                     * 获取克隆实例使用的策略， 包括以下类型：  timepoint:指定时间点回档，  backupset: 指定备份文件回档。
                     * @return RollbackStrategy 克隆实例使用的策略， 包括以下类型：  timepoint:指定时间点回档，  backupset: 指定备份文件回档。
                     * 
                     */
                    std::string GetRollbackStrategy() const;

                    /**
                     * 设置克隆实例使用的策略， 包括以下类型：  timepoint:指定时间点回档，  backupset: 指定备份文件回档。
                     * @param _rollbackStrategy 克隆实例使用的策略， 包括以下类型：  timepoint:指定时间点回档，  backupset: 指定备份文件回档。
                     * 
                     */
                    void SetRollbackStrategy(const std::string& _rollbackStrategy);

                    /**
                     * 判断参数 RollbackStrategy 是否已赋值
                     * @return RollbackStrategy 是否已赋值
                     * 
                     */
                    bool RollbackStrategyHasBeenSet() const;

                    /**
                     * 获取克隆实例回档的时间点。
                     * @return RollbackTargetTime 克隆实例回档的时间点。
                     * 
                     */
                    std::string GetRollbackTargetTime() const;

                    /**
                     * 设置克隆实例回档的时间点。
                     * @param _rollbackTargetTime 克隆实例回档的时间点。
                     * 
                     */
                    void SetRollbackTargetTime(const std::string& _rollbackTargetTime);

                    /**
                     * 判断参数 RollbackTargetTime 是否已赋值
                     * @return RollbackTargetTime 是否已赋值
                     * 
                     */
                    bool RollbackTargetTimeHasBeenSet() const;

                    /**
                     * 获取任务开始时间。
                     * @return StartTime 任务开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间。
                     * @param _startTime 任务开始时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间。
                     * @return EndTime 任务结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间。
                     * @param _endTime 任务结束时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务状态，包括以下状态：initial,running,wait_complete,success,failed
                     * @return TaskStatus 任务状态，包括以下状态：initial,running,wait_complete,success,failed
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态，包括以下状态：initial,running,wait_complete,success,failed
                     * @param _taskStatus 任务状态，包括以下状态：initial,running,wait_complete,success,failed
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取克隆实例所在地域Id
                     * @return NewRegionId 克隆实例所在地域Id
                     * 
                     */
                    int64_t GetNewRegionId() const;

                    /**
                     * 设置克隆实例所在地域Id
                     * @param _newRegionId 克隆实例所在地域Id
                     * 
                     */
                    void SetNewRegionId(const int64_t& _newRegionId);

                    /**
                     * 判断参数 NewRegionId 是否已赋值
                     * @return NewRegionId 是否已赋值
                     * 
                     */
                    bool NewRegionIdHasBeenSet() const;

                    /**
                     * 获取源实例所在地域Id
                     * @return SrcRegionId 源实例所在地域Id
                     * 
                     */
                    int64_t GetSrcRegionId() const;

                    /**
                     * 设置源实例所在地域Id
                     * @param _srcRegionId 源实例所在地域Id
                     * 
                     */
                    void SetSrcRegionId(const int64_t& _srcRegionId);

                    /**
                     * 判断参数 SrcRegionId 是否已赋值
                     * @return SrcRegionId 是否已赋值
                     * 
                     */
                    bool SrcRegionIdHasBeenSet() const;

                private:

                    /**
                     * 克隆任务的源实例Id。
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 克隆任务的新产生实例Id。
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * 克隆任务对应的任务列表Id。
                     */
                    int64_t m_cloneJobId;
                    bool m_cloneJobIdHasBeenSet;

                    /**
                     * 克隆实例使用的策略， 包括以下类型：  timepoint:指定时间点回档，  backupset: 指定备份文件回档。
                     */
                    std::string m_rollbackStrategy;
                    bool m_rollbackStrategyHasBeenSet;

                    /**
                     * 克隆实例回档的时间点。
                     */
                    std::string m_rollbackTargetTime;
                    bool m_rollbackTargetTimeHasBeenSet;

                    /**
                     * 任务开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务状态，包括以下状态：initial,running,wait_complete,success,failed
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 克隆实例所在地域Id
                     */
                    int64_t m_newRegionId;
                    bool m_newRegionIdHasBeenSet;

                    /**
                     * 源实例所在地域Id
                     */
                    int64_t m_srcRegionId;
                    bool m_srcRegionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLONEITEM_H_
