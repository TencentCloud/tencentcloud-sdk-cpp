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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSBASEINFO_H_

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
                * 运行时安全，进程基础信息
                */
                class ProcessBaseInfo : public AbstractModel
                {
                public:
                    ProcessBaseInfo();
                    ~ProcessBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessStartUser 进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessStartUser() const;

                    /**
                     * 设置进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcessStartUser 进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcessStartUser(const std::string& _processStartUser);

                    /**
                     * 判断参数 ProcessStartUser 是否已赋值
                     * @return ProcessStartUser 是否已赋值
                     */
                    bool ProcessStartUserHasBeenSet() const;

                    /**
                     * 获取进程用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessUserGroup 进程用户组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessUserGroup() const;

                    /**
                     * 设置进程用户组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcessUserGroup 进程用户组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcessUserGroup(const std::string& _processUserGroup);

                    /**
                     * 判断参数 ProcessUserGroup 是否已赋值
                     * @return ProcessUserGroup 是否已赋值
                     */
                    bool ProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessPath 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcessPath 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessParam 进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessParam() const;

                    /**
                     * 设置进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcessParam 进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcessParam(const std::string& _processParam);

                    /**
                     * 判断参数 ProcessParam 是否已赋值
                     * @return ProcessParam 是否已赋值
                     */
                    bool ProcessParamHasBeenSet() const;

                private:

                    /**
                     * 进程启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processStartUser;
                    bool m_processStartUserHasBeenSet;

                    /**
                     * 进程用户组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processUserGroup;
                    bool m_processUserGroupHasBeenSet;

                    /**
                     * 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程命令行参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processParam;
                    bool m_processParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_PROCESSBASEINFO_H_
