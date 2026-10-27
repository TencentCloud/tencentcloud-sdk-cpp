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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_UPDATEPOLICYREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_UPDATEPOLICYREQUEST_H_

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
                * UpdatePolicy请求参数结构体
                */
                class UpdatePolicyRequest : public AbstractModel
                {
                public:
                    UpdatePolicyRequest();
                    ~UpdatePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待更新策略id</p>
                     * @return PolicyId <p>待更新策略id</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>待更新策略id</p>
                     * @param _policyId <p>待更新策略id</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>更新策略后策略名称</p>
                     * @return Name <p>更新策略后策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>更新策略后策略名称</p>
                     * @param _name <p>更新策略后策略名称</p>
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
                     * 获取<p>更新策略后策略描述</p>
                     * @return Description <p>更新策略后策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>更新策略后策略描述</p>
                     * @param _description <p>更新策略后策略描述</p>
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
                     * 获取<p>更新策略的具体修改值（全集）</p>
                     * @return PolicyInfoList <p>更新策略的具体修改值（全集）</p>
                     * 
                     */
                    std::vector<PolicyInfo> GetPolicyInfoList() const;

                    /**
                     * 设置<p>更新策略的具体修改值（全集）</p>
                     * @param _policyInfoList <p>更新策略的具体修改值（全集）</p>
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
                     * 获取<p>新增绑定用户列表</p>
                     * @return BindUserIds <p>新增绑定用户列表</p>
                     * 
                     */
                    std::vector<std::string> GetBindUserIds() const;

                    /**
                     * 设置<p>新增绑定用户列表</p>
                     * @param _bindUserIds <p>新增绑定用户列表</p>
                     * 
                     */
                    void SetBindUserIds(const std::vector<std::string>& _bindUserIds);

                    /**
                     * 判断参数 BindUserIds 是否已赋值
                     * @return BindUserIds 是否已赋值
                     * 
                     */
                    bool BindUserIdsHasBeenSet() const;

                    /**
                     * 获取<p>移除绑定的用户列表</p>
                     * @return RemoveUserIds <p>移除绑定的用户列表</p>
                     * 
                     */
                    std::vector<std::string> GetRemoveUserIds() const;

                    /**
                     * 设置<p>移除绑定的用户列表</p>
                     * @param _removeUserIds <p>移除绑定的用户列表</p>
                     * 
                     */
                    void SetRemoveUserIds(const std::vector<std::string>& _removeUserIds);

                    /**
                     * 判断参数 RemoveUserIds 是否已赋值
                     * @return RemoveUserIds 是否已赋值
                     * 
                     */
                    bool RemoveUserIdsHasBeenSet() const;

                private:

                    /**
                     * <p>待更新策略id</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>更新策略后策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>更新策略后策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>更新策略的具体修改值（全集）</p>
                     */
                    std::vector<PolicyInfo> m_policyInfoList;
                    bool m_policyInfoListHasBeenSet;

                    /**
                     * <p>新增绑定用户列表</p>
                     */
                    std::vector<std::string> m_bindUserIds;
                    bool m_bindUserIdsHasBeenSet;

                    /**
                     * <p>移除绑定的用户列表</p>
                     */
                    std::vector<std::string> m_removeUserIds;
                    bool m_removeUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_UPDATEPOLICYREQUEST_H_
