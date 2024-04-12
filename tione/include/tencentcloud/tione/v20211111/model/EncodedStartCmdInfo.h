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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ENCODEDSTARTCMDINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ENCODEDSTARTCMDINFO_H_

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
                * 编码后的启动命令信息
                */
                class EncodedStartCmdInfo : public AbstractModel
                {
                public:
                    EncodedStartCmdInfo();
                    ~EncodedStartCmdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务的启动命令，以base64格式输入，注意转换时需要完整输入{"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""}
                     * @return StartCmdInfo 任务的启动命令，以base64格式输入，注意转换时需要完整输入{"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""}
                     * 
                     */
                    std::string GetStartCmdInfo() const;

                    /**
                     * 设置任务的启动命令，以base64格式输入，注意转换时需要完整输入{"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""}
                     * @param _startCmdInfo 任务的启动命令，以base64格式输入，注意转换时需要完整输入{"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""}
                     * 
                     */
                    void SetStartCmdInfo(const std::string& _startCmdInfo);

                    /**
                     * 判断参数 StartCmdInfo 是否已赋值
                     * @return StartCmdInfo 是否已赋值
                     * 
                     */
                    bool StartCmdInfoHasBeenSet() const;

                private:

                    /**
                     * 任务的启动命令，以base64格式输入，注意转换时需要完整输入{"StartCmd":"","PsStartCmd":"","WorkerStartCmd":""}
                     */
                    std::string m_startCmdInfo;
                    bool m_startCmdInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ENCODEDSTARTCMDINFO_H_
