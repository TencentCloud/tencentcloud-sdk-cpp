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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICELIST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICELIST_H_

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
                * 其他票Table
                */
                class OtherInvoiceList : public AbstractModel
                {
                public:
                    OtherInvoiceList();
                    ~OtherInvoiceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列表
                     * @return OtherInvoiceItemList 列表
                     * 
                     */
                    std::vector<OtherInvoiceItem> GetOtherInvoiceItemList() const;

                    /**
                     * 设置列表
                     * @param _otherInvoiceItemList 列表
                     * 
                     */
                    void SetOtherInvoiceItemList(const std::vector<OtherInvoiceItem>& _otherInvoiceItemList);

                    /**
                     * 判断参数 OtherInvoiceItemList 是否已赋值
                     * @return OtherInvoiceItemList 是否已赋值
                     * 
                     */
                    bool OtherInvoiceItemListHasBeenSet() const;

                private:

                    /**
                     * 列表
                     */
                    std::vector<OtherInvoiceItem> m_otherInvoiceItemList;
                    bool m_otherInvoiceItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_OTHERINVOICELIST_H_
