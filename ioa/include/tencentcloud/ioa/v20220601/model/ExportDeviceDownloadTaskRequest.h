/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_EXPORTDEVICEDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_EXPORTDEVICEDOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Condition.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ExportDeviceDownloadTask请求参数结构体
                */
                class ExportDeviceDownloadTaskRequest : public AbstractModel
                {
                public:
                    ExportDeviceDownloadTaskRequest();
                    ~ExportDeviceDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取系统类型（0: win，1：linux，2: mac，4：android，5：ios；默认值0）
                     * @return OsType 系统类型（0: win，1：linux，2: mac，4：android，5：ios；默认值0）
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置系统类型（0: win，1：linux，2: mac，4：android，5：ios；默认值0）
                     * @param _osType 系统类型（0: win，1：linux，2: mac，4：android，5：ios；默认值0）
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @return DomainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @param _domainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    void SetDomainInstanceId(const std::string& _domainInstanceId);

                    /**
                     * 判断参数 DomainInstanceId 是否已赋值
                     * @return DomainInstanceId 是否已赋值
                     * 
                     */
                    bool DomainInstanceIdHasBeenSet() const;

                    /**
                     * 获取分组id
                     * @return GroupId 分组id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置分组id
                     * @param _groupId 分组id
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取 在线状态 2 在线 0，1 离线
                     * @return OnlineStatus  在线状态 2 在线 0，1 离线
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置 在线状态 2 在线 0，1 离线
                     * @param _onlineStatus  在线状态 2 在线 0，1 离线
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取导出顺序，接口返回的数据字段
                     * @return ExportOrder 导出顺序，接口返回的数据字段
                     * 
                     */
                    std::string GetExportOrder() const;

                    /**
                     * 设置导出顺序，接口返回的数据字段
                     * @param _exportOrder 导出顺序，接口返回的数据字段
                     * 
                     */
                    void SetExportOrder(const std::string& _exportOrder);

                    /**
                     * 判断参数 ExportOrder 是否已赋值
                     * @return ExportOrder 是否已赋值
                     * 
                     */
                    bool ExportOrderHasBeenSet() const;

                    /**
                     * 获取 导出类型， 0：终端树；7:硬件信息列表导出；
                     * @return ExportType  导出类型， 0：终端树；7:硬件信息列表导出；
                     * 
                     */
                    int64_t GetExportType() const;

                    /**
                     * 设置 导出类型， 0：终端树；7:硬件信息列表导出；
                     * @param _exportType  导出类型， 0：终端树；7:硬件信息列表导出；
                     * 
                     */
                    void SetExportType(const int64_t& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     * 
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取过滤条件。同DescribeDevices接口
                     * @return Condition 过滤条件。同DescribeDevices接口
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置过滤条件。同DescribeDevices接口
                     * @param _condition 过滤条件。同DescribeDevices接口
                     * 
                     */
                    void SetCondition(const Condition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                private:

                    /**
                     * 系统类型（0: win，1：linux，2: mac，4：android，5：ios；默认值0）
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 分组id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     *  在线状态 2 在线 0，1 离线
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * 导出顺序，接口返回的数据字段
                     */
                    std::string m_exportOrder;
                    bool m_exportOrderHasBeenSet;

                    /**
                     *  导出类型， 0：终端树；7:硬件信息列表导出；
                     */
                    int64_t m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * 过滤条件。同DescribeDevices接口
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_EXPORTDEVICEDOWNLOADTASKREQUEST_H_
