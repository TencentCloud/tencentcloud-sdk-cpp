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
                     * 获取收件人姓名
                     * @return RecName 收件人姓名
                     * 
                     */
                    WaybillObj GetRecName() const;

                    /**
                     * 设置收件人姓名
                     * @param _recName 收件人姓名
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
                     * 获取收件人手机号
                     * @return RecNum 收件人手机号
                     * 
                     */
                    WaybillObj GetRecNum() const;

                    /**
                     * 设置收件人手机号
                     * @param _recNum 收件人手机号
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
                     * 获取收件人地址
                     * @return RecAddr 收件人地址
                     * 
                     */
                    WaybillObj GetRecAddr() const;

                    /**
                     * 设置收件人地址
                     * @param _recAddr 收件人地址
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
                     * 获取寄件人姓名
                     * @return SenderName 寄件人姓名
                     * 
                     */
                    WaybillObj GetSenderName() const;

                    /**
                     * 设置寄件人姓名
                     * @param _senderName 寄件人姓名
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
                     * 获取寄件人手机号
                     * @return SenderNum 寄件人手机号
                     * 
                     */
                    WaybillObj GetSenderNum() const;

                    /**
                     * 设置寄件人手机号
                     * @param _senderNum 寄件人手机号
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
                     * 获取寄件人地址
                     * @return SenderAddr 寄件人地址
                     * 
                     */
                    WaybillObj GetSenderAddr() const;

                    /**
                     * 设置寄件人地址
                     * @param _senderAddr 寄件人地址
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
                     * 获取运单号
                     * @return WaybillNum 运单号
                     * 
                     */
                    WaybillObj GetWaybillNum() const;

                    /**
                     * 设置运单号
                     * @param _waybillNum 运单号
                     * 
                     */
                    void SetWaybillNum(const WaybillObj& _waybillNum);

                    /**
                     * 判断参数 WaybillNum 是否已赋值
                     * @return WaybillNum 是否已赋值
                     * 
                     */
                    bool WaybillNumHasBeenSet() const;

                private:

                    /**
                     * 收件人姓名
                     */
                    WaybillObj m_recName;
                    bool m_recNameHasBeenSet;

                    /**
                     * 收件人手机号
                     */
                    WaybillObj m_recNum;
                    bool m_recNumHasBeenSet;

                    /**
                     * 收件人地址
                     */
                    WaybillObj m_recAddr;
                    bool m_recAddrHasBeenSet;

                    /**
                     * 寄件人姓名
                     */
                    WaybillObj m_senderName;
                    bool m_senderNameHasBeenSet;

                    /**
                     * 寄件人手机号
                     */
                    WaybillObj m_senderNum;
                    bool m_senderNumHasBeenSet;

                    /**
                     * 寄件人地址
                     */
                    WaybillObj m_senderAddr;
                    bool m_senderAddrHasBeenSet;

                    /**
                     * 运单号
                     */
                    WaybillObj m_waybillNum;
                    bool m_waybillNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTWAYBILL_H_
