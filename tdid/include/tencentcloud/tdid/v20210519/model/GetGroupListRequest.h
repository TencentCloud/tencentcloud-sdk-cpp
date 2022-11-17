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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETGROUPLISTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetGroupList请求参数结构体
                */
                class GetGroupListRequest : public AbstractModel
                {
                public:
                    GetGroupListRequest();
                    ~GetGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0为未部署DID服务的群组，1为已部署DID服务的群组
                     * @return Status 0为未部署DID服务的群组，1为已部署DID服务的群组
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0为未部署DID服务的群组，1为已部署DID服务的群组
                     * @param Status 0为未部署DID服务的群组，1为已部署DID服务的群组
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 0为未部署DID服务的群组，1为已部署DID服务的群组
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETGROUPLISTREQUEST_H_
