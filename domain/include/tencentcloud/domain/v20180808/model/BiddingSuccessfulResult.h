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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGSUCCESSFULRESULT_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGSUCCESSFULRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 我得标的域名结构体。
                */
                class BiddingSuccessfulResult : public AbstractModel
                {
                public:
                    BiddingSuccessfulResult();
                    ~BiddingSuccessfulResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * @return PayEndTime 支付结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetPayEndTime() const;

                    /**
                     * 设置支付结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * @param _payEndTime 支付结束时间
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetPayEndTime(const std::string& _payEndTime);

                    /**
                     * 判断参数 PayEndTime 是否已赋值
                     * @return PayEndTime 是否已赋值
                     * 
                     */
                    bool PayEndTimeHasBeenSet() const;

                private:

                    /**
                     * 支付结束时间
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_payEndTime;
                    bool m_payEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BIDDINGSUCCESSFULRESULT_H_
