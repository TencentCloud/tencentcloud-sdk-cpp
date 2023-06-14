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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPREQUEST_H_

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
                * ModifyCensorship请求参数结构体
                */
                class ModifyCensorshipRequest : public AbstractModel
                {
                public:
                    ModifyCensorshipRequest();
                    ~ModifyCensorshipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取集群是否开启审核 0-关闭 1-开启
                     * @return Censorship 集群是否开启审核 0-关闭 1-开启
                     * 
                     */
                    int64_t GetCensorship() const;

                    /**
                     * 设置集群是否开启审核 0-关闭 1-开启
                     * @param _censorship 集群是否开启审核 0-关闭 1-开启
                     * 
                     */
                    void SetCensorship(const int64_t& _censorship);

                    /**
                     * 判断参数 Censorship 是否已赋值
                     * @return Censorship 是否已赋值
                     * 
                     */
                    bool CensorshipHasBeenSet() const;

                    /**
                     * 获取审批人uin列表
                     * @return Uins 审批人uin列表
                     * 
                     */
                    std::vector<std::string> GetUins() const;

                    /**
                     * 设置审批人uin列表
                     * @param _uins 审批人uin列表
                     * 
                     */
                    void SetUins(const std::vector<std::string>& _uins);

                    /**
                     * 判断参数 Uins 是否已赋值
                     * @return Uins 是否已赋值
                     * 
                     */
                    bool UinsHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群是否开启审核 0-关闭 1-开启
                     */
                    int64_t m_censorship;
                    bool m_censorshipHasBeenSet;

                    /**
                     * 审批人uin列表
                     */
                    std::vector<std::string> m_uins;
                    bool m_uinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPREQUEST_H_
