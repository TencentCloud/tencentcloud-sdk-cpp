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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERECORDLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERECORDLISTREQUEST_H_

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
                * DescribeRecordList请求参数结构体
                */
                class DescribeRecordListRequest : public AbstractModel
                {
                public:
                    DescribeRecordListRequest();
                    ~DescribeRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本文件id
                     * @return ScriptId 脚本文件id
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置脚本文件id
                     * @param _scriptId 脚本文件id
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取分页索引
                     * @return PageIndex 分页索引
                     * 
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置分页索引
                     * @param _pageIndex 分页索引
                     * 
                     */
                    void SetPageIndex(const uint64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取单页大小
                     * @return PageSize 单页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置单页大小
                     * @param _pageSize 单页大小
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取脚本类型
                     * @return ScriptType 脚本类型
                     * 
                     */
                    std::string GetScriptType() const;

                    /**
                     * 设置脚本类型
                     * @param _scriptType 脚本类型
                     * 
                     */
                    void SetScriptType(const std::string& _scriptType);

                    /**
                     * 判断参数 ScriptType 是否已赋值
                     * @return ScriptType 是否已赋值
                     * 
                     */
                    bool ScriptTypeHasBeenSet() const;

                    /**
                     * 获取sql语句
                     * @return SqlStatement sql语句
                     * 
                     */
                    std::string GetSqlStatement() const;

                    /**
                     * 设置sql语句
                     * @param _sqlStatement sql语句
                     * 
                     */
                    void SetSqlStatement(const std::string& _sqlStatement);

                    /**
                     * 判断参数 SqlStatement 是否已赋值
                     * @return SqlStatement 是否已赋值
                     * 
                     */
                    bool SqlStatementHasBeenSet() const;

                    /**
                     * 获取开始时间(毫秒)
                     * @return StartTime 开始时间(毫秒)
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间(毫秒)
                     * @param _startTime 开始时间(毫秒)
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间(毫秒)
                     * @return EndTime 结束时间(毫秒)
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间(毫秒)
                     * @param _endTime 结束时间(毫秒)
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
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
                     * 获取是否只查看用户自身的调试记录,默认或者不填都为true，填为false的时候会显示其他用户的此脚本的调试记录
                     * @return IsOnlyMyselfDebug 是否只查看用户自身的调试记录,默认或者不填都为true，填为false的时候会显示其他用户的此脚本的调试记录
                     * 
                     */
                    bool GetIsOnlyMyselfDebug() const;

                    /**
                     * 设置是否只查看用户自身的调试记录,默认或者不填都为true，填为false的时候会显示其他用户的此脚本的调试记录
                     * @param _isOnlyMyselfDebug 是否只查看用户自身的调试记录,默认或者不填都为true，填为false的时候会显示其他用户的此脚本的调试记录
                     * 
                     */
                    void SetIsOnlyMyselfDebug(const bool& _isOnlyMyselfDebug);

                    /**
                     * 判断参数 IsOnlyMyselfDebug 是否已赋值
                     * @return IsOnlyMyselfDebug 是否已赋值
                     * 
                     */
                    bool IsOnlyMyselfDebugHasBeenSet() const;

                private:

                    /**
                     * 脚本文件id
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * 分页索引
                     */
                    uint64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 单页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 脚本类型
                     */
                    std::string m_scriptType;
                    bool m_scriptTypeHasBeenSet;

                    /**
                     * sql语句
                     */
                    std::string m_sqlStatement;
                    bool m_sqlStatementHasBeenSet;

                    /**
                     * 开始时间(毫秒)
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间(毫秒)
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否只查看用户自身的调试记录,默认或者不填都为true，填为false的时候会显示其他用户的此脚本的调试记录
                     */
                    bool m_isOnlyMyselfDebug;
                    bool m_isOnlyMyselfDebugHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERECORDLISTREQUEST_H_
