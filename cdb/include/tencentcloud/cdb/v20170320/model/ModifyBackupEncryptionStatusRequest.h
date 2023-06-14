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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPENCRYPTIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPENCRYPTIONSTATUSREQUEST_H_

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
                * ModifyBackupEncryptionStatus请求参数结构体
                */
                class ModifyBackupEncryptionStatusRequest : public AbstractModel
                {
                public:
                    ModifyBackupEncryptionStatusRequest();
                    ~ModifyBackupEncryptionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取设置实例新增的自动物理备份文件默认加密状态。可选值为 on或者off。
                     * @return EncryptionStatus 设置实例新增的自动物理备份文件默认加密状态。可选值为 on或者off。
                     * 
                     */
                    std::string GetEncryptionStatus() const;

                    /**
                     * 设置设置实例新增的自动物理备份文件默认加密状态。可选值为 on或者off。
                     * @param _encryptionStatus 设置实例新增的自动物理备份文件默认加密状态。可选值为 on或者off。
                     * 
                     */
                    void SetEncryptionStatus(const std::string& _encryptionStatus);

                    /**
                     * 判断参数 EncryptionStatus 是否已赋值
                     * @return EncryptionStatus 是否已赋值
                     * 
                     */
                    bool EncryptionStatusHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设置实例新增的自动物理备份文件默认加密状态。可选值为 on或者off。
                     */
                    std::string m_encryptionStatus;
                    bool m_encryptionStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPENCRYPTIONSTATUSREQUEST_H_
