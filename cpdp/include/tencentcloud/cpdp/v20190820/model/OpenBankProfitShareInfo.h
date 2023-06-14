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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHAREINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHAREINFO_H_

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
                * 云企付-分润信息
                */
                class OpenBankProfitShareInfo : public AbstractModel
                {
                public:
                    OpenBankProfitShareInfo();
                    ~OpenBankProfitShareInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分润接收方，渠道商户号ID
                     * @return RecvId 分润接收方，渠道商户号ID
                     * 
                     */
                    std::string GetRecvId() const;

                    /**
                     * 设置分润接收方，渠道商户号ID
                     * @param _recvId 分润接收方，渠道商户号ID
                     * 
                     */
                    void SetRecvId(const std::string& _recvId);

                    /**
                     * 判断参数 RecvId 是否已赋值
                     * @return RecvId 是否已赋值
                     * 
                     */
                    bool RecvIdHasBeenSet() const;

                    /**
                     * 获取分润金额，单位分
                     * @return ProfitShareFee 分润金额，单位分
                     * 
                     */
                    int64_t GetProfitShareFee() const;

                    /**
                     * 设置分润金额，单位分
                     * @param _profitShareFee 分润金额，单位分
                     * 
                     */
                    void SetProfitShareFee(const int64_t& _profitShareFee);

                    /**
                     * 判断参数 ProfitShareFee 是否已赋值
                     * @return ProfitShareFee 是否已赋值
                     * 
                     */
                    bool ProfitShareFeeHasBeenSet() const;

                private:

                    /**
                     * 分润接收方，渠道商户号ID
                     */
                    std::string m_recvId;
                    bool m_recvIdHasBeenSet;

                    /**
                     * 分润金额，单位分
                     */
                    int64_t m_profitShareFee;
                    bool m_profitShareFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHAREINFO_H_
