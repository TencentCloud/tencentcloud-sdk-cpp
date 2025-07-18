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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SALEINVENTORY_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SALEINVENTORY_H_

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
                * 销货清单
                */
                class SaleInventory : public AbstractModel
                {
                public:
                    SaleInventory();
                    ~SaleInventory() = default;
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
                     * 获取识别出的字段名称(关键字)
                     * @return Content 识别出的字段名称(关键字)
                     * 
                     */
                    std::vector<OtherInvoiceItem> GetContent() const;

                    /**
                     * 设置识别出的字段名称(关键字)
                     * @param _content 识别出的字段名称(关键字)
                     * 
                     */
                    void SetContent(const std::vector<OtherInvoiceItem>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 识别出的字段名称(关键字)
                     */
                    std::vector<OtherInvoiceItem> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SALEINVENTORY_H_
