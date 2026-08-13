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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYREVERSESHELLSYSTEMPOLICYCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYREVERSESHELLSYSTEMPOLICYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>
#include <tencentcloud/csip/v20221121/model/ClusterIDWithAppIdItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyReverseShellSystemPolicyConfig请求参数结构体
                */
                class ModifyReverseShellSystemPolicyConfigRequest : public AbstractModel
                {
                public:
                    ModifyReverseShellSystemPolicyConfigRequest();
                    ~ModifyReverseShellSystemPolicyConfigRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取<p>内网告警展示</p>
                     * @return InnerNetAlarmShow <p>内网告警展示</p>
                     * 
                     */
                    bool GetInnerNetAlarmShow() const;

                    /**
                     * 设置<p>内网告警展示</p>
                     * @param _innerNetAlarmShow <p>内网告警展示</p>
                     * 
                     */
                    void SetInnerNetAlarmShow(const bool& _innerNetAlarmShow);

                    /**
                     * 判断参数 InnerNetAlarmShow 是否已赋值
                     * @return InnerNetAlarmShow 是否已赋值
                     * 
                     */
                    bool InnerNetAlarmShowHasBeenSet() const;

                    /**
                     * 获取<p>内网ip展示</p>
                     * @return InnerIPShow <p>内网ip展示</p>
                     * 
                     */
                    bool GetInnerIPShow() const;

                    /**
                     * 设置<p>内网ip展示</p>
                     * @param _innerIPShow <p>内网ip展示</p>
                     * 
                     */
                    void SetInnerIPShow(const bool& _innerIPShow);

                    /**
                     * 判断参数 InnerIPShow 是否已赋值
                     * @return InnerIPShow 是否已赋值
                     * 
                     */
                    bool InnerIPShowHasBeenSet() const;

                    /**
                     * 获取<p>主机范围：0-指定 1-全部 2-专业版 3-旗舰版 4-专业+旗舰</p>
                     * @return CWPScope <p>主机范围：0-指定 1-全部 2-专业版 3-旗舰版 4-专业+旗舰</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置<p>主机范围：0-指定 1-全部 2-专业版 3-旗舰版 4-专业+旗舰</p>
                     * @param _cWPScope <p>主机范围：0-指定 1-全部 2-专业版 3-旗舰版 4-专业+旗舰</p>
                     * 
                     */
                    void SetCWPScope(const int64_t& _cWPScope);

                    /**
                     * 判断参数 CWPScope 是否已赋值
                     * @return CWPScope 是否已赋值
                     * 
                     */
                    bool CWPScopeHasBeenSet() const;

                    /**
                     * 获取<p>指定主机列表（CWPScope=0时使用）</p>
                     * @return InstanceIDsWithAppId <p>指定主机列表（CWPScope=0时使用）</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>指定主机列表（CWPScope=0时使用）</p>
                     * @param _instanceIDsWithAppId <p>指定主机列表（CWPScope=0时使用）</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>排除主机列表</p>
                     * @return ExcludeInstanceIDsWithAppId <p>排除主机列表</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>排除主机列表</p>
                     * @param _excludeInstanceIDsWithAppId <p>排除主机列表</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>标签ID列表</p>
                     * @return TagIDs <p>标签ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置<p>标签ID列表</p>
                     * @param _tagIDs <p>标签ID列表</p>
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取<p>容器范围：0-指定集群 1-全部集群</p>
                     * @return TCSSScope <p>容器范围：0-指定集群 1-全部集群</p>
                     * 
                     */
                    int64_t GetTCSSScope() const;

                    /**
                     * 设置<p>容器范围：0-指定集群 1-全部集群</p>
                     * @param _tCSSScope <p>容器范围：0-指定集群 1-全部集群</p>
                     * 
                     */
                    void SetTCSSScope(const int64_t& _tCSSScope);

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取<p>指定集群列表（TCSSScope=0时使用）</p>
                     * @return ClusterIDsWithAppId <p>指定集群列表（TCSSScope=0时使用）</p>
                     * 
                     */
                    std::vector<ClusterIDWithAppIdItem> GetClusterIDsWithAppId() const;

                    /**
                     * 设置<p>指定集群列表（TCSSScope=0时使用）</p>
                     * @param _clusterIDsWithAppId <p>指定集群列表（TCSSScope=0时使用）</p>
                     * 
                     */
                    void SetClusterIDsWithAppId(const std::vector<ClusterIDWithAppIdItem>& _clusterIDsWithAppId);

                    /**
                     * 判断参数 ClusterIDsWithAppId 是否已赋值
                     * @return ClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>排除集群列表</p>
                     * @return ExcludeClusterIDsWithAppId <p>排除集群列表</p>
                     * 
                     */
                    std::vector<ClusterIDWithAppIdItem> GetExcludeClusterIDsWithAppId() const;

                    /**
                     * 设置<p>排除集群列表</p>
                     * @param _excludeClusterIDsWithAppId <p>排除集群列表</p>
                     * 
                     */
                    void SetExcludeClusterIDsWithAppId(const std::vector<ClusterIDWithAppIdItem>& _excludeClusterIDsWithAppId);

                    /**
                     * 判断参数 ExcludeClusterIDsWithAppId 是否已赋值
                     * @return ExcludeClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsWithAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>内网告警展示</p>
                     */
                    bool m_innerNetAlarmShow;
                    bool m_innerNetAlarmShowHasBeenSet;

                    /**
                     * <p>内网ip展示</p>
                     */
                    bool m_innerIPShow;
                    bool m_innerIPShowHasBeenSet;

                    /**
                     * <p>主机范围：0-指定 1-全部 2-专业版 3-旗舰版 4-专业+旗舰</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>指定主机列表（CWPScope=0时使用）</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>排除主机列表</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>标签ID列表</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * <p>容器范围：0-指定集群 1-全部集群</p>
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>指定集群列表（TCSSScope=0时使用）</p>
                     */
                    std::vector<ClusterIDWithAppIdItem> m_clusterIDsWithAppId;
                    bool m_clusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>排除集群列表</p>
                     */
                    std::vector<ClusterIDWithAppIdItem> m_excludeClusterIDsWithAppId;
                    bool m_excludeClusterIDsWithAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYREVERSESHELLSYSTEMPOLICYCONFIGREQUEST_H_
