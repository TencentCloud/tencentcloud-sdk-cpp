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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDTEMPLATEMEMBERREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDTEMPLATEMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AddTemplateMember请求参数结构体
                */
                class AddTemplateMemberRequest : public AbstractModel
                {
                public:
                    AddTemplateMemberRequest();
                    ~AddTemplateMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板实例ID，支持IP地址、协议端口、IP地址组、协议端口组四种参数模板的实例ID。
                     * @return TemplateId 参数模板实例ID，支持IP地址、协议端口、IP地址组、协议端口组四种参数模板的实例ID。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置参数模板实例ID，支持IP地址、协议端口、IP地址组、协议端口组四种参数模板的实例ID。
                     * @param _templateId 参数模板实例ID，支持IP地址、协议端口、IP地址组、协议端口组四种参数模板的实例ID。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取需要添加的参数模板成员信息，支持IP地址、协议端口、IP地址组、协议端口组四种类型，类型需要与TemplateId参数类型一致。
                     * @return TemplateMember 需要添加的参数模板成员信息，支持IP地址、协议端口、IP地址组、协议端口组四种类型，类型需要与TemplateId参数类型一致。
                     * 
                     */
                    std::vector<MemberInfo> GetTemplateMember() const;

                    /**
                     * 设置需要添加的参数模板成员信息，支持IP地址、协议端口、IP地址组、协议端口组四种类型，类型需要与TemplateId参数类型一致。
                     * @param _templateMember 需要添加的参数模板成员信息，支持IP地址、协议端口、IP地址组、协议端口组四种类型，类型需要与TemplateId参数类型一致。
                     * 
                     */
                    void SetTemplateMember(const std::vector<MemberInfo>& _templateMember);

                    /**
                     * 判断参数 TemplateMember 是否已赋值
                     * @return TemplateMember 是否已赋值
                     * 
                     */
                    bool TemplateMemberHasBeenSet() const;

                private:

                    /**
                     * 参数模板实例ID，支持IP地址、协议端口、IP地址组、协议端口组四种参数模板的实例ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 需要添加的参数模板成员信息，支持IP地址、协议端口、IP地址组、协议端口组四种类型，类型需要与TemplateId参数类型一致。
                     */
                    std::vector<MemberInfo> m_templateMember;
                    bool m_templateMemberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDTEMPLATEMEMBERREQUEST_H_
