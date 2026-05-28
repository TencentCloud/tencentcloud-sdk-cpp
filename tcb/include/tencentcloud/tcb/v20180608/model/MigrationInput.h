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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONINPUT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 结构化 SQL migration 信息
                */
                class MigrationInput : public AbstractModel
                {
                public:
                    MigrationInput();
                    ~MigrationInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @return Version <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @param _version <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>migration 版本名</p><p>入参限制：仅允许小写字母和下划线</p>
                     * @return Name <p>migration 版本名</p><p>入参限制：仅允许小写字母和下划线</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>migration 版本名</p><p>入参限制：仅允许小写字母和下划线</p>
                     * @param _name <p>migration 版本名</p><p>入参限制：仅允许小写字母和下划线</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>migration 应用 sql 语句</p>
                     * @return Query <p>migration 应用 sql 语句</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>migration 应用 sql 语句</p>
                     * @param _query <p>migration 应用 sql 语句</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>migration 回滚 sql 语句</p>
                     * @return Rollback <p>migration 回滚 sql 语句</p>
                     * 
                     */
                    std::string GetRollback() const;

                    /**
                     * 设置<p>migration 回滚 sql 语句</p>
                     * @param _rollback <p>migration 回滚 sql 语句</p>
                     * 
                     */
                    void SetRollback(const std::string& _rollback);

                    /**
                     * 判断参数 Rollback 是否已赋值
                     * @return Rollback 是否已赋值
                     * 
                     */
                    bool RollbackHasBeenSet() const;

                private:

                    /**
                     * <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>migration 版本名</p><p>入参限制：仅允许小写字母和下划线</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>migration 应用 sql 语句</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>migration 回滚 sql 语句</p>
                     */
                    std::string m_rollback;
                    bool m_rollbackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONINPUT_H_
