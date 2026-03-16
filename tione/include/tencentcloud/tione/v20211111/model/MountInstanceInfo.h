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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MOUNTINSTANCEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MOUNTINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/StorageExtraConf.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 挂载的实例列表
                */
                class MountInstanceInfo : public AbstractModel
                {
                public:
                    MountInstanceInfo();
                    ~MountInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型英文名
                     * @return Type 类型英文名
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型英文名
                     * @param _type 类型英文名
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取存储实例ID
                     * @return StorageId 存储实例ID
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置存储实例ID
                     * @param _storageId 存储实例ID
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
                     * 获取存储实例名称
                     * @return StorageName 存储实例名称
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置存储实例名称
                     * @param _storageName 存储实例名称
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
                     * 获取状态，0可挂载 1不可挂载(挂载限制)
                     * @return Status 状态，0可挂载 1不可挂载(挂载限制)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，0可挂载 1不可挂载(挂载限制)
                     * @param _status 状态，0可挂载 1不可挂载(挂载限制)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraConf 额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageExtraConf GetExtraConf() const;

                    /**
                     * 设置额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraConf 额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraConf(const StorageExtraConf& _extraConf);

                    /**
                     * 判断参数 ExtraConf 是否已赋值
                     * @return ExtraConf 是否已赋值
                     * 
                     */
                    bool ExtraConfHasBeenSet() const;

                private:

                    /**
                     * 类型英文名
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 存储实例ID
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * 存储实例名称
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * 状态，0可挂载 1不可挂载(挂载限制)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageExtraConf m_extraConf;
                    bool m_extraConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MOUNTINSTANCEINFO_H_
