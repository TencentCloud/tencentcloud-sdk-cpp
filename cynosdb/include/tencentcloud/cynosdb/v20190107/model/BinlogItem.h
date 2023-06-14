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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Binlog描述
                */
                class BinlogItem : public AbstractModel
                {
                public:
                    BinlogItem();
                    ~BinlogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Binlog文件名称
                     * @return FileName Binlog文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Binlog文件名称
                     * @param _fileName Binlog文件名称
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
                     * 获取文件大小，单位：字节
                     * @return FileSize 文件大小，单位：字节
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位：字节
                     * @param _fileSize 文件大小，单位：字节
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
                     * 获取事务最早时间
                     * @return StartTime 事务最早时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置事务最早时间
                     * @param _startTime 事务最早时间
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
                     * 获取事务最晚时间
                     * @return FinishTime 事务最晚时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置事务最晚时间
                     * @param _finishTime 事务最晚时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Binlog文件ID
                     * @return BinlogId Binlog文件ID
                     * 
                     */
                    int64_t GetBinlogId() const;

                    /**
                     * 设置Binlog文件ID
                     * @param _binlogId Binlog文件ID
                     * 
                     */
                    void SetBinlogId(const int64_t& _binlogId);

                    /**
                     * 判断参数 BinlogId 是否已赋值
                     * @return BinlogId 是否已赋值
                     * 
                     */
                    bool BinlogIdHasBeenSet() const;

                private:

                    /**
                     * Binlog文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小，单位：字节
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 事务最早时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 事务最晚时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Binlog文件ID
                     */
                    int64_t m_binlogId;
                    bool m_binlogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
