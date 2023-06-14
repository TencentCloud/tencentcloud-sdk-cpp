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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSETTLEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSETTLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 结算信息对象
                */
                class CloudSettleInfo : public AbstractModel
                {
                public:
                    CloudSettleInfo();
                    ~CloudSettleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否需要支付确认。
0: 不需要支付确认
1: 需要支付确认
传1时，需要在支付完成后成功调用了《支付确认》接口，该笔订单才会被清分出去
                     * @return NeedToBeConfirmed 是否需要支付确认。
0: 不需要支付确认
1: 需要支付确认
传1时，需要在支付完成后成功调用了《支付确认》接口，该笔订单才会被清分出去
                     * 
                     */
                    int64_t GetNeedToBeConfirmed() const;

                    /**
                     * 设置是否需要支付确认。
0: 不需要支付确认
1: 需要支付确认
传1时，需要在支付完成后成功调用了《支付确认》接口，该笔订单才会被清分出去
                     * @param _needToBeConfirmed 是否需要支付确认。
0: 不需要支付确认
1: 需要支付确认
传1时，需要在支付完成后成功调用了《支付确认》接口，该笔订单才会被清分出去
                     * 
                     */
                    void SetNeedToBeConfirmed(const int64_t& _needToBeConfirmed);

                    /**
                     * 判断参数 NeedToBeConfirmed 是否已赋值
                     * @return NeedToBeConfirmed 是否已赋值
                     * 
                     */
                    bool NeedToBeConfirmedHasBeenSet() const;

                    /**
                     * 获取是否指定分账。
0: 不指定分账
1: 指定分账
                     * @return ProfitSharing 是否指定分账。
0: 不指定分账
1: 指定分账
                     * 
                     */
                    int64_t GetProfitSharing() const;

                    /**
                     * 设置是否指定分账。
0: 不指定分账
1: 指定分账
                     * @param _profitSharing 是否指定分账。
0: 不指定分账
1: 指定分账
                     * 
                     */
                    void SetProfitSharing(const int64_t& _profitSharing);

                    /**
                     * 判断参数 ProfitSharing 是否已赋值
                     * @return ProfitSharing 是否已赋值
                     * 
                     */
                    bool ProfitSharingHasBeenSet() const;

                private:

                    /**
                     * 是否需要支付确认。
0: 不需要支付确认
1: 需要支付确认
传1时，需要在支付完成后成功调用了《支付确认》接口，该笔订单才会被清分出去
                     */
                    int64_t m_needToBeConfirmed;
                    bool m_needToBeConfirmedHasBeenSet;

                    /**
                     * 是否指定分账。
0: 不指定分账
1: 指定分账
                     */
                    int64_t m_profitSharing;
                    bool m_profitSharingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSETTLEINFO_H_
