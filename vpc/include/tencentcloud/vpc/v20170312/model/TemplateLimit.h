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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TEMPLATELIMIT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TEMPLATELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 参数模板配额
                */
                class TemplateLimit : public AbstractModel
                {
                public:
                    TemplateLimit();
                    ~TemplateLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数模板IP地址成员配额。
                     * @return AddressTemplateMemberLimit 参数模板IP地址成员配额。
                     * 
                     */
                    uint64_t GetAddressTemplateMemberLimit() const;

                    /**
                     * 设置参数模板IP地址成员配额。
                     * @param _addressTemplateMemberLimit 参数模板IP地址成员配额。
                     * 
                     */
                    void SetAddressTemplateMemberLimit(const uint64_t& _addressTemplateMemberLimit);

                    /**
                     * 判断参数 AddressTemplateMemberLimit 是否已赋值
                     * @return AddressTemplateMemberLimit 是否已赋值
                     * 
                     */
                    bool AddressTemplateMemberLimitHasBeenSet() const;

                    /**
                     * 获取参数模板IP地址组成员配额。
                     * @return AddressTemplateGroupMemberLimit 参数模板IP地址组成员配额。
                     * 
                     */
                    uint64_t GetAddressTemplateGroupMemberLimit() const;

                    /**
                     * 设置参数模板IP地址组成员配额。
                     * @param _addressTemplateGroupMemberLimit 参数模板IP地址组成员配额。
                     * 
                     */
                    void SetAddressTemplateGroupMemberLimit(const uint64_t& _addressTemplateGroupMemberLimit);

                    /**
                     * 判断参数 AddressTemplateGroupMemberLimit 是否已赋值
                     * @return AddressTemplateGroupMemberLimit 是否已赋值
                     * 
                     */
                    bool AddressTemplateGroupMemberLimitHasBeenSet() const;

                    /**
                     * 获取参数模板I协议端口成员配额。
                     * @return ServiceTemplateMemberLimit 参数模板I协议端口成员配额。
                     * 
                     */
                    uint64_t GetServiceTemplateMemberLimit() const;

                    /**
                     * 设置参数模板I协议端口成员配额。
                     * @param _serviceTemplateMemberLimit 参数模板I协议端口成员配额。
                     * 
                     */
                    void SetServiceTemplateMemberLimit(const uint64_t& _serviceTemplateMemberLimit);

                    /**
                     * 判断参数 ServiceTemplateMemberLimit 是否已赋值
                     * @return ServiceTemplateMemberLimit 是否已赋值
                     * 
                     */
                    bool ServiceTemplateMemberLimitHasBeenSet() const;

                    /**
                     * 获取参数模板协议端口组成员配额。
                     * @return ServiceTemplateGroupMemberLimit 参数模板协议端口组成员配额。
                     * 
                     */
                    uint64_t GetServiceTemplateGroupMemberLimit() const;

                    /**
                     * 设置参数模板协议端口组成员配额。
                     * @param _serviceTemplateGroupMemberLimit 参数模板协议端口组成员配额。
                     * 
                     */
                    void SetServiceTemplateGroupMemberLimit(const uint64_t& _serviceTemplateGroupMemberLimit);

                    /**
                     * 判断参数 ServiceTemplateGroupMemberLimit 是否已赋值
                     * @return ServiceTemplateGroupMemberLimit 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupMemberLimitHasBeenSet() const;

                private:

                    /**
                     * 参数模板IP地址成员配额。
                     */
                    uint64_t m_addressTemplateMemberLimit;
                    bool m_addressTemplateMemberLimitHasBeenSet;

                    /**
                     * 参数模板IP地址组成员配额。
                     */
                    uint64_t m_addressTemplateGroupMemberLimit;
                    bool m_addressTemplateGroupMemberLimitHasBeenSet;

                    /**
                     * 参数模板I协议端口成员配额。
                     */
                    uint64_t m_serviceTemplateMemberLimit;
                    bool m_serviceTemplateMemberLimitHasBeenSet;

                    /**
                     * 参数模板协议端口组成员配额。
                     */
                    uint64_t m_serviceTemplateGroupMemberLimit;
                    bool m_serviceTemplateGroupMemberLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TEMPLATELIMIT_H_
