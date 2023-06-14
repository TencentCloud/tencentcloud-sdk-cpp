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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEIDLFILESREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEIDLFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DeleteIdlFiles请求参数结构体
                */
                class DeleteIdlFilesRequest : public AbstractModel
                {
                public:
                    DeleteIdlFilesRequest();
                    ~DeleteIdlFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDL所属集群ID
                     * @return ClusterId IDL所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置IDL所属集群ID
                     * @param _clusterId IDL所属集群ID
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
                     * 获取待删除的IDL文件信息列表
                     * @return IdlFiles 待删除的IDL文件信息列表
                     * 
                     */
                    std::vector<IdlFileInfo> GetIdlFiles() const;

                    /**
                     * 设置待删除的IDL文件信息列表
                     * @param _idlFiles 待删除的IDL文件信息列表
                     * 
                     */
                    void SetIdlFiles(const std::vector<IdlFileInfo>& _idlFiles);

                    /**
                     * 判断参数 IdlFiles 是否已赋值
                     * @return IdlFiles 是否已赋值
                     * 
                     */
                    bool IdlFilesHasBeenSet() const;

                private:

                    /**
                     * IDL所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待删除的IDL文件信息列表
                     */
                    std::vector<IdlFileInfo> m_idlFiles;
                    bool m_idlFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETEIDLFILESREQUEST_H_
