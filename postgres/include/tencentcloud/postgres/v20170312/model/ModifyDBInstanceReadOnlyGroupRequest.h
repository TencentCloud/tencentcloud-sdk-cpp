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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEREADONLYGROUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEREADONLYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceReadOnlyGroup请求参数结构体
                */
                class ModifyDBInstanceReadOnlyGroupRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceReadOnlyGroupRequest();
                    ~ModifyDBInstanceReadOnlyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return DBInstanceId 实例ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _dBInstanceId 实例ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取当前实例所在只读组ID
                     * @return ReadOnlyGroupId 当前实例所在只读组ID
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置当前实例所在只读组ID
                     * @param _readOnlyGroupId 当前实例所在只读组ID
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取实例修改的目标只读组ID
                     * @return NewReadOnlyGroupId 实例修改的目标只读组ID
                     * 
                     */
                    std::string GetNewReadOnlyGroupId() const;

                    /**
                     * 设置实例修改的目标只读组ID
                     * @param _newReadOnlyGroupId 实例修改的目标只读组ID
                     * 
                     */
                    void SetNewReadOnlyGroupId(const std::string& _newReadOnlyGroupId);

                    /**
                     * 判断参数 NewReadOnlyGroupId 是否已赋值
                     * @return NewReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool NewReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 当前实例所在只读组ID
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 实例修改的目标只读组ID
                     */
                    std::string m_newReadOnlyGroupId;
                    bool m_newReadOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEREADONLYGROUPREQUEST_H_
