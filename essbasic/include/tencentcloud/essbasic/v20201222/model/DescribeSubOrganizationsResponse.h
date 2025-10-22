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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESUBORGANIZATIONSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESUBORGANIZATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/SubOrganizationDetail.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeSubOrganizations返回参数结构体
                */
                class DescribeSubOrganizationsResponse : public AbstractModel
                {
                public:
                    DescribeSubOrganizationsResponse();
                    ~DescribeSubOrganizationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子机构信息列表
                     * @return SubOrganizationInfos 子机构信息列表
                     * 
                     */
                    std::vector<SubOrganizationDetail> GetSubOrganizationInfos() const;

                    /**
                     * 判断参数 SubOrganizationInfos 是否已赋值
                     * @return SubOrganizationInfos 是否已赋值
                     * 
                     */
                    bool SubOrganizationInfosHasBeenSet() const;

                private:

                    /**
                     * 子机构信息列表
                     */
                    std::vector<SubOrganizationDetail> m_subOrganizationInfos;
                    bool m_subOrganizationInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESUBORGANIZATIONSRESPONSE_H_
