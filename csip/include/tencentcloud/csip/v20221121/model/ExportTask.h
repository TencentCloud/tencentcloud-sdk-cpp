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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTTASK_H_

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
                * 导出任务列表
                */
                class ExportTask : public AbstractModel
                {
                public:
                    ExportTask();
                    ~ExportTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务Id
                     * @return Id 任务Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务Id
                     * @param _id 任务Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取进度百分比
                     * @return Percentage 进度百分比
                     * 
                     */
                    int64_t GetPercentage() const;

                    /**
                     * 设置进度百分比
                     * @param _percentage 进度百分比
                     * 
                     */
                    void SetPercentage(const int64_t& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取任务状态：0.未开始 1.执行中 2.执行成功 3.执行超时 4.执行失败
                     * @return TaskStatus 任务状态：0.未开始 1.执行中 2.执行成功 3.执行超时 4.执行失败
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置任务状态：0.未开始 1.执行中 2.执行成功 3.执行超时 4.执行失败
                     * @param _taskStatus 任务状态：0.未开始 1.执行中 2.执行成功 3.执行超时 4.执行失败
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
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务更新时间
                     * @return ModifyTime 任务更新时间
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置任务更新时间
                     * @param _modifyTime 任务更新时间
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件大小  字节
                     * @return FileSize 文件大小  字节
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小  字节
                     * @param _fileSize 文件大小  字节
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取剩余时间(单位：秒)
                     * @return RemainingTime 剩余时间(单位：秒)
                     * 
                     */
                    int64_t GetRemainingTime() const;

                    /**
                     * 设置剩余时间(单位：秒)
                     * @param _remainingTime 剩余时间(单位：秒)
                     * 
                     */
                    void SetRemainingTime(const int64_t& _remainingTime);

                    /**
                     * 判断参数 RemainingTime 是否已赋值
                     * @return RemainingTime 是否已赋值
                     * 
                     */
                    bool RemainingTimeHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 进度百分比
                     */
                    int64_t m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * 任务状态：0.未开始 1.执行中 2.执行成功 3.执行超时 4.执行失败
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小  字节
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 剩余时间(单位：秒)
                     */
                    int64_t m_remainingTime;
                    bool m_remainingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTTASK_H_
