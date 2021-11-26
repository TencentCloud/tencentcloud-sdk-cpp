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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEOCRREQUEST_H_

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
                * MixedInvoiceOCR请求参数结构体
                */
                class MixedInvoiceOCRRequest : public AbstractModel
                {
                public:
                    MixedInvoiceOCRRequest();
                    ~MixedInvoiceOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param ImageBase64 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param ImageUrl 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取需要识别的票据类型列表，为空或不填表示识别全部类型。
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
                     * @return Types 需要识别的票据类型列表，为空或不填表示识别全部类型。
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
                     */
                    std::vector<int64_t> GetTypes() const;

                    /**
                     * 设置需要识别的票据类型列表，为空或不填表示识别全部类型。
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
                     * @param Types 需要识别的票据类型列表，为空或不填表示识别全部类型。
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
                     */
                    void SetTypes(const std::vector<int64_t>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的 Url 地址。
支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。
支持的图片大小：所下载图片经 Base64 编码后不超过 7M。图片下载时间不超过 3 秒。
图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。
非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 需要识别的票据类型列表，为空或不填表示识别全部类型。
0：出租车发票
1：定额发票
2：火车票
3：增值税发票
5：机票行程单
8：通用机打发票
9：汽车票
10：轮船票
11：增值税发票（卷票 ）
12：购车发票
13：过路过桥费发票
                     */
                    std::vector<int64_t> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MIXEDINVOICEOCRREQUEST_H_
