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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DEACTIVATETDIDREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DEACTIVATETDIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * DeactivateTDid请求参数结构体
                */
                class DeactivateTDidRequest : public AbstractModel
                {
                public:
                    DeactivateTDidRequest();
                    ~DeactivateTDidRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DID标识符
                     * @return Did DID标识符
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置DID标识符
                     * @param _did DID标识符
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取设置DID禁用状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，建议设置为1分钟内
                     * @return OperateCredential 设置DID禁用状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，建议设置为1分钟内
                     * 
                     */
                    std::string GetOperateCredential() const;

                    /**
                     * 设置设置DID禁用状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，建议设置为1分钟内
                     * @param _operateCredential 设置DID禁用状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，建议设置为1分钟内
                     * 
                     */
                    void SetOperateCredential(const std::string& _operateCredential);

                    /**
                     * 判断参数 OperateCredential 是否已赋值
                     * @return OperateCredential 是否已赋值
                     * 
                     */
                    bool OperateCredentialHasBeenSet() const;

                    /**
                     * 获取DID应用Id
                     * @return DAPId DID应用Id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用Id
                     * @param _dAPId DID应用Id
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                    /**
                     * 获取是否禁用
                     * @return Deactivated 是否禁用
                     * 
                     */
                    std::string GetDeactivated() const;

                    /**
                     * 设置是否禁用
                     * @param _deactivated 是否禁用
                     * 
                     */
                    void SetDeactivated(const std::string& _deactivated);

                    /**
                     * 判断参数 Deactivated 是否已赋值
                     * @return Deactivated 是否已赋值
                     * 
                     */
                    bool DeactivatedHasBeenSet() const;

                private:

                    /**
                     * DID标识符
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 设置DID禁用状态的临时凭证内容，通过创建凭证接口(CreateCredential)生成并签名，凭证类型为：OperateCredential, 为安全起见凭证过期时间不适合太长，建议设置为1分钟内
                     */
                    std::string m_operateCredential;
                    bool m_operateCredentialHasBeenSet;

                    /**
                     * DID应用Id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 是否禁用
                     */
                    std::string m_deactivated;
                    bool m_deactivatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DEACTIVATETDIDREQUEST_H_
