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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTCALLBACKACCESS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTCALLBACKACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CallbackConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 企微机器人回调接入配置
                */
                class WecomRobotCallbackAccess : public AbstractModel
                {
                public:
                    WecomRobotCallbackAccess();
                    ~WecomRobotCallbackAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回调配置</p>
                     * @return Callback <p>回调配置</p>
                     * 
                     */
                    CallbackConfig GetCallback() const;

                    /**
                     * 设置<p>回调配置</p>
                     * @param _callback <p>回调配置</p>
                     * 
                     */
                    void SetCallback(const CallbackConfig& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取<p>机器人名称</p>
                     * @return RobotName <p>机器人名称</p>
                     * 
                     */
                    std::string GetRobotName() const;

                    /**
                     * 设置<p>机器人名称</p>
                     * @param _robotName <p>机器人名称</p>
                     * 
                     */
                    void SetRobotName(const std::string& _robotName);

                    /**
                     * 判断参数 RobotName 是否已赋值
                     * @return RobotName 是否已赋值
                     * 
                     */
                    bool RobotNameHasBeenSet() const;

                    /**
                     * 获取<p>企微企业ID</p>
                     * @return WecomCorpId <p>企微企业ID</p>
                     * 
                     */
                    std::string GetWecomCorpId() const;

                    /**
                     * 设置<p>企微企业ID</p>
                     * @param _wecomCorpId <p>企微企业ID</p>
                     * 
                     */
                    void SetWecomCorpId(const std::string& _wecomCorpId);

                    /**
                     * 判断参数 WecomCorpId 是否已赋值
                     * @return WecomCorpId 是否已赋值
                     * 
                     */
                    bool WecomCorpIdHasBeenSet() const;

                    /**
                     * 获取<p>企微机器人ID</p>
                     * @return WecomRobotId <p>企微机器人ID</p>
                     * 
                     */
                    std::string GetWecomRobotId() const;

                    /**
                     * 设置<p>企微机器人ID</p>
                     * @param _wecomRobotId <p>企微机器人ID</p>
                     * 
                     */
                    void SetWecomRobotId(const std::string& _wecomRobotId);

                    /**
                     * 判断参数 WecomRobotId 是否已赋值
                     * @return WecomRobotId 是否已赋值
                     * 
                     */
                    bool WecomRobotIdHasBeenSet() const;

                private:

                    /**
                     * <p>回调配置</p>
                     */
                    CallbackConfig m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * <p>机器人名称</p>
                     */
                    std::string m_robotName;
                    bool m_robotNameHasBeenSet;

                    /**
                     * <p>企微企业ID</p>
                     */
                    std::string m_wecomCorpId;
                    bool m_wecomCorpIdHasBeenSet;

                    /**
                     * <p>企微机器人ID</p>
                     */
                    std::string m_wecomRobotId;
                    bool m_wecomRobotIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WECOMROBOTCALLBACKACCESS_H_
