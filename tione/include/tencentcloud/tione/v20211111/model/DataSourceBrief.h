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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DATASOURCEBRIEF_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DATASOURCEBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 数据源简要信息
                */
                class DataSourceBrief : public AbstractModel
                {
                public:
                    DataSourceBrief();
                    ~DataSourceBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储实例ID</p>
                     * @return StorageId <p>存储实例ID</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>存储实例ID</p>
                     * @param _storageId <p>存储实例ID</p>
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取<p>存储实例名称</p>
                     * @return StorageName <p>存储实例名称</p>
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置<p>存储实例名称</p>
                     * @param _storageName <p>存储实例名称</p>
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                    /**
                     * 获取<p>存储目录</p>
                     * @return WorkDir <p>存储目录</p>
                     * 
                     */
                    std::string GetWorkDir() const;

                    /**
                     * 设置<p>存储目录</p>
                     * @param _workDir <p>存储目录</p>
                     * 
                     */
                    void SetWorkDir(const std::string& _workDir);

                    /**
                     * 判断参数 WorkDir 是否已赋值
                     * @return WorkDir 是否已赋值
                     * 
                     */
                    bool WorkDirHasBeenSet() const;

                    /**
                     * 获取<p>数据源读写权限，RW/RO</p>
                     * @return Permission <p>数据源读写权限，RW/RO</p>
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置<p>数据源读写权限，RW/RO</p>
                     * @param _permission <p>数据源读写权限，RW/RO</p>
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * <p>存储实例ID</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>存储实例名称</p>
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * <p>存储目录</p>
                     */
                    std::string m_workDir;
                    bool m_workDirHasBeenSet;

                    /**
                     * <p>数据源读写权限，RW/RO</p>
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DATASOURCEBRIEF_H_
