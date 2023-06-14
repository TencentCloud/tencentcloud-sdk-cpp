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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHARERESPINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHARERESPINFO_H_

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
                * 分账信息结果
                */
                class OpenBankProfitShareRespInfo : public AbstractModel
                {
                public:
                    OpenBankProfitShareRespInfo();
                    ~OpenBankProfitShareRespInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接收方企业ID
                     * @return RecvId 接收方企业ID
                     * 
                     */
                    std::string GetRecvId() const;

                    /**
                     * 设置接收方企业ID
                     * @param _recvId 接收方企业ID
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
                     * 获取分润金额（分）
                     * @return ProfitShareFee 分润金额（分）
                     * 
                     */
                    int64_t GetProfitShareFee() const;

                    /**
                     * 设置分润金额（分）
                     * @param _profitShareFee 分润金额（分）
                     * 
                     */
                    void SetProfitShareFee(const int64_t& _profitShareFee);

                    /**
                     * 判断参数 ProfitShareFee 是否已赋值
                     * @return ProfitShareFee 是否已赋值
                     * 
                     */
                    bool ProfitShareFeeHasBeenSet() const;

                    /**
                     * 获取实际分账金额
                     * @return RealProfitShareFee 实际分账金额
                     * 
                     */
                    int64_t GetRealProfitShareFee() const;

                    /**
                     * 设置实际分账金额
                     * @param _realProfitShareFee 实际分账金额
                     * 
                     */
                    void SetRealProfitShareFee(const int64_t& _realProfitShareFee);

                    /**
                     * 判断参数 RealProfitShareFee 是否已赋值
                     * @return RealProfitShareFee 是否已赋值
                     * 
                     */
                    bool RealProfitShareFeeHasBeenSet() const;

                    /**
                     * 获取分账状态
                     * @return ProfitShareStatus 分账状态
                     * 
                     */
                    std::string GetProfitShareStatus() const;

                    /**
                     * 设置分账状态
                     * @param _profitShareStatus 分账状态
                     * 
                     */
                    void SetProfitShareStatus(const std::string& _profitShareStatus);

                    /**
                     * 判断参数 ProfitShareStatus 是否已赋值
                     * @return ProfitShareStatus 是否已赋值
                     * 
                     */
                    bool ProfitShareStatusHasBeenSet() const;

                    /**
                     * 获取分账完成时间
                     * @return ProfitFinishTime 分账完成时间
                     * 
                     */
                    std::string GetProfitFinishTime() const;

                    /**
                     * 设置分账完成时间
                     * @param _profitFinishTime 分账完成时间
                     * 
                     */
                    void SetProfitFinishTime(const std::string& _profitFinishTime);

                    /**
                     * 判断参数 ProfitFinishTime 是否已赋值
                     * @return ProfitFinishTime 是否已赋值
                     * 
                     */
                    bool ProfitFinishTimeHasBeenSet() const;

                    /**
                     * 获取分账类型
                     * @return ProfitShareType 分账类型
                     * 
                     */
                    int64_t GetProfitShareType() const;

                    /**
                     * 设置分账类型
                     * @param _profitShareType 分账类型
                     * 
                     */
                    void SetProfitShareType(const int64_t& _profitShareType);

                    /**
                     * 判断参数 ProfitShareType 是否已赋值
                     * @return ProfitShareType 是否已赋值
                     * 
                     */
                    bool ProfitShareTypeHasBeenSet() const;

                private:

                    /**
                     * 接收方企业ID
                     */
                    std::string m_recvId;
                    bool m_recvIdHasBeenSet;

                    /**
                     * 分润金额（分）
                     */
                    int64_t m_profitShareFee;
                    bool m_profitShareFeeHasBeenSet;

                    /**
                     * 实际分账金额
                     */
                    int64_t m_realProfitShareFee;
                    bool m_realProfitShareFeeHasBeenSet;

                    /**
                     * 分账状态
                     */
                    std::string m_profitShareStatus;
                    bool m_profitShareStatusHasBeenSet;

                    /**
                     * 分账完成时间
                     */
                    std::string m_profitFinishTime;
                    bool m_profitFinishTimeHasBeenSet;

                    /**
                     * 分账类型
                     */
                    int64_t m_profitShareType;
                    bool m_profitShareTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKPROFITSHARERESPINFO_H_
