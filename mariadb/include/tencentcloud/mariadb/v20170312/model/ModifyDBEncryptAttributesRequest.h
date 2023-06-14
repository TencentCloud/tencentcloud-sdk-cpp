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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
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
                     * 获取实例Id，形如：tdsql-ow728lmc。
                     * @return InstanceId 实例Id，形如：tdsql-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id，形如：tdsql-ow728lmc。
                     * @param _instanceId 实例Id，形如：tdsql-ow728lmc。
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
                     * 获取是否启用数据加密，开启后暂不支持关闭。本接口的可选值为：1-开启数据加密。
                     * @return EncryptEnabled 是否启用数据加密，开启后暂不支持关闭。本接口的可选值为：1-开启数据加密。
                     * 
                     */
                    int64_t GetEncryptEnabled() const;

                    /**
                     * 设置是否启用数据加密，开启后暂不支持关闭。本接口的可选值为：1-开启数据加密。
                     * @param _encryptEnabled 是否启用数据加密，开启后暂不支持关闭。本接口的可选值为：1-开启数据加密。
                     * 
                     */
                    void SetEncryptEnabled(const int64_t& _encryptEnabled);

                    /**
                     * 判断参数 EncryptEnabled 是否已赋值
                     * @return EncryptEnabled 是否已赋值
                     * 
                     */
                    bool EncryptEnabledHasBeenSet() const;

                private:

                    /**
                     * 实例Id，形如：tdsql-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否启用数据加密，开启后暂不支持关闭。本接口的可选值为：1-开启数据加密。
                     */
                    int64_t m_encryptEnabled;
                    bool m_encryptEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
