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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_COPYAGENTFROMAPPREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_COPYAGENTFROMAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CopyAgentFromApp请求参数结构体
                */
                class CopyAgentFromAppRequest : public AbstractModel
                {
                public:
                    CopyAgentFromAppRequest();
                    ~CopyAgentFromAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用Id</p>
                     * @return AppId <p>应用Id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用Id</p>
                     * @param _appId <p>应用Id</p>
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
                     * 获取<p>目标应用ID，kind=0时需传入</p>
                     * @return TargetAppId <p>目标应用ID，kind=0时需传入</p>
                     * 
                     */
                    std::string GetTargetAppId() const;

                    /**
                     * 设置<p>目标应用ID，kind=0时需传入</p>
                     * @param _targetAppId <p>目标应用ID，kind=0时需传入</p>
                     * 
                     */
                    void SetTargetAppId(const std::string& _targetAppId);

                    /**
                     * 判断参数 TargetAppId 是否已赋值
                     * @return TargetAppId 是否已赋值
                     * 
                     */
                    bool TargetAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent 类型，区分 B 端配置态 Agent 与 C 端用户态 Agent</p><p>枚举值：</p><ul><li>0：  配置端Agent </li><li>1：  用户态 Agent</li></ul>
                     * @return Kind <p>Agent 类型，区分 B 端配置态 Agent 与 C 端用户态 Agent</p><p>枚举值：</p><ul><li>0：  配置端Agent </li><li>1：  用户态 Agent</li></ul>
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置<p>Agent 类型，区分 B 端配置态 Agent 与 C 端用户态 Agent</p><p>枚举值：</p><ul><li>0：  配置端Agent </li><li>1：  用户态 Agent</li></ul>
                     * @param _kind <p>Agent 类型，区分 B 端配置态 Agent 与 C 端用户态 Agent</p><p>枚举值：</p><ul><li>0：  配置端Agent </li><li>1：  用户态 Agent</li></ul>
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * <p>应用Id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>目标应用ID，kind=0时需传入</p>
                     */
                    std::string m_targetAppId;
                    bool m_targetAppIdHasBeenSet;

                    /**
                     * <p>Agent 类型，区分 B 端配置态 Agent 与 C 端用户态 Agent</p><p>枚举值：</p><ul><li>0：  配置端Agent </li><li>1：  用户态 Agent</li></ul>
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_COPYAGENTFROMAPPREQUEST_H_
