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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSREQUEST_H_

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
                * DescribeVulInfoCvss请求参数结构体
                */
                class DescribeVulInfoCvssRequest : public AbstractModel
                {
                public:
                    DescribeVulInfoCvssRequest();
                    ~DescribeVulInfoCvssRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param _vulId 漏洞id
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
                     * 获取兼容应用防护漏洞防御容器视角告警里漏洞详情，默认是主机视角，可选字段，Source=tcss则为容器视角漏洞详情，后端会把VulId转为主机vul_vuls里的VulId
                     * @return Source 兼容应用防护漏洞防御容器视角告警里漏洞详情，默认是主机视角，可选字段，Source=tcss则为容器视角漏洞详情，后端会把VulId转为主机vul_vuls里的VulId
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置兼容应用防护漏洞防御容器视角告警里漏洞详情，默认是主机视角，可选字段，Source=tcss则为容器视角漏洞详情，后端会把VulId转为主机vul_vuls里的VulId
                     * @param _source 兼容应用防护漏洞防御容器视角告警里漏洞详情，默认是主机视角，可选字段，Source=tcss则为容器视角漏洞详情，后端会把VulId转为主机vul_vuls里的VulId
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 兼容应用防护漏洞防御容器视角告警里漏洞详情，默认是主机视角，可选字段，Source=tcss则为容器视角漏洞详情，后端会把VulId转为主机vul_vuls里的VulId
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULINFOCVSSREQUEST_H_
