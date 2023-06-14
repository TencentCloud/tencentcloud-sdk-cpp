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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/CosDetailSets.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDosageCosDetailByDate返回参数结构体
                */
                class DescribeDosageCosDetailByDateResponse : public AbstractModel
                {
                public:
                    DescribeDosageCosDetailByDateResponse();
                    ~DescribeDosageCosDetailByDateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用量数组
                     * @return DetailSets 用量数组
                     * 
                     */
                    std::vector<CosDetailSets> GetDetailSets() const;

                    /**
                     * 判断参数 DetailSets 是否已赋值
                     * @return DetailSets 是否已赋值
                     * 
                     */
                    bool DetailSetsHasBeenSet() const;

                private:

                    /**
                     * 用量数组
                     */
                    std::vector<CosDetailSets> m_detailSets;
                    bool m_detailSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATERESPONSE_H_
