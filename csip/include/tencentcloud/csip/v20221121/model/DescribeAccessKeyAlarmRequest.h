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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYALARMREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAccessKeyAlarm请求参数结构体
                */
                class DescribeAccessKeyAlarmRequest : public AbstractModel
                {
                public:
                    DescribeAccessKeyAlarmRequest();
                    ~DescribeAccessKeyAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤器
                     * @return Filter 过滤器
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置过滤器
                     * @param _filter 过滤器
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

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

                    /**
                     * 获取访问密钥的ID
                     * @return AccessKeyID 访问密钥的ID
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置访问密钥的ID
                     * @param _accessKeyID 访问密钥的ID
                     * 
                     */
                    void SetAccessKeyID(const uint64_t& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取源IP的ID
                     * @return SourceIPID 源IP的ID
                     * 
                     */
                    uint64_t GetSourceIPID() const;

                    /**
                     * 设置源IP的ID
                     * @param _sourceIPID 源IP的ID
                     * 
                     */
                    void SetSourceIPID(const uint64_t& _sourceIPID);

                    /**
                     * 判断参数 SourceIPID 是否已赋值
                     * @return SourceIPID 是否已赋值
                     * 
                     */
                    bool SourceIPIDHasBeenSet() const;

                    /**
                     * 获取账号uin
                     * @return SubUin 账号uin
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置账号uin
                     * @param _subUin 账号uin
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                private:

                    /**
                     * 过滤器
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 访问密钥的ID
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * 源IP的ID
                     */
                    uint64_t m_sourceIPID;
                    bool m_sourceIPIDHasBeenSet;

                    /**
                     * 账号uin
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYALARMREQUEST_H_
