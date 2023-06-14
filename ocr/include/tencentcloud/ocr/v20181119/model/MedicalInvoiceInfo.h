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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/MedicalInvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 医疗发票识别结果
                */
                class MedicalInvoiceInfo : public AbstractModel
                {
                public:
                    MedicalInvoiceInfo();
                    ~MedicalInvoiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取医疗发票识别结果条目
                     * @return MedicalInvoiceItems 医疗发票识别结果条目
                     * 
                     */
                    std::vector<MedicalInvoiceItem> GetMedicalInvoiceItems() const;

                    /**
                     * 设置医疗发票识别结果条目
                     * @param _medicalInvoiceItems 医疗发票识别结果条目
                     * 
                     */
                    void SetMedicalInvoiceItems(const std::vector<MedicalInvoiceItem>& _medicalInvoiceItems);

                    /**
                     * 判断参数 MedicalInvoiceItems 是否已赋值
                     * @return MedicalInvoiceItems 是否已赋值
                     * 
                     */
                    bool MedicalInvoiceItemsHasBeenSet() const;

                private:

                    /**
                     * 医疗发票识别结果条目
                     */
                    std::vector<MedicalInvoiceItem> m_medicalInvoiceItems;
                    bool m_medicalInvoiceItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICEINFO_H_
