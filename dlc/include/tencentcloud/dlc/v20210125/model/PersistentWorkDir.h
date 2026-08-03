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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PERSISTENTWORKDIR_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PERSISTENTWORKDIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Workspace 持久化工作目录配置
                */
                class PersistentWorkDir : public AbstractModel
                {
                public:
                    PersistentWorkDir();
                    ~PersistentWorkDir() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用持久化工作目录；为空或 false 时沿用 emptyDir 行为</p>
                     * @return Enabled <p>是否启用持久化工作目录；为空或 false 时沿用 emptyDir 行为</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用持久化工作目录；为空或 false 时沿用 emptyDir 行为</p>
                     * @param _enabled <p>是否启用持久化工作目录；为空或 false 时沿用 emptyDir 行为</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>持久化存储类型：COS / CFS</p>
                     * @return Type <p>持久化存储类型：COS / CFS</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>持久化存储类型：COS / CFS</p>
                     * @param _type <p>持久化存储类型：COS / CFS</p>
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
                     * 获取<p>COS Bucket 名称（Type=COS 时必填）</p>
                     * @return Bucket <p>COS Bucket 名称（Type=COS 时必填）</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>COS Bucket 名称（Type=COS 时必填）</p>
                     * @param _bucket <p>COS Bucket 名称（Type=COS 时必填）</p>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>CFS 文件系统 ID（Type=CFS 时必填）</p>
                     * @return FileSystemId <p>CFS 文件系统 ID（Type=CFS 时必填）</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>CFS 文件系统 ID（Type=CFS 时必填）</p>
                     * @param _fileSystemId <p>CFS 文件系统 ID（Type=CFS 时必填）</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>Bucket / 文件系统下的子路径，必须以 &#39;/&#39; 开头且不含 &#39;..&#39;</p>
                     * @return VolumeSubPath <p>Bucket / 文件系统下的子路径，必须以 &#39;/&#39; 开头且不含 &#39;..&#39;</p>
                     * 
                     */
                    std::string GetVolumeSubPath() const;

                    /**
                     * 设置<p>Bucket / 文件系统下的子路径，必须以 &#39;/&#39; 开头且不含 &#39;..&#39;</p>
                     * @param _volumeSubPath <p>Bucket / 文件系统下的子路径，必须以 &#39;/&#39; 开头且不含 &#39;..&#39;</p>
                     * 
                     */
                    void SetVolumeSubPath(const std::string& _volumeSubPath);

                    /**
                     * 判断参数 VolumeSubPath 是否已赋值
                     * @return VolumeSubPath 是否已赋值
                     * 
                     */
                    bool VolumeSubPathHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用持久化工作目录；为空或 false 时沿用 emptyDir 行为</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>持久化存储类型：COS / CFS</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>COS Bucket 名称（Type=COS 时必填）</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>CFS 文件系统 ID（Type=CFS 时必填）</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Bucket / 文件系统下的子路径，必须以 &#39;/&#39; 开头且不含 &#39;..&#39;</p>
                     */
                    std::string m_volumeSubPath;
                    bool m_volumeSubPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PERSISTENTWORKDIR_H_
