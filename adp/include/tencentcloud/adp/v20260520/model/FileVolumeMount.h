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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FILEVOLUMEMOUNT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FILEVOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用沙箱中的云盘挂载配置。
                */
                class FileVolumeMount : public AbstractModel
                {
                public:
                    FileVolumeMount();
                    ~FileVolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>访问模式：RO=只读，RW=读写；必填。挂载到 /workdir 时只能使用 RW。</p>
                     * @return AccessMode <p>访问模式：RO=只读，RW=读写；必填。挂载到 /workdir 时只能使用 RW。</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>访问模式：RO=只读，RW=读写；必填。挂载到 /workdir 时只能使用 RW。</p>
                     * @param _accessMode <p>访问模式：RO=只读，RW=读写；必填。挂载到 /workdir 时只能使用 RW。</p>
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取<p>沙箱内的绝对挂载目录；/workdir 最多挂载一条且只能使用 RW。</p>
                     * @return MountPath <p>沙箱内的绝对挂载目录；/workdir 最多挂载一条且只能使用 RW。</p>
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置<p>沙箱内的绝对挂载目录；/workdir 最多挂载一条且只能使用 RW。</p>
                     * @param _mountPath <p>沙箱内的绝对挂载目录；/workdir 最多挂载一条且只能使用 RW。</p>
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取<p>云盘标识</p>
                     * @return VolumeId <p>云盘标识</p>
                     * 
                     */
                    std::string GetVolumeId() const;

                    /**
                     * 设置<p>云盘标识</p>
                     * @param _volumeId <p>云盘标识</p>
                     * 
                     */
                    void SetVolumeId(const std::string& _volumeId);

                    /**
                     * 判断参数 VolumeId 是否已赋值
                     * @return VolumeId 是否已赋值
                     * 
                     */
                    bool VolumeIdHasBeenSet() const;

                    /**
                     * 获取<p>服务端生成的挂载标识，修改保留，新增可不传</p>
                     * @return MountId <p>服务端生成的挂载标识，修改保留，新增可不传</p>
                     * 
                     */
                    std::string GetMountId() const;

                    /**
                     * 设置<p>服务端生成的挂载标识，修改保留，新增可不传</p>
                     * @param _mountId <p>服务端生成的挂载标识，修改保留，新增可不传</p>
                     * 
                     */
                    void SetMountId(const std::string& _mountId);

                    /**
                     * 判断参数 MountId 是否已赋值
                     * @return MountId 是否已赋值
                     * 
                     */
                    bool MountIdHasBeenSet() const;

                    /**
                     * 获取<p>相对云盘 data 根目录的路径；空字符串表示挂载整个 data 根目录。</p>
                     * @return RelativePath <p>相对云盘 data 根目录的路径；空字符串表示挂载整个 data 根目录。</p>
                     * 
                     */
                    std::string GetRelativePath() const;

                    /**
                     * 设置<p>相对云盘 data 根目录的路径；空字符串表示挂载整个 data 根目录。</p>
                     * @param _relativePath <p>相对云盘 data 根目录的路径；空字符串表示挂载整个 data 根目录。</p>
                     * 
                     */
                    void SetRelativePath(const std::string& _relativePath);

                    /**
                     * 判断参数 RelativePath 是否已赋值
                     * @return RelativePath 是否已赋值
                     * 
                     */
                    bool RelativePathHasBeenSet() const;

                    /**
                     * 获取<p>云盘名称，仅在查询应用配置时由服务端补充，修改时忽略；不可获取时为空且不影响挂载配置</p>
                     * @return VolumeName <p>云盘名称，仅在查询应用配置时由服务端补充，修改时忽略；不可获取时为空且不影响挂载配置</p>
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置<p>云盘名称，仅在查询应用配置时由服务端补充，修改时忽略；不可获取时为空且不影响挂载配置</p>
                     * @param _volumeName <p>云盘名称，仅在查询应用配置时由服务端补充，修改时忽略；不可获取时为空且不影响挂载配置</p>
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                private:

                    /**
                     * <p>访问模式：RO=只读，RW=读写；必填。挂载到 /workdir 时只能使用 RW。</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>沙箱内的绝对挂载目录；/workdir 最多挂载一条且只能使用 RW。</p>
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * <p>云盘标识</p>
                     */
                    std::string m_volumeId;
                    bool m_volumeIdHasBeenSet;

                    /**
                     * <p>服务端生成的挂载标识，修改保留，新增可不传</p>
                     */
                    std::string m_mountId;
                    bool m_mountIdHasBeenSet;

                    /**
                     * <p>相对云盘 data 根目录的路径；空字符串表示挂载整个 data 根目录。</p>
                     */
                    std::string m_relativePath;
                    bool m_relativePathHasBeenSet;

                    /**
                     * <p>云盘名称，仅在查询应用配置时由服务端补充，修改时忽略；不可获取时为空且不影响挂载配置</p>
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FILEVOLUMEMOUNT_H_
