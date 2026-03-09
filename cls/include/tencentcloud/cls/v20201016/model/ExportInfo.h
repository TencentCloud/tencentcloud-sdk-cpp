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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EXPORTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EXPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 日志导出信息
                */
                class ExportInfo : public AbstractModel
                {
                public:
                    ExportInfo();
                    ~ExportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志主题ID</p>
                     * @return TopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _topicId <p>日志主题ID</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>日志导出任务ID</p>
                     * @return ExportId <p>日志导出任务ID</p>
                     * 
                     */
                    std::string GetExportId() const;

                    /**
                     * 设置<p>日志导出任务ID</p>
                     * @param _exportId <p>日志导出任务ID</p>
                     * 
                     */
                    void SetExportId(const std::string& _exportId);

                    /**
                     * 判断参数 ExportId 是否已赋值
                     * @return ExportId 是否已赋值
                     * 
                     */
                    bool ExportIdHasBeenSet() const;

                    /**
                     * 获取<p>日志导出查询语句</p>
                     * @return Query <p>日志导出查询语句</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>日志导出查询语句</p>
                     * @param _query <p>日志导出查询语句</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>日志导出文件名</p>
                     * @return FileName <p>日志导出文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>日志导出文件名</p>
                     * @param _fileName <p>日志导出文件名</p>
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
                     * 获取<p>日志文件大小</p><p>单位：Byte</p>
                     * @return FileSize <p>日志文件大小</p><p>单位：Byte</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>日志文件大小</p><p>单位：Byte</p>
                     * @param _fileSize <p>日志文件大小</p><p>单位：Byte</p>
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>日志导出时间排序</p>
                     * @return Order <p>日志导出时间排序</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>日志导出时间排序</p>
                     * @param _order <p>日志导出时间排序</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>日志导出格式</p>
                     * @return Format <p>日志导出格式</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>日志导出格式</p>
                     * @param _format <p>日志导出格式</p>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>日志导出数量</p>
                     * @return Count <p>日志导出数量</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>日志导出数量</p>
                     * @param _count <p>日志导出数量</p>
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>日志下载状态。Processing:导出正在进行中，Completed:导出完成，Failed:导出失败，Expired:日志导出已过期(三天有效期), Queuing 排队中</p>
                     * @return Status <p>日志下载状态。Processing:导出正在进行中，Completed:导出完成，Failed:导出失败，Expired:日志导出已过期(三天有效期), Queuing 排队中</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>日志下载状态。Processing:导出正在进行中，Completed:导出完成，Failed:导出失败，Expired:日志导出已过期(三天有效期), Queuing 排队中</p>
                     * @param _status <p>日志下载状态。Processing:导出正在进行中，Completed:导出完成，Failed:导出失败，Expired:日志导出已过期(三天有效期), Queuing 排队中</p>
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
                     * 获取<p>日志导出起始时间，毫秒时间戳</p>
                     * @return From <p>日志导出起始时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>日志导出起始时间，毫秒时间戳</p>
                     * @param _from <p>日志导出起始时间，毫秒时间戳</p>
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>日志导出结束时间，毫秒时间戳</p>
                     * @return To <p>日志导出结束时间，毫秒时间戳</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>日志导出结束时间，毫秒时间戳</p>
                     * @param _to <p>日志导出结束时间，毫秒时间戳</p>
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取<p>日志导出路径,有效期一个小时，请尽快使用该路径下载。</p>
                     * @return CosPath <p>日志导出路径,有效期一个小时，请尽快使用该路径下载。</p>
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置<p>日志导出路径,有效期一个小时，请尽快使用该路径下载。</p>
                     * @param _cosPath <p>日志导出路径,有效期一个小时，请尽快使用该路径下载。</p>
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取<p>日志导出创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @return CreateTime <p>日志导出创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>日志导出创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @param _createTime <p>日志导出创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>语法规则。 默认值为0。<br>0：Lucene语法，1：CQL语法。</p>
                     * @return SyntaxRule <p>语法规则。 默认值为0。<br>0：Lucene语法，1：CQL语法。</p>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>语法规则。 默认值为0。<br>0：Lucene语法，1：CQL语法。</p>
                     * @param _syntaxRule <p>语法规则。 默认值为0。<br>0：Lucene语法，1：CQL语法。</p>
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取<p>导出字段</p>
                     * @return DerivedFields <p>导出字段</p>
                     * 
                     */
                    std::vector<std::string> GetDerivedFields() const;

                    /**
                     * 设置<p>导出字段</p>
                     * @param _derivedFields <p>导出字段</p>
                     * 
                     */
                    void SetDerivedFields(const std::vector<std::string>& _derivedFields);

                    /**
                     * 判断参数 DerivedFields 是否已赋值
                     * @return DerivedFields 是否已赋值
                     * 
                     */
                    bool DerivedFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>日志导出任务ID</p>
                     */
                    std::string m_exportId;
                    bool m_exportIdHasBeenSet;

                    /**
                     * <p>日志导出查询语句</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>日志导出文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>日志文件大小</p><p>单位：Byte</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>日志导出时间排序</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>日志导出格式</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>日志导出数量</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>日志下载状态。Processing:导出正在进行中，Completed:导出完成，Failed:导出失败，Expired:日志导出已过期(三天有效期), Queuing 排队中</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>日志导出起始时间，毫秒时间戳</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>日志导出结束时间，毫秒时间戳</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>日志导出路径,有效期一个小时，请尽快使用该路径下载。</p>
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * <p>日志导出创建时间<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>语法规则。 默认值为0。<br>0：Lucene语法，1：CQL语法。</p>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>导出字段</p>
                     */
                    std::vector<std::string> m_derivedFields;
                    bool m_derivedFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXPORTINFO_H_
