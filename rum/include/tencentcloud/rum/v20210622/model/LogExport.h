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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_LOGEXPORT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_LOGEXPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 日志导出记录
                */
                class LogExport : public AbstractModel
                {
                public:
                    LogExport();
                    ~LogExport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志导出路径
                     * @return CosPath 日志导出路径
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置日志导出路径
                     * @param CosPath 日志导出路径
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取日志导出数量
                     * @return Count 日志导出数量
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置日志导出数量
                     * @param Count 日志导出数量
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取日志导出任务创建时间
                     * @return CreateTime 日志导出任务创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置日志导出任务创建时间
                     * @param CreateTime 日志导出任务创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取日志导出任务ID
                     * @return ExportID 日志导出任务ID
                     */
                    std::string GetExportID() const;

                    /**
                     * 设置日志导出任务ID
                     * @param ExportID 日志导出任务ID
                     */
                    void SetExportID(const std::string& _exportID);

                    /**
                     * 判断参数 ExportID 是否已赋值
                     * @return ExportID 是否已赋值
                     */
                    bool ExportIDHasBeenSet() const;

                    /**
                     * 获取日志导出文件名
                     * @return FileName 日志导出文件名
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置日志导出文件名
                     * @param FileName 日志导出文件名
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取日志文件大小
                     * @return FileSize 日志文件大小
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置日志文件大小
                     * @param FileSize 日志文件大小
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取日志导出格式
                     * @return Format 日志导出格式
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置日志导出格式
                     * @param Format 日志导出格式
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取日志导出时间排序
                     * @return Order 日志导出时间排序
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置日志导出时间排序
                     * @param Order 日志导出时间排序
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取日志导出查询语句
                     * @return Query 日志导出查询语句
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置日志导出查询语句
                     * @param Query 日志导出查询语句
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取日志导出起始时间
                     * @return StartTime 日志导出起始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志导出起始时间
                     * @param StartTime 日志导出起始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取日志导出结束时间
                     * @return EndTime 日志导出结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志导出结束时间
                     * @param EndTime 日志导出结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取日志下载状态。Queuing:导出正在排队中，Processing:导出正在进行中，Complete:导出完成，Failed:导出失败，Expired:日志导出已过期（三天有效期）。
                     * @return Status 日志下载状态。Queuing:导出正在排队中，Processing:导出正在进行中，Complete:导出完成，Failed:导出失败，Expired:日志导出已过期（三天有效期）。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置日志下载状态。Queuing:导出正在排队中，Processing:导出正在进行中，Complete:导出完成，Failed:导出失败，Expired:日志导出已过期（三天有效期）。
                     * @param Status 日志下载状态。Queuing:导出正在排队中，Processing:导出正在进行中，Complete:导出完成，Failed:导出失败，Expired:日志导出已过期（三天有效期）。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 日志导出路径
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * 日志导出数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 日志导出任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 日志导出任务ID
                     */
                    std::string m_exportID;
                    bool m_exportIDHasBeenSet;

                    /**
                     * 日志导出文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 日志文件大小
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 日志导出格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 日志导出时间排序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 日志导出查询语句
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 日志导出起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志导出结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志下载状态。Queuing:导出正在排队中，Processing:导出正在进行中，Complete:导出完成，Failed:导出失败，Expired:日志导出已过期（三天有效期）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_LOGEXPORT_H_
