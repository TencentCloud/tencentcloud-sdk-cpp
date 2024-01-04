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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKASYNCGETRESULTRESPONSE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKASYNCGETRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * ImageMaskAsyncGetResult返回参数结构体
                */
                class ImageMaskAsyncGetResultResponse : public AbstractModel
                {
                public:
                    ImageMaskAsyncGetResultResponse();
                    ~ImageMaskAsyncGetResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取脱敏后图片的base64编码
                     * @return MaskedImage 脱敏后图片的base64编码
                     * 
                     */
                    std::string GetMaskedImage() const;

                    /**
                     * 判断参数 MaskedImage 是否已赋值
                     * @return MaskedImage 是否已赋值
                     * 
                     */
                    bool MaskedImageHasBeenSet() const;

                private:

                    /**
                     * 脱敏后图片的base64编码
                     */
                    std::string m_maskedImage;
                    bool m_maskedImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGEMASKASYNCGETRESULTRESPONSE_H_
