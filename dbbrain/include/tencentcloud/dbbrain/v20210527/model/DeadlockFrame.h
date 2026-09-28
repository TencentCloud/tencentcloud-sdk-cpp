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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKFRAME_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKFRAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * SQL Server 执行栈中的单个帧。
                */
                class DeadlockFrame : public AbstractModel
                {
                public:
                    DeadlockFrame();
                    ~DeadlockFrame() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>帧对应的行号（存储过程内的行号）。</p>
                     * @return Line <p>帧对应的行号（存储过程内的行号）。</p>
                     * 
                     */
                    int64_t GetLine() const;

                    /**
                     * 设置<p>帧对应的行号（存储过程内的行号）。</p>
                     * @param _line <p>帧对应的行号（存储过程内的行号）。</p>
                     * 
                     */
                    void SetLine(const int64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取<p>语句在存储过程文本内的起始字节偏移。</p>
                     * @return StatementStart <p>语句在存储过程文本内的起始字节偏移。</p>
                     * 
                     */
                    int64_t GetStatementStart() const;

                    /**
                     * 设置<p>语句在存储过程文本内的起始字节偏移。</p>
                     * @param _statementStart <p>语句在存储过程文本内的起始字节偏移。</p>
                     * 
                     */
                    void SetStatementStart(const int64_t& _statementStart);

                    /**
                     * 判断参数 StatementStart 是否已赋值
                     * @return StatementStart 是否已赋值
                     * 
                     */
                    bool StatementStartHasBeenSet() const;

                    /**
                     * 获取<p>存储过程名。adhoc 表示动态 SQL、非存过。</p>
                     * @return ProcName <p>存储过程名。adhoc 表示动态 SQL、非存过。</p>
                     * 
                     */
                    std::string GetProcName() const;

                    /**
                     * 设置<p>存储过程名。adhoc 表示动态 SQL、非存过。</p>
                     * @param _procName <p>存储过程名。adhoc 表示动态 SQL、非存过。</p>
                     * 
                     */
                    void SetProcName(const std::string& _procName);

                    /**
                     * 判断参数 ProcName 是否已赋值
                     * @return ProcName 是否已赋值
                     * 
                     */
                    bool ProcNameHasBeenSet() const;

                    /**
                     * 获取<p>SQL 句柄（0x 十六进制字节），用于拉取具体语句文本和关联执行计划。</p>
                     * @return SqlHandle <p>SQL 句柄（0x 十六进制字节），用于拉取具体语句文本和关联执行计划。</p>
                     * 
                     */
                    std::string GetSqlHandle() const;

                    /**
                     * 设置<p>SQL 句柄（0x 十六进制字节），用于拉取具体语句文本和关联执行计划。</p>
                     * @param _sqlHandle <p>SQL 句柄（0x 十六进制字节），用于拉取具体语句文本和关联执行计划。</p>
                     * 
                     */
                    void SetSqlHandle(const std::string& _sqlHandle);

                    /**
                     * 判断参数 SqlHandle 是否已赋值
                     * @return SqlHandle 是否已赋值
                     * 
                     */
                    bool SqlHandleHasBeenSet() const;

                    /**
                     * 获取<p>语句在存储过程文本内的结束字节偏移。StatementStart/StatementEnd 组合用于精确切片。</p>
                     * @return StatementEnd <p>语句在存储过程文本内的结束字节偏移。StatementStart/StatementEnd 组合用于精确切片。</p>
                     * 
                     */
                    int64_t GetStatementEnd() const;

                    /**
                     * 设置<p>语句在存储过程文本内的结束字节偏移。StatementStart/StatementEnd 组合用于精确切片。</p>
                     * @param _statementEnd <p>语句在存储过程文本内的结束字节偏移。StatementStart/StatementEnd 组合用于精确切片。</p>
                     * 
                     */
                    void SetStatementEnd(const int64_t& _statementEnd);

                    /**
                     * 判断参数 StatementEnd 是否已赋值
                     * @return StatementEnd 是否已赋值
                     * 
                     */
                    bool StatementEndHasBeenSet() const;

                private:

                    /**
                     * <p>帧对应的行号（存储过程内的行号）。</p>
                     */
                    int64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * <p>语句在存储过程文本内的起始字节偏移。</p>
                     */
                    int64_t m_statementStart;
                    bool m_statementStartHasBeenSet;

                    /**
                     * <p>存储过程名。adhoc 表示动态 SQL、非存过。</p>
                     */
                    std::string m_procName;
                    bool m_procNameHasBeenSet;

                    /**
                     * <p>SQL 句柄（0x 十六进制字节），用于拉取具体语句文本和关联执行计划。</p>
                     */
                    std::string m_sqlHandle;
                    bool m_sqlHandleHasBeenSet;

                    /**
                     * <p>语句在存储过程文本内的结束字节偏移。StatementStart/StatementEnd 组合用于精确切片。</p>
                     */
                    int64_t m_statementEnd;
                    bool m_statementEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKFRAME_H_
