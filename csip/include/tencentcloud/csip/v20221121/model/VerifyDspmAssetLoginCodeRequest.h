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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VERIFYDSPMASSETLOGINCODEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VERIFYDSPMASSETLOGINCODEREQUEST_H_

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
                * VerifyDspmAssetLoginCode请求参数结构体
                */
                class VerifyDspmAssetLoginCodeRequest : public AbstractModel
                {
                public:
                    VerifyDspmAssetLoginCodeRequest();
                    ~VerifyDspmAssetLoginCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取个人id
                     * @return PersonId 个人id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置个人id
                     * @param _personId 个人id
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

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
                     * 获取验证码
                     * @return Code 验证码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置验证码
                     * @param _code 验证码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

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

                private:

                    /**
                     * 个人id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 数据库资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 验证码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 主机。默认'%'
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VERIFYDSPMASSETLOGINCODEREQUEST_H_
