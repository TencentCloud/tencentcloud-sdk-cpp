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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetFaceIdToken请求参数结构体
                */
                class GetFaceIdTokenRequest : public AbstractModel
                {
                public:
                    GetFaceIdTokenRequest();
                    ~GetFaceIdTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本地上传照片(LOCAL)、商业库(BUSINESS)
                     * @return CompareLib 本地上传照片(LOCAL)、商业库(BUSINESS)
                     */
                    std::string GetCompareLib() const;

                    /**
                     * 设置本地上传照片(LOCAL)、商业库(BUSINESS)
                     * @param CompareLib 本地上传照片(LOCAL)、商业库(BUSINESS)
                     */
                    void SetCompareLib(const std::string& _compareLib);

                    /**
                     * 判断参数 CompareLib 是否已赋值
                     * @return CompareLib 是否已赋值
                     */
                    bool CompareLibHasBeenSet() const;

                    /**
                     * 获取CompareLib为商业库时必传。
                     * @return IdCard CompareLib为商业库时必传。
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置CompareLib为商业库时必传。
                     * @param IdCard CompareLib为商业库时必传。
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取CompareLib为商业库库时必传。
                     * @return Name CompareLib为商业库库时必传。
                     */
                    std::string GetName() const;

                    /**
                     * 设置CompareLib为商业库库时必传。
                     * @param Name CompareLib为商业库库时必传。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取CompareLib为上传照片比对时必传，base64后图片最大8MB。
                     * @return ImageBase64 CompareLib为上传照片比对时必传，base64后图片最大8MB。
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置CompareLib为上传照片比对时必传，base64后图片最大8MB。
                     * @param ImageBase64 CompareLib为上传照片比对时必传，base64后图片最大8MB。
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取SDK中生成的Meta字符串
                     * @return Meta SDK中生成的Meta字符串
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置SDK中生成的Meta字符串
                     * @param Meta SDK中生成的Meta字符串
                     */
                    void SetMeta(const std::string& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     */
                    bool MetaHasBeenSet() const;

                    /**
                     * 获取透传参数 1000长度字符串
                     * @return Extra 透传参数 1000长度字符串
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传参数 1000长度字符串
                     * @param Extra 透传参数 1000长度字符串
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 本地上传照片(LOCAL)、商业库(BUSINESS)
                     */
                    std::string m_compareLib;
                    bool m_compareLibHasBeenSet;

                    /**
                     * CompareLib为商业库时必传。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * CompareLib为商业库库时必传。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * CompareLib为上传照片比对时必传，base64后图片最大8MB。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * SDK中生成的Meta字符串
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * 透传参数 1000长度字符串
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENREQUEST_H_
