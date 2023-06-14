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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERSRESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/ServerBaseInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeCloudRunServers返回参数结构体
                */
                class DescribeCloudRunServersResponse : public AbstractModel
                {
                public:
                    DescribeCloudRunServersResponse();
                    ~DescribeCloudRunServersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务列表
                     * @return ServerList 服务列表
                     * 
                     */
                    std::vector<ServerBaseInfo> GetServerList() const;

                    /**
                     * 判断参数 ServerList 是否已赋值
                     * @return ServerList 是否已赋值
                     * 
                     */
                    bool ServerListHasBeenSet() const;

                    /**
                     * 获取服务总数
                     * @return Total 服务总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 服务列表
                     */
                    std::vector<ServerBaseInfo> m_serverList;
                    bool m_serverListHasBeenSet;

                    /**
                     * 服务总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERSRESPONSE_H_
