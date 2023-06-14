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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMENFS_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMENFS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * NFS挂载卷
                */
                class VolumeNFS : public AbstractModel
                {
                public:
                    VolumeNFS();
                    ~VolumeNFS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务地址
                     * @return Server 服务地址
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置服务地址
                     * @param _server 服务地址
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取对应服务器路径
                     * @return ServerPath 对应服务器路径
                     * 
                     */
                    std::string GetServerPath() const;

                    /**
                     * 设置对应服务器路径
                     * @param _serverPath 对应服务器路径
                     * 
                     */
                    void SetServerPath(const std::string& _serverPath);

                    /**
                     * 判断参数 ServerPath 是否已赋值
                     * @return ServerPath 是否已赋值
                     * 
                     */
                    bool ServerPathHasBeenSet() const;

                    /**
                     * 获取对应本地路径
                     * @return Path 对应本地路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置对应本地路径
                     * @param _path 对应本地路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * 服务地址
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 对应服务器路径
                     */
                    std::string m_serverPath;
                    bool m_serverPathHasBeenSet;

                    /**
                     * 对应本地路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMENFS_H_
