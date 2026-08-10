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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULHOSTRELATECOMPONENTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULHOSTRELATECOMPONENTREQUEST_H_

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
                * DescribeVulHostRelateComponent请求参数结构体
                */
                class DescribeVulHostRelateComponentRequest : public AbstractModel
                {
                public:
                    DescribeVulHostRelateComponentRequest();
                    ~DescribeVulHostRelateComponentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>漏洞 ID（vul_vuls.id）</p>
                     * @return VulID <p>漏洞 ID（vul_vuls.id）</p>
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置<p>漏洞 ID（vul_vuls.id）</p>
                     * @param _vulID <p>漏洞 ID（vul_vuls.id）</p>
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
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
                     * <p>漏洞 ID（vul_vuls.id）</p>
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULHOSTRELATECOMPONENTREQUEST_H_
