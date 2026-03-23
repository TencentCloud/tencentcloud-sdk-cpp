/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTWAYBILL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTWAYBILL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/WaybillObj.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 运单识别结果
                */
                class TextWaybill : public AbstractModel
                {
                public:
                    TextWaybill();
                    ~TextWaybill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>收件人姓名</p>
                     * @return RecName <p>收件人姓名</p>
                     * 
                     */
                    WaybillObj GetRecName() const;

                    /**
                     * 设置<p>收件人姓名</p>
                     * @param _recName <p>收件人姓名</p>
                     * 
                     */
                    void SetRecName(const WaybillObj& _recName);

                    /**
                     * 判断参数 RecName 是否已赋值
                     * @return RecName 是否已赋值
                     * 
                     */
                    bool RecNameHasBeenSet() const;

                    /**
                     * 获取<p>收件人手机号</p>
                     * @return RecNum <p>收件人手机号</p>
                     * 
                     */
                    WaybillObj GetRecNum() const;

                    /**
                     * 设置<p>收件人手机号</p>
                     * @param _recNum <p>收件人手机号</p>
                     * 
                     */
                    void SetRecNum(const WaybillObj& _recNum);

                    /**
                     * 判断参数 RecNum 是否已赋值
                     * @return RecNum 是否已赋值
                     * 
                     */
                    bool RecNumHasBeenSet() const;

                    /**
                     * 获取<p>收件人地址</p>
                     * @return RecAddr <p>收件人地址</p>
                     * 
                     */
                    WaybillObj GetRecAddr() const;

                    /**
                     * 设置<p>收件人地址</p>
                     * @param _recAddr <p>收件人地址</p>
                     * 
                     */
                    void SetRecAddr(const WaybillObj& _recAddr);

                    /**
                     * 判断参数 RecAddr 是否已赋值
                     * @return RecAddr 是否已赋值
                     * 
                     */
                    bool RecAddrHasBeenSet() const;

                    /**
                     * 获取<p>寄件人姓名</p>
                     * @return SenderName <p>寄件人姓名</p>
                     * 
                     */
                    WaybillObj GetSenderName() const;

                    /**
                     * 设置<p>寄件人姓名</p>
                     * @param _senderName <p>寄件人姓名</p>
                     * 
                     */
                    void SetSenderName(const WaybillObj& _senderName);

                    /**
                     * 判断参数 SenderName 是否已赋值
                     * @return SenderName 是否已赋值
                     * 
                     */
                    bool SenderNameHasBeenSet() const;

                    /**
                     * 获取<p>寄件人手机号</p>
                     * @return SenderNum <p>寄件人手机号</p>
                     * 
                     */
                    WaybillObj GetSenderNum() const;

                    /**
                     * 设置<p>寄件人手机号</p>
                     * @param _senderNum <p>寄件人手机号</p>
                     * 
                     */
                    void SetSenderNum(const WaybillObj& _senderNum);

                    /**
                     * 判断参数 SenderNum 是否已赋值
                     * @return SenderNum 是否已赋值
                     * 
                     */
                    bool SenderNumHasBeenSet() const;

                    /**
                     * 获取<p>寄件人地址</p>
                     * @return SenderAddr <p>寄件人地址</p>
                     * 
                     */
                    WaybillObj GetSenderAddr() const;

                    /**
                     * 设置<p>寄件人地址</p>
                     * @param _senderAddr <p>寄件人地址</p>
                     * 
                     */
                    void SetSenderAddr(const WaybillObj& _senderAddr);

                    /**
                     * 判断参数 SenderAddr 是否已赋值
                     * @return SenderAddr 是否已赋值
                     * 
                     */
                    bool SenderAddrHasBeenSet() const;

                    /**
                     * 获取<p>运单号, 当同时存在 母 / 子 运单号时， 该字段为子运单号</p>
                     * @return WaybillNum <p>运单号, 当同时存在 母 / 子 运单号时， 该字段为子运单号</p>
                     * 
                     */
                    WaybillObj GetWaybillNum() const;

                    /**
                     * 设置<p>运单号, 当同时存在 母 / 子 运单号时， 该字段为子运单号</p>
                     * @param _waybillNum <p>运单号, 当同时存在 母 / 子 运单号时， 该字段为子运单号</p>
                     * 
                     */
                    void SetWaybillNum(const WaybillObj& _waybillNum);

                    /**
                     * 判断参数 WaybillNum 是否已赋值
                     * @return WaybillNum 是否已赋值
                     * 
                     */
                    bool WaybillNumHasBeenSet() const;

                    /**
                     * 获取<p>母运单号， 当不存在母运单号时， 该字段为不存在</p>
                     * @return MainWaybillNum <p>母运单号， 当不存在母运单号时， 该字段为不存在</p>
                     * 
                     */
                    WaybillObj GetMainWaybillNum() const;

                    /**
                     * 设置<p>母运单号， 当不存在母运单号时， 该字段为不存在</p>
                     * @param _mainWaybillNum <p>母运单号， 当不存在母运单号时， 该字段为不存在</p>
                     * 
                     */
                    void SetMainWaybillNum(const WaybillObj& _mainWaybillNum);

                    /**
                     * 判断参数 MainWaybillNum 是否已赋值
                     * @return MainWaybillNum 是否已赋值
                     * 
                     */
                    bool MainWaybillNumHasBeenSet() const;

                private:

                    /**
                     * <p>收件人姓名</p>
                     */
                    WaybillObj m_recName;
                    bool m_recNameHasBeenSet;

                    /**
                     * <p>收件人手机号</p>
                     */
                    WaybillObj m_recNum;
                    bool m_recNumHasBeenSet;

                    /**
                     * <p>收件人地址</p>
                     */
                    WaybillObj m_recAddr;
                    bool m_recAddrHasBeenSet;

                    /**
                     * <p>寄件人姓名</p>
                     */
                    WaybillObj m_senderName;
                    bool m_senderNameHasBeenSet;

                    /**
                     * <p>寄件人手机号</p>
                     */
                    WaybillObj m_senderNum;
                    bool m_senderNumHasBeenSet;

                    /**
                     * <p>寄件人地址</p>
                     */
                    WaybillObj m_senderAddr;
                    bool m_senderAddrHasBeenSet;

                    /**
                     * <p>运单号, 当同时存在 母 / 子 运单号时， 该字段为子运单号</p>
                     */
                    WaybillObj m_waybillNum;
                    bool m_waybillNumHasBeenSet;

                    /**
                     * <p>母运单号， 当不存在母运单号时， 该字段为不存在</p>
                     */
                    WaybillObj m_mainWaybillNum;
                    bool m_mainWaybillNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTWAYBILL_H_
