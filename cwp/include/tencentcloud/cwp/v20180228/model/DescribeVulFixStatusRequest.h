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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSREQUEST_H_

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
                * DescribeVulFixStatus请求参数结构体
                */
                class DescribeVulFixStatusRequest : public AbstractModel
                {
                public:
                    DescribeVulFixStatusRequest();
                    ~DescribeVulFixStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id 传VulId可以不用传FixId
                     * @return FixId 任务id 传VulId可以不用传FixId
                     * 
                     */
                    uint64_t GetFixId() const;

                    /**
                     * 设置任务id 传VulId可以不用传FixId
                     * @param _fixId 任务id 传VulId可以不用传FixId
                     * 
                     */
                    void SetFixId(const uint64_t& _fixId);

                    /**
                     * 判断参数 FixId 是否已赋值
                     * @return FixId 是否已赋值
                     * 
                     */
                    bool FixIdHasBeenSet() const;

                    /**
                     * 获取漏洞id 传FixId可以不用传VulId
                     * @return VulId 漏洞id 传FixId可以不用传VulId
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id 传FixId可以不用传VulId
                     * @param _vulId 漏洞id 传FixId可以不用传VulId
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取主机quuid 和VulId 组合可查 某主机最近一次修复任务详情
                     * @return Quuid 主机quuid 和VulId 组合可查 某主机最近一次修复任务详情
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机quuid 和VulId 组合可查 某主机最近一次修复任务详情
                     * @param _quuid 主机quuid 和VulId 组合可查 某主机最近一次修复任务详情
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 任务id 传VulId可以不用传FixId
                     */
                    uint64_t m_fixId;
                    bool m_fixIdHasBeenSet;

                    /**
                     * 漏洞id 传FixId可以不用传VulId
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 主机quuid 和VulId 组合可查 某主机最近一次修复任务详情
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULFIXSTATUSREQUEST_H_
