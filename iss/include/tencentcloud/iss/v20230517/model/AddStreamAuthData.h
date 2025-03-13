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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 设置推拉流鉴权返回数据结构
                */
                class AddStreamAuthData : public AbstractModel
                {
                public:
                    AddStreamAuthData();
                    ~AddStreamAuthData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴权配置ID（uuid）
                     * @return Id 鉴权配置ID（uuid）
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置鉴权配置ID（uuid）
                     * @param _id 鉴权配置ID（uuid）
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
                     * 获取是否开播放鉴权（1:开启,0:关闭）
                     * @return PullState 是否开播放鉴权（1:开启,0:关闭）
                     * 
                     */
                    int64_t GetPullState() const;

                    /**
                     * 设置是否开播放鉴权（1:开启,0:关闭）
                     * @param _pullState 是否开播放鉴权（1:开启,0:关闭）
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
                     * 获取播放密钥（仅支持字母数字，长度0-10位）
                     * @return PullSecret 播放密钥（仅支持字母数字，长度0-10位）
                     * 
                     */
                    std::string GetPullSecret() const;

                    /**
                     * 设置播放密钥（仅支持字母数字，长度0-10位）
                     * @param _pullSecret 播放密钥（仅支持字母数字，长度0-10位）
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
                     * 获取播放过期时间（单位：分钟）
                     * @return PullExpired 播放过期时间（单位：分钟）
                     * 
                     */
                    int64_t GetPullExpired() const;

                    /**
                     * 设置播放过期时间（单位：分钟）
                     * @param _pullExpired 播放过期时间（单位：分钟）
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
                     * 获取是否开启推流鉴权（1:开启,0:关闭）
                     * @return PushState 是否开启推流鉴权（1:开启,0:关闭）
                     * 
                     */
                    int64_t GetPushState() const;

                    /**
                     * 设置是否开启推流鉴权（1:开启,0:关闭）
                     * @param _pushState 是否开启推流鉴权（1:开启,0:关闭）
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
                     * 获取推流密钥（仅支持字母数字，长度0-10位）
                     * @return PushSecret 推流密钥（仅支持字母数字，长度0-10位）
                     * 
                     */
                    std::string GetPushSecret() const;

                    /**
                     * 设置推流密钥（仅支持字母数字，长度0-10位）
                     * @param _pushSecret 推流密钥（仅支持字母数字，长度0-10位）
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
                     * 获取推流过期时间（单位：分钟）
                     * @return PushExpired 推流过期时间（单位：分钟）
                     * 
                     */
                    int64_t GetPushExpired() const;

                    /**
                     * 设置推流过期时间（单位：分钟）
                     * @param _pushExpired 推流过期时间（单位：分钟）
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
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 鉴权配置ID（uuid）
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否开播放鉴权（1:开启,0:关闭）
                     */
                    int64_t m_pullState;
                    bool m_pullStateHasBeenSet;

                    /**
                     * 播放密钥（仅支持字母数字，长度0-10位）
                     */
                    std::string m_pullSecret;
                    bool m_pullSecretHasBeenSet;

                    /**
                     * 播放过期时间（单位：分钟）
                     */
                    int64_t m_pullExpired;
                    bool m_pullExpiredHasBeenSet;

                    /**
                     * 是否开启推流鉴权（1:开启,0:关闭）
                     */
                    int64_t m_pushState;
                    bool m_pushStateHasBeenSet;

                    /**
                     * 推流密钥（仅支持字母数字，长度0-10位）
                     */
                    std::string m_pushSecret;
                    bool m_pushSecretHasBeenSet;

                    /**
                     * 推流过期时间（单位：分钟）
                     */
                    int64_t m_pushExpired;
                    bool m_pushExpiredHasBeenSet;

                    /**
                     * 用户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDSTREAMAUTHDATA_H_
