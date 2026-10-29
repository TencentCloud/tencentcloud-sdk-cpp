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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_SPEAKERROLEINFO_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_SPEAKERROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 说话人注册角色声纹信息
                */
                class SpeakerRoleInfo : public AbstractModel
                {
                public:
                    SpeakerRoleInfo();
                    ~SpeakerRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音频url地址，建议不超过30秒，最大45秒（配合RoleName字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * @return RoleAudioUrl <p>音频url地址，建议不超过30秒，最大45秒（配合RoleName字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * 
                     */
                    std::string GetRoleAudioUrl() const;

                    /**
                     * 设置<p>音频url地址，建议不超过30秒，最大45秒（配合RoleName字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * @param _roleAudioUrl <p>音频url地址，建议不超过30秒，最大45秒（配合RoleName字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * 
                     */
                    void SetRoleAudioUrl(const std::string& _roleAudioUrl);

                    /**
                     * 判断参数 RoleAudioUrl 是否已赋值
                     * @return RoleAudioUrl 是否已赋值
                     * 
                     */
                    bool RoleAudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>不超过30字节（配合RoleAudioUrl字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * @return RoleName <p>不超过30字节（配合RoleAudioUrl字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>不超过30字节（配合RoleAudioUrl字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * @param _roleName <p>不超过30字节（配合RoleAudioUrl字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>声纹 ID（与SpeakerNick配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传入未注册或不属于本 AppId 的声纹 ID，该 ID 会被跳过（不报错，相当于没有传入这个说话人信息）</p>
                     * @return VoicePrintId <p>声纹 ID（与SpeakerNick配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传入未注册或不属于本 AppId 的声纹 ID，该 ID 会被跳过（不报错，相当于没有传入这个说话人信息）</p>
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置<p>声纹 ID（与SpeakerNick配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传入未注册或不属于本 AppId 的声纹 ID，该 ID 会被跳过（不报错，相当于没有传入这个说话人信息）</p>
                     * @param _voicePrintId <p>声纹 ID（与SpeakerNick配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传入未注册或不属于本 AppId 的声纹 ID，该 ID 会被跳过（不报错，相当于没有传入这个说话人信息）</p>
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取<p>角色昵称（与VoicePrintId配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传空字符串或者不传入则使用声纹注册时指定的角色名- 否则将覆盖声纹注册时指定的角色名- 角色名不超过 30 字节，仅支持字母、数字、下划线和中文。- 这里指定的角色名只影响本次识别，不影响声纹库中注册的角色名</p>
                     * @return SpeakerNick <p>角色昵称（与VoicePrintId配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传空字符串或者不传入则使用声纹注册时指定的角色名- 否则将覆盖声纹注册时指定的角色名- 角色名不超过 30 字节，仅支持字母、数字、下划线和中文。- 这里指定的角色名只影响本次识别，不影响声纹库中注册的角色名</p>
                     * 
                     */
                    std::string GetSpeakerNick() const;

                    /**
                     * 设置<p>角色昵称（与VoicePrintId配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传空字符串或者不传入则使用声纹注册时指定的角色名- 否则将覆盖声纹注册时指定的角色名- 角色名不超过 30 字节，仅支持字母、数字、下划线和中文。- 这里指定的角色名只影响本次识别，不影响声纹库中注册的角色名</p>
                     * @param _speakerNick <p>角色昵称（与VoicePrintId配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传空字符串或者不传入则使用声纹注册时指定的角色名- 否则将覆盖声纹注册时指定的角色名- 角色名不超过 30 字节，仅支持字母、数字、下划线和中文。- 这里指定的角色名只影响本次识别，不影响声纹库中注册的角色名</p>
                     * 
                     */
                    void SetSpeakerNick(const std::string& _speakerNick);

                    /**
                     * 判断参数 SpeakerNick 是否已赋值
                     * @return SpeakerNick 是否已赋值
                     * 
                     */
                    bool SpeakerNickHasBeenSet() const;

                private:

                    /**
                     * <p>音频url地址，建议不超过30秒，最大45秒（配合RoleName字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     */
                    std::string m_roleAudioUrl;
                    bool m_roleAudioUrlHasBeenSet;

                    /**
                     * <p>不超过30字节（配合RoleAudioUrl字段一起使用，仅限16k_zh_en、16k_zh_en_2.0引擎）</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>声纹 ID（与SpeakerNick配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传入未注册或不属于本 AppId 的声纹 ID，该 ID 会被跳过（不报错，相当于没有传入这个说话人信息）</p>
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * <p>角色昵称（与VoicePrintId配合使用，仅限16k_zh_en_meeting引擎支持），注意：- 传空字符串或者不传入则使用声纹注册时指定的角色名- 否则将覆盖声纹注册时指定的角色名- 角色名不超过 30 字节，仅支持字母、数字、下划线和中文。- 这里指定的角色名只影响本次识别，不影响声纹库中注册的角色名</p>
                     */
                    std::string m_speakerNick;
                    bool m_speakerNickHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SPEAKERROLEINFO_H_
