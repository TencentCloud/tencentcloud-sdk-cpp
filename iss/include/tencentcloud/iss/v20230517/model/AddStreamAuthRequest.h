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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddStreamAuth请求参数结构体
                */
                class AddStreamAuthRequest : public AbstractModel
                {
                public:
                    AddStreamAuthRequest();
                    ~AddStreamAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>鉴权配置ID（uuid）</p>
                     * @return Id <p>鉴权配置ID（uuid）</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>鉴权配置ID（uuid）</p>
                     * @param _id <p>鉴权配置ID（uuid）</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>是否开播放鉴权（1:开启,0:关闭）</p>
                     * @return PullState <p>是否开播放鉴权（1:开启,0:关闭）</p>
                     * 
                     */
                    int64_t GetPullState() const;

                    /**
                     * 设置<p>是否开播放鉴权（1:开启,0:关闭）</p>
                     * @param _pullState <p>是否开播放鉴权（1:开启,0:关闭）</p>
                     * 
                     */
                    void SetPullState(const int64_t& _pullState);

                    /**
                     * 判断参数 PullState 是否已赋值
                     * @return PullState 是否已赋值
                     * 
                     */
                    bool PullStateHasBeenSet() const;

                    /**
                     * 获取<p>播放密钥（仅支持字母数字，长度0-10位）</p>
                     * @return PullSecret <p>播放密钥（仅支持字母数字，长度0-10位）</p>
                     * 
                     */
                    std::string GetPullSecret() const;

                    /**
                     * 设置<p>播放密钥（仅支持字母数字，长度0-10位）</p>
                     * @param _pullSecret <p>播放密钥（仅支持字母数字，长度0-10位）</p>
                     * 
                     */
                    void SetPullSecret(const std::string& _pullSecret);

                    /**
                     * 判断参数 PullSecret 是否已赋值
                     * @return PullSecret 是否已赋值
                     * 
                     */
                    bool PullSecretHasBeenSet() const;

                    /**
                     * 获取<p>播放过期时间（单位：分钟）</p>
                     * @return PullExpired <p>播放过期时间（单位：分钟）</p>
                     * 
                     */
                    int64_t GetPullExpired() const;

                    /**
                     * 设置<p>播放过期时间（单位：分钟）</p>
                     * @param _pullExpired <p>播放过期时间（单位：分钟）</p>
                     * 
                     */
                    void SetPullExpired(const int64_t& _pullExpired);

                    /**
                     * 判断参数 PullExpired 是否已赋值
                     * @return PullExpired 是否已赋值
                     * 
                     */
                    bool PullExpiredHasBeenSet() const;

                    /**
                     * 获取<p>是否开启推流鉴权（1:开启,0:关闭）</p>
                     * @return PushState <p>是否开启推流鉴权（1:开启,0:关闭）</p>
                     * 
                     */
                    int64_t GetPushState() const;

                    /**
                     * 设置<p>是否开启推流鉴权（1:开启,0:关闭）</p>
                     * @param _pushState <p>是否开启推流鉴权（1:开启,0:关闭）</p>
                     * 
                     */
                    void SetPushState(const int64_t& _pushState);

                    /**
                     * 判断参数 PushState 是否已赋值
                     * @return PushState 是否已赋值
                     * 
                     */
                    bool PushStateHasBeenSet() const;

                    /**
                     * 获取<p>推流密钥（仅支持字母数字，长度0-10位）</p>
                     * @return PushSecret <p>推流密钥（仅支持字母数字，长度0-10位）</p>
                     * 
                     */
                    std::string GetPushSecret() const;

                    /**
                     * 设置<p>推流密钥（仅支持字母数字，长度0-10位）</p>
                     * @param _pushSecret <p>推流密钥（仅支持字母数字，长度0-10位）</p>
                     * 
                     */
                    void SetPushSecret(const std::string& _pushSecret);

                    /**
                     * 判断参数 PushSecret 是否已赋值
                     * @return PushSecret 是否已赋值
                     * 
                     */
                    bool PushSecretHasBeenSet() const;

                    /**
                     * 获取<p>推流过期时间（单位：分钟）</p>
                     * @return PushExpired <p>推流过期时间（单位：分钟）</p>
                     * 
                     */
                    int64_t GetPushExpired() const;

                    /**
                     * 设置<p>推流过期时间（单位：分钟）</p>
                     * @param _pushExpired <p>推流过期时间（单位：分钟）</p>
                     * 
                     */
                    void SetPushExpired(const int64_t& _pushExpired);

                    /**
                     * 判断参数 PushExpired 是否已赋值
                     * @return PushExpired 是否已赋值
                     * 
                     */
                    bool PushExpiredHasBeenSet() const;

                    /**
                     * 获取<p>不生效推流鉴权的域名 ID 列表</p>
                     * @return ExcludePushDomainIds <p>不生效推流鉴权的域名 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetExcludePushDomainIds() const;

                    /**
                     * 设置<p>不生效推流鉴权的域名 ID 列表</p>
                     * @param _excludePushDomainIds <p>不生效推流鉴权的域名 ID 列表</p>
                     * 
                     */
                    void SetExcludePushDomainIds(const std::vector<std::string>& _excludePushDomainIds);

                    /**
                     * 判断参数 ExcludePushDomainIds 是否已赋值
                     * @return ExcludePushDomainIds 是否已赋值
                     * 
                     */
                    bool ExcludePushDomainIdsHasBeenSet() const;

                private:

                    /**
                     * <p>鉴权配置ID（uuid）</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>是否开播放鉴权（1:开启,0:关闭）</p>
                     */
                    int64_t m_pullState;
                    bool m_pullStateHasBeenSet;

                    /**
                     * <p>播放密钥（仅支持字母数字，长度0-10位）</p>
                     */
                    std::string m_pullSecret;
                    bool m_pullSecretHasBeenSet;

                    /**
                     * <p>播放过期时间（单位：分钟）</p>
                     */
                    int64_t m_pullExpired;
                    bool m_pullExpiredHasBeenSet;

                    /**
                     * <p>是否开启推流鉴权（1:开启,0:关闭）</p>
                     */
                    int64_t m_pushState;
                    bool m_pushStateHasBeenSet;

                    /**
                     * <p>推流密钥（仅支持字母数字，长度0-10位）</p>
                     */
                    std::string m_pushSecret;
                    bool m_pushSecretHasBeenSet;

                    /**
                     * <p>推流过期时间（单位：分钟）</p>
                     */
                    int64_t m_pushExpired;
                    bool m_pushExpiredHasBeenSet;

                    /**
                     * <p>不生效推流鉴权的域名 ID 列表</p>
                     */
                    std::vector<std::string> m_excludePushDomainIds;
                    bool m_excludePushDomainIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHREQUEST_H_
