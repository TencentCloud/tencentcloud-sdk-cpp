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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILBYDATERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILBYDATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/DetailSet.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDosageDetailByDate返回参数结构体
                */
                class DescribeDosageDetailByDateResponse : public AbstractModel
                {
                public:
                    DescribeDosageDetailByDateResponse();
                    ~DescribeDosageDetailByDateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计量单位
                     * @return Unit 计量单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取用量数组
                     * @return DetailSets 用量数组
                     * 
                     */
                    std::vector<DetailSet> GetDetailSets() const;

                    /**
                     * 判断参数 DetailSets 是否已赋值
                     * @return DetailSets 是否已赋值
                     * 
                     */
                    bool DetailSetsHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return RetCode 错误码
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return RetMsg 错误信息
                     * 
                     */
                    std::string GetRetMsg() const;

                    /**
                     * 判断参数 RetMsg 是否已赋值
                     * @return RetMsg 是否已赋值
                     * 
                     */
                    bool RetMsgHasBeenSet() const;

                private:

                    /**
                     * 计量单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 用量数组
                     */
                    std::vector<DetailSet> m_detailSets;
                    bool m_detailSetsHasBeenSet;

                    /**
                     * 错误码
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_retMsg;
                    bool m_retMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAILBYDATERESPONSE_H_
