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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYISSUESTATUSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYISSUESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyIssueStatus请求参数结构体
                */
                class ModifyIssueStatusRequest : public AbstractModel
                {
                public:
                    ModifyIssueStatusRequest();
                    ~ModifyIssueStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Issue ID</p>
                     * @return IssueId <p>Issue ID</p>
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置<p>Issue ID</p>
                     * @param _issueId <p>Issue ID</p>
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

                    /**
                     * 获取<p>状态动作，可选值：resolve、ignore、reopen</p>
                     * @return IssueAction <p>状态动作，可选值：resolve、ignore、reopen</p>
                     * 
                     */
                    std::string GetIssueAction() const;

                    /**
                     * 设置<p>状态动作，可选值：resolve、ignore、reopen</p>
                     * @param _issueAction <p>状态动作，可选值：resolve、ignore、reopen</p>
                     * 
                     */
                    void SetIssueAction(const std::string& _issueAction);

                    /**
                     * 判断参数 IssueAction 是否已赋值
                     * @return IssueAction 是否已赋值
                     * 
                     */
                    bool IssueActionHasBeenSet() const;

                    /**
                     * 获取<p>解决版本；当 IssueAction=resolve 时可传，不传则默认使用 latest_release</p>
                     * @return ResolvedRelease <p>解决版本；当 IssueAction=resolve 时可传，不传则默认使用 latest_release</p>
                     * 
                     */
                    std::string GetResolvedRelease() const;

                    /**
                     * 设置<p>解决版本；当 IssueAction=resolve 时可传，不传则默认使用 latest_release</p>
                     * @param _resolvedRelease <p>解决版本；当 IssueAction=resolve 时可传，不传则默认使用 latest_release</p>
                     * 
                     */
                    void SetResolvedRelease(const std::string& _resolvedRelease);

                    /**
                     * 判断参数 ResolvedRelease 是否已赋值
                     * @return ResolvedRelease 是否已赋值
                     * 
                     */
                    bool ResolvedReleaseHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Issue ID</p>
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * <p>状态动作，可选值：resolve、ignore、reopen</p>
                     */
                    std::string m_issueAction;
                    bool m_issueActionHasBeenSet;

                    /**
                     * <p>解决版本；当 IssueAction=resolve 时可传，不传则默认使用 latest_release</p>
                     */
                    std::string m_resolvedRelease;
                    bool m_resolvedReleaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYISSUESTATUSREQUEST_H_
