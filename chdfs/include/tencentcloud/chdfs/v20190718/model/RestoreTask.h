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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_RESTORETASK_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_RESTORETASK_H_

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
        namespace V20190718
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
                     * 获取回热任务ID
                     * @return RestoreTaskId 回热任务ID
                     * 
                     */
                    uint64_t GetRestoreTaskId() const;

                    /**
                     * 设置回热任务ID
                     * @param _restoreTaskId 回热任务ID
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
                     * 获取回热任务文件路径
                     * @return FilePath 回热任务文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置回热任务文件路径
                     * @param _filePath 回热任务文件路径
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
                     * 获取回热任务类型（1：标准；2：极速；3：批量）
                     * @return Type 回热任务类型（1：标准；2：极速；3：批量）
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置回热任务类型（1：标准；2：极速；3：批量）
                     * @param _type 回热任务类型（1：标准；2：极速；3：批量）
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
                     * 获取指定恢复出的临时副本的有效时长（单位天）
                     * @return Days 指定恢复出的临时副本的有效时长（单位天）
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置指定恢复出的临时副本的有效时长（单位天）
                     * @param _days 指定恢复出的临时副本的有效时长（单位天）
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
                     * 获取回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）
                     * @return Status 回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）
                     * @param _status 回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 回热任务ID
                     */
                    uint64_t m_restoreTaskId;
                    bool m_restoreTaskIdHasBeenSet;

                    /**
                     * 回热任务文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 回热任务类型（1：标准；2：极速；3：批量）
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 指定恢复出的临时副本的有效时长（单位天）
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 回热任务状态（1：绑定文件中；2：绑定文件完成；3：文件回热中；4：文件回热完成）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_RESTORETASK_H_
