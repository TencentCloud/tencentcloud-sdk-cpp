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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRRESULTREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GetOCRResult请求参数结构体
                */
                class GetOCRResultRequest : public AbstractModel
                {
                public:
                    GetOCRResultRequest();
                    ~GetOCRResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取token值
                     * @return OCRToken token值
                     * 
                     */
                    std::string GetOCRToken() const;

                    /**
                     * 设置token值
                     * @param _oCRToken token值
                     * 
                     */
                    void SetOCRToken(const std::string& _oCRToken);

                    /**
                     * 判断参数 OCRToken 是否已赋值
                     * @return OCRToken 是否已赋值
                     * 
                     */
                    bool OCRTokenHasBeenSet() const;

                private:

                    /**
                     * token值
                     */
                    std::string m_oCRToken;
                    bool m_oCRTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GETOCRRESULTREQUEST_H_
