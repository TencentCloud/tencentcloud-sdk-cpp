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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENAMERESTOREDATABASE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENAMERESTOREDATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 用于RestoreInstance，RollbackInstance，CreateMigration 等接口；对恢复的库进行重命名，且支持选择要恢复的库。
                */
                class RenameRestoreDatabase : public AbstractModel
                {
                public:
                    RenameRestoreDatabase();
                    ~RenameRestoreDatabase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取库的名字，如果oldName不存在则返回失败。
在用于离线迁移任务时可不填。
                     * @return OldName 库的名字，如果oldName不存在则返回失败。
在用于离线迁移任务时可不填。
                     */
                    std::string GetOldName() const;

                    /**
                     * 设置库的名字，如果oldName不存在则返回失败。
在用于离线迁移任务时可不填。
                     * @param OldName 库的名字，如果oldName不存在则返回失败。
在用于离线迁移任务时可不填。
                     */
                    void SetOldName(const std::string& _oldName);

                    /**
                     * 判断参数 OldName 是否已赋值
                     * @return OldName 是否已赋值
                     */
                    bool OldNameHasBeenSet() const;

                    /**
                     * 获取库的新名字，如果不填则按照系统默认方式命名恢复的库。在用于离线迁移任务时，不填则按照OldName命名，OldName和NewName不能同时不填。
                     * @return NewName 库的新名字，如果不填则按照系统默认方式命名恢复的库。在用于离线迁移任务时，不填则按照OldName命名，OldName和NewName不能同时不填。
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置库的新名字，如果不填则按照系统默认方式命名恢复的库。在用于离线迁移任务时，不填则按照OldName命名，OldName和NewName不能同时不填。
                     * @param NewName 库的新名字，如果不填则按照系统默认方式命名恢复的库。在用于离线迁移任务时，不填则按照OldName命名，OldName和NewName不能同时不填。
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     */
                    bool NewNameHasBeenSet() const;

                private:

                    /**
                     * 库的名字，如果oldName不存在则返回失败。
在用于离线迁移任务时可不填。
                     */
                    std::string m_oldName;
                    bool m_oldNameHasBeenSet;

                    /**
                     * 库的新名字，如果不填则按照系统默认方式命名恢复的库。在用于离线迁移任务时，不填则按照OldName命名，OldName和NewName不能同时不填。
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENAMERESTOREDATABASE_H_
