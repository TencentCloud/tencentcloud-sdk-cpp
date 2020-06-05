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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEPOSTPAYPACKAGEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEPOSTPAYPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreatePostpayPackage请求参数结构体
                */
                class CreatePostpayPackageRequest : public AbstractModel
                {
                public:
                    CreatePostpayPackageRequest();
                    ~CreatePostpayPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param EnvId 环境ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取微信 AppId，微信必传
                     * @return WxAppId 微信 AppId，微信必传
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置微信 AppId，微信必传
                     * @param WxAppId 微信 AppId，微信必传
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     */
                    bool WxAppIdHasBeenSet() const;

                    /**
                     * 获取付费来源
<li>miniapp</li>
<li>qcloud</li>
                     * @return Source 付费来源
<li>miniapp</li>
<li>qcloud</li>
                     */
                    std::string GetSource() const;

                    /**
                     * 设置付费来源
<li>miniapp</li>
<li>qcloud</li>
                     * @param Source 付费来源
<li>miniapp</li>
<li>qcloud</li>
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @return FreeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @param FreeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     */
                    void SetFreeQuota(const std::string& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     * @return Alias 环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     * @param Alias 环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取环境创建来源，取值：
<li>miniapp</li>
<li>qcloud</li>
用法同CreateEnv接口的Source参数
和 Channel 参数同时传，或者同时不传；EnvId 为空时必传。
                     * @return EnvSource 环境创建来源，取值：
<li>miniapp</li>
<li>qcloud</li>
用法同CreateEnv接口的Source参数
和 Channel 参数同时传，或者同时不传；EnvId 为空时必传。
                     */
                    std::string GetEnvSource() const;

                    /**
                     * 设置环境创建来源，取值：
<li>miniapp</li>
<li>qcloud</li>
用法同CreateEnv接口的Source参数
和 Channel 参数同时传，或者同时不传；EnvId 为空时必传。
                     * @param EnvSource 环境创建来源，取值：
<li>miniapp</li>
<li>qcloud</li>
用法同CreateEnv接口的Source参数
和 Channel 参数同时传，或者同时不传；EnvId 为空时必传。
                     */
                    void SetEnvSource(const std::string& _envSource);

                    /**
                     * 判断参数 EnvSource 是否已赋值
                     * @return EnvSource 是否已赋值
                     */
                    bool EnvSourceHasBeenSet() const;

                    /**
                     * 获取如果envsource为miniapp, channel可以为ide或api;
如果envsource为qcloud, channel可以为qc_console,cocos, qq, cloudgame,dcloud
和 EnvSource 参数同时传，或者同时不传；EnvId 为空时必传。
                     * @return Channel 如果envsource为miniapp, channel可以为ide或api;
如果envsource为qcloud, channel可以为qc_console,cocos, qq, cloudgame,dcloud
和 EnvSource 参数同时传，或者同时不传；EnvId 为空时必传。
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置如果envsource为miniapp, channel可以为ide或api;
如果envsource为qcloud, channel可以为qc_console,cocos, qq, cloudgame,dcloud
和 EnvSource 参数同时传，或者同时不传；EnvId 为空时必传。
                     * @param Channel 如果envsource为miniapp, channel可以为ide或api;
如果envsource为qcloud, channel可以为qc_console,cocos, qq, cloudgame,dcloud
和 EnvSource 参数同时传，或者同时不传；EnvId 为空时必传。
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 微信 AppId，微信必传
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                    /**
                     * 付费来源
<li>miniapp</li>
<li>qcloud</li>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     */
                    std::string m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 环境创建来源，取值：
<li>miniapp</li>
<li>qcloud</li>
用法同CreateEnv接口的Source参数
和 Channel 参数同时传，或者同时不传；EnvId 为空时必传。
                     */
                    std::string m_envSource;
                    bool m_envSourceHasBeenSet;

                    /**
                     * 如果envsource为miniapp, channel可以为ide或api;
如果envsource为qcloud, channel可以为qc_console,cocos, qq, cloudgame,dcloud
和 EnvSource 参数同时传，或者同时不传；EnvId 为空时必传。
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEPOSTPAYPACKAGEREQUEST_H_
