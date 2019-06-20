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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_EHOCRREQUEST_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_EHOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * EHOCR请求参数结构体
                */
                class EHOCRRequest : public AbstractModel
                {
                public:
                    EHOCRRequest();
                    ~EHOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片所在的url或base64编码后的图像数据，依据InputType而定
                     * @return Image 图片所在的url或base64编码后的图像数据，依据InputType而定
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片所在的url或base64编码后的图像数据，依据InputType而定
                     * @param Image 图片所在的url或base64编码后的图像数据，依据InputType而定
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取输出图片类型，0表示Image字段是图片所在的url，1表示Image字段是base64编码后的图像数据
                     * @return InputType 输出图片类型，0表示Image字段是图片所在的url，1表示Image字段是base64编码后的图像数据
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置输出图片类型，0表示Image字段是图片所在的url，1表示Image字段是base64编码后的图像数据
                     * @param InputType 输出图片类型，0表示Image字段是图片所在的url，1表示Image字段是base64编码后的图像数据
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     */
                    bool InputTypeHasBeenSet() const;

                private:

                    /**
                     * 图片所在的url或base64编码后的图像数据，依据InputType而定
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 输出图片类型，0表示Image字段是图片所在的url，1表示Image字段是base64编码后的图像数据
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_EHOCRREQUEST_H_
