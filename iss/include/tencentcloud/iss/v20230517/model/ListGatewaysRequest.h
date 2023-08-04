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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListGateways请求参数结构体
                */
                class ListGatewaysRequest : public AbstractModel
                {
                public:
                    ListGatewaysRequest();
                    ~ListGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，默认为1
                     * @return PageNumber 页码，默认为1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，默认为1
                     * @param _pageNumber 页码，默认为1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数量，默认为20
                     * @return PageSize 每页数量，默认为20
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页数量，默认为20
                     * @param _pageSize 每页数量，默认为20
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取网关名称
                     * @return Name 网关名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网关名称
                     * @param _name 网关名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取服务节点ID
                     * @return ClusterId 服务节点ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置服务节点ID
                     * @param _clusterId 服务节点ID
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
                     * 获取网关状态（0：离线，1 ：在线）
                     * @return Status 网关状态（0：离线，1 ：在线）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置网关状态（0：离线，1 ：在线）
                     * @param _status 网关状态（0：离线，1 ：在线）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 页码，默认为1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量，默认为20
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 网关名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务节点ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 网关状态（0：离线，1 ：在线）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYSREQUEST_H_
