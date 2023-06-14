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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEONLINETAXIITINERARYOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEONLINETAXIITINERARYOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/OnlineTaxiItineraryInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeOnlineTaxiItineraryOCR返回参数结构体
                */
                class RecognizeOnlineTaxiItineraryOCRResponse : public AbstractModel
                {
                public:
                    RecognizeOnlineTaxiItineraryOCRResponse();
                    ~RecognizeOnlineTaxiItineraryOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网约车行程单识别结果，具体内容请点击左侧链接。
                     * @return OnlineTaxiItineraryInfos 网约车行程单识别结果，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<OnlineTaxiItineraryInfo> GetOnlineTaxiItineraryInfos() const;

                    /**
                     * 判断参数 OnlineTaxiItineraryInfos 是否已赋值
                     * @return OnlineTaxiItineraryInfos 是否已赋值
                     * 
                     */
                    bool OnlineTaxiItineraryInfosHasBeenSet() const;

                private:

                    /**
                     * 网约车行程单识别结果，具体内容请点击左侧链接。
                     */
                    std::vector<OnlineTaxiItineraryInfo> m_onlineTaxiItineraryInfos;
                    bool m_onlineTaxiItineraryInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEONLINETAXIITINERARYOCRRESPONSE_H_
