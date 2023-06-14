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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEDETECTRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEDETECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/InvoiceDetectInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * MixedInvoiceDetect返回参数结构体
                */
                class MixedInvoiceDetectResponse : public AbstractModel
                {
                public:
                    MixedInvoiceDetectResponse();
                    ~MixedInvoiceDetectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测出的票据类型列表，具体内容请点击左侧链接。
                     * @return InvoiceDetectInfos 检测出的票据类型列表，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<InvoiceDetectInfo> GetInvoiceDetectInfos() const;

                    /**
                     * 判断参数 InvoiceDetectInfos 是否已赋值
                     * @return InvoiceDetectInfos 是否已赋值
                     * 
                     */
                    bool InvoiceDetectInfosHasBeenSet() const;

                private:

                    /**
                     * 检测出的票据类型列表，具体内容请点击左侧链接。
                     */
                    std::vector<InvoiceDetectInfo> m_invoiceDetectInfos;
                    bool m_invoiceDetectInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEDETECTRESPONSE_H_
