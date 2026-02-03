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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBINSTANCEREQUEST_H_

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
                * IsolateLibraDBInstance请求参数结构体
                */
                class IsolateLibraDBInstanceRequest : public AbstractModel
                {
                public:
                    IsolateLibraDBInstanceRequest();
                    ~IsolateLibraDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取只读分析引擎实例 ID 列表
                     * @return InstanceIdList 只读分析引擎实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置只读分析引擎实例 ID 列表
                     * @param _instanceIdList 只读分析引擎实例 ID 列表
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取是否是强制隔离
                     * @return ForceIsolate 是否是强制隔离
                     * 
                     */
                    bool GetForceIsolate() const;

                    /**
                     * 设置是否是强制隔离
                     * @param _forceIsolate 是否是强制隔离
                     * 
                     */
                    void SetForceIsolate(const bool& _forceIsolate);

                    /**
                     * 判断参数 ForceIsolate 是否已赋值
                     * @return ForceIsolate 是否已赋值
                     * 
                     */
                    bool ForceIsolateHasBeenSet() const;

                    /**
                     * 获取隔离原因类型
                     * @return IsolateReasonTypes 隔离原因类型
                     * 
                     */
                    std::vector<int64_t> GetIsolateReasonTypes() const;

                    /**
                     * 设置隔离原因类型
                     * @param _isolateReasonTypes 隔离原因类型
                     * 
                     */
                    void SetIsolateReasonTypes(const std::vector<int64_t>& _isolateReasonTypes);

                    /**
                     * 判断参数 IsolateReasonTypes 是否已赋值
                     * @return IsolateReasonTypes 是否已赋值
                     * 
                     */
                    bool IsolateReasonTypesHasBeenSet() const;

                    /**
                     * 获取隔离原因
                     * @return IsolateReason 隔离原因
                     * 
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置隔离原因
                     * @param _isolateReason 隔离原因
                     * 
                     */
                    void SetIsolateReason(const std::string& _isolateReason);

                    /**
                     * 判断参数 IsolateReason 是否已赋值
                     * @return IsolateReason 是否已赋值
                     * 
                     */
                    bool IsolateReasonHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 只读分析引擎实例 ID 列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 是否是强制隔离
                     */
                    bool m_forceIsolate;
                    bool m_forceIsolateHasBeenSet;

                    /**
                     * 隔离原因类型
                     */
                    std::vector<int64_t> m_isolateReasonTypes;
                    bool m_isolateReasonTypesHasBeenSet;

                    /**
                     * 隔离原因
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBINSTANCEREQUEST_H_
