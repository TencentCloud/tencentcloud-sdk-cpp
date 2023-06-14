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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUERYBARCODERESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUERYBARCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ProductDataRecord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * QueryBarCode返回参数结构体
                */
                class QueryBarCodeResponse : public AbstractModel
                {
                public:
                    QueryBarCodeResponse();
                    ~QueryBarCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取条码
                     * @return BarCode 条码
                     * 
                     */
                    std::string GetBarCode() const;

                    /**
                     * 判断参数 BarCode 是否已赋值
                     * @return BarCode 是否已赋值
                     * 
                     */
                    bool BarCodeHasBeenSet() const;

                    /**
                     * 获取条码信息数组
                     * @return ProductDataRecords 条码信息数组
                     * 
                     */
                    std::vector<ProductDataRecord> GetProductDataRecords() const;

                    /**
                     * 判断参数 ProductDataRecords 是否已赋值
                     * @return ProductDataRecords 是否已赋值
                     * 
                     */
                    bool ProductDataRecordsHasBeenSet() const;

                private:

                    /**
                     * 条码
                     */
                    std::string m_barCode;
                    bool m_barCodeHasBeenSet;

                    /**
                     * 条码信息数组
                     */
                    std::vector<ProductDataRecord> m_productDataRecords;
                    bool m_productDataRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUERYBARCODERESPONSE_H_
