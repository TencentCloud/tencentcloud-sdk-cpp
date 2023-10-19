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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTSSHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTSSHAREPERMISSIONREQUEST_H_

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
                * ModifySnapshotsSharePermission请求参数结构体
                */
                class ModifySnapshotsSharePermissionRequest : public AbstractModel
                {
                public:
                    ModifySnapshotsSharePermissionRequest();
                    ~ModifySnapshotsSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * @return SnapshotIds 快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * @param _snapshotIds 快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取接收分享快照的账号Id列表，array型参数的格式可以参考[API简介](https://cloud.tencent.com/document/api/213/568)。账号ID不同于QQ号，查询用户账号ID请查看[账号信息](https://console.cloud.tencent.com/developer)中的账号ID栏。
                     * @return AccountIds 接收分享快照的账号Id列表，array型参数的格式可以参考[API简介](https://cloud.tencent.com/document/api/213/568)。账号ID不同于QQ号，查询用户账号ID请查看[账号信息](https://console.cloud.tencent.com/developer)中的账号ID栏。
                     * 
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置接收分享快照的账号Id列表，array型参数的格式可以参考[API简介](https://cloud.tencent.com/document/api/213/568)。账号ID不同于QQ号，查询用户账号ID请查看[账号信息](https://console.cloud.tencent.com/developer)中的账号ID栏。
                     * @param _accountIds 接收分享快照的账号Id列表，array型参数的格式可以参考[API简介](https://cloud.tencent.com/document/api/213/568)。账号ID不同于QQ号，查询用户账号ID请查看[账号信息](https://console.cloud.tencent.com/developer)中的账号ID栏。
                     * 
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     * 
                     */
                    bool AccountIdsHasBeenSet() const;

                    /**
                     * 获取操作，包括 SHARE，CANCEL。其中SHARE代表分享操作，CANCEL代表取消分享操作。
                     * @return Permission 操作，包括 SHARE，CANCEL。其中SHARE代表分享操作，CANCEL代表取消分享操作。
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置操作，包括 SHARE，CANCEL。其中SHARE代表分享操作，CANCEL代表取消分享操作。
                     * @param _permission 操作，包括 SHARE，CANCEL。其中SHARE代表分享操作，CANCEL代表取消分享操作。
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * 快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * 接收分享快照的账号Id列表，array型参数的格式可以参考[API简介](https://cloud.tencent.com/document/api/213/568)。账号ID不同于QQ号，查询用户账号ID请查看[账号信息](https://console.cloud.tencent.com/developer)中的账号ID栏。
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                    /**
                     * 操作，包括 SHARE，CANCEL。其中SHARE代表分享操作，CANCEL代表取消分享操作。
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTSSHAREPERMISSIONREQUEST_H_
