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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_AUDITMATERIALAGENTREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_AUDITMATERIALAGENTREQUEST_H_

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
                * AuditMaterialAgent请求参数结构体
                */
                class AuditMaterialAgentRequest : public AbstractModel
                {
                public:
                    AuditMaterialAgentRequest();
                    ~AuditMaterialAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资料审核Agent类型，不同类型包含不同的输入、输出参数，提供不同的审核能力。</p><p>枚举值：</p><ul><li>StorePicAudit： 商户照片审核</li></ul>
                     * @return AgentType <p>资料审核Agent类型，不同类型包含不同的输入、输出参数，提供不同的审核能力。</p><p>枚举值：</p><ul><li>StorePicAudit： 商户照片审核</li></ul>
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置<p>资料审核Agent类型，不同类型包含不同的输入、输出参数，提供不同的审核能力。</p><p>枚举值：</p><ul><li>StorePicAudit： 商户照片审核</li></ul>
                     * @param _agentType <p>资料审核Agent类型，不同类型包含不同的输入、输出参数，提供不同的审核能力。</p><p>枚举值：</p><ul><li>StorePicAudit： 商户照片审核</li></ul>
                     * 
                     */
                    void SetAgentType(const std::string& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     * @return ImageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     * @param _imageUrl <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
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
                     * 获取<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     * @return ImageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     * @param _imageBase64 <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
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
                     * 获取<p>商户照片分类是否输出具体场景标签。注：开启后耗时会增加。 支持该入参的资料审核Agent类型：StorePicAudit</p>
                     * @return NeedSceneType <p>商户照片分类是否输出具体场景标签。注：开启后耗时会增加。 支持该入参的资料审核Agent类型：StorePicAudit</p>
                     * 
                     */
                    bool GetNeedSceneType() const;

                    /**
                     * 设置<p>商户照片分类是否输出具体场景标签。注：开启后耗时会增加。 支持该入参的资料审核Agent类型：StorePicAudit</p>
                     * @param _needSceneType <p>商户照片分类是否输出具体场景标签。注：开启后耗时会增加。 支持该入参的资料审核Agent类型：StorePicAudit</p>
                     * 
                     */
                    void SetNeedSceneType(const bool& _needSceneType);

                    /**
                     * 判断参数 NeedSceneType 是否已赋值
                     * @return NeedSceneType 是否已赋值
                     * 
                     */
                    bool NeedSceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>商户名称信息，辅助判断具体场景标签。注：仅SceneType配置为true时支持。  支持该出参的资料审核Agent类型：StorePicAudit</p>
                     * @return StoreInfoHint <p>商户名称信息，辅助判断具体场景标签。注：仅SceneType配置为true时支持。  支持该出参的资料审核Agent类型：StorePicAudit</p>
                     * 
                     */
                    std::string GetStoreInfoHint() const;

                    /**
                     * 设置<p>商户名称信息，辅助判断具体场景标签。注：仅SceneType配置为true时支持。  支持该出参的资料审核Agent类型：StorePicAudit</p>
                     * @param _storeInfoHint <p>商户名称信息，辅助判断具体场景标签。注：仅SceneType配置为true时支持。  支持该出参的资料审核Agent类型：StorePicAudit</p>
                     * 
                     */
                    void SetStoreInfoHint(const std::string& _storeInfoHint);

                    /**
                     * 判断参数 StoreInfoHint 是否已赋值
                     * @return StoreInfoHint 是否已赋值
                     * 
                     */
                    bool StoreInfoHintHasBeenSet() const;

                    /**
                     * 获取<p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * @return IgnoreWatermarkCategories <p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * 
                     */
                    std::vector<std::string> GetIgnoreWatermarkCategories() const;

                    /**
                     * 设置<p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * @param _ignoreWatermarkCategories <p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     * 
                     */
                    void SetIgnoreWatermarkCategories(const std::vector<std::string>& _ignoreWatermarkCategories);

                    /**
                     * 判断参数 IgnoreWatermarkCategories 是否已赋值
                     * @return IgnoreWatermarkCategories 是否已赋值
                     * 
                     */
                    bool IgnoreWatermarkCategoriesHasBeenSet() const;

                private:

                    /**
                     * <p>资料审核Agent类型，不同类型包含不同的输入、输出参数，提供不同的审核能力。</p><p>枚举值：</p><ul><li>StorePicAudit： 商户照片审核</li></ul>
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * <p>图片的 Url 地址。要求图片经Base64编码后不超过 10M。</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>图片的 Base64 值。要求图片经Base64编码后不超过 10M。</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>商户照片分类是否输出具体场景标签。注：开启后耗时会增加。 支持该入参的资料审核Agent类型：StorePicAudit</p>
                     */
                    bool m_needSceneType;
                    bool m_needSceneTypeHasBeenSet;

                    /**
                     * <p>商户名称信息，辅助判断具体场景标签。注：仅SceneType配置为true时支持。  支持该出参的资料审核Agent类型：StorePicAudit</p>
                     */
                    std::string m_storeInfoHint;
                    bool m_storeInfoHintHasBeenSet;

                    /**
                     * <p>水印提示排除类型，选择出参“水印提示”排除掉的水印类型，不传的话即代表任意水印都会提示。<br>PhoneCam：手机相机水印<br>WatermarkCam：水印相机水印</p>
                     */
                    std::vector<std::string> m_ignoreWatermarkCategories;
                    bool m_ignoreWatermarkCategoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_AUDITMATERIALAGENTREQUEST_H_
