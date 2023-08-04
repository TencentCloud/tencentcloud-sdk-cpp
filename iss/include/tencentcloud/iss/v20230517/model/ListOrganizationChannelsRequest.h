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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSREQUEST_H_

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
                * ListOrganizationChannels请求参数结构体
                */
                class ListOrganizationChannelsRequest : public AbstractModel
                {
                public:
                    ListOrganizationChannelsRequest();
                    ~ListOrganizationChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组织ID
                     * @return OrganizationId 组织ID
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置组织ID
                     * @param _organizationId 组织ID
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取每页最大数量
                     * @return PageSize 每页最大数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页最大数量
                     * @param _pageSize 每页最大数量
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
                     * 获取第几页 
                     * @return PageNumber 第几页 
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置第几页 
                     * @param _pageNumber 第几页 
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
                     * 获取查询条件，则按照设备名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * @return DeviceName 查询条件，则按照设备名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置查询条件，则按照设备名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * @param _deviceName 查询条件，则按照设备名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取查询条件，则按照通道名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * @return ChannelName 查询条件，则按照通道名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置查询条件，则按照通道名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * @param _channelName 查询条件，则按照通道名称查询
查询条件同时只有一个生效。长度不超过32字节
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * 组织ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 每页最大数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 第几页 
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 查询条件，则按照设备名称查询
查询条件同时只有一个生效。长度不超过32字节
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 查询条件，则按照通道名称查询
查询条件同时只有一个生效。长度不超过32字节
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSREQUEST_H_
