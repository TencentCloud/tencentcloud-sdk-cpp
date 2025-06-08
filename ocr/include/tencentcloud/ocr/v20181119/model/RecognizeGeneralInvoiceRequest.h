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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALINVOICEREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALINVOICEREQUEST_H_

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
                * RecognizeGeneralInvoice请求参数结构体
                */
                class RecognizeGeneralInvoiceRequest : public AbstractModel
                {
                public:
                    RecognizeGeneralInvoiceRequest();
                    ~RecognizeGeneralInvoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @return ImageBase64 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * @param _imageBase64 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return ImageUrl 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _imageUrl 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取需要识别的票据类型列表，为空或不填表示识别全部类型。当传入单个类型时，图片均采用该票类型进行处理。
暂不支持多个参数进行局部控制。
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
15：非税发票
16：全电发票
17：医疗发票
18：完税凭证
19：海关缴款书
20：银行回单
21：网约车行程单
22：海关进/出口货物报关单
23：海外发票
24：购物小票
25：销货清单
-1：其他发票
                     * @return Types 需要识别的票据类型列表，为空或不填表示识别全部类型。当传入单个类型时，图片均采用该票类型进行处理。
暂不支持多个参数进行局部控制。
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
15：非税发票
16：全电发票
17：医疗发票
18：完税凭证
19：海关缴款书
20：银行回单
21：网约车行程单
22：海关进/出口货物报关单
23：海外发票
24：购物小票
25：销货清单
-1：其他发票
                     * 
                     */
                    std::vector<int64_t> GetTypes() const;

                    /**
                     * 设置需要识别的票据类型列表，为空或不填表示识别全部类型。当传入单个类型时，图片均采用该票类型进行处理。
暂不支持多个参数进行局部控制。
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
15：非税发票
16：全电发票
17：医疗发票
18：完税凭证
19：海关缴款书
20：银行回单
21：网约车行程单
22：海关进/出口货物报关单
23：海外发票
24：购物小票
25：销货清单
-1：其他发票
                     * @param _types 需要识别的票据类型列表，为空或不填表示识别全部类型。当传入单个类型时，图片均采用该票类型进行处理。
暂不支持多个参数进行局部控制。
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
15：非税发票
16：全电发票
17：医疗发票
18：完税凭证
19：海关缴款书
20：银行回单
21：网约车行程单
22：海关进/出口货物报关单
23：海外发票
24：购物小票
25：销货清单
-1：其他发票
                     * 
                     */
                    void SetTypes(const std::vector<int64_t>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取是否开启其他票识别，默认值为true，开启后可支持其他发票的智能识别。	
                     * @return EnableOther 是否开启其他票识别，默认值为true，开启后可支持其他发票的智能识别。	
                     * 
                     */
                    bool GetEnableOther() const;

                    /**
                     * 设置是否开启其他票识别，默认值为true，开启后可支持其他发票的智能识别。	
                     * @param _enableOther 是否开启其他票识别，默认值为true，开启后可支持其他发票的智能识别。	
                     * 
                     */
                    void SetEnableOther(const bool& _enableOther);

                    /**
                     * 判断参数 EnableOther 是否已赋值
                     * @return EnableOther 是否已赋值
                     * 
                     */
                    bool EnableOtherHasBeenSet() const;

                    /**
                     * 获取是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * @return EnablePdf 是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * 
                     */
                    bool GetEnablePdf() const;

                    /**
                     * 设置是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * @param _enablePdf 是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     * 
                     */
                    void SetEnablePdf(const bool& _enablePdf);

                    /**
                     * 判断参数 EnablePdf 是否已赋值
                     * @return EnablePdf 是否已赋值
                     * 
                     */
                    bool EnablePdfHasBeenSet() const;

                    /**
                     * 获取需要识别的PDF页面的对应页码，传入时仅支持PDF单页识别，当上传文件为PDF且EnablePdf参数值为true时有效，默认值为1。
                     * @return PdfPageNumber 需要识别的PDF页面的对应页码，传入时仅支持PDF单页识别，当上传文件为PDF且EnablePdf参数值为true时有效，默认值为1。
                     * 
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置需要识别的PDF页面的对应页码，传入时仅支持PDF单页识别，当上传文件为PDF且EnablePdf参数值为true时有效，默认值为1。
                     * @param _pdfPageNumber 需要识别的PDF页面的对应页码，传入时仅支持PDF单页识别，当上传文件为PDF且EnablePdf参数值为true时有效，默认值为1。
                     * 
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取是否开启PDF多页识别，默认值为false，开启后可同时支持多页PDF的识别返回，仅支持返回文件前30页。开启后EnablePdf和PdfPageNumber入参不进行控制。
                     * @return EnableMultiplePage 是否开启PDF多页识别，默认值为false，开启后可同时支持多页PDF的识别返回，仅支持返回文件前30页。开启后EnablePdf和PdfPageNumber入参不进行控制。
                     * 
                     */
                    bool GetEnableMultiplePage() const;

                    /**
                     * 设置是否开启PDF多页识别，默认值为false，开启后可同时支持多页PDF的识别返回，仅支持返回文件前30页。开启后EnablePdf和PdfPageNumber入参不进行控制。
                     * @param _enableMultiplePage 是否开启PDF多页识别，默认值为false，开启后可同时支持多页PDF的识别返回，仅支持返回文件前30页。开启后EnablePdf和PdfPageNumber入参不进行控制。
                     * 
                     */
                    void SetEnableMultiplePage(const bool& _enableMultiplePage);

                    /**
                     * 判断参数 EnableMultiplePage 是否已赋值
                     * @return EnableMultiplePage 是否已赋值
                     * 
                     */
                    bool EnableMultiplePageHasBeenSet() const;

                    /**
                     * 获取是否返回切割图片base64，默认值为false。
                     * @return EnableCutImage 是否返回切割图片base64，默认值为false。
                     * 
                     */
                    bool GetEnableCutImage() const;

                    /**
                     * 设置是否返回切割图片base64，默认值为false。
                     * @param _enableCutImage 是否返回切割图片base64，默认值为false。
                     * 
                     */
                    void SetEnableCutImage(const bool& _enableCutImage);

                    /**
                     * 判断参数 EnableCutImage 是否已赋值
                     * @return EnableCutImage 是否已赋值
                     * 
                     */
                    bool EnableCutImageHasBeenSet() const;

                    /**
                     * 获取是否打开字段坐标返回。默认为false。
                     * @return EnableItemPolygon 是否打开字段坐标返回。默认为false。
                     * 
                     */
                    bool GetEnableItemPolygon() const;

                    /**
                     * 设置是否打开字段坐标返回。默认为false。
                     * @param _enableItemPolygon 是否打开字段坐标返回。默认为false。
                     * 
                     */
                    void SetEnableItemPolygon(const bool& _enableItemPolygon);

                    /**
                     * 判断参数 EnableItemPolygon 是否已赋值
                     * @return EnableItemPolygon 是否已赋值
                     * 
                     */
                    bool EnableItemPolygonHasBeenSet() const;

                    /**
                     * 获取是否开启二维码识别。
                     * @return EnableQRCode 是否开启二维码识别。
                     * 
                     */
                    bool GetEnableQRCode() const;

                    /**
                     * 设置是否开启二维码识别。
                     * @param _enableQRCode 是否开启二维码识别。
                     * 
                     */
                    void SetEnableQRCode(const bool& _enableQRCode);

                    /**
                     * 判断参数 EnableQRCode 是否已赋值
                     * @return EnableQRCode 是否已赋值
                     * 
                     */
                    bool EnableQRCodeHasBeenSet() const;

                    /**
                     * 获取是否开启印章识别，默认为false
                     * @return EnableSeal 是否开启印章识别，默认为false
                     * 
                     */
                    bool GetEnableSeal() const;

                    /**
                     * 设置是否开启印章识别，默认为false
                     * @param _enableSeal 是否开启印章识别，默认为false
                     * 
                     */
                    void SetEnableSeal(const bool& _enableSeal);

                    /**
                     * 判断参数 EnableSeal 是否已赋值
                     * @return EnableSeal 是否已赋值
                     * 
                     */
                    bool EnableSealHasBeenSet() const;

                private:

                    /**
                     * 图片的 Base64 值。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经Base64编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片的 Url 地址。支持的图片格式：PNG、JPG、JPEG、PDF，暂不支持 GIF 格式。支持的图片大小：所下载图片经 Base64 编码后不超过 10M。图片下载时间不超过 3 秒。支持的图片像素：单边介于20-10000px之间。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 需要识别的票据类型列表，为空或不填表示识别全部类型。当传入单个类型时，图片均采用该票类型进行处理。
暂不支持多个参数进行局部控制。
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
15：非税发票
16：全电发票
17：医疗发票
18：完税凭证
19：海关缴款书
20：银行回单
21：网约车行程单
22：海关进/出口货物报关单
23：海外发票
24：购物小票
25：销货清单
-1：其他发票
                     */
                    std::vector<int64_t> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 是否开启其他票识别，默认值为true，开启后可支持其他发票的智能识别。	
                     */
                    bool m_enableOther;
                    bool m_enableOtherHasBeenSet;

                    /**
                     * 是否开启PDF识别，默认值为true，开启后可同时支持图片和PDF的识别。
                     */
                    bool m_enablePdf;
                    bool m_enablePdfHasBeenSet;

                    /**
                     * 需要识别的PDF页面的对应页码，传入时仅支持PDF单页识别，当上传文件为PDF且EnablePdf参数值为true时有效，默认值为1。
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * 是否开启PDF多页识别，默认值为false，开启后可同时支持多页PDF的识别返回，仅支持返回文件前30页。开启后EnablePdf和PdfPageNumber入参不进行控制。
                     */
                    bool m_enableMultiplePage;
                    bool m_enableMultiplePageHasBeenSet;

                    /**
                     * 是否返回切割图片base64，默认值为false。
                     */
                    bool m_enableCutImage;
                    bool m_enableCutImageHasBeenSet;

                    /**
                     * 是否打开字段坐标返回。默认为false。
                     */
                    bool m_enableItemPolygon;
                    bool m_enableItemPolygonHasBeenSet;

                    /**
                     * 是否开启二维码识别。
                     */
                    bool m_enableQRCode;
                    bool m_enableQRCodeHasBeenSet;

                    /**
                     * 是否开启印章识别，默认为false
                     */
                    bool m_enableSeal;
                    bool m_enableSealHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEGENERALINVOICEREQUEST_H_
