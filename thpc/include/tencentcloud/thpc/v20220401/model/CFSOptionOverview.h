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

#ifndef TENCENTCLOUD_THPC_V20220401_MODEL_CFSOPTIONOVERVIEW_H_
#define TENCENTCLOUD_THPC_V20220401_MODEL_CFSOPTIONOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20220401
        {
            namespace Model
            {
                /**
                * CFS存储选项概览信息。
                */
                class CFSOptionOverview : public AbstractModel
                {
                public:
                    CFSOptionOverview();
                    ~CFSOptionOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统本地挂载路径。
                     * @return LocalPath 文件系统本地挂载路径。
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置文件系统本地挂载路径。
                     * @param _localPath 文件系统本地挂载路径。
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                    /**
                     * 获取文件系统远程挂载ip及路径。
                     * @return RemotePath 文件系统远程挂载ip及路径。
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置文件系统远程挂载ip及路径。
                     * @param _remotePath 文件系统远程挂载ip及路径。
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取文件系统协议类型。
<li>NFS 3.0。
<li>NFS 4.0。
<li>TURBO。
                     * @return Protocol 文件系统协议类型。
<li>NFS 3.0。
<li>NFS 4.0。
<li>TURBO。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置文件系统协议类型。
<li>NFS 3.0。
<li>NFS 4.0。
<li>TURBO。
                     * @param _protocol 文件系统协议类型。
<li>NFS 3.0。
<li>NFS 4.0。
<li>TURBO。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取文件系统存储类型，默认值SD；其中 SD 为通用标准型标准型存储， HP为通用性能型存储， TB为turbo标准型， TP 为turbo性能型。
                     * @return StorageType 文件系统存储类型，默认值SD；其中 SD 为通用标准型标准型存储， HP为通用性能型存储， TB为turbo标准型， TP 为turbo性能型。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置文件系统存储类型，默认值SD；其中 SD 为通用标准型标准型存储， HP为通用性能型存储， TB为turbo标准型， TP 为turbo性能型。
                     * @param _storageType 文件系统存储类型，默认值SD；其中 SD 为通用标准型标准型存储， HP为通用性能型存储， TB为turbo标准型， TP 为turbo性能型。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * 文件系统本地挂载路径。
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * 文件系统远程挂载ip及路径。
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 文件系统协议类型。
<li>NFS 3.0。
<li>NFS 4.0。
<li>TURBO。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 文件系统存储类型，默认值SD；其中 SD 为通用标准型标准型存储， HP为通用性能型存储， TB为turbo标准型， TP 为turbo性能型。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20220401_MODEL_CFSOPTIONOVERVIEW_H_
