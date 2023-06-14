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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEBACKUPRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEBACKUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateBackup返回参数结构体
                */
                class CreateBackupResponse : public AbstractModel
                {
                public:
                    CreateBackupResponse();
                    ~CreateBackupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的备份任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskIds 创建的备份任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取创建的备份申请ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationIds 创建的备份申请ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetApplicationIds() const;

                    /**
                     * 判断参数 ApplicationIds 是否已赋值
                     * @return ApplicationIds 是否已赋值
                     * 
                     */
                    bool ApplicationIdsHasBeenSet() const;

                private:

                    /**
                     * 创建的备份任务ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 创建的备份申请ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_applicationIds;
                    bool m_applicationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEBACKUPRESPONSE_H_
