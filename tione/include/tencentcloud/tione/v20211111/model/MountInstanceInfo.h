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
                     * 获取<p>类型英文名</p>
                     * @return Type <p>类型英文名</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型英文名</p>
                     * @param _type <p>类型英文名</p>
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
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>0： 可挂载（正常）</li><li>1： 不可挂载（挂载限制）</li><li>2： 不可挂载（存储配置关闭）</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>0： 可挂载（正常）</li><li>1： 不可挂载（挂载限制）</li><li>2： 不可挂载（存储配置关闭）</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>0： 可挂载（正常）</li><li>1： 不可挂载（挂载限制）</li><li>2： 不可挂载（存储配置关闭）</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>0： 可挂载（正常）</li><li>1： 不可挂载（挂载限制）</li><li>2： 不可挂载（存储配置关闭）</li></ul>
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
                     * 获取<p>额外配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraConf <p>额外配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageExtraConf GetExtraConf() const;

                    /**
                     * 设置<p>额外配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraConf <p>额外配置</p>
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
                     * <p>类型英文名</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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
                     * <p>状态</p><p>枚举值：</p><ul><li>0： 可挂载（正常）</li><li>1： 不可挂载（挂载限制）</li><li>2： 不可挂载（存储配置关闭）</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>额外配置</p>
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
