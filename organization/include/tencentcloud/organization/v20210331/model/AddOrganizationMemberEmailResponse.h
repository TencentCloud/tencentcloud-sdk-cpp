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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDORGANIZATIONMEMBEREMAILRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDORGANIZATIONMEMBEREMAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddOrganizationMemberEmail返回参数结构体
                */
                class AddOrganizationMemberEmailResponse : public AbstractModel
                {
                public:
                    AddOrganizationMemberEmailResponse();
                    ~AddOrganizationMemberEmailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定Id
                     * @return BindId 绑定Id
                     * 
                     */
                    uint64_t GetBindId() const;

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     * 
                     */
                    bool BindIdHasBeenSet() const;

                private:

                    /**
                     * 绑定Id
                     */
                    uint64_t m_bindId;
                    bool m_bindIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDORGANIZATIONMEMBEREMAILRESPONSE_H_
