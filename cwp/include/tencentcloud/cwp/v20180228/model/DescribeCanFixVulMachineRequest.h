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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANFIXVULMACHINEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANFIXVULMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeCanFixVulMachine请求参数结构体
                */
                class DescribeCanFixVulMachineRequest : public AbstractModel
                {
                public:
                    DescribeCanFixVulMachineRequest();
                    ~DescribeCanFixVulMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞id 支持多个漏洞
                     * @return VulIds 漏洞id 支持多个漏洞
                     * 
                     */
                    std::vector<uint64_t> GetVulIds() const;

                    /**
                     * 设置漏洞id 支持多个漏洞
                     * @param _vulIds 漏洞id 支持多个漏洞
                     * 
                     */
                    void SetVulIds(const std::vector<uint64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取需要修复的主机，和VulIds是and 的关系
                     * @return Quuids 需要修复的主机，和VulIds是and 的关系
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置需要修复的主机，和VulIds是and 的关系
                     * @param _quuids 需要修复的主机，和VulIds是and 的关系
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * 漏洞id 支持多个漏洞
                     */
                    std::vector<uint64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * 需要修复的主机，和VulIds是and 的关系
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECANFIXVULMACHINEREQUEST_H_
