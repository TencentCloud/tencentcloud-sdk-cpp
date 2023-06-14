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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERNAMEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyClusterName请求参数结构体
                */
                class ModifyClusterNameRequest : public AbstractModel
                {
                public:
                    ModifyClusterNameRequest();
                    ~ModifyClusterNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改名称的集群ID
                     * @return ClusterId 需要修改名称的集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置需要修改名称的集群ID
                     * @param _clusterId 需要修改名称的集群ID
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
                     * 获取需要修改的集群名称，可使用中文或英文字符，最大长度32个字符
                     * @return ClusterName 需要修改的集群名称，可使用中文或英文字符，最大长度32个字符
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置需要修改的集群名称，可使用中文或英文字符，最大长度32个字符
                     * @param _clusterName 需要修改的集群名称，可使用中文或英文字符，最大长度32个字符
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * 需要修改名称的集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 需要修改的集群名称，可使用中文或英文字符，最大长度32个字符
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERNAMEREQUEST_H_
