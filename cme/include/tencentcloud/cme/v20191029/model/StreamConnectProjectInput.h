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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTPROJECTINPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTPROJECTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/StreamInputInfo.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectOutput.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 云转推项目输入信息。
                */
                class StreamConnectProjectInput : public AbstractModel
                {
                public:
                    StreamConnectProjectInput();
                    ~StreamConnectProjectInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云转推主输入源信息。
                     * @return MainInput 云转推主输入源信息。
                     * 
                     */
                    StreamInputInfo GetMainInput() const;

                    /**
                     * 设置云转推主输入源信息。
                     * @param _mainInput 云转推主输入源信息。
                     * 
                     */
                    void SetMainInput(const StreamInputInfo& _mainInput);

                    /**
                     * 判断参数 MainInput 是否已赋值
                     * @return MainInput 是否已赋值
                     * 
                     */
                    bool MainInputHasBeenSet() const;

                    /**
                     * 获取云转推备输入源信息。
                     * @return BackupInput 云转推备输入源信息。
                     * 
                     */
                    StreamInputInfo GetBackupInput() const;

                    /**
                     * 设置云转推备输入源信息。
                     * @param _backupInput 云转推备输入源信息。
                     * 
                     */
                    void SetBackupInput(const StreamInputInfo& _backupInput);

                    /**
                     * 判断参数 BackupInput 是否已赋值
                     * @return BackupInput 是否已赋值
                     * 
                     */
                    bool BackupInputHasBeenSet() const;

                    /**
                     * 获取云转推输出源信息。
                     * @return Outputs 云转推输出源信息。
                     * 
                     */
                    std::vector<StreamConnectOutput> GetOutputs() const;

                    /**
                     * 设置云转推输出源信息。
                     * @param _outputs 云转推输出源信息。
                     * 
                     */
                    void SetOutputs(const std::vector<StreamConnectOutput>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * 云转推主输入源信息。
                     */
                    StreamInputInfo m_mainInput;
                    bool m_mainInputHasBeenSet;

                    /**
                     * 云转推备输入源信息。
                     */
                    StreamInputInfo m_backupInput;
                    bool m_backupInputHasBeenSet;

                    /**
                     * 云转推输出源信息。
                     */
                    std::vector<StreamConnectOutput> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_STREAMCONNECTPROJECTINPUT_H_
