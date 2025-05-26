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
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


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
                     * 获取比对库。
- 取值范围：
LOCAL：本地上传照片。
BUSINESS：商业库。
                     * @return CompareLib 比对库。
- 取值范围：
LOCAL：本地上传照片。
BUSINESS：商业库。
                     * 
                     */
                    std::string GetCompareLib() const;

                    /**
                     * 设置比对库。
- 取值范围：
LOCAL：本地上传照片。
BUSINESS：商业库。
                     * @param _compareLib 比对库。
- 取值范围：
LOCAL：本地上传照片。
BUSINESS：商业库。
                     * 
                     */
                    void SetCompareLib(const std::string& _compareLib);

                    /**
                     * 判断参数 CompareLib 是否已赋值
                     * @return CompareLib 是否已赋值
                     * 
                     */
                    bool CompareLibHasBeenSet() const;

                    /**
                     * 获取身份证。
- CompareLib为商业库时必传。
                     * @return IdCard 身份证。
- CompareLib为商业库时必传。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份证。
- CompareLib为商业库时必传。
                     * @param _idCard 身份证。
- CompareLib为商业库时必传。
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取姓名。
- CompareLib为商业库时必传。
                     * @return Name 姓名。
- CompareLib为商业库时必传。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。
- CompareLib为商业库时必传。
                     * @param _name 姓名。
- CompareLib为商业库时必传。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取图片的Base64。
- CompareLib为上传照片比对时必传。
- Base64后图片最大8MB。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * @return ImageBase64 图片的Base64。
- CompareLib为上传照片比对时必传。
- Base64后图片最大8MB。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片的Base64。
- CompareLib为上传照片比对时必传。
- Base64后图片最大8MB。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     * @param _imageBase64 图片的Base64。
- CompareLib为上传照片比对时必传。
- Base64后图片最大8MB。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
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
                     * 获取SDK中生成的Meta字符串。
                     * @return Meta SDK中生成的Meta字符串。
                     * 
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置SDK中生成的Meta字符串。
                     * @param _meta SDK中生成的Meta字符串。
                     * 
                     */
                    void SetMeta(const std::string& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     * 
                     */
                    bool MetaHasBeenSet() const;

                    /**
                     * 获取透传参数。
- 1000长度字符串
                     * @return Extra 透传参数。
- 1000长度字符串
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传参数。
- 1000长度字符串
                     * @param _extra 透传参数。
- 1000长度字符串
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取是否使用cos桶。
- 默认为false。
- 设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。
- 开通地址见https://console.cloud.tencent.com/faceid/cos
- 【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。
                     * @return UseCos 是否使用cos桶。
- 默认为false。
- 设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。
- 开通地址见https://console.cloud.tencent.com/faceid/cos
- 【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。
                     * 
                     */
                    bool GetUseCos() const;

                    /**
                     * 设置是否使用cos桶。
- 默认为false。
- 设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。
- 开通地址见https://console.cloud.tencent.com/faceid/cos
- 【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。
                     * @param _useCos 是否使用cos桶。
- 默认为false。
- 设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。
- 开通地址见https://console.cloud.tencent.com/faceid/cos
- 【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。
                     * 
                     */
                    void SetUseCos(const bool& _useCos);

                    /**
                     * 判断参数 UseCos 是否已赋值
                     * @return UseCos 是否已赋值
                     * 
                     */
                    bool UseCosHasBeenSet() const;

                    /**
                     * 获取敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param _encryption 敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取用于细分客户使用场景。
- 申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。
- 如有疑问，请添加腾讯云人脸核身小助手进行咨询。
                     * @return RuleId 用于细分客户使用场景。
- 申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。
- 如有疑问，请添加腾讯云人脸核身小助手进行咨询。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置用于细分客户使用场景。
- 申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。
- 如有疑问，请添加腾讯云人脸核身小助手进行咨询。
                     * @param _ruleId 用于细分客户使用场景。
- 申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。
- 如有疑问，请添加腾讯云人脸核身小助手进行咨询。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 比对库。
- 取值范围：
LOCAL：本地上传照片。
BUSINESS：商业库。
                     */
                    std::string m_compareLib;
                    bool m_compareLibHasBeenSet;

                    /**
                     * 身份证。
- CompareLib为商业库时必传。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名。
- CompareLib为商业库时必传。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片的Base64。
- CompareLib为上传照片比对时必传。
- Base64后图片最大8MB。
- 请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * SDK中生成的Meta字符串。
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * 透传参数。
- 1000长度字符串
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 是否使用cos桶。
- 默认为false。
- 设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。
- 开通地址见https://console.cloud.tencent.com/faceid/cos
- 【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。
                     */
                    bool m_useCos;
                    bool m_useCosHasBeenSet;

                    /**
                     * 敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 用于细分客户使用场景。
- 申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。
- 如有疑问，请添加腾讯云人脸核身小助手进行咨询。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENREQUEST_H_
