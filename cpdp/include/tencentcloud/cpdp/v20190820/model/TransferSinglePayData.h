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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERSINGLEPAYDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERSINGLEPAYDATA_H_

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
                * 智能代发-单笔代发转账接口返回数据
                */
                class TransferSinglePayData : public AbstractModel
                {
                public:
                    TransferSinglePayData();
                    ~TransferSinglePayData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台交易流水号，唯一
                     * @return TradeSerialNo 平台交易流水号，唯一
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置平台交易流水号，唯一
                     * @param _tradeSerialNo 平台交易流水号，唯一
                     * 
                     */
                    void SetTradeSerialNo(const std::string& _tradeSerialNo);

                    /**
                     * 判断参数 TradeSerialNo 是否已赋值
                     * @return TradeSerialNo 是否已赋值
                     * 
                     */
                    bool TradeSerialNoHasBeenSet() const;

                private:

                    /**
                     * 平台交易流水号，唯一
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TRANSFERSINGLEPAYDATA_H_
