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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CFSTURBOVOLUME_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CFSTURBOVOLUME_H_

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
                * cfs trubo 存储卷
                */
                class CFSTurboVolume : public AbstractModel
                {
                public:
                    CFSTurboVolume();
                    ~CFSTurboVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储卷名称</p>
                     * @return VolumeName <p>存储卷名称</p>
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置<p>存储卷名称</p>
                     * @param _volumeName <p>存储卷名称</p>
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
                     * 获取<p>文件系统 id</p>
                     * @return FileSystemId <p>文件系统 id</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 id</p>
                     * @param _fileSystemId <p>文件系统 id</p>
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
                     * 获取<p>CFSId</p>
                     * @return FSId <p>CFSId</p>
                     * 
                     */
                    std::string GetFSId() const;

                    /**
                     * 设置<p>CFSId</p>
                     * @param _fSId <p>CFSId</p>
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
                     * 获取<p>挂载点 ip</p>
                     * @return Host <p>挂载点 ip</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>挂载点 ip</p>
                     * @param _host <p>挂载点 ip</p>
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
                     * 获取<p>cfs子目录</p>
                     * @return SubPath <p>cfs子目录</p>
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置<p>cfs子目录</p>
                     * @param _subPath <p>cfs子目录</p>
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
                     * 获取<p>lustre挂载根目录，默认为/cfs</p>
                     * @return RootDir <p>lustre挂载根目录，默认为/cfs</p>
                     * 
                     */
                    std::string GetRootDir() const;

                    /**
                     * 设置<p>lustre挂载根目录，默认为/cfs</p>
                     * @param _rootDir <p>lustre挂载根目录，默认为/cfs</p>
                     * 
                     */
                    void SetRootDir(const std::string& _rootDir);

                    /**
                     * 判断参数 RootDir 是否已赋值
                     * @return RootDir 是否已赋值
                     * 
                     */
                    bool RootDirHasBeenSet() const;

                private:

                    /**
                     * <p>存储卷名称</p>
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * <p>文件系统 id</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>CFSId</p>
                     */
                    std::string m_fSId;
                    bool m_fSIdHasBeenSet;

                    /**
                     * <p>挂载点 ip</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>cfs子目录</p>
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * <p>lustre挂载根目录，默认为/cfs</p>
                     */
                    std::string m_rootDir;
                    bool m_rootDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CFSTURBOVOLUME_H_
