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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_STATEMENTOUTPUT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_STATEMENTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * notebook session statement输出信息。
                */
                class StatementOutput : public AbstractModel
                {
                public:
                    StatementOutput();
                    ~StatementOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行总数
                     * @return ExecutionCount 执行总数
                     * 
                     */
                    int64_t GetExecutionCount() const;

                    /**
                     * 设置执行总数
                     * @param _executionCount 执行总数
                     * 
                     */
                    void SetExecutionCount(const int64_t& _executionCount);

                    /**
                     * 判断参数 ExecutionCount 是否已赋值
                     * @return ExecutionCount 是否已赋值
                     * 
                     */
                    bool ExecutionCountHasBeenSet() const;

                    /**
                     * 获取Statement数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data Statement数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetData() const;

                    /**
                     * 设置Statement数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data Statement数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::vector<KVPair>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Statement状态:ok,error
                     * @return Status Statement状态:ok,error
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Statement状态:ok,error
                     * @param _status Statement状态:ok,error
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
                     * 获取错误名称
                     * @return ErrorName 错误名称
                     * 
                     */
                    std::string GetErrorName() const;

                    /**
                     * 设置错误名称
                     * @param _errorName 错误名称
                     * 
                     */
                    void SetErrorName(const std::string& _errorName);

                    /**
                     * 判断参数 ErrorName 是否已赋值
                     * @return ErrorName 是否已赋值
                     * 
                     */
                    bool ErrorNameHasBeenSet() const;

                    /**
                     * 获取错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorValue 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorValue() const;

                    /**
                     * 设置错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorValue 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorValue(const std::string& _errorValue);

                    /**
                     * 判断参数 ErrorValue 是否已赋值
                     * @return ErrorValue 是否已赋值
                     * 
                     */
                    bool ErrorValueHasBeenSet() const;

                    /**
                     * 获取错误堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetErrorMessage() const;

                    /**
                     * 设置错误堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 错误堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::vector<std::string>& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取SQL类型任务结果返回
                     * @return SQLResult SQL类型任务结果返回
                     * 
                     */
                    std::string GetSQLResult() const;

                    /**
                     * 设置SQL类型任务结果返回
                     * @param _sQLResult SQL类型任务结果返回
                     * 
                     */
                    void SetSQLResult(const std::string& _sQLResult);

                    /**
                     * 判断参数 SQLResult 是否已赋值
                     * @return SQLResult 是否已赋值
                     * 
                     */
                    bool SQLResultHasBeenSet() const;

                private:

                    /**
                     * 执行总数
                     */
                    int64_t m_executionCount;
                    bool m_executionCountHasBeenSet;

                    /**
                     * Statement数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Statement状态:ok,error
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误名称
                     */
                    std::string m_errorName;
                    bool m_errorNameHasBeenSet;

                    /**
                     * 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorValue;
                    bool m_errorValueHasBeenSet;

                    /**
                     * 错误堆栈信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * SQL类型任务结果返回
                     */
                    std::string m_sQLResult;
                    bool m_sQLResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_STATEMENTOUTPUT_H_
