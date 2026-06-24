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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_GOOSEFSVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_GOOSEFSVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * GooseFSVolume
                */
                class GooseFSVolume : public AbstractModel
                {
                public:
                    GooseFSVolume();
                    ~GooseFSVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储卷名</p>
                     * @return VolumeName <p>存储卷名</p>
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置<p>存储卷名</p>
                     * @param _volumeName <p>存储卷名</p>
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                    /**
                     * 获取<p>gooseFS实例ID</p>
                     * @return ClusterId <p>gooseFS实例ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>gooseFS实例ID</p>
                     * @param _clusterId <p>gooseFS实例ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>gooseFS 命名空间</p>
                     * @return Namespace <p>gooseFS 命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>gooseFS 命名空间</p>
                     * @param _namespace <p>gooseFS 命名空间</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>在命名空间中的挂载路径</p>
                     * @return SubPath <p>在命名空间中的挂载路径</p>
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置<p>在命名空间中的挂载路径</p>
                     * @param _subPath <p>在命名空间中的挂载路径</p>
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                    /**
                     * 获取<p>FuseVERSION描述</p>
                     * @return FuseVersion <p>FuseVERSION描述</p>
                     * 
                     */
                    std::string GetFuseVersion() const;

                    /**
                     * 设置<p>FuseVERSION描述</p>
                     * @param _fuseVersion <p>FuseVERSION描述</p>
                     * 
                     */
                    void SetFuseVersion(const std::string& _fuseVersion);

                    /**
                     * 判断参数 FuseVersion 是否已赋值
                     * @return FuseVersion 是否已赋值
                     * 
                     */
                    bool FuseVersionHasBeenSet() const;

                    /**
                     * 获取<p>Client Version描述，例如 GOOSE-1.5.2</p>
                     * @return ClientVersion <p>Client Version描述，例如 GOOSE-1.5.2</p>
                     * 
                     */
                    std::string GetClientVersion() const;

                    /**
                     * 设置<p>Client Version描述，例如 GOOSE-1.5.2</p>
                     * @param _clientVersion <p>Client Version描述，例如 GOOSE-1.5.2</p>
                     * 
                     */
                    void SetClientVersion(const std::string& _clientVersion);

                    /**
                     * 判断参数 ClientVersion 是否已赋值
                     * @return ClientVersion 是否已赋值
                     * 
                     */
                    bool ClientVersionHasBeenSet() const;

                    /**
                     * 获取<p>默认挂载参数</p>
                     * @return MountOptions <p>默认挂载参数</p>
                     * 
                     */
                    std::string GetMountOptions() const;

                    /**
                     * 设置<p>默认挂载参数</p>
                     * @param _mountOptions <p>默认挂载参数</p>
                     * 
                     */
                    void SetMountOptions(const std::string& _mountOptions);

                    /**
                     * 判断参数 MountOptions 是否已赋值
                     * @return MountOptions 是否已赋值
                     * 
                     */
                    bool MountOptionsHasBeenSet() const;

                    /**
                     * 获取<p>默认JVM参数</p>
                     * @return JvmOptions <p>默认JVM参数</p>
                     * 
                     */
                    std::string GetJvmOptions() const;

                    /**
                     * 设置<p>默认JVM参数</p>
                     * @param _jvmOptions <p>默认JVM参数</p>
                     * 
                     */
                    void SetJvmOptions(const std::string& _jvmOptions);

                    /**
                     * 判断参数 JvmOptions 是否已赋值
                     * @return JvmOptions 是否已赋值
                     * 
                     */
                    bool JvmOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>存储卷名</p>
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * <p>gooseFS实例ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>gooseFS 命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>在命名空间中的挂载路径</p>
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * <p>FuseVERSION描述</p>
                     */
                    std::string m_fuseVersion;
                    bool m_fuseVersionHasBeenSet;

                    /**
                     * <p>Client Version描述，例如 GOOSE-1.5.2</p>
                     */
                    std::string m_clientVersion;
                    bool m_clientVersionHasBeenSet;

                    /**
                     * <p>默认挂载参数</p>
                     */
                    std::string m_mountOptions;
                    bool m_mountOptionsHasBeenSet;

                    /**
                     * <p>默认JVM参数</p>
                     */
                    std::string m_jvmOptions;
                    bool m_jvmOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_GOOSEFSVOLUME_H_
