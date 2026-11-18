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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ACCESSSOURCESETTING_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ACCESSSOURCESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/VPCWhiteListConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 域名访问来源配置
                */
                class AccessSourceSetting : public AbstractModel
                {
                public:
                    AccessSourceSetting();
                    ~AccessSourceSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>来源类型</p><p>枚举值：</p><ul><li>PUBLIC： 公网请求</li><li>VPC： VPC 请求</li><li>WOA： 办公网请求</li></ul>
                     * @return SourceType <p>来源类型</p><p>枚举值：</p><ul><li>PUBLIC： 公网请求</li><li>VPC： VPC 请求</li><li>WOA： 办公网请求</li></ul>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>来源类型</p><p>枚举值：</p><ul><li>PUBLIC： 公网请求</li><li>VPC： VPC 请求</li><li>WOA： 办公网请求</li></ul>
                     * @param _sourceType <p>来源类型</p><p>枚举值：</p><ul><li>PUBLIC： 公网请求</li><li>VPC： VPC 请求</li><li>WOA： 办公网请求</li></ul>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>来源请求状态</p><p>枚举值：</p><ul><li>OPEN： 放通</li><li>CLOSE： 拦截</li></ul>
                     * @return Action <p>来源请求状态</p><p>枚举值：</p><ul><li>OPEN： 放通</li><li>CLOSE： 拦截</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>来源请求状态</p><p>枚举值：</p><ul><li>OPEN： 放通</li><li>CLOSE： 拦截</li></ul>
                     * @param _action <p>来源请求状态</p><p>枚举值：</p><ul><li>OPEN： 放通</li><li>CLOSE： 拦截</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 WOA 鉴权</p><p>枚举值：</p><ul><li>FORCE_AUTH： 强制鉴权</li><li>NO_AUTH： 不鉴权</li></ul><p>默认值：NO_AUTH</p><p>仅 SourceType = WOA 且 Action= OPEN 时生效</p>
                     * @return WOAAuth <p>是否开启 WOA 鉴权</p><p>枚举值：</p><ul><li>FORCE_AUTH： 强制鉴权</li><li>NO_AUTH： 不鉴权</li></ul><p>默认值：NO_AUTH</p><p>仅 SourceType = WOA 且 Action= OPEN 时生效</p>
                     * 
                     */
                    std::string GetWOAAuth() const;

                    /**
                     * 设置<p>是否开启 WOA 鉴权</p><p>枚举值：</p><ul><li>FORCE_AUTH： 强制鉴权</li><li>NO_AUTH： 不鉴权</li></ul><p>默认值：NO_AUTH</p><p>仅 SourceType = WOA 且 Action= OPEN 时生效</p>
                     * @param _wOAAuth <p>是否开启 WOA 鉴权</p><p>枚举值：</p><ul><li>FORCE_AUTH： 强制鉴权</li><li>NO_AUTH： 不鉴权</li></ul><p>默认值：NO_AUTH</p><p>仅 SourceType = WOA 且 Action= OPEN 时生效</p>
                     * 
                     */
                    void SetWOAAuth(const std::string& _wOAAuth);

                    /**
                     * 判断参数 WOAAuth 是否已赋值
                     * @return WOAAuth 是否已赋值
                     * 
                     */
                    bool WOAAuthHasBeenSet() const;

                    /**
                     * 获取<p>WOA 鉴权需要的 Token</p><p>仅 Source Type=WOA 且 WOAAuth = FORCE_AUTH 时必填</p>
                     * @return AuthToken <p>WOA 鉴权需要的 Token</p><p>仅 Source Type=WOA 且 WOAAuth = FORCE_AUTH 时必填</p>
                     * 
                     */
                    std::string GetAuthToken() const;

                    /**
                     * 设置<p>WOA 鉴权需要的 Token</p><p>仅 Source Type=WOA 且 WOAAuth = FORCE_AUTH 时必填</p>
                     * @param _authToken <p>WOA 鉴权需要的 Token</p><p>仅 Source Type=WOA 且 WOAAuth = FORCE_AUTH 时必填</p>
                     * 
                     */
                    void SetAuthToken(const std::string& _authToken);

                    /**
                     * 判断参数 AuthToken 是否已赋值
                     * @return AuthToken 是否已赋值
                     * 
                     */
                    bool AuthTokenHasBeenSet() const;

                    /**
                     * 获取<p>VPC 白名单信息</p><p>仅 SourceType = VPC 时有效; 不传表示不修改</p>
                     * @return VPCWhiteList <p>VPC 白名单信息</p><p>仅 SourceType = VPC 时有效; 不传表示不修改</p>
                     * 
                     */
                    VPCWhiteListConfig GetVPCWhiteList() const;

                    /**
                     * 设置<p>VPC 白名单信息</p><p>仅 SourceType = VPC 时有效; 不传表示不修改</p>
                     * @param _vPCWhiteList <p>VPC 白名单信息</p><p>仅 SourceType = VPC 时有效; 不传表示不修改</p>
                     * 
                     */
                    void SetVPCWhiteList(const VPCWhiteListConfig& _vPCWhiteList);

                    /**
                     * 判断参数 VPCWhiteList 是否已赋值
                     * @return VPCWhiteList 是否已赋值
                     * 
                     */
                    bool VPCWhiteListHasBeenSet() const;

                private:

                    /**
                     * <p>来源类型</p><p>枚举值：</p><ul><li>PUBLIC： 公网请求</li><li>VPC： VPC 请求</li><li>WOA： 办公网请求</li></ul>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>来源请求状态</p><p>枚举值：</p><ul><li>OPEN： 放通</li><li>CLOSE： 拦截</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>是否开启 WOA 鉴权</p><p>枚举值：</p><ul><li>FORCE_AUTH： 强制鉴权</li><li>NO_AUTH： 不鉴权</li></ul><p>默认值：NO_AUTH</p><p>仅 SourceType = WOA 且 Action= OPEN 时生效</p>
                     */
                    std::string m_wOAAuth;
                    bool m_wOAAuthHasBeenSet;

                    /**
                     * <p>WOA 鉴权需要的 Token</p><p>仅 Source Type=WOA 且 WOAAuth = FORCE_AUTH 时必填</p>
                     */
                    std::string m_authToken;
                    bool m_authTokenHasBeenSet;

                    /**
                     * <p>VPC 白名单信息</p><p>仅 SourceType = VPC 时有效; 不传表示不修改</p>
                     */
                    VPCWhiteListConfig m_vPCWhiteList;
                    bool m_vPCWhiteListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ACCESSSOURCESETTING_H_
