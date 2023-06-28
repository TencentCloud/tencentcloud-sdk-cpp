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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBTDEEncrypt.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBEncryptAttributes请求参数结构体
                */
                class ModifyDBEncryptAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDBEncryptAttributesRequest();
                    ~ModifyDBEncryptAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取开启、关闭数据库TDE加密
                     * @return DBTDEEncrypt 开启、关闭数据库TDE加密
                     * 
                     */
                    std::vector<DBTDEEncrypt> GetDBTDEEncrypt() const;

                    /**
                     * 设置开启、关闭数据库TDE加密
                     * @param _dBTDEEncrypt 开启、关闭数据库TDE加密
                     * 
                     */
                    void SetDBTDEEncrypt(const std::vector<DBTDEEncrypt>& _dBTDEEncrypt);

                    /**
                     * 判断参数 DBTDEEncrypt 是否已赋值
                     * @return DBTDEEncrypt 是否已赋值
                     * 
                     */
                    bool DBTDEEncryptHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开启、关闭数据库TDE加密
                     */
                    std::vector<DBTDEEncrypt> m_dBTDEEncrypt;
                    bool m_dBTDEEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
