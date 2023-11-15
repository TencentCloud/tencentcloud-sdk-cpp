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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICESHADOWLISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICESHADOWLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeDeviceShadowList请求参数结构体
                */
                class DescribeDeviceShadowListRequest : public AbstractModel
                {
                public:
                    DescribeDeviceShadowListRequest();
                    ~DescribeDeviceShadowListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取WID
                     * @return WIDSet WID
                     * 
                     */
                    std::vector<std::string> GetWIDSet() const;

                    /**
                     * 设置WID
                     * @param _wIDSet WID
                     * 
                     */
                    void SetWIDSet(const std::vector<std::string>& _wIDSet);

                    /**
                     * 判断参数 WIDSet 是否已赋值
                     * @return WIDSet 是否已赋值
                     * 
                     */
                    bool WIDSetHasBeenSet() const;

                    /**
                     * 获取分页查询，第几页
                     * @return PageNumber 分页查询，第几页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页查询，第几页
                     * @param _pageNumber 分页查询，第几页
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
                     * 获取每页条数
                     * @return PageSize 每页条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页条数
                     * @param _pageSize 每页条数
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
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取设备类型code
                     * @return DeviceTypeSet 设备类型code
                     * 
                     */
                    std::vector<std::string> GetDeviceTypeSet() const;

                    /**
                     * 设置设备类型code
                     * @param _deviceTypeSet 设备类型code
                     * 
                     */
                    void SetDeviceTypeSet(const std::vector<std::string>& _deviceTypeSet);

                    /**
                     * 判断参数 DeviceTypeSet 是否已赋值
                     * @return DeviceTypeSet 是否已赋值
                     * 
                     */
                    bool DeviceTypeSetHasBeenSet() const;

                    /**
                     * 获取产品 pid
                     * @return ProductIdSet 产品 pid
                     * 
                     */
                    std::vector<int64_t> GetProductIdSet() const;

                    /**
                     * 设置产品 pid
                     * @param _productIdSet 产品 pid
                     * 
                     */
                    void SetProductIdSet(const std::vector<int64_t>& _productIdSet);

                    /**
                     * 判断参数 ProductIdSet 是否已赋值
                     * @return ProductIdSet 是否已赋值
                     * 
                     */
                    bool ProductIdSetHasBeenSet() const;

                    /**
                     * 获取设备标签id
                     * @return TagIdSet 设备标签id
                     * 
                     */
                    std::vector<int64_t> GetTagIdSet() const;

                    /**
                     * 设置设备标签id
                     * @param _tagIdSet 设备标签id
                     * 
                     */
                    void SetTagIdSet(const std::vector<int64_t>& _tagIdSet);

                    /**
                     * 判断参数 TagIdSet 是否已赋值
                     * @return TagIdSet 是否已赋值
                     * 
                     */
                    bool TagIdSetHasBeenSet() const;

                    /**
                     * 获取空间层级，（支持空间多层，比如具体建筑、具体楼层）
                     * @return SpaceCodeSet 空间层级，（支持空间多层，比如具体建筑、具体楼层）
                     * 
                     */
                    std::vector<std::string> GetSpaceCodeSet() const;

                    /**
                     * 设置空间层级，（支持空间多层，比如具体建筑、具体楼层）
                     * @param _spaceCodeSet 空间层级，（支持空间多层，比如具体建筑、具体楼层）
                     * 
                     */
                    void SetSpaceCodeSet(const std::vector<std::string>& _spaceCodeSet);

                    /**
                     * 判断参数 SpaceCodeSet 是否已赋值
                     * @return SpaceCodeSet 是否已赋值
                     * 
                     */
                    bool SpaceCodeSetHasBeenSet() const;

                    /**
                     * 获取设备标签名
                     * @return DeviceTagSet 设备标签名
                     * 
                     */
                    std::vector<std::string> GetDeviceTagSet() const;

                    /**
                     * 设置设备标签名
                     * @param _deviceTagSet 设备标签名
                     * 
                     */
                    void SetDeviceTagSet(const std::vector<std::string>& _deviceTagSet);

                    /**
                     * 判断参数 DeviceTagSet 是否已赋值
                     * @return DeviceTagSet 是否已赋值
                     * 
                     */
                    bool DeviceTagSetHasBeenSet() const;

                private:

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * WID
                     */
                    std::vector<std::string> m_wIDSet;
                    bool m_wIDSetHasBeenSet;

                    /**
                     * 分页查询，第几页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 设备类型code
                     */
                    std::vector<std::string> m_deviceTypeSet;
                    bool m_deviceTypeSetHasBeenSet;

                    /**
                     * 产品 pid
                     */
                    std::vector<int64_t> m_productIdSet;
                    bool m_productIdSetHasBeenSet;

                    /**
                     * 设备标签id
                     */
                    std::vector<int64_t> m_tagIdSet;
                    bool m_tagIdSetHasBeenSet;

                    /**
                     * 空间层级，（支持空间多层，比如具体建筑、具体楼层）
                     */
                    std::vector<std::string> m_spaceCodeSet;
                    bool m_spaceCodeSetHasBeenSet;

                    /**
                     * 设备标签名
                     */
                    std::vector<std::string> m_deviceTagSet;
                    bool m_deviceTagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICESHADOWLISTREQUEST_H_
