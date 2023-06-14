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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTRATECONFIGURERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTRATECONFIGURERESULT_H_

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
                * 子商户费率配置查询结果
                */
                class QueryOpenBankSubMerchantRateConfigureResult : public AbstractModel
                {
                public:
                    QueryOpenBankSubMerchantRateConfigureResult();
                    ~QueryOpenBankSubMerchantRateConfigureResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处理状态 
SUCCESS: 开通成功 
FAILED: 开通失败
PROCESSING: 开通中
                     * @return DealStatus 处理状态 
SUCCESS: 开通成功 
FAILED: 开通失败
PROCESSING: 开通中
                     * 
                     */
                    std::string GetDealStatus() const;

                    /**
                     * 设置处理状态 
SUCCESS: 开通成功 
FAILED: 开通失败
PROCESSING: 开通中
                     * @param _dealStatus 处理状态 
SUCCESS: 开通成功 
FAILED: 开通失败
PROCESSING: 开通中
                     * 
                     */
                    void SetDealStatus(const std::string& _dealStatus);

                    /**
                     * 判断参数 DealStatus 是否已赋值
                     * @return DealStatus 是否已赋值
                     * 
                     */
                    bool DealStatusHasBeenSet() const;

                    /**
                     * 获取处理描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealMessage 处理描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDealMessage() const;

                    /**
                     * 设置处理描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dealMessage 处理描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDealMessage(const std::string& _dealMessage);

                    /**
                     * 判断参数 DealMessage 是否已赋值
                     * @return DealMessage 是否已赋值
                     * 
                     */
                    bool DealMessageHasBeenSet() const;

                private:

                    /**
                     * 处理状态 
SUCCESS: 开通成功 
FAILED: 开通失败
PROCESSING: 开通中
                     */
                    std::string m_dealStatus;
                    bool m_dealStatusHasBeenSet;

                    /**
                     * 处理描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealMessage;
                    bool m_dealMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYOPENBANKSUBMERCHANTRATECONFIGURERESULT_H_
