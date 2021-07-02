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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_REPORTIMAGESTRUCTUREDREQUEST_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_REPORTIMAGESTRUCTUREDREQUEST_H_

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
                * ReportImageStructured请求参数结构体
                */
                class ReportImageStructuredRequest : public AbstractModel
                {
                public:
                    ReportImageStructuredRequest();
                    ~ReportImageStructuredRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取医疗报告图片URL
                     * @return ImageURL 医疗报告图片URL
                     */
                    std::string GetImageURL() const;

                    /**
                     * 设置医疗报告图片URL
                     * @param ImageURL 医疗报告图片URL
                     */
                    void SetImageURL(const std::string& _imageURL);

                    /**
                     * 判断参数 ImageURL 是否已赋值
                     * @return ImageURL 是否已赋值
                     */
                    bool ImageURLHasBeenSet() const;

                    /**
                     * 获取医疗报告图片base64编码后内容
                     * @return ImageBase64 医疗报告图片base64编码后内容
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置医疗报告图片base64编码后内容
                     * @param ImageBase64 医疗报告图片base64编码后内容
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                private:

                    /**
                     * 医疗报告图片URL
                     */
                    std::string m_imageURL;
                    bool m_imageURLHasBeenSet;

                    /**
                     * 医疗报告图片base64编码后内容
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_REPORTIMAGESTRUCTUREDREQUEST_H_
