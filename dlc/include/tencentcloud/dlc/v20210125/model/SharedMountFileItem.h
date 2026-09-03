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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SHAREDMOUNTFILEITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SHAREDMOUNTFILEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CheckpointMetrics.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 共享挂载文件/目录项
                */
                class SharedMountFileItem : public AbstractModel
                {
                public:
                    SharedMountFileItem();
                    ~SharedMountFileItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件或目录名</p>
                     * @return Name <p>文件或目录名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>文件或目录名</p>
                     * @param _name <p>文件或目录名</p>
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
                     * 获取<p>类型：file / directory</p>
                     * @return Type <p>类型：file / directory</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型：file / directory</p>
                     * @param _type <p>类型：file / directory</p>
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
                     * 获取<p>文件大小（字节，仅 Type=file 时有值）</p>
                     * @return Size <p>文件大小（字节，仅 Type=file 时有值）</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>文件大小（字节，仅 Type=file 时有值）</p>
                     * @param _size <p>文件大小（字节，仅 Type=file 时有值）</p>
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>最后修改时间（毫秒时间戳，仅 Type=file 时有值）</p>
                     * @return LastModified <p>最后修改时间（毫秒时间戳，仅 Type=file 时有值）</p>
                     * 
                     */
                    int64_t GetLastModified() const;

                    /**
                     * 设置<p>最后修改时间（毫秒时间戳，仅 Type=file 时有值）</p>
                     * @param _lastModified <p>最后修改时间（毫秒时间戳，仅 Type=file 时有值）</p>
                     * 
                     */
                    void SetLastModified(const int64_t& _lastModified);

                    /**
                     * 判断参数 LastModified 是否已赋值
                     * @return LastModified 是否已赋值
                     * 
                     */
                    bool LastModifiedHasBeenSet() const;

                    /**
                     * 获取<p>相对 MountPath 的完整路径</p>
                     * @return Path <p>相对 MountPath 的完整路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>相对 MountPath 的完整路径</p>
                     * @param _path <p>相对 MountPath 的完整路径</p>
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
                     * 获取<p>Checkpoint 训练指标（仅 checkpoint 目录且 snapshot 存在时有值）</p>
                     * @return Metrics <p>Checkpoint 训练指标（仅 checkpoint 目录且 snapshot 存在时有值）</p>
                     * 
                     */
                    CheckpointMetrics GetMetrics() const;

                    /**
                     * 设置<p>Checkpoint 训练指标（仅 checkpoint 目录且 snapshot 存在时有值）</p>
                     * @param _metrics <p>Checkpoint 训练指标（仅 checkpoint 目录且 snapshot 存在时有值）</p>
                     * 
                     */
                    void SetMetrics(const CheckpointMetrics& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * <p>文件或目录名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>类型：file / directory</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文件大小（字节，仅 Type=file 时有值）</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>最后修改时间（毫秒时间戳，仅 Type=file 时有值）</p>
                     */
                    int64_t m_lastModified;
                    bool m_lastModifiedHasBeenSet;

                    /**
                     * <p>相对 MountPath 的完整路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Checkpoint 训练指标（仅 checkpoint 目录且 snapshot 存在时有值）</p>
                     */
                    CheckpointMetrics m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SHAREDMOUNTFILEITEM_H_
