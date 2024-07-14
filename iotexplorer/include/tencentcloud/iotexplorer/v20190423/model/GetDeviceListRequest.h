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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICELISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/Filter.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetDeviceList请求参数结构体
                */
                class GetDeviceListRequest : public AbstractModel
                {
                public:
                    GetDeviceListRequest();
                    ~GetDeviceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查看设备列表的产品ID, -1代表ProjectId来筛选
                     * @return ProductId 需要查看设备列表的产品ID, -1代表ProjectId来筛选
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置需要查看设备列表的产品ID, -1代表ProjectId来筛选
                     * @param _productId 需要查看设备列表的产品ID, -1代表ProjectId来筛选
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页的大小，数值范围 10-100
                     * @return Limit 分页的大小，数值范围 10-100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页的大小，数值范围 10-100
                     * @param _limit 分页的大小，数值范围 10-100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * @return FirmwareVersion 设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * @param _firmwareVersion 设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * 
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     * 
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取需要过滤的设备名称
                     * @return DeviceName 需要过滤的设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置需要过滤的设备名称
                     * @param _deviceName 需要过滤的设备名称
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
                     * 获取项目ID。产品 ID 为 -1 时，该参数必填
                     * @return ProjectId 项目ID。产品 ID 为 -1 时，该参数必填
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。产品 ID 为 -1 时，该参数必填
                     * @param _projectId 项目ID。产品 ID 为 -1 时，该参数必填
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取每次请求的Filters的上限为10，Filter.Values的上限为1。
                     * @return Filters 每次请求的Filters的上限为10，Filter.Values的上限为1。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的Filters的上限为10，Filter.Values的上限为1。
                     * @param _filters 每次请求的Filters的上限为10，Filter.Values的上限为1。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 需要查看设备列表的产品ID, -1代表ProjectId来筛选
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小，数值范围 10-100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 需要过滤的设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 项目ID。产品 ID 为 -1 时，该参数必填
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 每次请求的Filters的上限为10，Filter.Values的上限为1。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICELISTREQUEST_H_
