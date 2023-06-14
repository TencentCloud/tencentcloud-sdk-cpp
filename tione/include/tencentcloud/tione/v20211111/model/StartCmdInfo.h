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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_STARTCMDINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_STARTCMDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 启动命令信息
                */
                class StartCmdInfo : public AbstractModel
                {
                public:
                    StartCmdInfo();
                    ~StartCmdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启动命令
                     * @return StartCmd 启动命令
                     * 
                     */
                    std::string GetStartCmd() const;

                    /**
                     * 设置启动命令
                     * @param _startCmd 启动命令
                     * 
                     */
                    void SetStartCmd(const std::string& _startCmd);

                    /**
                     * 判断参数 StartCmd 是否已赋值
                     * @return StartCmd 是否已赋值
                     * 
                     */
                    bool StartCmdHasBeenSet() const;

                    /**
                     * 获取ps启动命令
                     * @return PsStartCmd ps启动命令
                     * 
                     */
                    std::string GetPsStartCmd() const;

                    /**
                     * 设置ps启动命令
                     * @param _psStartCmd ps启动命令
                     * 
                     */
                    void SetPsStartCmd(const std::string& _psStartCmd);

                    /**
                     * 判断参数 PsStartCmd 是否已赋值
                     * @return PsStartCmd 是否已赋值
                     * 
                     */
                    bool PsStartCmdHasBeenSet() const;

                    /**
                     * 获取worker启动命令
                     * @return WorkerStartCmd worker启动命令
                     * 
                     */
                    std::string GetWorkerStartCmd() const;

                    /**
                     * 设置worker启动命令
                     * @param _workerStartCmd worker启动命令
                     * 
                     */
                    void SetWorkerStartCmd(const std::string& _workerStartCmd);

                    /**
                     * 判断参数 WorkerStartCmd 是否已赋值
                     * @return WorkerStartCmd 是否已赋值
                     * 
                     */
                    bool WorkerStartCmdHasBeenSet() const;

                private:

                    /**
                     * 启动命令
                     */
                    std::string m_startCmd;
                    bool m_startCmdHasBeenSet;

                    /**
                     * ps启动命令
                     */
                    std::string m_psStartCmd;
                    bool m_psStartCmdHasBeenSet;

                    /**
                     * worker启动命令
                     */
                    std::string m_workerStartCmd;
                    bool m_workerStartCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_STARTCMDINFO_H_
