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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGALERTMSGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGALERTMSGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 安全日志告警信息
                */
                class SecLogAlertMsgInfo : public AbstractModel
                {
                public:
                    SecLogAlertMsgInfo();
                    ~SecLogAlertMsgInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警类型
                     * @return MsgType 告警类型
                     * 
                     */
                    std::string GetMsgType() const;

                    /**
                     * 设置告警类型
                     * @param _msgType 告警类型
                     * 
                     */
                    void SetMsgType(const std::string& _msgType);

                    /**
                     * 判断参数 MsgType 是否已赋值
                     * @return MsgType 是否已赋值
                     * 
                     */
                    bool MsgTypeHasBeenSet() const;

                    /**
                     * 获取告警值
                     * @return MsgValue 告警值
                     * 
                     */
                    std::string GetMsgValue() const;

                    /**
                     * 设置告警值
                     * @param _msgValue 告警值
                     * 
                     */
                    void SetMsgValue(const std::string& _msgValue);

                    /**
                     * 判断参数 MsgValue 是否已赋值
                     * @return MsgValue 是否已赋值
                     * 
                     */
                    bool MsgValueHasBeenSet() const;

                    /**
                     * 获取状态(0:关闭 1:开启)
                     * @return State 状态(0:关闭 1:开启)
                     * 
                     */
                    bool GetState() const;

                    /**
                     * 设置状态(0:关闭 1:开启)
                     * @param _state 状态(0:关闭 1:开启)
                     * 
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 告警类型
                     */
                    std::string m_msgType;
                    bool m_msgTypeHasBeenSet;

                    /**
                     * 告警值
                     */
                    std::string m_msgValue;
                    bool m_msgValueHasBeenSet;

                    /**
                     * 状态(0:关闭 1:开启)
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGALERTMSGINFO_H_
