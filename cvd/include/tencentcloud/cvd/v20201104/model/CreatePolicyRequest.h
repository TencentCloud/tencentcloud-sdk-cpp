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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_CREATEPOLICYREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_CREATEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/PolicyInfo.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * CreatePolicy请求参数结构体
                */
                class CreatePolicyRequest : public AbstractModel
                {
                public:
                    CreatePolicyRequest();
                    ~CreatePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略名称</p>
                     * @return Name <p>策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _name <p>策略名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>策略详情</p>
                     * @return PolicyInfoList <p>策略详情</p>
                     * 
                     */
                    std::vector<PolicyInfo> GetPolicyInfoList() const;

                    /**
                     * 设置<p>策略详情</p>
                     * @param _policyInfoList <p>策略详情</p>
                     * 
                     */
                    void SetPolicyInfoList(const std::vector<PolicyInfo>& _policyInfoList);

                    /**
                     * 判断参数 PolicyInfoList 是否已赋值
                     * @return PolicyInfoList 是否已赋值
                     * 
                     */
                    bool PolicyInfoListHasBeenSet() const;

                    /**
                     * 获取<p>策略描述</p>
                     * @return Description <p>策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _description <p>策略描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>策略作用的用户id</p>
                     * @return UserIds <p>策略作用的用户id</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>策略作用的用户id</p>
                     * @param _userIds <p>策略作用的用户id</p>
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略详情</p>
                     */
                    std::vector<PolicyInfo> m_policyInfoList;
                    bool m_policyInfoListHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>策略作用的用户id</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_CREATEPOLICYREQUEST_H_
