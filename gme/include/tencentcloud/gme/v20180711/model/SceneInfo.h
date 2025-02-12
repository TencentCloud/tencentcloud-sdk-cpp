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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCENEINFO_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * SceneInfo场景信息
'RealTime','实时语音分析',
'VoiceMessage','语音消息',
'GMECloudApi':'GME云API接口'
                */
                class SceneInfo : public AbstractModel
                {
                public:
                    SceneInfo();
                    ~SceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取'RealTime','实时语音分析',
'VoiceMessage','语音消息',
'GMECloudApi':'GME云API接口'
                     * @return SceneId 'RealTime','实时语音分析',
'VoiceMessage','语音消息',
'GMECloudApi':'GME云API接口'
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置'RealTime','实时语音分析',
'VoiceMessage','语音消息',
'GMECloudApi':'GME云API接口'
                     * @param _sceneId 'RealTime','实时语音分析',
'VoiceMessage','语音消息',
'GMECloudApi':'GME云API接口'
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取开关状态，true开启/false关闭
                     * @return Status 开关状态，true开启/false关闭
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置开关状态，true开启/false关闭
                     * @param _status 开关状态，true开启/false关闭
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取用户回调地址
                     * @return CallbackUrl 用户回调地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置用户回调地址
                     * @param _callbackUrl 用户回调地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 'RealTime','实时语音分析',
'VoiceMessage','语音消息',
'GMECloudApi':'GME云API接口'
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 开关状态，true开启/false关闭
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCENEINFO_H_
