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
                     * 获取<p>比对库。</p><ul><li>取值范围：<br>LOCAL：本地上传照片。<br>BUSINESS：商业库。</li></ul>
                     * @return CompareLib <p>比对库。</p><ul><li>取值范围：<br>LOCAL：本地上传照片。<br>BUSINESS：商业库。</li></ul>
                     * 
                     */
                    std::string GetCompareLib() const;

                    /**
                     * 设置<p>比对库。</p><ul><li>取值范围：<br>LOCAL：本地上传照片。<br>BUSINESS：商业库。</li></ul>
                     * @param _compareLib <p>比对库。</p><ul><li>取值范围：<br>LOCAL：本地上传照片。<br>BUSINESS：商业库。</li></ul>
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
                     * 获取<p>身份证。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     * @return IdCard <p>身份证。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>身份证。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     * @param _idCard <p>身份证。</p><ul><li>CompareLib为商业库时必传。</li></ul>
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
                     * 获取<p>姓名。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     * @return Name <p>姓名。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>姓名。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     * @param _name <p>姓名。</p><ul><li>CompareLib为商业库时必传。</li></ul>
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
                     * 获取<p>图片的Base64。</p><ul><li>CompareLib为上传照片比对时必传。</li><li>Base64后图片最大8MB。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * @return ImageBase64 <p>图片的Base64。</p><ul><li>CompareLib为上传照片比对时必传。</li><li>Base64后图片最大8MB。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片的Base64。</p><ul><li>CompareLib为上传照片比对时必传。</li><li>Base64后图片最大8MB。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     * @param _imageBase64 <p>图片的Base64。</p><ul><li>CompareLib为上传照片比对时必传。</li><li>Base64后图片最大8MB。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
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
                     * 获取<p>SDK中生成的Meta字符串。</p>
                     * @return Meta <p>SDK中生成的Meta字符串。</p>
                     * 
                     */
                    std::string GetMeta() const;

                    /**
                     * 设置<p>SDK中生成的Meta字符串。</p>
                     * @param _meta <p>SDK中生成的Meta字符串。</p>
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
                     * 获取<p>透传参数。</p><ul><li>1000长度字符串</li></ul>
                     * @return Extra <p>透传参数。</p><ul><li>1000长度字符串</li></ul>
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置<p>透传参数。</p><ul><li>1000长度字符串</li></ul>
                     * @param _extra <p>透传参数。</p><ul><li>1000长度字符串</li></ul>
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
                     * 获取<p>是否使用cos桶。</p><ul><li>默认为false。</li><li>设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。</li><li>开通地址见https://console.cloud.tencent.com/faceid/cos</li><li>【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。</li></ul>
                     * @return UseCos <p>是否使用cos桶。</p><ul><li>默认为false。</li><li>设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。</li><li>开通地址见https://console.cloud.tencent.com/faceid/cos</li><li>【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。</li></ul>
                     * 
                     */
                    bool GetUseCos() const;

                    /**
                     * 设置<p>是否使用cos桶。</p><ul><li>默认为false。</li><li>设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。</li><li>开通地址见https://console.cloud.tencent.com/faceid/cos</li><li>【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。</li></ul>
                     * @param _useCos <p>是否使用cos桶。</p><ul><li>默认为false。</li><li>设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。</li><li>开通地址见https://console.cloud.tencent.com/faceid/cos</li><li>【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。</li></ul>
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
                     * 获取<p>敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * @return Encryption <p>敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     * @param _encryption <p>敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
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
                     * 获取<p>用于细分客户使用场景。</p><ul><li>申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。</li><li>如有疑问，请添加腾讯云人脸核身小助手进行咨询。</li></ul>
                     * @return RuleId <p>用于细分客户使用场景。</p><ul><li>申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。</li><li>如有疑问，请添加腾讯云人脸核身小助手进行咨询。</li></ul>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>用于细分客户使用场景。</p><ul><li>申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。</li><li>如有疑问，请添加腾讯云人脸核身小助手进行咨询。</li></ul>
                     * @param _ruleId <p>用于细分客户使用场景。</p><ul><li>申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。</li><li>如有疑问，请添加腾讯云人脸核身小助手进行咨询。</li></ul>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>SDK和用户设备的元信息。该字段的值由HuiYan SDK以JSON字符串格式返回。  说明：不要修改返回值，直接传递即可。</p>
                     * @return MetaData <p>SDK和用户设备的元信息。该字段的值由HuiYan SDK以JSON字符串格式返回。  说明：不要修改返回值，直接传递即可。</p>
                     * 
                     */
                    std::string GetMetaData() const;

                    /**
                     * 设置<p>SDK和用户设备的元信息。该字段的值由HuiYan SDK以JSON字符串格式返回。  说明：不要修改返回值，直接传递即可。</p>
                     * @param _metaData <p>SDK和用户设备的元信息。该字段的值由HuiYan SDK以JSON字符串格式返回。  说明：不要修改返回值，直接传递即可。</p>
                     * 
                     */
                    void SetMetaData(const std::string& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * <p>比对库。</p><ul><li>取值范围：<br>LOCAL：本地上传照片。<br>BUSINESS：商业库。</li></ul>
                     */
                    std::string m_compareLib;
                    bool m_compareLibHasBeenSet;

                    /**
                     * <p>身份证。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>姓名。</p><ul><li>CompareLib为商业库时必传。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>图片的Base64。</p><ul><li>CompareLib为上传照片比对时必传。</li><li>Base64后图片最大8MB。</li><li>请使用标准的Base64编码方式(带=补位)，编码规范参考RFC4648。</li></ul>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>SDK中生成的Meta字符串。</p>
                     */
                    std::string m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * <p>透传参数。</p><ul><li>1000长度字符串</li></ul>
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>是否使用cos桶。</p><ul><li>默认为false。</li><li>设置该参数为true后，核身过程中的视频图片将会存储在人脸核身控制台授权cos的bucket中，拉取结果时会返回对应资源完整cos地址。</li><li>开通地址见https://console.cloud.tencent.com/faceid/cos</li><li>【注意】选择该参数为true后将不返回base64数据，请根据接入情况谨慎修改。</li></ul>
                     */
                    bool m_useCos;
                    bool m_useCosHasBeenSet;

                    /**
                     * <p>敏感数据加密信息。对传入信息（姓名、身份证号、自传照片）有加密需求的用户可使用此参数，详情请点击左侧链接。</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>用于细分客户使用场景。</p><ul><li>申请开通服务后，可以在腾讯云慧眼人脸核身控制台（https://console.cloud.tencent.com/faceid） 自助接入里面创建，审核通过后即可调用。</li><li>如有疑问，请添加腾讯云人脸核身小助手进行咨询。</li></ul>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>SDK和用户设备的元信息。该字段的值由HuiYan SDK以JSON字符串格式返回。  说明：不要修改返回值，直接传递即可。</p>
                     */
                    std::string m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDTOKENREQUEST_H_
