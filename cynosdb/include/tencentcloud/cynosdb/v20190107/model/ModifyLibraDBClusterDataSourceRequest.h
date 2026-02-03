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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERDATASOURCEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LibraDBClusterSrcInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBClusterDataSource请求参数结构体
                */
                class ModifyLibraDBClusterDataSourceRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterDataSourceRequest();
                    ~ModifyLibraDBClusterDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群ID
                     * @return ClusterId 分析集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分析集群ID
                     * @param _clusterId 分析集群ID
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
                     * 获取只读分析引擎实例ID
                     * @return InstanceId 只读分析引擎实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置只读分析引擎实例ID
                     * @param _instanceId 只读分析引擎实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取源端信息
                     * @return SrcInfo 源端信息
                     * 
                     */
                    std::vector<LibraDBClusterSrcInfo> GetSrcInfo() const;

                    /**
                     * 设置源端信息
                     * @param _srcInfo 源端信息
                     * 
                     */
                    void SetSrcInfo(const std::vector<LibraDBClusterSrcInfo>& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                private:

                    /**
                     * 分析集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 只读分析引擎实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 源端信息
                     */
                    std::vector<LibraDBClusterSrcInfo> m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERDATASOURCEREQUEST_H_
