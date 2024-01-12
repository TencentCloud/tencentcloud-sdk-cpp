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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_SETTDIDATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_SETTDIDATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/DidAttribute.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * SetTDidAttribute请求参数结构体
                */
                class SetTDidAttributeRequest : public AbstractModel
                {
                public:
                    SetTDidAttributeRequest();
                    ~SetTDidAttributeRequest() = default;
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
                     * 获取属性名值对数组
                     * @return Attributes 属性名值对数组
                     * 
                     */
                    std::vector<DidAttribute> GetAttributes() const;

                    /**
                     * 设置属性名值对数组
                     * @param _attributes 属性名值对数组
                     * 
                     */
                    void SetAttributes(const std::vector<DidAttribute>& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

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
                     * 获取操作鉴权凭证
                     * @return OperateCredential 操作鉴权凭证
                     * 
                     */
                    std::string GetOperateCredential() const;

                    /**
                     * 设置操作鉴权凭证
                     * @param _operateCredential 操作鉴权凭证
                     * 
                     */
                    void SetOperateCredential(const std::string& _operateCredential);

                    /**
                     * 判断参数 OperateCredential 是否已赋值
                     * @return OperateCredential 是否已赋值
                     * 
                     */
                    bool OperateCredentialHasBeenSet() const;

                private:

                    /**
                     * DID标识符
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 属性名值对数组
                     */
                    std::vector<DidAttribute> m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * DID应用Id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 操作鉴权凭证
                     */
                    std::string m_operateCredential;
                    bool m_operateCredentialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_SETTDIDATTRIBUTEREQUEST_H_
