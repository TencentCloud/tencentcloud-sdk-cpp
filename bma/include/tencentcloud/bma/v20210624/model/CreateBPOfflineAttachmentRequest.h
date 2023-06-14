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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINEATTACHMENTREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINEATTACHMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateBPOfflineAttachment请求参数结构体
                */
                class CreateBPOfflineAttachmentRequest : public AbstractModel
                {
                public:
                    CreateBPOfflineAttachmentRequest();
                    ~CreateBPOfflineAttachmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取品牌名字
                     * @return BrandName 品牌名字
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名字
                     * @param _brandName 品牌名字
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取商标证明
                     * @return BrandCertificateName 商标证明
                     * 
                     */
                    std::string GetBrandCertificateName() const;

                    /**
                     * 设置商标证明
                     * @param _brandCertificateName 商标证明
                     * 
                     */
                    void SetBrandCertificateName(const std::string& _brandCertificateName);

                    /**
                     * 判断参数 BrandCertificateName 是否已赋值
                     * @return BrandCertificateName 是否已赋值
                     * 
                     */
                    bool BrandCertificateNameHasBeenSet() const;

                    /**
                     * 获取商标转让证明
                     * @return TransferName 商标转让证明
                     * 
                     */
                    std::string GetTransferName() const;

                    /**
                     * 设置商标转让证明
                     * @param _transferName 商标转让证明
                     * 
                     */
                    void SetTransferName(const std::string& _transferName);

                    /**
                     * 判断参数 TransferName 是否已赋值
                     * @return TransferName 是否已赋值
                     * 
                     */
                    bool TransferNameHasBeenSet() const;

                    /**
                     * 获取授权书
                     * @return AuthorizationName 授权书
                     * 
                     */
                    std::string GetAuthorizationName() const;

                    /**
                     * 设置授权书
                     * @param _authorizationName 授权书
                     * 
                     */
                    void SetAuthorizationName(const std::string& _authorizationName);

                    /**
                     * 判断参数 AuthorizationName 是否已赋值
                     * @return AuthorizationName 是否已赋值
                     * 
                     */
                    bool AuthorizationNameHasBeenSet() const;

                private:

                    /**
                     * 品牌名字
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 商标证明
                     */
                    std::string m_brandCertificateName;
                    bool m_brandCertificateNameHasBeenSet;

                    /**
                     * 商标转让证明
                     */
                    std::string m_transferName;
                    bool m_transferNameHasBeenSet;

                    /**
                     * 授权书
                     */
                    std::string m_authorizationName;
                    bool m_authorizationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINEATTACHMENTREQUEST_H_
