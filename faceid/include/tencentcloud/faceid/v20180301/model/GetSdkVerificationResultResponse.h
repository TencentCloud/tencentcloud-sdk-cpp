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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETSDKVERIFICATIONRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETSDKVERIFICATIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/CardVerifyResult.h>
#include <tencentcloud/faceid/v20180301/model/CompareResult.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetSdkVerificationResult返回参数结构体
                */
                class GetSdkVerificationResultResponse : public AbstractModel
                {
                public:
                    GetSdkVerificationResultResponse();
                    ~GetSdkVerificationResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取整个核验结果
                     * @return Result 整个核验结果
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取结果描述
                     * @return Description 结果描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取计费次数
                     * @return ChargeCount 计费次数
                     */
                    int64_t GetChargeCount() const;

                    /**
                     * 判断参数 ChargeCount 是否已赋值
                     * @return ChargeCount 是否已赋值
                     */
                    bool ChargeCountHasBeenSet() const;

                    /**
                     * 获取多次证照识别的结果（有序），取最终一次结果为有效结果
                     * @return CardVerifyResults 多次证照识别的结果（有序），取最终一次结果为有效结果
                     */
                    std::vector<CardVerifyResult> GetCardVerifyResults() const;

                    /**
                     * 判断参数 CardVerifyResults 是否已赋值
                     * @return CardVerifyResults 是否已赋值
                     */
                    bool CardVerifyResultsHasBeenSet() const;

                    /**
                     * 获取多次活体认证的结果信息（有序），取最终一次结果为有效结果
                     * @return CompareResults 多次活体认证的结果信息（有序），取最终一次结果为有效结果
                     */
                    std::vector<CompareResult> GetCompareResults() const;

                    /**
                     * 判断参数 CompareResults 是否已赋值
                     * @return CompareResults 是否已赋值
                     */
                    bool CompareResultsHasBeenSet() const;

                    /**
                     * 获取获取token时传入的
                     * @return Extra 获取token时传入的
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 整个核验结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 结果描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 计费次数
                     */
                    int64_t m_chargeCount;
                    bool m_chargeCountHasBeenSet;

                    /**
                     * 多次证照识别的结果（有序），取最终一次结果为有效结果
                     */
                    std::vector<CardVerifyResult> m_cardVerifyResults;
                    bool m_cardVerifyResultsHasBeenSet;

                    /**
                     * 多次活体认证的结果信息（有序），取最终一次结果为有效结果
                     */
                    std::vector<CompareResult> m_compareResults;
                    bool m_compareResultsHasBeenSet;

                    /**
                     * 获取token时传入的
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETSDKVERIFICATIONRESULTRESPONSE_H_
