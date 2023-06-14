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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_TRADEMARKDATA_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_TRADEMARKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * 商标响应数据
                */
                class TrademarkData : public AbstractModel
                {
                public:
                    TrademarkData();
                    ~TrademarkData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商标证明
                     * @return Trademark 商标证明
                     * 
                     */
                    std::string GetTrademark() const;

                    /**
                     * 设置商标证明
                     * @param _trademark 商标证明
                     * 
                     */
                    void SetTrademark(const std::string& _trademark);

                    /**
                     * 判断参数 Trademark 是否已赋值
                     * @return Trademark 是否已赋值
                     * 
                     */
                    bool TrademarkHasBeenSet() const;

                    /**
                     * 获取商标审核状态
                     * @return TrademarkStatus 商标审核状态
                     * 
                     */
                    int64_t GetTrademarkStatus() const;

                    /**
                     * 设置商标审核状态
                     * @param _trademarkStatus 商标审核状态
                     * 
                     */
                    void SetTrademarkStatus(const int64_t& _trademarkStatus);

                    /**
                     * 判断参数 TrademarkStatus 是否已赋值
                     * @return TrademarkStatus 是否已赋值
                     * 
                     */
                    bool TrademarkStatusHasBeenSet() const;

                    /**
                     * 获取商标审核状态说明
                     * @return TrademarkNote 商标审核状态说明
                     * 
                     */
                    std::string GetTrademarkNote() const;

                    /**
                     * 设置商标审核状态说明
                     * @param _trademarkNote 商标审核状态说明
                     * 
                     */
                    void SetTrademarkNote(const std::string& _trademarkNote);

                    /**
                     * 判断参数 TrademarkNote 是否已赋值
                     * @return TrademarkNote 是否已赋值
                     * 
                     */
                    bool TrademarkNoteHasBeenSet() const;

                    /**
                     * 获取商标id
                     * @return TrademarkId 商标id
                     * 
                     */
                    int64_t GetTrademarkId() const;

                    /**
                     * 设置商标id
                     * @param _trademarkId 商标id
                     * 
                     */
                    void SetTrademarkId(const int64_t& _trademarkId);

                    /**
                     * 判断参数 TrademarkId 是否已赋值
                     * @return TrademarkId 是否已赋值
                     * 
                     */
                    bool TrademarkIdHasBeenSet() const;

                    /**
                     * 获取商标转让书
                     * @return Transfer 商标转让书
                     * 
                     */
                    std::string GetTransfer() const;

                    /**
                     * 设置商标转让书
                     * @param _transfer 商标转让书
                     * 
                     */
                    void SetTransfer(const std::string& _transfer);

                    /**
                     * 判断参数 Transfer 是否已赋值
                     * @return Transfer 是否已赋值
                     * 
                     */
                    bool TransferHasBeenSet() const;

                    /**
                     * 获取商标转让书审核状态
                     * @return TransferStatus 商标转让书审核状态
                     * 
                     */
                    int64_t GetTransferStatus() const;

                    /**
                     * 设置商标转让书审核状态
                     * @param _transferStatus 商标转让书审核状态
                     * 
                     */
                    void SetTransferStatus(const int64_t& _transferStatus);

                    /**
                     * 判断参数 TransferStatus 是否已赋值
                     * @return TransferStatus 是否已赋值
                     * 
                     */
                    bool TransferStatusHasBeenSet() const;

                    /**
                     * 获取商标转让书审核状态说明
                     * @return TransferNote 商标转让书审核状态说明
                     * 
                     */
                    std::string GetTransferNote() const;

                    /**
                     * 设置商标转让书审核状态说明
                     * @param _transferNote 商标转让书审核状态说明
                     * 
                     */
                    void SetTransferNote(const std::string& _transferNote);

                    /**
                     * 判断参数 TransferNote 是否已赋值
                     * @return TransferNote 是否已赋值
                     * 
                     */
                    bool TransferNoteHasBeenSet() const;

                    /**
                     * 获取商标名称
                     * @return TrademarkName 商标名称
                     * 
                     */
                    std::string GetTrademarkName() const;

                    /**
                     * 设置商标名称
                     * @param _trademarkName 商标名称
                     * 
                     */
                    void SetTrademarkName(const std::string& _trademarkName);

                    /**
                     * 判断参数 TrademarkName 是否已赋值
                     * @return TrademarkName 是否已赋值
                     * 
                     */
                    bool TrademarkNameHasBeenSet() const;

                private:

                    /**
                     * 商标证明
                     */
                    std::string m_trademark;
                    bool m_trademarkHasBeenSet;

                    /**
                     * 商标审核状态
                     */
                    int64_t m_trademarkStatus;
                    bool m_trademarkStatusHasBeenSet;

                    /**
                     * 商标审核状态说明
                     */
                    std::string m_trademarkNote;
                    bool m_trademarkNoteHasBeenSet;

                    /**
                     * 商标id
                     */
                    int64_t m_trademarkId;
                    bool m_trademarkIdHasBeenSet;

                    /**
                     * 商标转让书
                     */
                    std::string m_transfer;
                    bool m_transferHasBeenSet;

                    /**
                     * 商标转让书审核状态
                     */
                    int64_t m_transferStatus;
                    bool m_transferStatusHasBeenSet;

                    /**
                     * 商标转让书审核状态说明
                     */
                    std::string m_transferNote;
                    bool m_transferNoteHasBeenSet;

                    /**
                     * 商标名称
                     */
                    std::string m_trademarkName;
                    bool m_trademarkNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_TRADEMARKDATA_H_
