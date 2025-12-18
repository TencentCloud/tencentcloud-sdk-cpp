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
                     * 获取音频url地址，建议不超过30秒，最大45秒
                     * @return RoleAudioUrl 音频url地址，建议不超过30秒，最大45秒
                     * 
                     */
                    std::string GetRoleAudioUrl() const;

                    /**
                     * 设置音频url地址，建议不超过30秒，最大45秒
                     * @param _roleAudioUrl 音频url地址，建议不超过30秒，最大45秒
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
                     * 获取不超过30字节
                     * @return RoleName 不超过30字节
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置不超过30字节
                     * @param _roleName 不超过30字节
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * 音频url地址，建议不超过30秒，最大45秒
                     */
                    std::string m_roleAudioUrl;
                    bool m_roleAudioUrlHasBeenSet;

                    /**
                     * 不超过30字节
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_SPEAKERROLEINFO_H_
