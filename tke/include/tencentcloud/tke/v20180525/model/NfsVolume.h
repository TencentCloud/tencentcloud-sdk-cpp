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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_NFSVOLUME_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_NFSVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EKS Instance Nfs Volume
                */
                class NfsVolume : public AbstractModel
                {
                public:
                    NfsVolume();
                    ~NfsVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取nfs volume 数据卷名称
                     * @return Name nfs volume 数据卷名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置nfs volume 数据卷名称
                     * @param _name nfs volume 数据卷名称
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
                     * 获取NFS 数据卷路径
                     * @return Path NFS 数据卷路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置NFS 数据卷路径
                     * @param _path NFS 数据卷路径
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
                     * 获取NFS 服务器地址
                     * @return Server NFS 服务器地址
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置NFS 服务器地址
                     * @param _server NFS 服务器地址
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
                     * 获取默认为 False
                     * @return ReadOnly 默认为 False
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置默认为 False
                     * @param _readOnly 默认为 False
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                private:

                    /**
                     * nfs volume 数据卷名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * NFS 数据卷路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * NFS 服务器地址
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 默认为 False
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_NFSVOLUME_H_
