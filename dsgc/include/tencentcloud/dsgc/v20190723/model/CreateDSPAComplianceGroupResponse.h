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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOMPLIANCEGROUPRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOMPLIANCEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPAComplianceGroup返回参数结构体
                */
                class CreateDSPAComplianceGroupResponse : public AbstractModel
                {
                public:
                    CreateDSPAComplianceGroupResponse();
                    ~CreateDSPAComplianceGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合规组ID
                     * @return ComplianceGroupId 合规组ID
                     * 
                     */
                    int64_t GetComplianceGroupId() const;

                    /**
                     * 判断参数 ComplianceGroupId 是否已赋值
                     * @return ComplianceGroupId 是否已赋值
                     * 
                     */
                    bool ComplianceGroupIdHasBeenSet() const;

                private:

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceGroupId;
                    bool m_complianceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOMPLIANCEGROUPRESPONSE_H_
