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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_QUERYANTIFRAUDRESPONSE_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_QUERYANTIFRAUDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/af/v20200226/model/RiskDetail.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * QueryAntiFraud返回参数结构体
                */
                class QueryAntiFraudResponse : public AbstractModel
                {
                public:
                    QueryAntiFraudResponse();
                    ~QueryAntiFraudResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表示该条记录能否查到：1为能查到，-1为查不到
                     * @return Found 表示该条记录能否查到：1为能查到，-1为查不到
                     * 
                     */
                    int64_t GetFound() const;

                    /**
                     * 判断参数 Found 是否已赋值
                     * @return Found 是否已赋值
                     * 
                     */
                    bool FoundHasBeenSet() const;

                    /**
                     * 获取表示该条Id能否查到：1为能查到，-1为查不到
                     * @return IdFound 表示该条Id能否查到：1为能查到，-1为查不到
                     * 
                     */
                    int64_t GetIdFound() const;

                    /**
                     * 判断参数 IdFound 是否已赋值
                     * @return IdFound 是否已赋值
                     * 
                     */
                    bool IdFoundHasBeenSet() const;

                    /**
                     * 获取0~100;值越高 欺诈可能性越大（注：该字段真实类型为有符号整型）
                     * @return RiskScore 0~100;值越高 欺诈可能性越大（注：该字段真实类型为有符号整型）
                     * 
                     */
                    uint64_t GetRiskScore() const;

                    /**
                     * 判断参数 RiskScore 是否已赋值
                     * @return RiskScore 是否已赋值
                     * 
                     */
                    bool RiskScoreHasBeenSet() const;

                    /**
                     * 获取扩展字段，对风险类型的说明
                     * @return RiskInfo 扩展字段，对风险类型的说明
                     * 
                     */
                    std::vector<RiskDetail> GetRiskInfo() const;

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     * 
                     */
                    bool RiskInfoHasBeenSet() const;

                    /**
                     * 获取业务侧错误码。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeDesc 业务侧错误码。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeDesc() const;

                    /**
                     * 判断参数 CodeDesc 是否已赋值
                     * @return CodeDesc 是否已赋值
                     * 
                     */
                    bool CodeDescHasBeenSet() const;

                private:

                    /**
                     * 表示该条记录能否查到：1为能查到，-1为查不到
                     */
                    int64_t m_found;
                    bool m_foundHasBeenSet;

                    /**
                     * 表示该条Id能否查到：1为能查到，-1为查不到
                     */
                    int64_t m_idFound;
                    bool m_idFoundHasBeenSet;

                    /**
                     * 0~100;值越高 欺诈可能性越大（注：该字段真实类型为有符号整型）
                     */
                    uint64_t m_riskScore;
                    bool m_riskScoreHasBeenSet;

                    /**
                     * 扩展字段，对风险类型的说明
                     */
                    std::vector<RiskDetail> m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                    /**
                     * 业务侧错误码。成功时返回Success，错误时返回具体业务错误原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeDesc;
                    bool m_codeDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_QUERYANTIFRAUDRESPONSE_H_
