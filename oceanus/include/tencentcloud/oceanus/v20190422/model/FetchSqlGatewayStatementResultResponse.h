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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_FETCHSQLGATEWAYSTATEMENTRESULTRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_FETCHSQLGATEWAYSTATEMENTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/StatementResult.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * FetchSqlGatewayStatementResult返回参数结构体
                */
                class FetchSqlGatewayStatementResultResponse : public AbstractModel
                {
                public:
                    FetchSqlGatewayStatementResultResponse();
                    ~FetchSqlGatewayStatementResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取返回类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultType 返回类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取是否DQL结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsQueryResult 是否DQL结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsQueryResult() const;

                    /**
                     * 判断参数 IsQueryResult 是否已赋值
                     * @return IsQueryResult 是否已赋值
                     * 
                     */
                    bool IsQueryResultHasBeenSet() const;

                    /**
                     * 获取结果类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultKind 结果类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultKind() const;

                    /**
                     * 判断参数 ResultKind 是否已赋值
                     * @return ResultKind 是否已赋值
                     * 
                     */
                    bool ResultKindHasBeenSet() const;

                    /**
                     * 获取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StatementResult GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取下一次请求的uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextResultUri 下一次请求的uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextResultUri() const;

                    /**
                     * 判断参数 NextResultUri 是否已赋值
                     * @return NextResultUri 是否已赋值
                     * 
                     */
                    bool NextResultUriHasBeenSet() const;

                private:

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 返回类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * 是否DQL结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isQueryResult;
                    bool m_isQueryResultHasBeenSet;

                    /**
                     * 结果类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultKind;
                    bool m_resultKindHasBeenSet;

                    /**
                     * 结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatementResult m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 下一次请求的uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextResultUri;
                    bool m_nextResultUriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_FETCHSQLGATEWAYSTATEMENTRESULTRESPONSE_H_
