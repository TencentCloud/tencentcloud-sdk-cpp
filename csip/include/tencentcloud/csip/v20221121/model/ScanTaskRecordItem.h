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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKRECORDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKRECORDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 扫描任务记录详情
                */
                class ScanTaskRecordItem : public AbstractModel
                {
                public:
                    ScanTaskRecordItem();
                    ~ScanTaskRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskID <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskID <p>任务ID</p>
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
                     * @return Status <p>任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _status <p>任务状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务进度</p>
                     * @return Progress <p>任务进度</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>任务进度</p>
                     * @param _progress <p>任务进度</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>消耗配额</p>
                     * @return CostQuota <p>消耗配额</p>
                     * 
                     */
                    uint64_t GetCostQuota() const;

                    /**
                     * 设置<p>消耗配额</p>
                     * @param _costQuota <p>消耗配额</p>
                     * 
                     */
                    void SetCostQuota(const uint64_t& _costQuota);

                    /**
                     * 判断参数 CostQuota 是否已赋值
                     * @return CostQuota 是否已赋值
                     * 
                     */
                    bool CostQuotaHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createTime <p>任务创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务结束时间</p>
                     * @return EndTime <p>任务结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
                     * @param _endTime <p>任务结束时间</p>
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
                     * 获取<p>任务来源</p>
                     * @return TaskSource <p>任务来源</p>
                     * 
                     */
                    std::string GetTaskSource() const;

                    /**
                     * 设置<p>任务来源</p>
                     * @param _taskSource <p>任务来源</p>
                     * 
                     */
                    void SetTaskSource(const std::string& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务进度</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>消耗配额</p>
                     */
                    uint64_t m_costQuota;
                    bool m_costQuotaHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务来源</p>
                     */
                    std::string m_taskSource;
                    bool m_taskSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKRECORDITEM_H_
