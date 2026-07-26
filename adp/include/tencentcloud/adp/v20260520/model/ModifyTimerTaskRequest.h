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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYTIMERTASKREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYTIMERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimerTask.h>
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
                * ModifyTimerTask请求参数结构体
                */
                class ModifyTimerTaskRequest : public AbstractModel
                {
                public:
                    ModifyTimerTaskRequest();
                    ~ModifyTimerTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID
                     * @return SpaceId 空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间ID
                     * @param _spaceId 空间ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TimerId 任务ID
                     * 
                     */
                    std::string GetTimerId() const;

                    /**
                     * 设置任务ID
                     * @param _timerId 任务ID
                     * 
                     */
                    void SetTimerId(const std::string& _timerId);

                    /**
                     * 判断参数 TimerId 是否已赋值
                     * @return TimerId 是否已赋值
                     * 
                     */
                    bool TimerIdHasBeenSet() const;

                    /**
                     * 获取任务
                     * @return TimerTask 任务
                     * 
                     */
                    TimerTask GetTimerTask() const;

                    /**
                     * 设置任务
                     * @param _timerTask 任务
                     * 
                     */
                    void SetTimerTask(const TimerTask& _timerTask);

                    /**
                     * 判断参数 TimerTask 是否已赋值
                     * @return TimerTask 是否已赋值
                     * 
                     */
                    bool TimerTaskHasBeenSet() const;

                    /**
                     * 获取修改的内容
                     * @return UpdateMask 修改的内容
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置修改的内容
                     * @param _updateMask 修改的内容
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                    /**
                     * 获取<p>主用户Uin</p>
                     * @return LoginUin <p>主用户Uin</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>主用户Uin</p>
                     * @param _loginUin <p>主用户Uin</p>
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取<p>子用户Uin</p>
                     * @return LoginSubAccountUin <p>子用户Uin</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>子用户Uin</p>
                     * @param _loginSubAccountUin <p>子用户Uin</p>
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * 空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_timerId;
                    bool m_timerIdHasBeenSet;

                    /**
                     * 任务
                     */
                    TimerTask m_timerTask;
                    bool m_timerTaskHasBeenSet;

                    /**
                     * 修改的内容
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                    /**
                     * <p>主用户Uin</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>子用户Uin</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYTIMERTASKREQUEST_H_
