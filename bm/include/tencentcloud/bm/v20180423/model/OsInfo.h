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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_OSINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_OSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 操作系统类型
                */
                class OsInfo : public AbstractModel
                {
                public:
                    OsInfo();
                    ~OsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作系统ID
                     * @return OsTypeId 操作系统ID
                     * 
                     */
                    uint64_t GetOsTypeId() const;

                    /**
                     * 设置操作系统ID
                     * @param _osTypeId 操作系统ID
                     * 
                     */
                    void SetOsTypeId(const uint64_t& _osTypeId);

                    /**
                     * 判断参数 OsTypeId 是否已赋值
                     * @return OsTypeId 是否已赋值
                     * 
                     */
                    bool OsTypeIdHasBeenSet() const;

                    /**
                     * 获取操作系统名称
                     * @return OsName 操作系统名称
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统名称
                     * @param _osName 操作系统名称
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取操作系统名称描述
                     * @return OsDescription 操作系统名称描述
                     * 
                     */
                    std::string GetOsDescription() const;

                    /**
                     * 设置操作系统名称描述
                     * @param _osDescription 操作系统名称描述
                     * 
                     */
                    void SetOsDescription(const std::string& _osDescription);

                    /**
                     * 判断参数 OsDescription 是否已赋值
                     * @return OsDescription 是否已赋值
                     * 
                     */
                    bool OsDescriptionHasBeenSet() const;

                    /**
                     * 获取操作系统英文名称
                     * @return OsEnglishDescription 操作系统英文名称
                     * 
                     */
                    std::string GetOsEnglishDescription() const;

                    /**
                     * 设置操作系统英文名称
                     * @param _osEnglishDescription 操作系统英文名称
                     * 
                     */
                    void SetOsEnglishDescription(const std::string& _osEnglishDescription);

                    /**
                     * 判断参数 OsEnglishDescription 是否已赋值
                     * @return OsEnglishDescription 是否已赋值
                     * 
                     */
                    bool OsEnglishDescriptionHasBeenSet() const;

                    /**
                     * 获取操作系统的分类，如CentOs Debian
                     * @return OsClass 操作系统的分类，如CentOs Debian
                     * 
                     */
                    std::string GetOsClass() const;

                    /**
                     * 设置操作系统的分类，如CentOs Debian
                     * @param _osClass 操作系统的分类，如CentOs Debian
                     * 
                     */
                    void SetOsClass(const std::string& _osClass);

                    /**
                     * 判断参数 OsClass 是否已赋值
                     * @return OsClass 是否已赋值
                     * 
                     */
                    bool OsClassHasBeenSet() const;

                    /**
                     * 获取标识镜像分类。public:公共镜像; private: 专属镜像
                     * @return ImageTag 标识镜像分类。public:公共镜像; private: 专属镜像
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置标识镜像分类。public:公共镜像; private: 专属镜像
                     * @param _imageTag 标识镜像分类。public:公共镜像; private: 专属镜像
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取操作系统，ext4文件下所支持的最大的磁盘大小。单位为T
                     * @return MaxPartitionSize 操作系统，ext4文件下所支持的最大的磁盘大小。单位为T
                     * 
                     */
                    uint64_t GetMaxPartitionSize() const;

                    /**
                     * 设置操作系统，ext4文件下所支持的最大的磁盘大小。单位为T
                     * @param _maxPartitionSize 操作系统，ext4文件下所支持的最大的磁盘大小。单位为T
                     * 
                     */
                    void SetMaxPartitionSize(const uint64_t& _maxPartitionSize);

                    /**
                     * 判断参数 MaxPartitionSize 是否已赋值
                     * @return MaxPartitionSize 是否已赋值
                     * 
                     */
                    bool MaxPartitionSizeHasBeenSet() const;

                    /**
                     * 获取黑石版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsMinorVersion 黑石版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOsMinorVersion() const;

                    /**
                     * 设置黑石版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osMinorVersion 黑石版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsMinorVersion(const std::string& _osMinorVersion);

                    /**
                     * 判断参数 OsMinorVersion 是否已赋值
                     * @return OsMinorVersion 是否已赋值
                     * 
                     */
                    bool OsMinorVersionHasBeenSet() const;

                    /**
                     * 获取黑石版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsMinorClass 黑石版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOsMinorClass() const;

                    /**
                     * 设置黑石版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osMinorClass 黑石版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsMinorClass(const std::string& _osMinorClass);

                    /**
                     * 判断参数 OsMinorClass 是否已赋值
                     * @return OsMinorClass 是否已赋值
                     * 
                     */
                    bool OsMinorClassHasBeenSet() const;

                private:

                    /**
                     * 操作系统ID
                     */
                    uint64_t m_osTypeId;
                    bool m_osTypeIdHasBeenSet;

                    /**
                     * 操作系统名称
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 操作系统名称描述
                     */
                    std::string m_osDescription;
                    bool m_osDescriptionHasBeenSet;

                    /**
                     * 操作系统英文名称
                     */
                    std::string m_osEnglishDescription;
                    bool m_osEnglishDescriptionHasBeenSet;

                    /**
                     * 操作系统的分类，如CentOs Debian
                     */
                    std::string m_osClass;
                    bool m_osClassHasBeenSet;

                    /**
                     * 标识镜像分类。public:公共镜像; private: 专属镜像
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 操作系统，ext4文件下所支持的最大的磁盘大小。单位为T
                     */
                    uint64_t m_maxPartitionSize;
                    bool m_maxPartitionSizeHasBeenSet;

                    /**
                     * 黑石版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osMinorVersion;
                    bool m_osMinorVersionHasBeenSet;

                    /**
                     * 黑石版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_osMinorClass;
                    bool m_osMinorClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_OSINFO_H_
