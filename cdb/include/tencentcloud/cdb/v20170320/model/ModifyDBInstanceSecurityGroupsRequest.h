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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSecurityGroups请求参数结构体
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/product/236/15854) 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * @return SecurityGroupIds 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/product/236/15854) 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/product/236/15854) 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * @param _securityGroupIds 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/product/236/15854) 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组， 需要将该入参置为 True。默认为 False。
                     * @return ForReadonlyInstance 当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组， 需要将该入参置为 True。默认为 False。
                     * 
                     */
                    bool GetForReadonlyInstance() const;

                    /**
                     * 设置当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组， 需要将该入参置为 True。默认为 False。
                     * @param _forReadonlyInstance 当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组， 需要将该入参置为 True。默认为 False。
                     * 
                     */
                    void SetForReadonlyInstance(const bool& _forReadonlyInstance);

                    /**
                     * 判断参数 ForReadonlyInstance 是否已赋值
                     * @return ForReadonlyInstance 是否已赋值
                     * 
                     */
                    bool ForReadonlyInstanceHasBeenSet() const;

                    /**
                     * 获取变更云盘版实例只读组时，InstanceId 传实例 ID，需要额外指定该参数表示操作只读组。 如果操作读写节点则不需指定该参数。
                     * @return OpResourceId 变更云盘版实例只读组时，InstanceId 传实例 ID，需要额外指定该参数表示操作只读组。 如果操作读写节点则不需指定该参数。
                     * 
                     */
                    std::string GetOpResourceId() const;

                    /**
                     * 设置变更云盘版实例只读组时，InstanceId 传实例 ID，需要额外指定该参数表示操作只读组。 如果操作读写节点则不需指定该参数。
                     * @param _opResourceId 变更云盘版实例只读组时，InstanceId 传实例 ID，需要额外指定该参数表示操作只读组。 如果操作读写节点则不需指定该参数。
                     * 
                     */
                    void SetOpResourceId(const std::string& _opResourceId);

                    /**
                     * 判断参数 OpResourceId 是否已赋值
                     * @return OpResourceId 是否已赋值
                     * 
                     */
                    bool OpResourceIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv 或者 cdbro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 [DescribeDBSecurityGroups](https://cloud.tencent.com/document/product/236/15854) 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 当传入只读实例 ID 时，默认操作的是对应只读组的安全组。如果需要操作只读实例 ID 的安全组， 需要将该入参置为 True。默认为 False。
                     */
                    bool m_forReadonlyInstance;
                    bool m_forReadonlyInstanceHasBeenSet;

                    /**
                     * 变更云盘版实例只读组时，InstanceId 传实例 ID，需要额外指定该参数表示操作只读组。 如果操作读写节点则不需指定该参数。
                     */
                    std::string m_opResourceId;
                    bool m_opResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
