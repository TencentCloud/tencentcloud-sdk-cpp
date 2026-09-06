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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DELETEDBCUSTOMNODESDISASTERRECOVERGROUPREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DELETEDBCUSTOMNODESDISASTERRECOVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DeleteDBCustomNodesDisasterRecoverGroup请求参数结构体
                */
                class DeleteDBCustomNodesDisasterRecoverGroupRequest : public AbstractModel
                {
                public:
                    DeleteDBCustomNodesDisasterRecoverGroupRequest();
                    ~DeleteDBCustomNodesDisasterRecoverGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * @return NodeIds <p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置<p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * @param _nodeIds <p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取<p>置放群组ID</p><p>入参限制：只支持传一个ID</p>
                     * @return DisasterRecoverGroupIds <p>置放群组ID</p><p>入参限制：只支持传一个ID</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>置放群组ID</p><p>入参限制：只支持传一个ID</p>
                     * @param _disasterRecoverGroupIds <p>置放群组ID</p><p>入参限制：只支持传一个ID</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * <p>置放群组ID</p><p>入参限制：只支持传一个ID</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DELETEDBCUSTOMNODESDISASTERRECOVERGROUPREQUEST_H_
