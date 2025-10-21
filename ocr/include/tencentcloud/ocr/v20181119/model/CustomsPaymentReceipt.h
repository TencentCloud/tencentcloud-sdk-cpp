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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CUSTOMSPAYMENTRECEIPT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CUSTOMSPAYMENTRECEIPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/OtherInvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 海关缴款书
                */
                class CustomsPaymentReceipt : public AbstractModel
                {
                public:
                    CustomsPaymentReceipt();
                    ~CustomsPaymentReceipt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票名称
                     * @return Title 发票名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置发票名称
                     * @param _title 发票名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取识别出的字段名称(关键字)，支持以下字段： 税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。 示例值：纳税人识别号
                     * @return Content 识别出的字段名称(关键字)，支持以下字段： 税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。 示例值：纳税人识别号
                     * 
                     */
                    std::vector<OtherInvoiceItem> GetContent() const;

                    /**
                     * 设置识别出的字段名称(关键字)，支持以下字段： 税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。 示例值：纳税人识别号
                     * @param _content 识别出的字段名称(关键字)，支持以下字段： 税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。 示例值：纳税人识别号
                     * 
                     */
                    void SetContent(const std::vector<OtherInvoiceItem>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取海关缴款书常用字段
                     * @return CommonContent 海关缴款书常用字段
                     * 
                     */
                    std::vector<OtherInvoiceItem> GetCommonContent() const;

                    /**
                     * 设置海关缴款书常用字段
                     * @param _commonContent 海关缴款书常用字段
                     * 
                     */
                    void SetCommonContent(const std::vector<OtherInvoiceItem>& _commonContent);

                    /**
                     * 判断参数 CommonContent 是否已赋值
                     * @return CommonContent 是否已赋值
                     * 
                     */
                    bool CommonContentHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 识别出的字段名称(关键字)，支持以下字段： 税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。 示例值：纳税人识别号
                     */
                    std::vector<OtherInvoiceItem> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 海关缴款书常用字段
                     */
                    std::vector<OtherInvoiceItem> m_commonContent;
                    bool m_commonContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CUSTOMSPAYMENTRECEIPT_H_
