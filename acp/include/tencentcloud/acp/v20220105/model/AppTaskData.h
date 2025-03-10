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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_APPTASKDATA_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_APPTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/acp/v20220105/model/AppInfoItem.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 应用合规隐私诊断任务数据
                */
                class AppTaskData : public AbstractModel
                {
                public:
                    AppTaskData();
                    ~AppTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskID 任务ID
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务ID
                     * @param _taskID 任务ID
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
                     * 获取任务类型, 0:基础版, 1:专家版, 2:本地化
                     * @return TaskType 任务类型, 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型, 0:基础版, 1:专家版, 2:本地化
                     * @param _taskType 任务类型, 0:基础版, 1:专家版, 2:本地化
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * @return TaskStatus 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * @param _taskStatus 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return TaskErrMsg 错误信息
                     * 
                     */
                    std::string GetTaskErrMsg() const;

                    /**
                     * 设置错误信息
                     * @param _taskErrMsg 错误信息
                     * 
                     */
                    void SetTaskErrMsg(const std::string& _taskErrMsg);

                    /**
                     * 判断参数 TaskErrMsg 是否已赋值
                     * @return TaskErrMsg 是否已赋值
                     * 
                     */
                    bool TaskErrMsgHasBeenSet() const;

                    /**
                     * 获取任务来源,0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android)
                     * @return Source 任务来源,0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android)
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置任务来源,0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android)
                     * @param _source 任务来源,0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android)
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取应用信息
                     * @return AppInfo 应用信息
                     * 
                     */
                    AppInfoItem GetAppInfo() const;

                    /**
                     * 设置应用信息
                     * @param _appInfo 应用信息
                     * 
                     */
                    void SetAppInfo(const AppInfoItem& _appInfo);

                    /**
                     * 判断参数 AppInfo 是否已赋值
                     * @return AppInfo 是否已赋值
                     * 
                     */
                    bool AppInfoHasBeenSet() const;

                    /**
                     * 获取任务启动时间
                     * @return StartTime 任务启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务启动时间
                     * @param _startTime 任务启动时间
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
                     * 获取任务完成时间(更新时间)
                     * @return EndTime 任务完成时间(更新时间)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务完成时间(更新时间)
                     * @param _endTime 任务完成时间(更新时间)
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
                     * 获取联系人信息
                     * @return ContactName 联系人信息
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置联系人信息
                     * @param _contactName 联系人信息
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 任务类型, 0:基础版, 1:专家版, 2:本地化
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 0:默认值(待检测/待咨询), 1.检测中, 2:待评估, 3:评估中, 4:任务完成/咨询完成, 5:任务失败, 6:咨询中;
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_taskErrMsg;
                    bool m_taskErrMsgHasBeenSet;

                    /**
                     * 任务来源,0:小程序诊断, 1:预留字段(暂未使用), 2:app诊断(android)
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 应用信息
                     */
                    AppInfoItem m_appInfo;
                    bool m_appInfoHasBeenSet;

                    /**
                     * 任务启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务完成时间(更新时间)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 联系人信息
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_APPTASKDATA_H_
