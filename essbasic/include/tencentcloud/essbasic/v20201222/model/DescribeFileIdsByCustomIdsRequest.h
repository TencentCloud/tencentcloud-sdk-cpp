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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEIDSBYCUSTOMIDSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEIDSBYCUSTOMIDSREQUEST_H_

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
                * DescribeFileIdsByCustomIds请求参数结构体
                */
                class DescribeFileIdsByCustomIdsRequest : public AbstractModel
                {
                public:
                    DescribeFileIdsByCustomIdsRequest();
                    ~DescribeFileIdsByCustomIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息, OrganizationId必填
                     * @return Caller 调用方信息, OrganizationId必填
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息, OrganizationId必填
                     * @param _caller 调用方信息, OrganizationId必填
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
                     * 获取用户自定义ID
                     * @return CustomIds 用户自定义ID
                     * 
                     */
                    std::vector<std::string> GetCustomIds() const;

                    /**
                     * 设置用户自定义ID
                     * @param _customIds 用户自定义ID
                     * 
                     */
                    void SetCustomIds(const std::vector<std::string>& _customIds);

                    /**
                     * 判断参数 CustomIds 是否已赋值
                     * @return CustomIds 是否已赋值
                     * 
                     */
                    bool CustomIdsHasBeenSet() const;

                private:

                    /**
                     * 调用方信息, OrganizationId必填
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 用户自定义ID
                     */
                    std::vector<std::string> m_customIds;
                    bool m_customIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEIDSBYCUSTOMIDSREQUEST_H_
