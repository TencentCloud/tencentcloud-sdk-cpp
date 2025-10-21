/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONACTION_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONACTION_H_

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
                * 冷备导入任务允许的操作
                */
                class MigrationAction : public AbstractModel
                {
                public:
                    MigrationAction();
                    ~MigrationAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的所有操作，值包括：view(查看任务) ，modify(修改任务)， start(启动任务)，incremental(创建增量任务)，delete(删除任务)，upload(获取上传权限)。
                     * @return AllAction 支持的所有操作，值包括：view(查看任务) ，modify(修改任务)， start(启动任务)，incremental(创建增量任务)，delete(删除任务)，upload(获取上传权限)。
                     * 
                     */
                    std::vector<std::string> GetAllAction() const;

                    /**
                     * 设置支持的所有操作，值包括：view(查看任务) ，modify(修改任务)， start(启动任务)，incremental(创建增量任务)，delete(删除任务)，upload(获取上传权限)。
                     * @param _allAction 支持的所有操作，值包括：view(查看任务) ，modify(修改任务)， start(启动任务)，incremental(创建增量任务)，delete(删除任务)，upload(获取上传权限)。
                     * 
                     */
                    void SetAllAction(const std::vector<std::string>& _allAction);

                    /**
                     * 判断参数 AllAction 是否已赋值
                     * @return AllAction 是否已赋值
                     * 
                     */
                    bool AllActionHasBeenSet() const;

                    /**
                     * 获取当前状态允许的操作，AllAction的子集,为空表示禁止所有操作
                     * @return AllowedAction 当前状态允许的操作，AllAction的子集,为空表示禁止所有操作
                     * 
                     */
                    std::vector<std::string> GetAllowedAction() const;

                    /**
                     * 设置当前状态允许的操作，AllAction的子集,为空表示禁止所有操作
                     * @param _allowedAction 当前状态允许的操作，AllAction的子集,为空表示禁止所有操作
                     * 
                     */
                    void SetAllowedAction(const std::vector<std::string>& _allowedAction);

                    /**
                     * 判断参数 AllowedAction 是否已赋值
                     * @return AllowedAction 是否已赋值
                     * 
                     */
                    bool AllowedActionHasBeenSet() const;

                private:

                    /**
                     * 支持的所有操作，值包括：view(查看任务) ，modify(修改任务)， start(启动任务)，incremental(创建增量任务)，delete(删除任务)，upload(获取上传权限)。
                     */
                    std::vector<std::string> m_allAction;
                    bool m_allActionHasBeenSet;

                    /**
                     * 当前状态允许的操作，AllAction的子集,为空表示禁止所有操作
                     */
                    std::vector<std::string> m_allowedAction;
                    bool m_allowedActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATIONACTION_H_
