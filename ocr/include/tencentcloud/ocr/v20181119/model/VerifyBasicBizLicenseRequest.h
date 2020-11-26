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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBASICBIZLICENSEREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBASICBIZLICENSEREQUEST_H_

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
                * VerifyBasicBizLicense请求参数结构体
                */
                class VerifyBasicBizLicenseRequest : public AbstractModel
                {
                public:
                    VerifyBasicBizLicenseRequest();
                    ~VerifyBasicBizLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     * @return ImageBase64 用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     * @param ImageBase64 用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     * @return ImageUrl 用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     * @param ImageUrl 用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取用于入参是营业执照图片的场景，表示需要校验的参数：RegNum（注册号或者统一社会信用代码），Name（企业名称），Address（经营地址）。选择后会返回相关参数校验结果。RegNum为必选，Name和Address可选。
格式为{RegNum: true, Name:true/false, Address:true/false}

设置方式参考：
Config = Json.stringify({"Name":true,"Address":true})
API 3.0 Explorer 设置方式参考：
Config = {"Name":true,"Address":true}
                     * @return ImageConfig 用于入参是营业执照图片的场景，表示需要校验的参数：RegNum（注册号或者统一社会信用代码），Name（企业名称），Address（经营地址）。选择后会返回相关参数校验结果。RegNum为必选，Name和Address可选。
格式为{RegNum: true, Name:true/false, Address:true/false}

设置方式参考：
Config = Json.stringify({"Name":true,"Address":true})
API 3.0 Explorer 设置方式参考：
Config = {"Name":true,"Address":true}
                     */
                    std::string GetImageConfig() const;

                    /**
                     * 设置用于入参是营业执照图片的场景，表示需要校验的参数：RegNum（注册号或者统一社会信用代码），Name（企业名称），Address（经营地址）。选择后会返回相关参数校验结果。RegNum为必选，Name和Address可选。
格式为{RegNum: true, Name:true/false, Address:true/false}

设置方式参考：
Config = Json.stringify({"Name":true,"Address":true})
API 3.0 Explorer 设置方式参考：
Config = {"Name":true,"Address":true}
                     * @param ImageConfig 用于入参是营业执照图片的场景，表示需要校验的参数：RegNum（注册号或者统一社会信用代码），Name（企业名称），Address（经营地址）。选择后会返回相关参数校验结果。RegNum为必选，Name和Address可选。
格式为{RegNum: true, Name:true/false, Address:true/false}

设置方式参考：
Config = Json.stringify({"Name":true,"Address":true})
API 3.0 Explorer 设置方式参考：
Config = {"Name":true,"Address":true}
                     */
                    void SetImageConfig(const std::string& _imageConfig);

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     */
                    bool ImageConfigHasBeenSet() const;

                    /**
                     * 获取用于入参是文本的场景，RegNum表示注册号或者统一社会信用代码。若没有传入营业执照图片，则RegNum为必选项，若图片和RegNum都传入，则只使用RegNum。
                     * @return RegNum 用于入参是文本的场景，RegNum表示注册号或者统一社会信用代码。若没有传入营业执照图片，则RegNum为必选项，若图片和RegNum都传入，则只使用RegNum。
                     */
                    std::string GetRegNum() const;

                    /**
                     * 设置用于入参是文本的场景，RegNum表示注册号或者统一社会信用代码。若没有传入营业执照图片，则RegNum为必选项，若图片和RegNum都传入，则只使用RegNum。
                     * @param RegNum 用于入参是文本的场景，RegNum表示注册号或者统一社会信用代码。若没有传入营业执照图片，则RegNum为必选项，若图片和RegNum都传入，则只使用RegNum。
                     */
                    void SetRegNum(const std::string& _regNum);

                    /**
                     * 判断参数 RegNum 是否已赋值
                     * @return RegNum 是否已赋值
                     */
                    bool RegNumHasBeenSet() const;

                    /**
                     * 获取用于入参是文本的场景，Name表示企业名称。Name为可选项，填写后会返回Name的校验结果。
                     * @return Name 用于入参是文本的场景，Name表示企业名称。Name为可选项，填写后会返回Name的校验结果。
                     */
                    std::string GetName() const;

                    /**
                     * 设置用于入参是文本的场景，Name表示企业名称。Name为可选项，填写后会返回Name的校验结果。
                     * @param Name 用于入参是文本的场景，Name表示企业名称。Name为可选项，填写后会返回Name的校验结果。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用于入参是文本的场景，Address表示经营地址。Address为可选项，填写后会返回Address的校验结果。
                     * @return Address 用于入参是文本的场景，Address表示经营地址。Address为可选项，填写后会返回Address的校验结果。
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置用于入参是文本的场景，Address表示经营地址。Address为可选项，填写后会返回Address的校验结果。
                     * @param Address 用于入参是文本的场景，Address表示经营地址。Address为可选项，填写后会返回Address的校验结果。
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取1表示输出注册资本字段（单位：万元），其他值表示不输出。默认不输出。
                     * @return RegCapital 1表示输出注册资本字段（单位：万元），其他值表示不输出。默认不输出。
                     */
                    int64_t GetRegCapital() const;

                    /**
                     * 设置1表示输出注册资本字段（单位：万元），其他值表示不输出。默认不输出。
                     * @param RegCapital 1表示输出注册资本字段（单位：万元），其他值表示不输出。默认不输出。
                     */
                    void SetRegCapital(const int64_t& _regCapital);

                    /**
                     * 判断参数 RegCapital 是否已赋值
                     * @return RegCapital 是否已赋值
                     */
                    bool RegCapitalHasBeenSet() const;

                private:

                    /**
                     * 用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 用于入参是营业执照图片的场景，ImageBase64和ImageUrl必须提供一个，如果都提供，只使用 ImageUrl。
支持的图片格式：PNG、JPG、JPEG，暂不支持 GIF 格式。
支持的图片大小：所下载图片经Base64编码后不超过 7M。图片下载时间不超过 3 秒。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 用于入参是营业执照图片的场景，表示需要校验的参数：RegNum（注册号或者统一社会信用代码），Name（企业名称），Address（经营地址）。选择后会返回相关参数校验结果。RegNum为必选，Name和Address可选。
格式为{RegNum: true, Name:true/false, Address:true/false}

设置方式参考：
Config = Json.stringify({"Name":true,"Address":true})
API 3.0 Explorer 设置方式参考：
Config = {"Name":true,"Address":true}
                     */
                    std::string m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                    /**
                     * 用于入参是文本的场景，RegNum表示注册号或者统一社会信用代码。若没有传入营业执照图片，则RegNum为必选项，若图片和RegNum都传入，则只使用RegNum。
                     */
                    std::string m_regNum;
                    bool m_regNumHasBeenSet;

                    /**
                     * 用于入参是文本的场景，Name表示企业名称。Name为可选项，填写后会返回Name的校验结果。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用于入参是文本的场景，Address表示经营地址。Address为可选项，填写后会返回Address的校验结果。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 1表示输出注册资本字段（单位：万元），其他值表示不输出。默认不输出。
                     */
                    int64_t m_regCapital;
                    bool m_regCapitalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYBASICBIZLICENSEREQUEST_H_
