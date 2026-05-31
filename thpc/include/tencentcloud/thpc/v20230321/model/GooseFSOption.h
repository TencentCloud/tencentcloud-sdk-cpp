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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_GOOSEFSOPTION_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_GOOSEFSOPTION_H_

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
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 描述GooseFS挂载信息
                */
                class GooseFSOption : public AbstractModel
                {
                public:
                    GooseFSOption();
                    ~GooseFSOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件系统本地挂载路径。</p>
                     * @return LocalPath <p>文件系统本地挂载路径。</p>
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置<p>文件系统本地挂载路径。</p>
                     * @param _localPath <p>文件系统本地挂载路径。</p>
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
                     * 获取<p>文件系统远程挂载路径; 远端路径为GooseFS控制台看到的命名空间的url;命名空间文档参考https://cloud.tencent.com/document/product/1424/117877</p>
                     * @return RemotePath <p>文件系统远程挂载路径; 远端路径为GooseFS控制台看到的命名空间的url;命名空间文档参考https://cloud.tencent.com/document/product/1424/117877</p>
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置<p>文件系统远程挂载路径; 远端路径为GooseFS控制台看到的命名空间的url;命名空间文档参考https://cloud.tencent.com/document/product/1424/117877</p>
                     * @param _remotePath <p>文件系统远程挂载路径; 远端路径为GooseFS控制台看到的命名空间的url;命名空间文档参考https://cloud.tencent.com/document/product/1424/117877</p>
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
                     * 获取<p>文件系统master的ip和端口，此参数和FileSystemId互斥。</p>
                     * @return Masters <p>文件系统master的ip和端口，此参数和FileSystemId互斥。</p>
                     * 
                     */
                    std::vector<std::string> GetMasters() const;

                    /**
                     * 设置<p>文件系统master的ip和端口，此参数和FileSystemId互斥。</p>
                     * @param _masters <p>文件系统master的ip和端口，此参数和FileSystemId互斥。</p>
                     * 
                     */
                    void SetMasters(const std::vector<std::string>& _masters);

                    /**
                     * 判断参数 Masters 是否已赋值
                     * @return Masters 是否已赋值
                     * 
                     */
                    bool MastersHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS的文件ID；此参数和Masters 互斥。</p>
                     * @return FileSystemId <p>GooseFS的文件ID；此参数和Masters 互斥。</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>GooseFS的文件ID；此参数和Masters 互斥。</p>
                     * @param _fileSystemId <p>GooseFS的文件ID；此参数和Masters 互斥。</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统本地挂载路径。</p>
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * <p>文件系统远程挂载路径; 远端路径为GooseFS控制台看到的命名空间的url;命名空间文档参考https://cloud.tencent.com/document/product/1424/117877</p>
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * <p>文件系统master的ip和端口，此参数和FileSystemId互斥。</p>
                     */
                    std::vector<std::string> m_masters;
                    bool m_mastersHasBeenSet;

                    /**
                     * <p>GooseFS的文件ID；此参数和Masters 互斥。</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_GOOSEFSOPTION_H_
