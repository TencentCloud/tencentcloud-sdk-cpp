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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLESELECTIONPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLESELECTIONPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRouteTableSelectPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyRouteTableSelectionPolicies请求参数结构体
                */
                class ModifyRouteTableSelectionPoliciesRequest : public AbstractModel
                {
                public:
                    ModifyRouteTableSelectionPoliciesRequest();
                    ~ModifyRouteTableSelectionPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云联网ID。
                     * @return CcnId 云联网ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID。
                     * @param _ccnId 云联网ID。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取选择策略信息集合，表示需要按照当前的策略来修改。
                     * @return SelectionPolicies 选择策略信息集合，表示需要按照当前的策略来修改。
                     * 
                     */
                    std::vector<CcnRouteTableSelectPolicy> GetSelectionPolicies() const;

                    /**
                     * 设置选择策略信息集合，表示需要按照当前的策略来修改。
                     * @param _selectionPolicies 选择策略信息集合，表示需要按照当前的策略来修改。
                     * 
                     */
                    void SetSelectionPolicies(const std::vector<CcnRouteTableSelectPolicy>& _selectionPolicies);

                    /**
                     * 判断参数 SelectionPolicies 是否已赋值
                     * @return SelectionPolicies 是否已赋值
                     * 
                     */
                    bool SelectionPoliciesHasBeenSet() const;

                private:

                    /**
                     * 云联网ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 选择策略信息集合，表示需要按照当前的策略来修改。
                     */
                    std::vector<CcnRouteTableSelectPolicy> m_selectionPolicies;
                    bool m_selectionPoliciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYROUTETABLESELECTIONPOLICIESREQUEST_H_
