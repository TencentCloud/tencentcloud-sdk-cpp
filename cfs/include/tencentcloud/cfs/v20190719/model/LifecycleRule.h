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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 生命周期管理策略关联的管理规则
                */
                class LifecycleRule : public AbstractModel
                {
                public:
                    LifecycleRule();
                    ~LifecycleRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据转储后的存储类型
                     * @return StorageType 数据转储后的存储类型
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置数据转储后的存储类型
                     * @param _storageType 数据转储后的存储类型
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取数据转储文件类型
                     * @return FileType 数据转储文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置数据转储文件类型
                     * @param _fileType 数据转储文件类型
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取数据转储行为
                     * @return Action 数据转储行为
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置数据转储行为
                     * @param _action 数据转储行为
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取数据转储触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interval 数据转储触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置数据转储触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interval 数据转储触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取数据转储文件最大规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMaxSize 数据转储文件最大规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMaxSize() const;

                    /**
                     * 设置数据转储文件最大规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMaxSize 数据转储文件最大规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMaxSize(const std::string& _fileMaxSize);

                    /**
                     * 判断参数 FileMaxSize 是否已赋值
                     * @return FileMaxSize 是否已赋值
                     * 
                     */
                    bool FileMaxSizeHasBeenSet() const;

                    /**
                     * 获取数据转储文件最小规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMinSize 数据转储文件最小规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMinSize() const;

                    /**
                     * 设置数据转储文件最小规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMinSize 数据转储文件最小规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMinSize(const std::string& _fileMinSize);

                    /**
                     * 判断参数 FileMinSize 是否已赋值
                     * @return FileMinSize 是否已赋值
                     * 
                     */
                    bool FileMinSizeHasBeenSet() const;

                private:

                    /**
                     * 数据转储后的存储类型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 数据转储文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 数据转储行为
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 数据转储触发时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 数据转储文件最大规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMaxSize;
                    bool m_fileMaxSizeHasBeenSet;

                    /**
                     * 数据转储文件最小规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMinSize;
                    bool m_fileMinSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_LIFECYCLERULE_H_
