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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CFSVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CFSVOLUME_H_

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
                * cfs 存储卷
                */
                class CFSVolume : public AbstractModel
                {
                public:
                    CFSVolume();
                    ~CFSVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储卷名称
                     * @return VolumeName 存储卷名称
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置存储卷名称
                     * @param _volumeName 存储卷名称
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
                     * 获取文件系统 id
                     * @return FileSystemId 文件系统 id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 id
                     * @param _fileSystemId 文件系统 id
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
                     * 获取CFSId
                     * @return FSId CFSId
                     * 
                     */
                    std::string GetFSId() const;

                    /**
                     * 设置CFSId
                     * @param _fSId CFSId
                     * 
                     */
                    void SetFSId(const std::string& _fSId);

                    /**
                     * 判断参数 FSId 是否已赋值
                     * @return FSId 是否已赋值
                     * 
                     */
                    bool FSIdHasBeenSet() const;

                    /**
                     * 获取挂载点 ip
                     * @return Host 挂载点 ip
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置挂载点 ip
                     * @param _host 挂载点 ip
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取cfs子目录
                     * @return SubPath cfs子目录
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置cfs子目录
                     * @param _subPath cfs子目录
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                private:

                    /**
                     * 存储卷名称
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * 文件系统 id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * CFSId
                     */
                    std::string m_fSId;
                    bool m_fSIdHasBeenSet;

                    /**
                     * 挂载点 ip
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * cfs子目录
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CFSVOLUME_H_
