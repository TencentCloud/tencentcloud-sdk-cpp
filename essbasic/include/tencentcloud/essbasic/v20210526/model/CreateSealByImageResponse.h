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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGERESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateSealByImage返回参数结构体
                */
                class CreateSealByImageResponse : public AbstractModel
                {
                public:
                    CreateSealByImageResponse();
                    ~CreateSealByImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。</p>
                     * @return SealId <p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。</p>
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取<p>电子印章预览链接地址，地址默认失效时间为24小时。</p><p>注:<code>图片上传生成的电子印章无预览链接地址</code></p>
                     * @return ImageUrl <p>电子印章预览链接地址，地址默认失效时间为24小时。</p><p>注:<code>图片上传生成的电子印章无预览链接地址</code></p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>人脸验证操作人链接，用法可以参考&quot;<a href="https://qian.tencent.com/developers/company/openwxminiprogram/">跳转电子签小程序配置</a>&quot;，默认为空。</p>
                     * @return SealOperatorVerifyPath <p>人脸验证操作人链接，用法可以参考&quot;<a href="https://qian.tencent.com/developers/company/openwxminiprogram/">跳转电子签小程序配置</a>&quot;，默认为空。</p>
                     * 
                     */
                    std::string GetSealOperatorVerifyPath() const;

                    /**
                     * 判断参数 SealOperatorVerifyPath 是否已赋值
                     * @return SealOperatorVerifyPath 是否已赋值
                     * 
                     */
                    bool SealOperatorVerifyPathHasBeenSet() const;

                    /**
                     * 获取<p>人脸验证操作人二维码链接，扫码后会跳转到腾讯电子签小程序进行人脸验证，默认为空。</p>
                     * @return SealOperatorVerifyQrcodeUrl <p>人脸验证操作人二维码链接，扫码后会跳转到腾讯电子签小程序进行人脸验证，默认为空。</p>
                     * 
                     */
                    std::string GetSealOperatorVerifyQrcodeUrl() const;

                    /**
                     * 判断参数 SealOperatorVerifyQrcodeUrl 是否已赋值
                     * @return SealOperatorVerifyQrcodeUrl 是否已赋值
                     * 
                     */
                    bool SealOperatorVerifyQrcodeUrlHasBeenSet() const;

                    /**
                     * 获取<p>创建印章预览逻辑，返回的是印章加盖在示例文件上的效果图片链接。链接有效期为90天。</p>
                     * @return PreviewFileUrl <p>创建印章预览逻辑，返回的是印章加盖在示例文件上的效果图片链接。链接有效期为90天。</p>
                     * 
                     */
                    std::string GetPreviewFileUrl() const;

                    /**
                     * 判断参数 PreviewFileUrl 是否已赋值
                     * @return PreviewFileUrl 是否已赋值
                     * 
                     */
                    bool PreviewFileUrlHasBeenSet() const;

                    /**
                     * 获取<p>创建印章预览逻辑，返回的是印章加盖在示例文件上的效果PDF文件链接。链接有效期为90天。</p>
                     * @return PreviewPdfUrl <p>创建印章预览逻辑，返回的是印章加盖在示例文件上的效果PDF文件链接。链接有效期为90天。</p>
                     * 
                     */
                    std::string GetPreviewPdfUrl() const;

                    /**
                     * 判断参数 PreviewPdfUrl 是否已赋值
                     * @return PreviewPdfUrl 是否已赋值
                     * 
                     */
                    bool PreviewPdfUrlHasBeenSet() const;

                private:

                    /**
                     * <p>电子印章ID，为32位字符串。<br>建议开发者保留此印章ID，后续指定签署区印章或者操作印章需此印章ID。</p>
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * <p>电子印章预览链接地址，地址默认失效时间为24小时。</p><p>注:<code>图片上传生成的电子印章无预览链接地址</code></p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>人脸验证操作人链接，用法可以参考&quot;<a href="https://qian.tencent.com/developers/company/openwxminiprogram/">跳转电子签小程序配置</a>&quot;，默认为空。</p>
                     */
                    std::string m_sealOperatorVerifyPath;
                    bool m_sealOperatorVerifyPathHasBeenSet;

                    /**
                     * <p>人脸验证操作人二维码链接，扫码后会跳转到腾讯电子签小程序进行人脸验证，默认为空。</p>
                     */
                    std::string m_sealOperatorVerifyQrcodeUrl;
                    bool m_sealOperatorVerifyQrcodeUrlHasBeenSet;

                    /**
                     * <p>创建印章预览逻辑，返回的是印章加盖在示例文件上的效果图片链接。链接有效期为90天。</p>
                     */
                    std::string m_previewFileUrl;
                    bool m_previewFileUrlHasBeenSet;

                    /**
                     * <p>创建印章预览逻辑，返回的是印章加盖在示例文件上的效果PDF文件链接。链接有效期为90天。</p>
                     */
                    std::string m_previewPdfUrl;
                    bool m_previewPdfUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGERESPONSE_H_
