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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_ISSUECREDENTIALREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_ISSUECREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/CRDLArg.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * IssueCredential请求参数结构体
                */
                class IssueCredentialRequest : public AbstractModel
                {
                public:
                    IssueCredentialRequest();
                    ~IssueCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数集合，详见示例
                     * @return CRDLArg 参数集合，详见示例
                     * 
                     */
                    CRDLArg GetCRDLArg() const;

                    /**
                     * 设置参数集合，详见示例
                     * @param _cRDLArg 参数集合，详见示例
                     * 
                     */
                    void SetCRDLArg(const CRDLArg& _cRDLArg);

                    /**
                     * 判断参数 CRDLArg 是否已赋值
                     * @return CRDLArg 是否已赋值
                     * 
                     */
                    bool CRDLArgHasBeenSet() const;

                    /**
                     * 获取是否未签名
                     * @return UnSigned 是否未签名
                     * 
                     */
                    bool GetUnSigned() const;

                    /**
                     * 设置是否未签名
                     * @param _unSigned 是否未签名
                     * 
                     */
                    void SetUnSigned(const bool& _unSigned);

                    /**
                     * 判断参数 UnSigned 是否已赋值
                     * @return UnSigned 是否已赋值
                     * 
                     */
                    bool UnSignedHasBeenSet() const;

                    /**
                     * 获取DID应用id
                     * @return DAPId DID应用id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用id
                     * @param _dAPId DID应用id
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                private:

                    /**
                     * 参数集合，详见示例
                     */
                    CRDLArg m_cRDLArg;
                    bool m_cRDLArgHasBeenSet;

                    /**
                     * 是否未签名
                     */
                    bool m_unSigned;
                    bool m_unSignedHasBeenSet;

                    /**
                     * DID应用id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_ISSUECREDENTIALREQUEST_H_
