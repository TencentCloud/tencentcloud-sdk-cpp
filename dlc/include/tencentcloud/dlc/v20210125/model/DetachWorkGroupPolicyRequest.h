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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DETACHWORKGROUPPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DETACHWORKGROUPPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DetachWorkGroupPolicy请求参数结构体
                */
                class DetachWorkGroupPolicyRequest : public AbstractModel
                {
                public:
                    DetachWorkGroupPolicyRequest();
                    ~DetachWorkGroupPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作组Id
                     * @return WorkGroupId 工作组Id
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置工作组Id
                     * @param _workGroupId 工作组Id
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取解绑的权限集合
                     * @return PolicySet 解绑的权限集合
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置解绑的权限集合
                     * @param _policySet 解绑的权限集合
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                private:

                    /**
                     * 工作组Id
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * 解绑的权限集合
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DETACHWORKGROUPPOLICYREQUEST_H_
