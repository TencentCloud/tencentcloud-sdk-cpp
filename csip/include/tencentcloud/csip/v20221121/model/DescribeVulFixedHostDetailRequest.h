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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulFixedHostDetail请求参数结构体
                */
                class DescribeVulFixedHostDetailRequest : public AbstractModel
                {
                public:
                    DescribeVulFixedHostDetailRequest();
                    ~DescribeVulFixedHostDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>漏洞ID</p>
                     * @return VulId <p>漏洞ID</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>漏洞ID</p>
                     * @param _vulId <p>漏洞ID</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>主机实例ID</p>
                     * @return InstanceId <p>主机实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>主机实例ID</p>
                     * @param _instanceId <p>主机实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，用于关联组件&amp;路径列表分页<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @return Offset <p>分页偏移量，用于关联组件&amp;路径列表分页<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，用于关联组件&amp;路径列表分页<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @param _offset <p>分页偏移量，用于关联组件&amp;路径列表分页<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页返回数量，用于关联组件&amp;路径列表分页<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @return Limit <p>每页返回数量，用于关联组件&amp;路径列表分页<br>取值范围：[1, 100]<br>默认值：10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量，用于关联组件&amp;路径列表分页<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @param _limit <p>每页返回数量，用于关联组件&amp;路径列表分页<br>取值范围：[1, 100]<br>默认值：10</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞ID</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>主机实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>分页偏移量，用于关联组件&amp;路径列表分页<br>取值范围：[0, +∞)<br>默认值：0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回数量，用于关联组件&amp;路径列表分页<br>取值范围：[1, 100]<br>默认值：10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILREQUEST_H_
