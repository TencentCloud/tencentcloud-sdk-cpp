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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_STORAGEOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_STORAGEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 文件存储配置。
                */
                class StorageOption : public AbstractModel
                {
                public:
                    StorageOption();
                    ~StorageOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件存储类型，取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * @return StorageType 文件存储类型，取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置文件存储类型，取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     * @param _storageType 文件存储类型，取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
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
                     * 获取文件存储可用区。
                     * @return Zone 文件存储可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置文件存储可用区。
                     * @param _zone 文件存储可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取文件系统容量，turbo系列必填，单位为GiB。 
- turbo标准型起售40TiB，即40960GiB；扩容步长20TiB，即20480 GiB。
- turbo性能型起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。
                     * @return Capacity 文件系统容量，turbo系列必填，单位为GiB。 
- turbo标准型起售40TiB，即40960GiB；扩容步长20TiB，即20480 GiB。
- turbo性能型起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置文件系统容量，turbo系列必填，单位为GiB。 
- turbo标准型起售40TiB，即40960GiB；扩容步长20TiB，即20480 GiB。
- turbo性能型起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。
                     * @param _capacity 文件系统容量，turbo系列必填，单位为GiB。 
- turbo标准型起售40TiB，即40960GiB；扩容步长20TiB，即20480 GiB。
- turbo性能型起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取是否开启默认扩容，仅turbo类型文件存储支持
                     * @return EnableAutoScaleUp 是否开启默认扩容，仅turbo类型文件存储支持
                     * 
                     */
                    bool GetEnableAutoScaleUp() const;

                    /**
                     * 设置是否开启默认扩容，仅turbo类型文件存储支持
                     * @param _enableAutoScaleUp 是否开启默认扩容，仅turbo类型文件存储支持
                     * 
                     */
                    void SetEnableAutoScaleUp(const bool& _enableAutoScaleUp);

                    /**
                     * 判断参数 EnableAutoScaleUp 是否已赋值
                     * @return EnableAutoScaleUp 是否已赋值
                     * 
                     */
                    bool EnableAutoScaleUpHasBeenSet() const;

                    /**
                     * 获取turbo文件系统元数据属性，basic：标准型元数据；enhanced：增强型元数据
                     * @return MetaType turbo文件系统元数据属性，basic：标准型元数据；enhanced：增强型元数据
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置turbo文件系统元数据属性，basic：标准型元数据；enhanced：增强型元数据
                     * @param _metaType turbo文件系统元数据属性，basic：标准型元数据；enhanced：增强型元数据
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                private:

                    /**
                     * 文件存储类型，取值范围：
- SD：通用标准型
- HP：通用性能型
- TB：turbo标准型
- TP：turbo性能型
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 文件存储可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 文件系统容量，turbo系列必填，单位为GiB。 
- turbo标准型起售40TiB，即40960GiB；扩容步长20TiB，即20480 GiB。
- turbo性能型起售20TiB，即20480 GiB；扩容步长10TiB，即10240 GiB。
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * 是否开启默认扩容，仅turbo类型文件存储支持
                     */
                    bool m_enableAutoScaleUp;
                    bool m_enableAutoScaleUpHasBeenSet;

                    /**
                     * turbo文件系统元数据属性，basic：标准型元数据；enhanced：增强型元数据
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_STORAGEOPTION_H_
