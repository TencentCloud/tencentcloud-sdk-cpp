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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_ACCEPTTCCVPCENDPOINTCONNECTREQUEST_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_ACCEPTTCCVPCENDPOINTCONNECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * AcceptTccVpcEndPointConnect请求参数结构体
                */
                class AcceptTccVpcEndPointConnectRequest : public AbstractModel
                {
                public:
                    AcceptTccVpcEndPointConnectRequest();
                    ~AcceptTccVpcEndPointConnectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点服务Id
                     * @return EndPointServiceId 终端节点服务Id
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务Id
                     * @param _endPointServiceId 终端节点服务Id
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取终端节点id
                     * @return EndPointId 终端节点id
                     * 
                     */
                    std::vector<std::string> GetEndPointId() const;

                    /**
                     * 设置终端节点id
                     * @param _endPointId 终端节点id
                     * 
                     */
                    void SetEndPointId(const std::vector<std::string>& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取是否接受连接
                     * @return AcceptFlag 是否接受连接
                     * 
                     */
                    bool GetAcceptFlag() const;

                    /**
                     * 设置是否接受连接
                     * @param _acceptFlag 是否接受连接
                     * 
                     */
                    void SetAcceptFlag(const bool& _acceptFlag);

                    /**
                     * 判断参数 AcceptFlag 是否已赋值
                     * @return AcceptFlag 是否已赋值
                     * 
                     */
                    bool AcceptFlagHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务Id
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 终端节点id
                     */
                    std::vector<std::string> m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * 是否接受连接
                     */
                    bool m_acceptFlag;
                    bool m_acceptFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_ACCEPTTCCVPCENDPOINTCONNECTREQUEST_H_
