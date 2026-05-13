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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmAssetLoginCredential请求参数结构体
                */
                class DescribeDspmAssetLoginCredentialRequest : public AbstractModel
                {
                public:
                    DescribeDspmAssetLoginCredentialRequest();
                    ~DescribeDspmAssetLoginCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库资产id
                     * @return AssetId 数据库资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置数据库资产id
                     * @param _assetId 数据库资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取主机。默认'%'
                     * @return Host 主机。默认'%'
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机。默认'%'
                     * @param _host 主机。默认'%'
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取加密算法
                     * @return EncryptMethod 加密算法
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置加密算法
                     * @param _encryptMethod 加密算法
                     * 
                     */
                    void SetEncryptMethod(const std::string& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                private:

                    /**
                     * 数据库资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 主机。默认'%'
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 加密算法
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALREQUEST_H_
