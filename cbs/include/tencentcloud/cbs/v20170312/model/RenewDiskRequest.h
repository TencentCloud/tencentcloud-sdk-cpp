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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_RENEWDISKREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_RENEWDISKREQUEST_H_

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
                * RenewDisk请求参数结构体
                */
                class RenewDiskRequest : public AbstractModel
                {
                public:
                    RenewDiskRequest();
                    ~RenewDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云硬盘的续费时长。<br>在云硬盘与挂载的实例一起续费的场景下，可以指定参数CurInstanceDeadline，此时云硬盘会按对齐到实例续费后的到期时间来续费。
                     * @return DiskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云硬盘的续费时长。<br>在云硬盘与挂载的实例一起续费的场景下，可以指定参数CurInstanceDeadline，此时云硬盘会按对齐到实例续费后的到期时间来续费。
                     * 
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云硬盘的续费时长。<br>在云硬盘与挂载的实例一起续费的场景下，可以指定参数CurInstanceDeadline，此时云硬盘会按对齐到实例续费后的到期时间来续费。
                     * @param _diskChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云硬盘的续费时长。<br>在云硬盘与挂载的实例一起续费的场景下，可以指定参数CurInstanceDeadline，此时云硬盘会按对齐到实例续费后的到期时间来续费。
                     * 
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @return DiskId 云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @param _diskId 云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云硬盘的续费时长。<br>在云硬盘与挂载的实例一起续费的场景下，可以指定参数CurInstanceDeadline，此时云硬盘会按对齐到实例续费后的到期时间来续费。
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * 云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_RENEWDISKREQUEST_H_
