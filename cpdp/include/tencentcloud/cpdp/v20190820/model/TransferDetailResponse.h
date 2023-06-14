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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERDETAILRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERDETAILRESPONSE_H_

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
                * 批量转账查询返回批次明细实体
                */
                class TransferDetailResponse : public AbstractModel
                {
                public:
                    TransferDetailResponse();
                    ~TransferDetailResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * @return MerchantDetailNo 商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * 
                     */
                    std::string GetMerchantDetailNo() const;

                    /**
                     * 设置商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * @param _merchantDetailNo 商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * 
                     */
                    void SetMerchantDetailNo(const std::string& _merchantDetailNo);

                    /**
                     * 判断参数 MerchantDetailNo 是否已赋值
                     * @return MerchantDetailNo 是否已赋值
                     * 
                     */
                    bool MerchantDetailNoHasBeenSet() const;

                    /**
                     * 获取微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * @return DetailId 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * 
                     */
                    std::string GetDetailId() const;

                    /**
                     * 设置微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * @param _detailId 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * 
                     */
                    void SetDetailId(const std::string& _detailId);

                    /**
                     * 判断参数 DetailId 是否已赋值
                     * @return DetailId 是否已赋值
                     * 
                     */
                    bool DetailIdHasBeenSet() const;

                    /**
                     * 获取明细状态。
PROCESSING：转账中，正在处理，结果未明；
SUCCESS：转账成功；
FAIL：转账失败，需要确认失败原因以后，再决定是否重新发起地该笔明细的转账。
示例值：SUCCESS
                     * @return DetailStatus 明细状态。
PROCESSING：转账中，正在处理，结果未明；
SUCCESS：转账成功；
FAIL：转账失败，需要确认失败原因以后，再决定是否重新发起地该笔明细的转账。
示例值：SUCCESS
                     * 
                     */
                    std::string GetDetailStatus() const;

                    /**
                     * 设置明细状态。
PROCESSING：转账中，正在处理，结果未明；
SUCCESS：转账成功；
FAIL：转账失败，需要确认失败原因以后，再决定是否重新发起地该笔明细的转账。
示例值：SUCCESS
                     * @param _detailStatus 明细状态。
PROCESSING：转账中，正在处理，结果未明；
SUCCESS：转账成功；
FAIL：转账失败，需要确认失败原因以后，再决定是否重新发起地该笔明细的转账。
示例值：SUCCESS
                     * 
                     */
                    void SetDetailStatus(const std::string& _detailStatus);

                    /**
                     * 判断参数 DetailStatus 是否已赋值
                     * @return DetailStatus 是否已赋值
                     * 
                     */
                    bool DetailStatusHasBeenSet() const;

                private:

                    /**
                     * 商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     */
                    std::string m_merchantDetailNo;
                    bool m_merchantDetailNoHasBeenSet;

                    /**
                     * 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     */
                    std::string m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * 明细状态。
PROCESSING：转账中，正在处理，结果未明；
SUCCESS：转账成功；
FAIL：转账失败，需要确认失败原因以后，再决定是否重新发起地该笔明细的转账。
示例值：SUCCESS
                     */
                    std::string m_detailStatus;
                    bool m_detailStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERDETAILRESPONSE_H_
