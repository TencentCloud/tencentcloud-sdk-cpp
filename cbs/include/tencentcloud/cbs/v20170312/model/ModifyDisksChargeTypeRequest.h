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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKSCHARGETYPEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKSCHARGETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDisksChargeType请求参数结构体
                */
                class ModifyDisksChargeTypeRequest : public AbstractModel
                {
                public:
                    ModifyDisksChargeTypeRequest();
                    ~ModifyDisksChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的云硬盘ID。每次请求批量云盘上限为100。
                     * @return DiskIds 一个或多个待操作的云硬盘ID。每次请求批量云盘上限为100。
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置一个或多个待操作的云硬盘ID。每次请求批量云盘上限为100。
                     * @param DiskIds 一个或多个待操作的云硬盘ID。每次请求批量云盘上限为100。
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     * @return DiskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     * @param DiskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的云硬盘ID。每次请求批量云盘上限为100。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKSCHARGETYPEREQUEST_H_
