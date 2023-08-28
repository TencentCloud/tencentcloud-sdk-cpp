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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYDEVICESREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYDEVICESREQUEST_H_

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
                * ListGatewayDevices请求参数结构体
                */
                class ListGatewayDevicesRequest : public AbstractModel
                {
                public:
                    ListGatewayDevicesRequest();
                    ~ListGatewayDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关索引ID（从获取网关列表接口ListGateways中获取）
                     * @return GatewayId 网关索引ID（从获取网关列表接口ListGateways中获取）
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关索引ID（从获取网关列表接口ListGateways中获取）
                     * @param _gatewayId 网关索引ID（从获取网关列表接口ListGateways中获取）
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取分页页数
                     * @return PageNumber 分页页数
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页数
                     * @param _pageNumber 分页页数
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
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 网关索引ID（从获取网关列表接口ListGateways中获取）
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 分页页数
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYDEVICESREQUEST_H_
