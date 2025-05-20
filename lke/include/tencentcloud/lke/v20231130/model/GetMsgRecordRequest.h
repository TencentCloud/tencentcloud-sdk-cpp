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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetMsgRecord请求参数结构体
                */
                class GetMsgRecordRequest : public AbstractModel
                {
                public:
                    GetMsgRecordRequest();
                    ~GetMsgRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数量,  数量需大于2, 最大1000
                     * @return Count 数量,  数量需大于2, 最大1000
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置数量,  数量需大于2, 最大1000
                     * @param _count 数量,  数量需大于2, 最大1000
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取会话sessionid
                     * @return SessionId 会话sessionid
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话sessionid
                     * @param _sessionId 会话sessionid
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取应用AppKey, 当Type=5[API访客]时, 该字段必填  :</br>  获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * @return BotAppKey 应用AppKey, 当Type=5[API访客]时, 该字段必填  :</br>  获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * 
                     */
                    std::string GetBotAppKey() const;

                    /**
                     * 设置应用AppKey, 当Type=5[API访客]时, 该字段必填  :</br>  获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * @param _botAppKey 应用AppKey, 当Type=5[API访客]时, 该字段必填  :</br>  获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     * 
                     */
                    void SetBotAppKey(const std::string& _botAppKey);

                    /**
                     * 判断参数 BotAppKey 是否已赋值
                     * @return BotAppKey 是否已赋值
                     * 
                     */
                    bool BotAppKeyHasBeenSet() const;

                    /**
                     * 获取场景, 体验: 1; 正式: 2
                     * @return Scene 场景, 体验: 1; 正式: 2
                     * 
                     */
                    uint64_t GetScene() const;

                    /**
                     * 设置场景, 体验: 1; 正式: 2
                     * @param _scene 场景, 体验: 1; 正式: 2
                     * 
                     */
                    void SetScene(const uint64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取最后一条记录ID， 消息从后往前获取

MidRecordId与LastRecordId只能选择一个

                     * @return LastRecordId 最后一条记录ID， 消息从后往前获取

MidRecordId与LastRecordId只能选择一个

                     * 
                     */
                    std::string GetLastRecordId() const;

                    /**
                     * 设置最后一条记录ID， 消息从后往前获取

MidRecordId与LastRecordId只能选择一个

                     * @param _lastRecordId 最后一条记录ID， 消息从后往前获取

MidRecordId与LastRecordId只能选择一个

                     * 
                     */
                    void SetLastRecordId(const std::string& _lastRecordId);

                    /**
                     * 判断参数 LastRecordId 是否已赋值
                     * @return LastRecordId 是否已赋值
                     * 
                     */
                    bool LastRecordIdHasBeenSet() const;

                    /**
                     * 获取传该值，代表拉取该记录id的前后总共count条消息记录

MidRecordId与LastRecordId只能选择一个

                     * @return MidRecordId 传该值，代表拉取该记录id的前后总共count条消息记录

MidRecordId与LastRecordId只能选择一个

                     * 
                     */
                    std::string GetMidRecordId() const;

                    /**
                     * 设置传该值，代表拉取该记录id的前后总共count条消息记录

MidRecordId与LastRecordId只能选择一个

                     * @param _midRecordId 传该值，代表拉取该记录id的前后总共count条消息记录

MidRecordId与LastRecordId只能选择一个

                     * 
                     */
                    void SetMidRecordId(const std::string& _midRecordId);

                    /**
                     * 判断参数 MidRecordId 是否已赋值
                     * @return MidRecordId 是否已赋值
                     * 
                     */
                    bool MidRecordIdHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数量,  数量需大于2, 最大1000
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 会话sessionid
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 应用AppKey, 当Type=5[API访客]时, 该字段必填  :</br>  获取方式:</br>   1、应用发布后在应用页面[发布管理]-[调用信息]-[API管理]处获取</br>   2、参考 https://cloud.tencent.com/document/product/1759/109469 第二项
                     */
                    std::string m_botAppKey;
                    bool m_botAppKeyHasBeenSet;

                    /**
                     * 场景, 体验: 1; 正式: 2
                     */
                    uint64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 最后一条记录ID， 消息从后往前获取

MidRecordId与LastRecordId只能选择一个

                     */
                    std::string m_lastRecordId;
                    bool m_lastRecordIdHasBeenSet;

                    /**
                     * 传该值，代表拉取该记录id的前后总共count条消息记录

MidRecordId与LastRecordId只能选择一个

                     */
                    std::string m_midRecordId;
                    bool m_midRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETMSGRECORDREQUEST_H_
