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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERSREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeCloudRunServers请求参数结构体
                */
                class DescribeCloudRunServersRequest : public AbstractModel
                {
                public:
                    DescribeCloudRunServersRequest();
                    ~DescribeCloudRunServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境Id
                     * @return EnvId 环境Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _envId 环境Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取默认为9， 最大为30
不传或传0时 取默认9
大于30时取30
                     * @return PageSize 默认为9， 最大为30
不传或传0时 取默认9
大于30时取30
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置默认为9， 最大为30
不传或传0时 取默认9
大于30时取30
                     * @param _pageSize 默认为9， 最大为30
不传或传0时 取默认9
大于30时取30
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
                     * 获取不传或传0时 会默认为1
                     * @return PageNum 不传或传0时 会默认为1
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置不传或传0时 会默认为1
                     * @param _pageNum 不传或传0时 会默认为1
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取服务类型：function | container
                     * @return ServerType 服务类型：function | container
                     * 
                     */
                    std::string GetServerType() const;

                    /**
                     * 设置服务类型：function | container
                     * @param _serverType 服务类型：function | container
                     * 
                     */
                    void SetServerType(const std::string& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                private:

                    /**
                     * 环境Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 默认为9， 最大为30
不传或传0时 取默认9
大于30时取30
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 不传或传0时 会默认为1
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 服务类型：function | container
                     */
                    std::string m_serverType;
                    bool m_serverTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNSERVERSREQUEST_H_
