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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_SIGNINFO_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_SIGNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * 签署人信息
                */
                class SignInfo : public AbstractModel
                {
                public:
                    SignInfo();
                    ~SignInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户ID
                     * @return AccountResId 账户ID
                     * 
                     */
                    std::string GetAccountResId() const;

                    /**
                     * 设置账户ID
                     * @param _accountResId 账户ID
                     * 
                     */
                    void SetAccountResId(const std::string& _accountResId);

                    /**
                     * 判断参数 AccountResId 是否已赋值
                     * @return AccountResId 是否已赋值
                     * 
                     */
                    bool AccountResIdHasBeenSet() const;

                    /**
                     * 获取授权时间（上传合同可不传该参数）
                     * @return AuthorizationTime 授权时间（上传合同可不传该参数）
                     * 
                     */
                    std::string GetAuthorizationTime() const;

                    /**
                     * 设置授权时间（上传合同可不传该参数）
                     * @param _authorizationTime 授权时间（上传合同可不传该参数）
                     * 
                     */
                    void SetAuthorizationTime(const std::string& _authorizationTime);

                    /**
                     * 判断参数 AuthorizationTime 是否已赋值
                     * @return AuthorizationTime 是否已赋值
                     * 
                     */
                    bool AuthorizationTimeHasBeenSet() const;

                    /**
                     * 获取授权IP地址（上传合同可不传该参数）
                     * @return Location 授权IP地址（上传合同可不传该参数）
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置授权IP地址（上传合同可不传该参数）
                     * @param _location 授权IP地址（上传合同可不传该参数）
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取签章ID
                     * @return SealId 签章ID
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置签章ID
                     * @param _sealId 签章ID
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取签名图片，优先级比SealId高
                     * @return ImageData 签名图片，优先级比SealId高
                     * 
                     */
                    std::string GetImageData() const;

                    /**
                     * 设置签名图片，优先级比SealId高
                     * @param _imageData 签名图片，优先级比SealId高
                     * 
                     */
                    void SetImageData(const std::string& _imageData);

                    /**
                     * 判断参数 ImageData 是否已赋值
                     * @return ImageData 是否已赋值
                     * 
                     */
                    bool ImageDataHasBeenSet() const;

                    /**
                     * 获取默认值：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * @return CertType 默认值：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置默认值：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * @param _certType 默认值：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取签名域的标签值
                     * @return SignLocation 签名域的标签值
                     * 
                     */
                    std::string GetSignLocation() const;

                    /**
                     * 设置签名域的标签值
                     * @param _signLocation 签名域的标签值
                     * 
                     */
                    void SetSignLocation(const std::string& _signLocation);

                    /**
                     * 判断参数 SignLocation 是否已赋值
                     * @return SignLocation 是否已赋值
                     * 
                     */
                    bool SignLocationHasBeenSet() const;

                private:

                    /**
                     * 账户ID
                     */
                    std::string m_accountResId;
                    bool m_accountResIdHasBeenSet;

                    /**
                     * 授权时间（上传合同可不传该参数）
                     */
                    std::string m_authorizationTime;
                    bool m_authorizationTimeHasBeenSet;

                    /**
                     * 授权IP地址（上传合同可不传该参数）
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 签章ID
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 签名图片，优先级比SealId高
                     */
                    std::string m_imageData;
                    bool m_imageDataHasBeenSet;

                    /**
                     * 默认值：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 签名域的标签值
                     */
                    std::string m_signLocation;
                    bool m_signLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_SIGNINFO_H_
