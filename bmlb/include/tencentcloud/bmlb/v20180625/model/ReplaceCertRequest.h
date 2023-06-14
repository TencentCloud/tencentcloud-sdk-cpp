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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_REPLACECERTREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_REPLACECERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ReplaceCert请求参数结构体
                */
                class ReplaceCertRequest : public AbstractModel
                {
                public:
                    ReplaceCertRequest();
                    ~ReplaceCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要被替换的证书ID
                     * @return OldCertId 要被替换的证书ID
                     * 
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 设置要被替换的证书ID
                     * @param _oldCertId 要被替换的证书ID
                     * 
                     */
                    void SetOldCertId(const std::string& _oldCertId);

                    /**
                     * 判断参数 OldCertId 是否已赋值
                     * @return OldCertId 是否已赋值
                     * 
                     */
                    bool OldCertIdHasBeenSet() const;

                    /**
                     * 获取证书内容
                     * @return NewCert 证书内容
                     * 
                     */
                    std::string GetNewCert() const;

                    /**
                     * 设置证书内容
                     * @param _newCert 证书内容
                     * 
                     */
                    void SetNewCert(const std::string& _newCert);

                    /**
                     * 判断参数 NewCert 是否已赋值
                     * @return NewCert 是否已赋值
                     * 
                     */
                    bool NewCertHasBeenSet() const;

                    /**
                     * 获取证书名称
                     * @return NewAlias 证书名称
                     * 
                     */
                    std::string GetNewAlias() const;

                    /**
                     * 设置证书名称
                     * @param _newAlias 证书名称
                     * 
                     */
                    void SetNewAlias(const std::string& _newAlias);

                    /**
                     * 判断参数 NewAlias 是否已赋值
                     * @return NewAlias 是否已赋值
                     * 
                     */
                    bool NewAliasHasBeenSet() const;

                    /**
                     * 获取私钥内容，证书类型为SVR时不需要传递
                     * @return NewKey 私钥内容，证书类型为SVR时不需要传递
                     * 
                     */
                    std::string GetNewKey() const;

                    /**
                     * 设置私钥内容，证书类型为SVR时不需要传递
                     * @param _newKey 私钥内容，证书类型为SVR时不需要传递
                     * 
                     */
                    void SetNewKey(const std::string& _newKey);

                    /**
                     * 判断参数 NewKey 是否已赋值
                     * @return NewKey 是否已赋值
                     * 
                     */
                    bool NewKeyHasBeenSet() const;

                    /**
                     * 获取是否删除旧证书，0 表示不删除，1 表示删除
                     * @return DeleteOld 是否删除旧证书，0 表示不删除，1 表示删除
                     * 
                     */
                    uint64_t GetDeleteOld() const;

                    /**
                     * 设置是否删除旧证书，0 表示不删除，1 表示删除
                     * @param _deleteOld 是否删除旧证书，0 表示不删除，1 表示删除
                     * 
                     */
                    void SetDeleteOld(const uint64_t& _deleteOld);

                    /**
                     * 判断参数 DeleteOld 是否已赋值
                     * @return DeleteOld 是否已赋值
                     * 
                     */
                    bool DeleteOldHasBeenSet() const;

                private:

                    /**
                     * 要被替换的证书ID
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                    /**
                     * 证书内容
                     */
                    std::string m_newCert;
                    bool m_newCertHasBeenSet;

                    /**
                     * 证书名称
                     */
                    std::string m_newAlias;
                    bool m_newAliasHasBeenSet;

                    /**
                     * 私钥内容，证书类型为SVR时不需要传递
                     */
                    std::string m_newKey;
                    bool m_newKeyHasBeenSet;

                    /**
                     * 是否删除旧证书，0 表示不删除，1 表示删除
                     */
                    uint64_t m_deleteOld;
                    bool m_deleteOldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_REPLACECERTREQUEST_H_
