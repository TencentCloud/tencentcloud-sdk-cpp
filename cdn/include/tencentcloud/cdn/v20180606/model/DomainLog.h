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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINLOG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 日志包下载链接详情
                */
                class DomainLog : public AbstractModel
                {
                public:
                    DomainLog();
                    ~DomainLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志包起始时间
                     * @return StartTime 日志包起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志包起始时间
                     * @param _startTime 日志包起始时间
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
                     * 获取日志包结束时间
                     * @return EndTime 日志包结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志包结束时间
                     * @param _endTime 日志包结束时间
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
                     * 获取日志包下载链接
                     * @return LogPath 日志包下载链接
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置日志包下载链接
                     * @param _logPath 日志包下载链接
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取日志包对应加速区域
mainland：境内
overseas：境外
                     * @return Area 日志包对应加速区域
mainland：境内
overseas：境外
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置日志包对应加速区域
mainland：境内
overseas：境外
                     * @param _area 日志包对应加速区域
mainland：境内
overseas：境外
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取日志包文件名
                     * @return LogName 日志包文件名
                     * 
                     */
                    std::string GetLogName() const;

                    /**
                     * 设置日志包文件名
                     * @param _logName 日志包文件名
                     * 
                     */
                    void SetLogName(const std::string& _logName);

                    /**
                     * 判断参数 LogName 是否已赋值
                     * @return LogName 是否已赋值
                     * 
                     */
                    bool LogNameHasBeenSet() const;

                    /**
                     * 获取文件大小，单位: Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小，单位: Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位: Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小，单位: Byte
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 日志包起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志包结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志包下载链接
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * 日志包对应加速区域
mainland：境内
overseas：境外
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 日志包文件名
                     */
                    std::string m_logName;
                    bool m_logNameHasBeenSet;

                    /**
                     * 文件大小，单位: Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINLOG_H_
