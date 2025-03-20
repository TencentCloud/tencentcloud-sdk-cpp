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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulDefenceSetting返回参数结构体
                */
                class DescribeVulDefenceSettingResponse : public AbstractModel
                {
                public:
                    DescribeVulDefenceSettingResponse();
                    ~DescribeVulDefenceSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启:0: 关闭 1:开启
                     * @return IsEnabled 是否开启:0: 关闭 1:开启
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取漏洞防御主机范围: 0:自选主机节点，1:全部
                     * @return Scope 漏洞防御主机范围: 0:自选主机节点，1:全部
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取漏洞防御主机数量
                     * @return HostCount 漏洞防御主机数量
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取开启漏洞防御异常主机数量
                     * @return ExceptionHostCount 开启漏洞防御异常主机数量
                     * 
                     */
                    int64_t GetExceptionHostCount() const;

                    /**
                     * 判断参数 ExceptionHostCount 是否已赋值
                     * @return ExceptionHostCount 是否已赋值
                     * 
                     */
                    bool ExceptionHostCountHasBeenSet() const;

                    /**
                     * 获取自选漏洞防御主机
                     * @return HostIDs 自选漏洞防御主机
                     * 
                     */
                    std::vector<std::string> GetHostIDs() const;

                    /**
                     * 判断参数 HostIDs 是否已赋值
                     * @return HostIDs 是否已赋值
                     * 
                     */
                    bool HostIDsHasBeenSet() const;

                    /**
                     * 获取开通容器安全的主机总数
                     * @return HostTotalCount 开通容器安全的主机总数
                     * 
                     */
                    int64_t GetHostTotalCount() const;

                    /**
                     * 判断参数 HostTotalCount 是否已赋值
                     * @return HostTotalCount 是否已赋值
                     * 
                     */
                    bool HostTotalCountHasBeenSet() const;

                    /**
                     * 获取支持防御的漏洞数
                     * @return SupportDefenseVulCount 支持防御的漏洞数
                     * 
                     */
                    int64_t GetSupportDefenseVulCount() const;

                    /**
                     * 判断参数 SupportDefenseVulCount 是否已赋值
                     * @return SupportDefenseVulCount 是否已赋值
                     * 
                     */
                    bool SupportDefenseVulCountHasBeenSet() const;

                    /**
                     * 获取普通节点个数
                     * @return HostNodeCount 普通节点个数
                     * 
                     */
                    int64_t GetHostNodeCount() const;

                    /**
                     * 判断参数 HostNodeCount 是否已赋值
                     * @return HostNodeCount 是否已赋值
                     * 
                     */
                    bool HostNodeCountHasBeenSet() const;

                    /**
                     * 获取超级节点范围
                     * @return SuperScope 超级节点范围
                     * 
                     */
                    int64_t GetSuperScope() const;

                    /**
                     * 判断参数 SuperScope 是否已赋值
                     * @return SuperScope 是否已赋值
                     * 
                     */
                    bool SuperScopeHasBeenSet() const;

                    /**
                     * 获取超级节点个数
                     * @return SuperNodeCount 超级节点个数
                     * 
                     */
                    int64_t GetSuperNodeCount() const;

                    /**
                     * 判断参数 SuperNodeCount 是否已赋值
                     * @return SuperNodeCount 是否已赋值
                     * 
                     */
                    bool SuperNodeCountHasBeenSet() const;

                    /**
                     * 获取超级节点Id列表
                     * @return SuperNodeIds 超级节点Id列表
                     * 
                     */
                    std::vector<std::string> GetSuperNodeIds() const;

                    /**
                     * 判断参数 SuperNodeIds 是否已赋值
                     * @return SuperNodeIds 是否已赋值
                     * 
                     */
                    bool SuperNodeIdsHasBeenSet() const;

                    /**
                     * 获取开通容器安全的超级结点总数
                     * @return NodeTotalCount 开通容器安全的超级结点总数
                     * 
                     */
                    int64_t GetNodeTotalCount() const;

                    /**
                     * 判断参数 NodeTotalCount 是否已赋值
                     * @return NodeTotalCount 是否已赋值
                     * 
                     */
                    bool NodeTotalCountHasBeenSet() const;

                private:

                    /**
                     * 是否开启:0: 关闭 1:开启
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 漏洞防御主机范围: 0:自选主机节点，1:全部
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 漏洞防御主机数量
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 开启漏洞防御异常主机数量
                     */
                    int64_t m_exceptionHostCount;
                    bool m_exceptionHostCountHasBeenSet;

                    /**
                     * 自选漏洞防御主机
                     */
                    std::vector<std::string> m_hostIDs;
                    bool m_hostIDsHasBeenSet;

                    /**
                     * 开通容器安全的主机总数
                     */
                    int64_t m_hostTotalCount;
                    bool m_hostTotalCountHasBeenSet;

                    /**
                     * 支持防御的漏洞数
                     */
                    int64_t m_supportDefenseVulCount;
                    bool m_supportDefenseVulCountHasBeenSet;

                    /**
                     * 普通节点个数
                     */
                    int64_t m_hostNodeCount;
                    bool m_hostNodeCountHasBeenSet;

                    /**
                     * 超级节点范围
                     */
                    int64_t m_superScope;
                    bool m_superScopeHasBeenSet;

                    /**
                     * 超级节点个数
                     */
                    int64_t m_superNodeCount;
                    bool m_superNodeCountHasBeenSet;

                    /**
                     * 超级节点Id列表
                     */
                    std::vector<std::string> m_superNodeIds;
                    bool m_superNodeIdsHasBeenSet;

                    /**
                     * 开通容器安全的超级结点总数
                     */
                    int64_t m_nodeTotalCount;
                    bool m_nodeTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
