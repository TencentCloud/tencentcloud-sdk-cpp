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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PROBEACTION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PROBEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/HTTPGetAction.h>
#include <tencentcloud/tione/v20211111/model/ExecAction.h>
#include <tencentcloud/tione/v20211111/model/TCPSocketAction.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 探针行为
                */
                class ProbeAction : public AbstractModel
                {
                public:
                    ProbeAction();
                    ~ProbeAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http get 行为
                     * @return HTTPGet http get 行为
                     * 
                     */
                    HTTPGetAction GetHTTPGet() const;

                    /**
                     * 设置http get 行为
                     * @param _hTTPGet http get 行为
                     * 
                     */
                    void SetHTTPGet(const HTTPGetAction& _hTTPGet);

                    /**
                     * 判断参数 HTTPGet 是否已赋值
                     * @return HTTPGet 是否已赋值
                     * 
                     */
                    bool HTTPGetHasBeenSet() const;

                    /**
                     * 获取执行命令检查 行为
                     * @return Exec 执行命令检查 行为
                     * 
                     */
                    ExecAction GetExec() const;

                    /**
                     * 设置执行命令检查 行为
                     * @param _exec 执行命令检查 行为
                     * 
                     */
                    void SetExec(const ExecAction& _exec);

                    /**
                     * 判断参数 Exec 是否已赋值
                     * @return Exec 是否已赋值
                     * 
                     */
                    bool ExecHasBeenSet() const;

                    /**
                     * 获取tcp socket 检查行为
                     * @return TCPSocket tcp socket 检查行为
                     * 
                     */
                    TCPSocketAction GetTCPSocket() const;

                    /**
                     * 设置tcp socket 检查行为
                     * @param _tCPSocket tcp socket 检查行为
                     * 
                     */
                    void SetTCPSocket(const TCPSocketAction& _tCPSocket);

                    /**
                     * 判断参数 TCPSocket 是否已赋值
                     * @return TCPSocket 是否已赋值
                     * 
                     */
                    bool TCPSocketHasBeenSet() const;

                    /**
                     * 获取探针类型，默认 HTTPGet，可选值：HTTPGet、Exec、TCPSocket
                     * @return ActionType 探针类型，默认 HTTPGet，可选值：HTTPGet、Exec、TCPSocket
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置探针类型，默认 HTTPGet，可选值：HTTPGet、Exec、TCPSocket
                     * @param _actionType 探针类型，默认 HTTPGet，可选值：HTTPGet、Exec、TCPSocket
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * http get 行为
                     */
                    HTTPGetAction m_hTTPGet;
                    bool m_hTTPGetHasBeenSet;

                    /**
                     * 执行命令检查 行为
                     */
                    ExecAction m_exec;
                    bool m_execHasBeenSet;

                    /**
                     * tcp socket 检查行为
                     */
                    TCPSocketAction m_tCPSocket;
                    bool m_tCPSocketHasBeenSet;

                    /**
                     * 探针类型，默认 HTTPGet，可选值：HTTPGet、Exec、TCPSocket
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PROBEACTION_H_
