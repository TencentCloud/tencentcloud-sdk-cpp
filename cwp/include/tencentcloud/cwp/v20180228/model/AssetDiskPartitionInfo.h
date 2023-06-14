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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDISKPARTITIONINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDISKPARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产管理磁盘分区信息
                */
                class AssetDiskPartitionInfo : public AbstractModel
                {
                public:
                    AssetDiskPartitionInfo();
                    ~AssetDiskPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区名
                     * @return Name 分区名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分区名
                     * @param _name 分区名
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
                     * 获取分区大小：单位G
                     * @return Size 分区大小：单位G
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置分区大小：单位G
                     * @param _size 分区大小：单位G
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取分区使用率
                     * @return Percent 分区使用率
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置分区使用率
                     * @param _percent 分区使用率
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取文件系统类型
                     * @return Type 文件系统类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件系统类型
                     * @param _type 文件系统类型
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
                     * 获取挂载目录
                     * @return Path 挂载目录
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置挂载目录
                     * @param _path 挂载目录
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取已使用空间：单位G
                     * @return Used 已使用空间：单位G
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置已使用空间：单位G
                     * @param _used 已使用空间：单位G
                     * 
                     */
                    void SetUsed(const uint64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * 分区名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分区大小：单位G
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 分区使用率
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 文件系统类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 挂载目录
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 已使用空间：单位G
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDISKPARTITIONINFO_H_
