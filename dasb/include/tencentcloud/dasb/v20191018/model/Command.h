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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_COMMAND_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_COMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 命令集合
                */
                class Command : public AbstractModel
                {
                public:
                    Command();
                    ~Command() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命令
                     * @return Cmd 命令
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令
                     * @param Cmd 命令
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取命令输入的时间
                     * @return Time 命令输入的时间
                     */
                    std::string GetTime() const;

                    /**
                     * 设置命令输入的时间
                     * @param Time 命令输入的时间
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * @return TimeOffset 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     */
                    uint64_t GetTimeOffset() const;

                    /**
                     * 设置命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     * @param TimeOffset 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     */
                    void SetTimeOffset(const uint64_t& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取命令执行情况，1--允许，2--拒绝，3--确认
                     * @return Action 命令执行情况，1--允许，2--拒绝，3--确认
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置命令执行情况，1--允许，2--拒绝，3--确认
                     * @param Action 命令执行情况，1--允许，2--拒绝，3--确认
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 命令
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * 命令输入的时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 命令执行时间相对于所属会话开始时间的偏移量，单位ms
                     */
                    uint64_t m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * 命令执行情况，1--允许，2--拒绝，3--确认
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_COMMAND_H_
