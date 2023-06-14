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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_FINANBILLOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_FINANBILLOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FinanBillInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * FinanBillOCR返回参数结构体
                */
                class FinanBillOCRResponse : public AbstractModel
                {
                public:
                    FinanBillOCRResponse();
                    ~FinanBillOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取金融票据整单识别结果，具体内容请点击左侧链接。
                     * @return FinanBillInfos 金融票据整单识别结果，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<FinanBillInfo> GetFinanBillInfos() const;

                    /**
                     * 判断参数 FinanBillInfos 是否已赋值
                     * @return FinanBillInfos 是否已赋值
                     * 
                     */
                    bool FinanBillInfosHasBeenSet() const;

                private:

                    /**
                     * 金融票据整单识别结果，具体内容请点击左侧链接。
                     */
                    std::vector<FinanBillInfo> m_finanBillInfos;
                    bool m_finanBillInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_FINANBILLOCRRESPONSE_H_
