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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/OtherInvoiceItem.h>
#include <tencentcloud/ocr/v20181119/model/OtherInvoiceList.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 其他发票
                */
                class OtherInvoice : public AbstractModel
                {
                public:
                    OtherInvoice();
                    ~OtherInvoice() = default;
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
                     * 获取金额
                     * @return Total 金额
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置金额
                     * @param _total 金额
                     * 
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取列表
                     * @return OtherInvoiceListItems 列表
                     * 
                     */
                    std::vector<OtherInvoiceItem> GetOtherInvoiceListItems() const;

                    /**
                     * 设置列表
                     * @param _otherInvoiceListItems 列表
                     * 
                     */
                    void SetOtherInvoiceListItems(const std::vector<OtherInvoiceItem>& _otherInvoiceListItems);

                    /**
                     * 判断参数 OtherInvoiceListItems 是否已赋值
                     * @return OtherInvoiceListItems 是否已赋值
                     * 
                     */
                    bool OtherInvoiceListItemsHasBeenSet() const;

                    /**
                     * 获取表格
                     * @return OtherInvoiceTableItems 表格
                     * 
                     */
                    std::vector<OtherInvoiceList> GetOtherInvoiceTableItems() const;

                    /**
                     * 设置表格
                     * @param _otherInvoiceTableItems 表格
                     * 
                     */
                    void SetOtherInvoiceTableItems(const std::vector<OtherInvoiceList>& _otherInvoiceTableItems);

                    /**
                     * 判断参数 OtherInvoiceTableItems 是否已赋值
                     * @return OtherInvoiceTableItems 是否已赋值
                     * 
                     */
                    bool OtherInvoiceTableItemsHasBeenSet() const;

                    /**
                     * 获取发票日期
                     * @return Date 发票日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置发票日期
                     * @param _date 发票日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 金额
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 列表
                     */
                    std::vector<OtherInvoiceItem> m_otherInvoiceListItems;
                    bool m_otherInvoiceListItemsHasBeenSet;

                    /**
                     * 表格
                     */
                    std::vector<OtherInvoiceList> m_otherInvoiceTableItems;
                    bool m_otherInvoiceTableItemsHasBeenSet;

                    /**
                     * 发票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICE_H_
