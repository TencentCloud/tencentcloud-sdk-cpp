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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERVPCCONNECTIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERVPCCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserVpcConnection请求参数结构体
                */
                class DescribeUserVpcConnectionRequest : public AbstractModel
                {
                public:
                    DescribeUserVpcConnectionRequest();
                    ~DescribeUserVpcConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎网络ID
                     * @return EngineNetworkId 引擎网络ID
                     * 
                     */
                    std::string GetEngineNetworkId() const;

                    /**
                     * 设置引擎网络ID
                     * @param _engineNetworkId 引擎网络ID
                     * 
                     */
                    void SetEngineNetworkId(const std::string& _engineNetworkId);

                    /**
                     * 判断参数 EngineNetworkId 是否已赋值
                     * @return EngineNetworkId 是否已赋值
                     * 
                     */
                    bool EngineNetworkIdHasBeenSet() const;

                    /**
                     * 获取引擎ID集合
                     * @return DataEngineIds 引擎ID集合
                     * 
                     */
                    std::vector<std::string> GetDataEngineIds() const;

                    /**
                     * 设置引擎ID集合
                     * @param _dataEngineIds 引擎ID集合
                     * 
                     */
                    void SetDataEngineIds(const std::vector<std::string>& _dataEngineIds);

                    /**
                     * 判断参数 DataEngineIds 是否已赋值
                     * @return DataEngineIds 是否已赋值
                     * 
                     */
                    bool DataEngineIdsHasBeenSet() const;

                    /**
                     * 获取终端节点ID集合
                     * @return UserVpcEndpointIds 终端节点ID集合
                     * 
                     */
                    std::vector<std::string> GetUserVpcEndpointIds() const;

                    /**
                     * 设置终端节点ID集合
                     * @param _userVpcEndpointIds 终端节点ID集合
                     * 
                     */
                    void SetUserVpcEndpointIds(const std::vector<std::string>& _userVpcEndpointIds);

                    /**
                     * 判断参数 UserVpcEndpointIds 是否已赋值
                     * @return UserVpcEndpointIds 是否已赋值
                     * 
                     */
                    bool UserVpcEndpointIdsHasBeenSet() const;

                private:

                    /**
                     * 引擎网络ID
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * 引擎ID集合
                     */
                    std::vector<std::string> m_dataEngineIds;
                    bool m_dataEngineIdsHasBeenSet;

                    /**
                     * 终端节点ID集合
                     */
                    std::vector<std::string> m_userVpcEndpointIds;
                    bool m_userVpcEndpointIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERVPCCONNECTIONREQUEST_H_
