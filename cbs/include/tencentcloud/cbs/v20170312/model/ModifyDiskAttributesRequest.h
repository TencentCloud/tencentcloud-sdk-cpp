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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDiskAttributes请求参数结构体
                */
                class ModifyDiskAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDiskAttributesRequest();
                    ~ModifyDiskAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的云硬盘ID。如果传入多个云盘ID，仅支持所有云盘修改为同一属性。
                     * @return DiskIds 一个或多个待操作的云硬盘ID。如果传入多个云盘ID，仅支持所有云盘修改为同一属性。
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置一个或多个待操作的云硬盘ID。如果传入多个云盘ID，仅支持所有云盘修改为同一属性。
                     * @param DiskIds 一个或多个待操作的云硬盘ID。如果传入多个云盘ID，仅支持所有云盘修改为同一属性。
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取新的云硬盘项目ID，只支持修改弹性云盘的项目ID。通过[DescribeProject](/document/api/378/4400)接口查询可用项目及其ID。
                     * @return ProjectId 新的云硬盘项目ID，只支持修改弹性云盘的项目ID。通过[DescribeProject](/document/api/378/4400)接口查询可用项目及其ID。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置新的云硬盘项目ID，只支持修改弹性云盘的项目ID。通过[DescribeProject](/document/api/378/4400)接口查询可用项目及其ID。
                     * @param ProjectId 新的云硬盘项目ID，只支持修改弹性云盘的项目ID。通过[DescribeProject](/document/api/378/4400)接口查询可用项目及其ID。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取新的云硬盘名称。
                     * @return DiskName 新的云硬盘名称。
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置新的云硬盘名称。
                     * @param DiskName 新的云硬盘名称。
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取是否为弹性云盘，FALSE表示非弹性云盘，TRUE表示弹性云盘。仅支持非弹性云盘修改为弹性云盘。
                     * @return Portable 是否为弹性云盘，FALSE表示非弹性云盘，TRUE表示弹性云盘。仅支持非弹性云盘修改为弹性云盘。
                     */
                    bool GetPortable() const;

                    /**
                     * 设置是否为弹性云盘，FALSE表示非弹性云盘，TRUE表示弹性云盘。仅支持非弹性云盘修改为弹性云盘。
                     * @param Portable 是否为弹性云盘，FALSE表示非弹性云盘，TRUE表示弹性云盘。仅支持非弹性云盘修改为弹性云盘。
                     */
                    void SetPortable(const bool& _portable);

                    /**
                     * 判断参数 Portable 是否已赋值
                     * @return Portable 是否已赋值
                     */
                    bool PortableHasBeenSet() const;

                    /**
                     * 获取成功挂载到云主机后该云硬盘是否随云主机销毁，TRUE表示随云主机销毁，FALSE表示不随云主机销毁。仅支持按量计费云硬盘数据盘。
                     * @return DeleteWithInstance 成功挂载到云主机后该云硬盘是否随云主机销毁，TRUE表示随云主机销毁，FALSE表示不随云主机销毁。仅支持按量计费云硬盘数据盘。
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置成功挂载到云主机后该云硬盘是否随云主机销毁，TRUE表示随云主机销毁，FALSE表示不随云主机销毁。仅支持按量计费云硬盘数据盘。
                     * @param DeleteWithInstance 成功挂载到云主机后该云硬盘是否随云主机销毁，TRUE表示随云主机销毁，FALSE表示不随云主机销毁。仅支持按量计费云硬盘数据盘。
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取变更云盘类型时，可传入该参数，表示变更的目标类型，取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘。<br>当前不支持批量变更类型，即传入DiskType时，DiskIds仅支持传入一块云盘；<br>变更云盘类型时不支持同时变更其他属性。
                     * @return DiskType 变更云盘类型时，可传入该参数，表示变更的目标类型，取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘。<br>当前不支持批量变更类型，即传入DiskType时，DiskIds仅支持传入一块云盘；<br>变更云盘类型时不支持同时变更其他属性。
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置变更云盘类型时，可传入该参数，表示变更的目标类型，取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘。<br>当前不支持批量变更类型，即传入DiskType时，DiskIds仅支持传入一块云盘；<br>变更云盘类型时不支持同时变更其他属性。
                     * @param DiskType 变更云盘类型时，可传入该参数，表示变更的目标类型，取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘。<br>当前不支持批量变更类型，即传入DiskType时，DiskIds仅支持传入一块云盘；<br>变更云盘类型时不支持同时变更其他属性。
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的云硬盘ID。如果传入多个云盘ID，仅支持所有云盘修改为同一属性。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 新的云硬盘项目ID，只支持修改弹性云盘的项目ID。通过[DescribeProject](/document/api/378/4400)接口查询可用项目及其ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 新的云硬盘名称。
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * 是否为弹性云盘，FALSE表示非弹性云盘，TRUE表示弹性云盘。仅支持非弹性云盘修改为弹性云盘。
                     */
                    bool m_portable;
                    bool m_portableHasBeenSet;

                    /**
                     * 成功挂载到云主机后该云硬盘是否随云主机销毁，TRUE表示随云主机销毁，FALSE表示不随云主机销毁。仅支持按量计费云硬盘数据盘。
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * 变更云盘类型时，可传入该参数，表示变更的目标类型，取值范围：<br><li>CLOUD_PREMIUM：表示高性能云硬盘<br><li>CLOUD_SSD：表示SSD云硬盘。<br>当前不支持批量变更类型，即传入DiskType时，DiskIds仅支持传入一块云盘；<br>变更云盘类型时不支持同时变更其他属性。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKATTRIBUTESREQUEST_H_
