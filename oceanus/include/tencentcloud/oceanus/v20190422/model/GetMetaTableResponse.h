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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_GETMETATABLERESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_GETMETATABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * GetMetaTable返回参数结构体
                */
                class GetMetaTableResponse : public AbstractModel
                {
                public:
                    GetMetaTableResponse();
                    ~GetMetaTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取元数据表唯一标识
                     * @return SerialId 元数据表唯一标识
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取目录名
                     * @return Catalog 目录名
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取库名
                     * @return Database 库名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取表名
                     * @return Table 表名
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取建表语句,使用 Base64 编码。
例如
Q1JFQVRFIFRBQkxFIGRhdGFnZW5fc291cmNlX3RhYmxlICggCiAgICBpZCBJTlQsIAogICAgbmFtZSBTVFJJTkcgCikgV0lUSCAoCidjb25uZWN0b3InPSdkYXRhZ2VuJywKJ3Jvd3MtcGVyLXNlY29uZCcgPSAnMScKKTs=
                     * @return DDL 建表语句,使用 Base64 编码。
例如
Q1JFQVRFIFRBQkxFIGRhdGFnZW5fc291cmNlX3RhYmxlICggCiAgICBpZCBJTlQsIAogICAgbmFtZSBTVFJJTkcgCikgV0lUSCAoCidjb25uZWN0b3InPSdkYXRhZ2VuJywKJ3Jvd3MtcGVyLXNlY29uZCcgPSAnMScKKTs=
                     * 
                     */
                    std::string GetDDL() const;

                    /**
                     * 判断参数 DDL 是否已赋值
                     * @return DDL 是否已赋值
                     * 
                     */
                    bool DDLHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 元数据表唯一标识
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * 目录名
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 建表语句,使用 Base64 编码。
例如
Q1JFQVRFIFRBQkxFIGRhdGFnZW5fc291cmNlX3RhYmxlICggCiAgICBpZCBJTlQsIAogICAgbmFtZSBTVFJJTkcgCikgV0lUSCAoCidjb25uZWN0b3InPSdkYXRhZ2VuJywKJ3Jvd3MtcGVyLXNlY29uZCcgPSAnMScKKTs=
                     */
                    std::string m_dDL;
                    bool m_dDLHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_GETMETATABLERESPONSE_H_
