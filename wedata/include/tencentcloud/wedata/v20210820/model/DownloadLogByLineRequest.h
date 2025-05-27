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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADLOGBYLINEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADLOGBYLINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DownloadLogByLine请求参数结构体
                */
                class DownloadLogByLineRequest : public AbstractModel
                {
                public:
                    DownloadLogByLineRequest();
                    ~DownloadLogByLineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始行
                     * @return StartLine 开始行
                     * 
                     */
                    int64_t GetStartLine() const;

                    /**
                     * 设置开始行
                     * @param _startLine 开始行
                     * 
                     */
                    void SetStartLine(const int64_t& _startLine);

                    /**
                     * 判断参数 StartLine 是否已赋值
                     * @return StartLine 是否已赋值
                     * 
                     */
                    bool StartLineHasBeenSet() const;

                    /**
                     * 获取读取行
                     * @return LineCount 读取行
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置读取行
                     * @param _lineCount 读取行
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实例运行时间
                     * @return CurRunDate 实例运行时间
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置实例运行时间
                     * @param _curRunDate 实例运行时间
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取任务详情id，用于读取切分的日志文件
                     * @return DetailId 任务详情id，用于读取切分的日志文件
                     * 
                     */
                    std::string GetDetailId() const;

                    /**
                     * 设置任务详情id，用于读取切分的日志文件
                     * @param _detailId 任务详情id，用于读取切分的日志文件
                     * 
                     */
                    void SetDetailId(const std::string& _detailId);

                    /**
                     * 判断参数 DetailId 是否已赋值
                     * @return DetailId 是否已赋值
                     * 
                     */
                    bool DetailIdHasBeenSet() const;

                    /**
                     * 获取base64编码的文件路径
                     * @return FilePath base64编码的文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置base64编码的文件路径
                     * @param _filePath base64编码的文件路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取任务记录id
                     * @return RecordId 任务记录id
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置任务记录id
                     * @param _recordId 任务记录id
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取子job id
                     * @return SubJobId 子job id
                     * 
                     */
                    std::string GetSubJobId() const;

                    /**
                     * 设置子job id
                     * @param _subJobId 子job id
                     * 
                     */
                    void SetSubJobId(const std::string& _subJobId);

                    /**
                     * 判断参数 SubJobId 是否已赋值
                     * @return SubJobId 是否已赋值
                     * 
                     */
                    bool SubJobIdHasBeenSet() const;

                    /**
                     * 获取hiveSql:34,sparkSql:36 dlcSql: 32
                     * @return JobType hiveSql:34,sparkSql:36 dlcSql: 32
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置hiveSql:34,sparkSql:36 dlcSql: 32
                     * @param _jobType hiveSql:34,sparkSql:36 dlcSql: 32
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取true:解析错误信息。false:不解析错误信息
                     * @return ParseErrorTip true:解析错误信息。false:不解析错误信息
                     * 
                     */
                    bool GetParseErrorTip() const;

                    /**
                     * 设置true:解析错误信息。false:不解析错误信息
                     * @param _parseErrorTip true:解析错误信息。false:不解析错误信息
                     * 
                     */
                    void SetParseErrorTip(const bool& _parseErrorTip);

                    /**
                     * 判断参数 ParseErrorTip 是否已赋值
                     * @return ParseErrorTip 是否已赋值
                     * 
                     */
                    bool ParseErrorTipHasBeenSet() const;

                    /**
                     * 获取log 0 code 1 result 2 custo 3
                     * @return FileType log 0 code 1 result 2 custo 3
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置log 0 code 1 result 2 custo 3
                     * @param _fileType log 0 code 1 result 2 custo 3
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取查询文件标志：0: 从执行机获取，1: 从cos获取，获取不到会再从执行机获取
                     * @return QueryFileFlag 查询文件标志：0: 从执行机获取，1: 从cos获取，获取不到会再从执行机获取
                     * 
                     */
                    int64_t GetQueryFileFlag() const;

                    /**
                     * 设置查询文件标志：0: 从执行机获取，1: 从cos获取，获取不到会再从执行机获取
                     * @param _queryFileFlag 查询文件标志：0: 从执行机获取，1: 从cos获取，获取不到会再从执行机获取
                     * 
                     */
                    void SetQueryFileFlag(const int64_t& _queryFileFlag);

                    /**
                     * 判断参数 QueryFileFlag 是否已赋值
                     * @return QueryFileFlag 是否已赋值
                     * 
                     */
                    bool QueryFileFlagHasBeenSet() const;

                    /**
                     * 获取透传字段，如果queryFileFlag为1，则ext回作为上一页的分页标识offset
                     * @return ExtInfo 透传字段，如果queryFileFlag为1，则ext回作为上一页的分页标识offset
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置透传字段，如果queryFileFlag为1，则ext回作为上一页的分页标识offset
                     * @param _extInfo 透传字段，如果queryFileFlag为1，则ext回作为上一页的分页标识offset
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 开始行
                     */
                    int64_t m_startLine;
                    bool m_startLineHasBeenSet;

                    /**
                     * 读取行
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例运行时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 任务详情id，用于读取切分的日志文件
                     */
                    std::string m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * base64编码的文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 任务记录id
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 子job id
                     */
                    std::string m_subJobId;
                    bool m_subJobIdHasBeenSet;

                    /**
                     * hiveSql:34,sparkSql:36 dlcSql: 32
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * true:解析错误信息。false:不解析错误信息
                     */
                    bool m_parseErrorTip;
                    bool m_parseErrorTipHasBeenSet;

                    /**
                     * log 0 code 1 result 2 custo 3
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 查询文件标志：0: 从执行机获取，1: 从cos获取，获取不到会再从执行机获取
                     */
                    int64_t m_queryFileFlag;
                    bool m_queryFileFlagHasBeenSet;

                    /**
                     * 透传字段，如果queryFileFlag为1，则ext回作为上一页的分页标识offset
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADLOGBYLINEREQUEST_H_
