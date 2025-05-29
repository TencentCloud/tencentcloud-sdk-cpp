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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERREADONLYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERREADONLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyClusterReadOnly请求参数结构体
                */
                class ModifyClusterReadOnlyRequest : public AbstractModel
                {
                public:
                    ModifyClusterReadOnlyRequest();
                    ~ModifyClusterReadOnlyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID列表
                     * @return ClusterIds 集群ID列表
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置集群ID列表
                     * @param _clusterIds 集群ID列表
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取集群只读开关，可选值：ON，OFF
                     * @return ReadOnlyOperation 集群只读开关，可选值：ON，OFF
                     * 
                     */
                    std::string GetReadOnlyOperation() const;

                    /**
                     * 设置集群只读开关，可选值：ON，OFF
                     * @param _readOnlyOperation 集群只读开关，可选值：ON，OFF
                     * 
                     */
                    void SetReadOnlyOperation(const std::string& _readOnlyOperation);

                    /**
                     * 判断参数 ReadOnlyOperation 是否已赋值
                     * @return ReadOnlyOperation 是否已赋值
                     * 
                     */
                    bool ReadOnlyOperationHasBeenSet() const;

                    /**
                     * 获取yes：在运维时间窗内修改，no：立即执行（默认值）
                     * @return IsInMaintainPeriod yes：在运维时间窗内修改，no：立即执行（默认值）
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置yes：在运维时间窗内修改，no：立即执行（默认值）
                     * @param _isInMaintainPeriod yes：在运维时间窗内修改，no：立即执行（默认值）
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * 集群ID列表
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 集群只读开关，可选值：ON，OFF
                     */
                    std::string m_readOnlyOperation;
                    bool m_readOnlyOperationHasBeenSet;

                    /**
                     * yes：在运维时间窗内修改，no：立即执行（默认值）
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERREADONLYREQUEST_H_
