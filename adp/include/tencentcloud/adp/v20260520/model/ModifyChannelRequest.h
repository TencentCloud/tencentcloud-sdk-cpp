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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCHANNELREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ChannelSpec.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyChannel请求参数结构体
                */
                class ModifyChannelRequest : public AbstractModel
                {
                public:
                    ModifyChannelRequest();
                    ~ModifyChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用业务ID</p>
                     * @return AppId <p>应用业务ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用业务ID</p>
                     * @param _appId <p>应用业务ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>渠道业务ID</p>
                     * @return ChannelId <p>渠道业务ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>渠道业务ID</p>
                     * @param _channelId <p>渠道业务ID</p>
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
                     * 获取<p>渠道场景：0-B端场景，1-C端场景</p>
                     * @return Scene <p>渠道场景：0-B端场景，1-C端场景</p>
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置<p>渠道场景：0-B端场景，1-C端场景</p>
                     * @param _scene <p>渠道场景：0-B端场景，1-C端场景</p>
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>待更新的渠道规格</p>
                     * @return Spec <p>待更新的渠道规格</p>
                     * 
                     */
                    ChannelSpec GetSpec() const;

                    /**
                     * 设置<p>待更新的渠道规格</p>
                     * @param _spec <p>待更新的渠道规格</p>
                     * 
                     */
                    void SetSpec(const ChannelSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>更新字段掩码,<br>B端(Scene=0)：支持：【spec.description&quot; ,&quot;spec.wecom_robot.callback.wecom_robot_id&quot;】<br>C端(Scene=1)：支持：【&quot;spec.description&quot; , &quot;spec.wecom_robot.websocket.bot_id&quot; ,&quot;spec.wecom_robot.websocket.bot_secret&quot;】</p>
                     * @return UpdateMask <p>更新字段掩码,<br>B端(Scene=0)：支持：【spec.description&quot; ,&quot;spec.wecom_robot.callback.wecom_robot_id&quot;】<br>C端(Scene=1)：支持：【&quot;spec.description&quot; , &quot;spec.wecom_robot.websocket.bot_id&quot; ,&quot;spec.wecom_robot.websocket.bot_secret&quot;】</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>更新字段掩码,<br>B端(Scene=0)：支持：【spec.description&quot; ,&quot;spec.wecom_robot.callback.wecom_robot_id&quot;】<br>C端(Scene=1)：支持：【&quot;spec.description&quot; , &quot;spec.wecom_robot.websocket.bot_id&quot; ,&quot;spec.wecom_robot.websocket.bot_secret&quot;】</p>
                     * @param _updateMask <p>更新字段掩码,<br>B端(Scene=0)：支持：【spec.description&quot; ,&quot;spec.wecom_robot.callback.wecom_robot_id&quot;】<br>C端(Scene=1)：支持：【&quot;spec.description&quot; , &quot;spec.wecom_robot.websocket.bot_id&quot; ,&quot;spec.wecom_robot.websocket.bot_secret&quot;】</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                private:

                    /**
                     * <p>应用业务ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>渠道业务ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>渠道场景：0-B端场景，1-C端场景</p>
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>待更新的渠道规格</p>
                     */
                    ChannelSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>更新字段掩码,<br>B端(Scene=0)：支持：【spec.description&quot; ,&quot;spec.wecom_robot.callback.wecom_robot_id&quot;】<br>C端(Scene=1)：支持：【&quot;spec.description&quot; , &quot;spec.wecom_robot.websocket.bot_id&quot; ,&quot;spec.wecom_robot.websocket.bot_secret&quot;】</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCHANNELREQUEST_H_
