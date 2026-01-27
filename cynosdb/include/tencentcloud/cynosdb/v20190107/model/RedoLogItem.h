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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REDOLOGITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REDOLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupRegionAndIds.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * redo日志详情
                */
                class RedoLogItem : public AbstractModel
                {
                public:
                    RedoLogItem();
                    ~RedoLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取文件大小
                     * @return FileSize 文件大小
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小
                     * @param _fileSize 文件大小
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
                     * 获取备份时间
                     * @return BackupTime 备份时间
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置备份时间
                     * @param _backupTime 备份时间
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取redoLogId
                     * @return RedoLogId redoLogId
                     * 
                     */
                    int64_t GetRedoLogId() const;

                    /**
                     * 设置redoLogId
                     * @param _redoLogId redoLogId
                     * 
                     */
                    void SetRedoLogId(const int64_t& _redoLogId);

                    /**
                     * 判断参数 RedoLogId 是否已赋值
                     * @return RedoLogId 是否已赋值
                     * 
                     */
                    bool RedoLogIdHasBeenSet() const;

                    /**
                     * 获取跨地域信息
                     * @return RedoCrossRegions 跨地域信息
                     * 
                     */
                    std::vector<BackupRegionAndIds> GetRedoCrossRegions() const;

                    /**
                     * 设置跨地域信息
                     * @param _redoCrossRegions 跨地域信息
                     * 
                     */
                    void SetRedoCrossRegions(const std::vector<BackupRegionAndIds>& _redoCrossRegions);

                    /**
                     * 判断参数 RedoCrossRegions 是否已赋值
                     * @return RedoCrossRegions 是否已赋值
                     * 
                     */
                    bool RedoCrossRegionsHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取完成时间
                     * @return FinishTime 完成时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置完成时间
                     * @param _finishTime 完成时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 备份时间
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * redoLogId
                     */
                    int64_t m_redoLogId;
                    bool m_redoLogIdHasBeenSet;

                    /**
                     * 跨地域信息
                     */
                    std::vector<BackupRegionAndIds> m_redoCrossRegions;
                    bool m_redoCrossRegionsHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REDOLOGITEM_H_
