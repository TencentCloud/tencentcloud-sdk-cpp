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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPEALINGSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPEALINGSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 申诉中的配置 - 记录各配置项是否在申诉中
                */
                class AppealingStatus : public AbstractModel
                {
                public:
                    AppealingStatus();
                    ~AppealingStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取头像是否在申诉中
                     * @return AvatarInAppeal 头像是否在申诉中
                     * 
                     */
                    bool GetAvatarInAppeal() const;

                    /**
                     * 设置头像是否在申诉中
                     * @param _avatarInAppeal 头像是否在申诉中
                     * 
                     */
                    void SetAvatarInAppeal(const bool& _avatarInAppeal);

                    /**
                     * 判断参数 AvatarInAppeal 是否已赋值
                     * @return AvatarInAppeal 是否已赋值
                     * 
                     */
                    bool AvatarInAppealHasBeenSet() const;

                    /**
                     * 获取兜底回复语是否在申诉中
                     * @return FallbackReplyInAppeal 兜底回复语是否在申诉中
                     * 
                     */
                    bool GetFallbackReplyInAppeal() const;

                    /**
                     * 设置兜底回复语是否在申诉中
                     * @param _fallbackReplyInAppeal 兜底回复语是否在申诉中
                     * 
                     */
                    void SetFallbackReplyInAppeal(const bool& _fallbackReplyInAppeal);

                    /**
                     * 判断参数 FallbackReplyInAppeal 是否已赋值
                     * @return FallbackReplyInAppeal 是否已赋值
                     * 
                     */
                    bool FallbackReplyInAppealHasBeenSet() const;

                    /**
                     * 获取欢迎语是否在申诉中
                     * @return GreetingInAppeal 欢迎语是否在申诉中
                     * 
                     */
                    bool GetGreetingInAppeal() const;

                    /**
                     * 设置欢迎语是否在申诉中
                     * @param _greetingInAppeal 欢迎语是否在申诉中
                     * 
                     */
                    void SetGreetingInAppeal(const bool& _greetingInAppeal);

                    /**
                     * 判断参数 GreetingInAppeal 是否已赋值
                     * @return GreetingInAppeal 是否已赋值
                     * 
                     */
                    bool GreetingInAppealHasBeenSet() const;

                    /**
                     * 获取应用名称是否在申诉中
                     * @return NameInAppeal 应用名称是否在申诉中
                     * 
                     */
                    bool GetNameInAppeal() const;

                    /**
                     * 设置应用名称是否在申诉中
                     * @param _nameInAppeal 应用名称是否在申诉中
                     * 
                     */
                    void SetNameInAppeal(const bool& _nameInAppeal);

                    /**
                     * 判断参数 NameInAppeal 是否已赋值
                     * @return NameInAppeal 是否已赋值
                     * 
                     */
                    bool NameInAppealHasBeenSet() const;

                    /**
                     * 获取角色描述是否在申诉中
                     * @return RoleInAppeal 角色描述是否在申诉中
                     * 
                     */
                    bool GetRoleInAppeal() const;

                    /**
                     * 设置角色描述是否在申诉中
                     * @param _roleInAppeal 角色描述是否在申诉中
                     * 
                     */
                    void SetRoleInAppeal(const bool& _roleInAppeal);

                    /**
                     * 判断参数 RoleInAppeal 是否已赋值
                     * @return RoleInAppeal 是否已赋值
                     * 
                     */
                    bool RoleInAppealHasBeenSet() const;

                private:

                    /**
                     * 头像是否在申诉中
                     */
                    bool m_avatarInAppeal;
                    bool m_avatarInAppealHasBeenSet;

                    /**
                     * 兜底回复语是否在申诉中
                     */
                    bool m_fallbackReplyInAppeal;
                    bool m_fallbackReplyInAppealHasBeenSet;

                    /**
                     * 欢迎语是否在申诉中
                     */
                    bool m_greetingInAppeal;
                    bool m_greetingInAppealHasBeenSet;

                    /**
                     * 应用名称是否在申诉中
                     */
                    bool m_nameInAppeal;
                    bool m_nameInAppealHasBeenSet;

                    /**
                     * 角色描述是否在申诉中
                     */
                    bool m_roleInAppeal;
                    bool m_roleInAppealHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPEALINGSTATUS_H_
