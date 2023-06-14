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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESUBORGANIZATIONSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESUBORGANIZATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeSubOrganizations请求参数结构体
                */
                class DescribeSubOrganizationsRequest : public AbstractModel
                {
                public:
                    DescribeSubOrganizationsRequest();
                    ~DescribeSubOrganizationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取子机构ID数组
                     * @return SubOrganizationIds 子机构ID数组
                     * 
                     */
                    std::vector<std::string> GetSubOrganizationIds() const;

                    /**
                     * 设置子机构ID数组
                     * @param _subOrganizationIds 子机构ID数组
                     * 
                     */
                    void SetSubOrganizationIds(const std::vector<std::string>& _subOrganizationIds);

                    /**
                     * 判断参数 SubOrganizationIds 是否已赋值
                     * @return SubOrganizationIds 是否已赋值
                     * 
                     */
                    bool SubOrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 子机构ID数组
                     */
                    std::vector<std::string> m_subOrganizationIds;
                    bool m_subOrganizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESUBORGANIZATIONSREQUEST_H_
