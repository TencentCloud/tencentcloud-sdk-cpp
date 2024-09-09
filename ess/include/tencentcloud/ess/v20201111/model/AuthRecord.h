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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_AUTHRECORD_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_AUTHRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 企业认证信息
                */
                class AuthRecord : public AbstractModel
                {
                public:
                    AuthRecord();
                    ~AuthRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取经办人姓名。
                     * @return OperatorName 经办人姓名。
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置经办人姓名。
                     * @param _operatorName 经办人姓名。
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取经办人手机号。
                     * @return OperatorMobile 经办人手机号。
                     * 
                     */
                    std::string GetOperatorMobile() const;

                    /**
                     * 设置经办人手机号。
                     * @param _operatorMobile 经办人手机号。
                     * 
                     */
                    void SetOperatorMobile(const std::string& _operatorMobile);

                    /**
                     * 判断参数 OperatorMobile 是否已赋值
                     * @return OperatorMobile 是否已赋值
                     * 
                     */
                    bool OperatorMobileHasBeenSet() const;

                    /**
                     * 获取认证授权方式：
<ul><li> **0**：未选择授权方式（默认值）</li>
<li> **1**：上传授权书</li>
<li> **2**：法人授权</li>
<li> **3**：法人认证</li></ul>
                     * @return AuthType 认证授权方式：
<ul><li> **0**：未选择授权方式（默认值）</li>
<li> **1**：上传授权书</li>
<li> **2**：法人授权</li>
<li> **3**：法人认证</li></ul>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置认证授权方式：
<ul><li> **0**：未选择授权方式（默认值）</li>
<li> **1**：上传授权书</li>
<li> **2**：法人授权</li>
<li> **3**：法人认证</li></ul>
                     * @param _authType 认证授权方式：
<ul><li> **0**：未选择授权方式（默认值）</li>
<li> **1**：上传授权书</li>
<li> **2**：法人授权</li>
<li> **3**：法人认证</li></ul>
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取企业认证授权书审核状态：
<ul><li> **0**：未提交授权书（默认值）</li>
<li> **1**：审核通过</li>
<li> **2**：审核驳回</li>
<li> **3**：审核中</li>
<li> **4**：AI识别中</li>
<li> **5**：客户确认AI信息</li></ul>
                     * @return AuditStatus 企业认证授权书审核状态：
<ul><li> **0**：未提交授权书（默认值）</li>
<li> **1**：审核通过</li>
<li> **2**：审核驳回</li>
<li> **3**：审核中</li>
<li> **4**：AI识别中</li>
<li> **5**：客户确认AI信息</li></ul>
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置企业认证授权书审核状态：
<ul><li> **0**：未提交授权书（默认值）</li>
<li> **1**：审核通过</li>
<li> **2**：审核驳回</li>
<li> **3**：审核中</li>
<li> **4**：AI识别中</li>
<li> **5**：客户确认AI信息</li></ul>
                     * @param _auditStatus 企业认证授权书审核状态：
<ul><li> **0**：未提交授权书（默认值）</li>
<li> **1**：审核通过</li>
<li> **2**：审核驳回</li>
<li> **3**：审核中</li>
<li> **4**：AI识别中</li>
<li> **5**：客户确认AI信息</li></ul>
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                private:

                    /**
                     * 经办人姓名。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 经办人手机号。
                     */
                    std::string m_operatorMobile;
                    bool m_operatorMobileHasBeenSet;

                    /**
                     * 认证授权方式：
<ul><li> **0**：未选择授权方式（默认值）</li>
<li> **1**：上传授权书</li>
<li> **2**：法人授权</li>
<li> **3**：法人认证</li></ul>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 企业认证授权书审核状态：
<ul><li> **0**：未提交授权书（默认值）</li>
<li> **1**：审核通过</li>
<li> **2**：审核驳回</li>
<li> **3**：审核中</li>
<li> **4**：AI识别中</li>
<li> **5**：客户确认AI信息</li></ul>
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_AUTHRECORD_H_
