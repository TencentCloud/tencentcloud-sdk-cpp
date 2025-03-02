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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERITEM_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERITEM_H_

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
                * 签署方信息，发起合同后可获取到对应的签署方信息，如角色ID，角色名称
                */
                class ApproverItem : public AbstractModel
                {
                public:
                    ApproverItem();
                    ~ApproverItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署方唯一编号
                     * @return SignId 签署方唯一编号
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署方唯一编号
                     * @param _signId 签署方唯一编号
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取签署方角色编号
                     * @return RecipientId 签署方角色编号
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署方角色编号
                     * @param _recipientId 签署方角色编号
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取签署方角色名称
                     * @return ApproverRoleName 签署方角色名称
                     * 
                     */
                    std::string GetApproverRoleName() const;

                    /**
                     * 设置签署方角色名称
                     * @param _approverRoleName 签署方角色名称
                     * 
                     */
                    void SetApproverRoleName(const std::string& _approverRoleName);

                    /**
                     * 判断参数 ApproverRoleName 是否已赋值
                     * @return ApproverRoleName 是否已赋值
                     * 
                     */
                    bool ApproverRoleNameHasBeenSet() const;

                private:

                    /**
                     * 签署方唯一编号
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 签署方角色编号
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署方角色名称
                     */
                    std::string m_approverRoleName;
                    bool m_approverRoleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERITEM_H_
