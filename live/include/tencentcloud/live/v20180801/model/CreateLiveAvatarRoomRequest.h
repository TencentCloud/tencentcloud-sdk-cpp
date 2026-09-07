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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARROOMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveAvatarRoom请求参数结构体
                */
                class CreateLiveAvatarRoomRequest : public AbstractModel
                {
                public:
                    CreateLiveAvatarRoomRequest();
                    ~CreateLiveAvatarRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>直播间名称。</p>
                     * @return Name <p>直播间名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>直播间名称。</p>
                     * @param _name <p>直播间名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>操作者。</p>
                     * @return Operator <p>操作者。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者。</p>
                     * @param _operator <p>操作者。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>形象ID</p>
                     * @return AvatarKey <p>形象ID</p>
                     * 
                     */
                    std::string GetAvatarKey() const;

                    /**
                     * 设置<p>形象ID</p>
                     * @param _avatarKey <p>形象ID</p>
                     * 
                     */
                    void SetAvatarKey(const std::string& _avatarKey);

                    /**
                     * 判断参数 AvatarKey 是否已赋值
                     * @return AvatarKey 是否已赋值
                     * 
                     */
                    bool AvatarKeyHasBeenSet() const;

                    /**
                     * 获取<p>音色ID</p>
                     * @return TimbreKey <p>音色ID</p>
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置<p>音色ID</p>
                     * @param _timbreKey <p>音色ID</p>
                     * 
                     */
                    void SetTimbreKey(const std::string& _timbreKey);

                    /**
                     * 判断参数 TimbreKey 是否已赋值
                     * @return TimbreKey 是否已赋值
                     * 
                     */
                    bool TimbreKeyHasBeenSet() const;

                    /**
                     * 获取<p>房间模式</p><p>枚举值：</p><ul><li>INTERACT： 交互模式</li><li>FREE： 自由模式</li><li>NORMAL： 普通模式</li></ul>
                     * @return LiveMode <p>房间模式</p><p>枚举值：</p><ul><li>INTERACT： 交互模式</li><li>FREE： 自由模式</li><li>NORMAL： 普通模式</li></ul>
                     * 
                     */
                    std::string GetLiveMode() const;

                    /**
                     * 设置<p>房间模式</p><p>枚举值：</p><ul><li>INTERACT： 交互模式</li><li>FREE： 自由模式</li><li>NORMAL： 普通模式</li></ul>
                     * @param _liveMode <p>房间模式</p><p>枚举值：</p><ul><li>INTERACT： 交互模式</li><li>FREE： 自由模式</li><li>NORMAL： 普通模式</li></ul>
                     * 
                     */
                    void SetLiveMode(const std::string& _liveMode);

                    /**
                     * 判断参数 LiveMode 是否已赋值
                     * @return LiveMode 是否已赋值
                     * 
                     */
                    bool LiveModeHasBeenSet() const;

                private:

                    /**
                     * <p>直播间名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>操作者。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>形象ID</p>
                     */
                    std::string m_avatarKey;
                    bool m_avatarKeyHasBeenSet;

                    /**
                     * <p>音色ID</p>
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * <p>房间模式</p><p>枚举值：</p><ul><li>INTERACT： 交互模式</li><li>FREE： 自由模式</li><li>NORMAL： 普通模式</li></ul>
                     */
                    std::string m_liveMode;
                    bool m_liveModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARROOMREQUEST_H_
