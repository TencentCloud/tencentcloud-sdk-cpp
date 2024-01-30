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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICELISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/CustomField.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeDeviceList请求参数结构体
                */
                class DescribeDeviceListRequest : public AbstractModel
                {
                public:
                    DescribeDeviceListRequest();
                    ~DescribeDeviceListRequest() = default;
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
                     * 获取分页查询，第几页，必传，大于0
                     * @return PageNumber 分页查询，第几页，必传，大于0
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页查询，第几页，必传，大于0
                     * @param _pageNumber 分页查询，第几页，必传，大于0
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
                     * 获取每页条数，必传大于0
                     * @return PageSize 每页条数，必传大于0
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页条数，必传大于0
                     * @param _pageSize 每页条数，必传大于0
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
                     * 获取设备类型，非必填
                     * @return DeviceTypeSet 设备类型，非必填
                     * 
                     */
                    std::vector<std::string> GetDeviceTypeSet() const;

                    /**
                     * 设置设备类型，非必填
                     * @param _deviceTypeSet 设备类型，非必填
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
                     * 获取产品 pid，非必填
                     * @return ProductIdSet 产品 pid，非必填
                     * 
                     */
                    std::vector<int64_t> GetProductIdSet() const;

                    /**
                     * 设置产品 pid，非必填
                     * @param _productIdSet 产品 pid，非必填
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
                     * 获取设备标签，非必填
                     * @return TagIdSet 设备标签，非必填
                     * 
                     */
                    std::vector<int64_t> GetTagIdSet() const;

                    /**
                     * 设置设备标签，非必填
                     * @param _tagIdSet 设备标签，非必填
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
                     * 获取空间层级
                     * @return SpaceCodeSet 空间层级
                     * 
                     */
                    std::vector<std::string> GetSpaceCodeSet() const;

                    /**
                     * 设置空间层级
                     * @param _spaceCodeSet 空间层级
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
                     * 获取设备标签名，非必填
                     * @return DeviceTagSet 设备标签名，非必填
                     * 
                     */
                    std::vector<std::string> GetDeviceTagSet() const;

                    /**
                     * 设置设备标签名，非必填
                     * @param _deviceTagSet 设备标签名，非必填
                     * 
                     */
                    void SetDeviceTagSet(const std::vector<std::string>& _deviceTagSet);

                    /**
                     * 判断参数 DeviceTagSet 是否已赋值
                     * @return DeviceTagSet 是否已赋值
                     * 
                     */
                    bool DeviceTagSetHasBeenSet() const;

                    /**
                     * 获取设备wid,非必填
                     * @return WIDSet 设备wid,非必填
                     * 
                     */
                    std::vector<std::string> GetWIDSet() const;

                    /**
                     * 设置设备wid,非必填
                     * @param _wIDSet 设备wid,非必填
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
                     * 获取自定义字段
                     * @return Field 自定义字段
                     * 
                     */
                    CustomField GetField() const;

                    /**
                     * 设置自定义字段
                     * @param _field 自定义字段
                     * 
                     */
                    void SetField(const CustomField& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取分组id列表，非必填
                     * @return GroupIdSet 分组id列表，非必填
                     * 
                     */
                    std::vector<int64_t> GetGroupIdSet() const;

                    /**
                     * 设置分组id列表，非必填
                     * @param _groupIdSet 分组id列表，非必填
                     * 
                     */
                    void SetGroupIdSet(const std::vector<int64_t>& _groupIdSet);

                    /**
                     * 判断参数 GroupIdSet 是否已赋值
                     * @return GroupIdSet 是否已赋值
                     * 
                     */
                    bool GroupIdSetHasBeenSet() const;

                    /**
                     * 获取是否激活，默认全部，"1"激活，"0"未激活
                     * @return IsActive 是否激活，默认全部，"1"激活，"0"未激活
                     * 
                     */
                    std::string GetIsActive() const;

                    /**
                     * 设置是否激活，默认全部，"1"激活，"0"未激活
                     * @param _isActive 是否激活，默认全部，"1"激活，"0"未激活
                     * 
                     */
                    void SetIsActive(const std::string& _isActive);

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取是否为摄像头，默认全部，"true"摄像头，"false"非摄像头
                     * @return IsCamera 是否为摄像头，默认全部，"true"摄像头，"false"非摄像头
                     * 
                     */
                    std::string GetIsCamera() const;

                    /**
                     * 设置是否为摄像头，默认全部，"true"摄像头，"false"非摄像头
                     * @param _isCamera 是否为摄像头，默认全部，"true"摄像头，"false"非摄像头
                     * 
                     */
                    void SetIsCamera(const std::string& _isCamera);

                    /**
                     * 判断参数 IsCamera 是否已赋值
                     * @return IsCamera 是否已赋值
                     * 
                     */
                    bool IsCameraHasBeenSet() const;

                private:

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 分页查询，第几页，必传，大于0
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页条数，必传大于0
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 设备类型，非必填
                     */
                    std::vector<std::string> m_deviceTypeSet;
                    bool m_deviceTypeSetHasBeenSet;

                    /**
                     * 产品 pid，非必填
                     */
                    std::vector<int64_t> m_productIdSet;
                    bool m_productIdSetHasBeenSet;

                    /**
                     * 设备标签，非必填
                     */
                    std::vector<int64_t> m_tagIdSet;
                    bool m_tagIdSetHasBeenSet;

                    /**
                     * 空间层级
                     */
                    std::vector<std::string> m_spaceCodeSet;
                    bool m_spaceCodeSetHasBeenSet;

                    /**
                     * 设备标签名，非必填
                     */
                    std::vector<std::string> m_deviceTagSet;
                    bool m_deviceTagSetHasBeenSet;

                    /**
                     * 设备wid,非必填
                     */
                    std::vector<std::string> m_wIDSet;
                    bool m_wIDSetHasBeenSet;

                    /**
                     * 自定义字段
                     */
                    CustomField m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 分组id列表，非必填
                     */
                    std::vector<int64_t> m_groupIdSet;
                    bool m_groupIdSetHasBeenSet;

                    /**
                     * 是否激活，默认全部，"1"激活，"0"未激活
                     */
                    std::string m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     * 是否为摄像头，默认全部，"true"摄像头，"false"非摄像头
                     */
                    std::string m_isCamera;
                    bool m_isCameraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICELISTREQUEST_H_
