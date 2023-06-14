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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_PROGRAMSTATEITEM_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_PROGRAMSTATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 进程状态监控项
                */
                class ProgramStateItem : public AbstractModel
                {
                public:
                    ProgramStateItem();
                    ~ProgramStateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器IP
                     * @return ServerIp 服务器IP
                     * 
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置服务器IP
                     * @param _serverIp 服务器IP
                     * 
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     * 
                     */
                    bool ServerIpHasBeenSet() const;

                    /**
                     * 获取进程名字
                     * @return ProgramName 进程名字
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置进程名字
                     * @param _programName 进程名字
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取在线个数
                     * @return OnlineCount 在线个数
                     * 
                     */
                    uint64_t GetOnlineCount() const;

                    /**
                     * 设置在线个数
                     * @param _onlineCount 在线个数
                     * 
                     */
                    void SetOnlineCount(const uint64_t& _onlineCount);

                    /**
                     * 判断参数 OnlineCount 是否已赋值
                     * @return OnlineCount 是否已赋值
                     * 
                     */
                    bool OnlineCountHasBeenSet() const;

                    /**
                     * 获取离线个数
                     * @return OfflineCount 离线个数
                     * 
                     */
                    uint64_t GetOfflineCount() const;

                    /**
                     * 设置离线个数
                     * @param _offlineCount 离线个数
                     * 
                     */
                    void SetOfflineCount(const uint64_t& _offlineCount);

                    /**
                     * 判断参数 OfflineCount 是否已赋值
                     * @return OfflineCount 是否已赋值
                     * 
                     */
                    bool OfflineCountHasBeenSet() const;

                    /**
                     * 获取上报状态:
1: 正常上报
2: 异常上报
注：此处异常上报是指本次上报由于场内服务内部原因导致上报数据不可信等。此时离线个数重置为1，在线个数重置为0
                     * @return State 上报状态:
1: 正常上报
2: 异常上报
注：此处异常上报是指本次上报由于场内服务内部原因导致上报数据不可信等。此时离线个数重置为1，在线个数重置为0
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置上报状态:
1: 正常上报
2: 异常上报
注：此处异常上报是指本次上报由于场内服务内部原因导致上报数据不可信等。此时离线个数重置为1，在线个数重置为0
                     * @param _state 上报状态:
1: 正常上报
2: 异常上报
注：此处异常上报是指本次上报由于场内服务内部原因导致上报数据不可信等。此时离线个数重置为1，在线个数重置为0
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 服务器IP
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                    /**
                     * 进程名字
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * 在线个数
                     */
                    uint64_t m_onlineCount;
                    bool m_onlineCountHasBeenSet;

                    /**
                     * 离线个数
                     */
                    uint64_t m_offlineCount;
                    bool m_offlineCountHasBeenSet;

                    /**
                     * 上报状态:
1: 正常上报
2: 异常上报
注：此处异常上报是指本次上报由于场内服务内部原因导致上报数据不可信等。此时离线个数重置为1，在线个数重置为0
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_PROGRAMSTATEITEM_H_
