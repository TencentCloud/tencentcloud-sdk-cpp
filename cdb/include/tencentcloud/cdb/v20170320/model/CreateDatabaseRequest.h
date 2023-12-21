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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDATABASEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDATABASEREQUEST_H_

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
                * CreateDatabase请求参数结构体
                */
                class CreateDatabaseRequest : public AbstractModel
                {
                public:
                    CreateDatabaseRequest();
                    ~CreateDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取数据库名称，长度不超过64。
                     * @return DBName 数据库名称，长度不超过64。
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置数据库名称，长度不超过64。
                     * @param _dBName 数据库名称，长度不超过64。
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取字符集，可选值：utf8，gbk，latin1，utf8mb4。
                     * @return CharacterSetName 字符集，可选值：utf8，gbk，latin1，utf8mb4。
                     * 
                     */
                    std::string GetCharacterSetName() const;

                    /**
                     * 设置字符集，可选值：utf8，gbk，latin1，utf8mb4。
                     * @param _characterSetName 字符集，可选值：utf8，gbk，latin1，utf8mb4。
                     * 
                     */
                    void SetCharacterSetName(const std::string& _characterSetName);

                    /**
                     * 判断参数 CharacterSetName 是否已赋值
                     * @return CharacterSetName 是否已赋值
                     * 
                     */
                    bool CharacterSetNameHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称，长度不超过64。
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 字符集，可选值：utf8，gbk，latin1，utf8mb4。
                     */
                    std::string m_characterSetName;
                    bool m_characterSetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDATABASEREQUEST_H_
