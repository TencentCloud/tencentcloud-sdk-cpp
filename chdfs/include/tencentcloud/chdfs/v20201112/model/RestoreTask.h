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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_RESTORETASK_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_RESTORETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * 回热任务
                */
                class RestoreTask : public AbstractModel
                {
                public:
                    RestoreTask();
                    ~RestoreTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回热任务ID</p>
                     * @return RestoreTaskId <p>回热任务ID</p>
                     * 
                     */
                    uint64_t GetRestoreTaskId() const;

                    /**
                     * 设置<p>回热任务ID</p>
                     * @param _restoreTaskId <p>回热任务ID</p>
                     * 
                     */
                    void SetRestoreTaskId(const uint64_t& _restoreTaskId);

                    /**
                     * 判断参数 RestoreTaskId 是否已赋值
                     * @return RestoreTaskId 是否已赋值
                     * 
                     */
                    bool RestoreTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>回热任务文件路径，不支持目录和通配符</p>
                     * @return FilePath <p>回热任务文件路径，不支持目录和通配符</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>回热任务文件路径，不支持目录和通配符</p>
                     * @param _filePath <p>回热任务文件路径，不支持目录和通配符</p>
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取<p>回热任务类型（1：标准；2：极速；3：批量，暂时仅支持标准）</p>
                     * @return Type <p>回热任务类型（1：标准；2：极速；3：批量，暂时仅支持标准）</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>回热任务类型（1：标准；2：极速；3：批量，暂时仅支持标准）</p>
                     * @param _type <p>回热任务类型（1：标准；2：极速；3：批量，暂时仅支持标准）</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>指定恢复出的临时副本的有效时长（单位天）</p>
                     * @return Days <p>指定恢复出的临时副本的有效时长（单位天）</p>
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置<p>指定恢复出的临时副本的有效时长（单位天）</p>
                     * @param _days <p>指定恢复出的临时副本的有效时长（单位天）</p>
                     * 
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取<p>回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）</p>
                     * @return Status <p>回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）</p>
                     * @param _status <p>回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>回热任务ID</p>
                     */
                    uint64_t m_restoreTaskId;
                    bool m_restoreTaskIdHasBeenSet;

                    /**
                     * <p>回热任务文件路径，不支持目录和通配符</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>回热任务类型（1：标准；2：极速；3：批量，暂时仅支持标准）</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>指定恢复出的临时副本的有效时长（单位天）</p>
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * <p>回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_RESTORETASK_H_
