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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLRECORDREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLRECORDREQUEST_H_

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
                * ControlRecord请求参数结构体
                */
                class ControlRecordRequest : public AbstractModel
                {
                public:
                    ControlRecordRequest();
                    ~ControlRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID（录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * @return ChannelId 通道ID（录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID（录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * @param _channelId 通道ID（录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取录像会话 ID （ 录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * @return Session 录像会话 ID （ 录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * 
                     */
                    std::string GetSession() const;

                    /**
                     * 设置录像会话 ID （ 录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * @param _session 录像会话 ID （ 录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     * 
                     */
                    void SetSession(const std::string& _session);

                    /**
                     * 判断参数 Session 是否已赋值
                     * @return Session 是否已赋值
                     * 
                     */
                    bool SessionHasBeenSet() const;

                    /**
                     * 获取录像操作类型 （play:播放；pause:暂停 ；stop:关闭）
                     * @return ControlAction 录像操作类型 （play:播放；pause:暂停 ；stop:关闭）
                     * 
                     */
                    std::string GetControlAction() const;

                    /**
                     * 设置录像操作类型 （play:播放；pause:暂停 ；stop:关闭）
                     * @param _controlAction 录像操作类型 （play:播放；pause:暂停 ；stop:关闭）
                     * 
                     */
                    void SetControlAction(const std::string& _controlAction);

                    /**
                     * 判断参数 ControlAction 是否已赋值
                     * @return ControlAction 是否已赋值
                     * 
                     */
                    bool ControlActionHasBeenSet() const;

                    /**
                     * 获取跳转进度 （ 参数应大于等于0，跳转到录像开始时间的相对时间（单位秒），例如0就是跳转到录像开始的时间,不可以和 Scale 参数同时出现）
                     * @return Position 跳转进度 （ 参数应大于等于0，跳转到录像开始时间的相对时间（单位秒），例如0就是跳转到录像开始的时间,不可以和 Scale 参数同时出现）
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置跳转进度 （ 参数应大于等于0，跳转到录像开始时间的相对时间（单位秒），例如0就是跳转到录像开始的时间,不可以和 Scale 参数同时出现）
                     * @param _position 跳转进度 （ 参数应大于等于0，跳转到录像开始时间的相对时间（单位秒），例如0就是跳转到录像开始的时间,不可以和 Scale 参数同时出现）
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取速度 （ 范围（0.25,0.5,1,2,4,8），不可以和 Pos 参数同时出现）
                     * @return Scale 速度 （ 范围（0.25,0.5,1,2,4,8），不可以和 Pos 参数同时出现）
                     * 
                     */
                    double GetScale() const;

                    /**
                     * 设置速度 （ 范围（0.25,0.5,1,2,4,8），不可以和 Pos 参数同时出现）
                     * @param _scale 速度 （ 范围（0.25,0.5,1,2,4,8），不可以和 Pos 参数同时出现）
                     * 
                     */
                    void SetScale(const double& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                private:

                    /**
                     * 通道ID（录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 录像会话 ID （ 录像播放地址格式 https://${domain}/live/${ChannelId}@${Session}）
                     */
                    std::string m_session;
                    bool m_sessionHasBeenSet;

                    /**
                     * 录像操作类型 （play:播放；pause:暂停 ；stop:关闭）
                     */
                    std::string m_controlAction;
                    bool m_controlActionHasBeenSet;

                    /**
                     * 跳转进度 （ 参数应大于等于0，跳转到录像开始时间的相对时间（单位秒），例如0就是跳转到录像开始的时间,不可以和 Scale 参数同时出现）
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 速度 （ 范围（0.25,0.5,1,2,4,8），不可以和 Pos 参数同时出现）
                     */
                    double m_scale;
                    bool m_scaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLRECORDREQUEST_H_
