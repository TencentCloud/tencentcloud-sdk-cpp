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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXEC_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 探针在容器内执行检测命令参数类型
                */
                class Exec : public AbstractModel
                {
                public:
                    Exec();
                    ~Exec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器内检测的命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Commands 容器内检测的命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCommands() const;

                    /**
                     * 设置容器内检测的命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commands 容器内检测的命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommands(const std::vector<std::string>& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                private:

                    /**
                     * 容器内检测的命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_commands;
                    bool m_commandsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXEC_H_
