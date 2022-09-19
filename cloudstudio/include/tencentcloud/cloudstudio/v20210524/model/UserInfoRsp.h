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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERINFORSP_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERINFORSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/UserSubInfo.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class UserInfoRsp : public AbstractModel
                {
                public:
                    UserInfoRsp();
                    ~UserInfoRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return Id 用户ID
                     */
                    int64_t GetId() const;

                    /**
                     * 设置用户ID
                     * @param Id 用户ID
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户验证信息
                     * @return AuthenticationUserInfo 用户验证信息
                     */
                    UserSubInfo GetAuthenticationUserInfo() const;

                    /**
                     * 设置用户验证信息
                     * @param AuthenticationUserInfo 用户验证信息
                     */
                    void SetAuthenticationUserInfo(const UserSubInfo& _authenticationUserInfo);

                    /**
                     * 判断参数 AuthenticationUserInfo 是否已赋值
                     * @return AuthenticationUserInfo 是否已赋值
                     */
                    bool AuthenticationUserInfoHasBeenSet() const;

                    /**
                     * 获取头像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avatar 头像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置头像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Avatar 头像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取介绍
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Features 介绍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFeatures() const;

                    /**
                     * 设置介绍
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Features 介绍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFeatures(const std::string& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     */
                    bool FeaturesHasBeenSet() const;

                    /**
                     * 获取状况
                     * @return PreviewStatus 状况
                     */
                    int64_t GetPreviewStatus() const;

                    /**
                     * 设置状况
                     * @param PreviewStatus 状况
                     */
                    void SetPreviewStatus(const int64_t& _previewStatus);

                    /**
                     * 判断参数 PreviewStatus 是否已赋值
                     * @return PreviewStatus 是否已赋值
                     */
                    bool PreviewStatusHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户验证信息
                     */
                    UserSubInfo m_authenticationUserInfo;
                    bool m_authenticationUserInfoHasBeenSet;

                    /**
                     * 头像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 介绍
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * 状况
                     */
                    int64_t m_previewStatus;
                    bool m_previewStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_USERINFORSP_H_
