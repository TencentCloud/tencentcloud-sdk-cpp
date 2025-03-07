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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_BINLOGINFO_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_BINLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 实例增量备份信息
                */
                class BinlogInfo : public AbstractModel
                {
                public:
                    BinlogInfo();
                    ~BinlogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份开始时间。
                     * @return StartTime 备份开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间。
                     * @param _startTime 备份开始时间。
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
                     * 获取备份结束时间。
                     * @return EndTime 备份结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份结束时间。
                     * @param _endTime 备份结束时间。
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
                     * 获取备份 ID。
                     * @return BackupId 备份 ID。
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置备份 ID。
                     * @param _backupId 备份 ID。
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份文件名。
                     * @return Filename 备份文件名。
                     * 
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置备份文件名。
                     * @param _filename 备份文件名。
                     * 
                     */
                    void SetFilename(const std::string& _filename);

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     * 
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取备份文件大小，单位：Byte。
                     * @return FileSize 备份文件大小，单位：Byte。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置备份文件大小，单位：Byte。
                     * @param _fileSize 备份文件大小，单位：Byte。
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * 备份开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备份 ID。
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份文件名。
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * 备份文件大小，单位：Byte。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_BINLOGINFO_H_
