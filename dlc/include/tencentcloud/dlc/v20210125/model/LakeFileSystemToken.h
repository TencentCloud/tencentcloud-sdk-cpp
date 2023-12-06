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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFILESYSTEMTOKEN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFILESYSTEMTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * LakeFileSystem使用的临时token
                */
                class LakeFileSystemToken : public AbstractModel
                {
                public:
                    LakeFileSystemToken();
                    ~LakeFileSystemToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Token使用的临时密钥的ID
                     * @return SecretId Token使用的临时密钥的ID
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置Token使用的临时密钥的ID
                     * @param _secretId Token使用的临时密钥的ID
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取Token使用的临时密钥
                     * @return SecretKey Token使用的临时密钥
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Token使用的临时密钥
                     * @param _secretKey Token使用的临时密钥
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Token信息
                     * @return Token Token信息
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token信息
                     * @param _token Token信息
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpiredTime 过期时间
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置过期时间
                     * @param _expiredTime 过期时间
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取颁布时间
                     * @return IssueTime 颁布时间
                     * 
                     */
                    int64_t GetIssueTime() const;

                    /**
                     * 设置颁布时间
                     * @param _issueTime 颁布时间
                     * 
                     */
                    void SetIssueTime(const int64_t& _issueTime);

                    /**
                     * 判断参数 IssueTime 是否已赋值
                     * @return IssueTime 是否已赋值
                     * 
                     */
                    bool IssueTimeHasBeenSet() const;

                private:

                    /**
                     * Token使用的临时密钥的ID
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * Token使用的临时密钥
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Token信息
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 颁布时间
                     */
                    int64_t m_issueTime;
                    bool m_issueTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LAKEFILESYSTEMTOKEN_H_
