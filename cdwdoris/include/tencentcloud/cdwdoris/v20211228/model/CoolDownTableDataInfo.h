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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNTABLEDATAINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNTABLEDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 冷热分层Table数据信息
                */
                class CoolDownTableDataInfo : public AbstractModel
                {
                public:
                    CoolDownTableDataInfo();
                    ~CoolDownTableDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列：DatabaseName
                     * @return DatabaseName 列：DatabaseName
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置列：DatabaseName
                     * @param _databaseName 列：DatabaseName
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取列：TableName
                     * @return TableName 列：TableName
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置列：TableName
                     * @param _tableName 列：TableName
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取列：Size
                     * @return Size 列：Size
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置列：Size
                     * @param _size 列：Size
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取列：RemoteSize
                     * @return RemoteSize 列：RemoteSize
                     * 
                     */
                    std::string GetRemoteSize() const;

                    /**
                     * 设置列：RemoteSize
                     * @param _remoteSize 列：RemoteSize
                     * 
                     */
                    void SetRemoteSize(const std::string& _remoteSize);

                    /**
                     * 判断参数 RemoteSize 是否已赋值
                     * @return RemoteSize 是否已赋值
                     * 
                     */
                    bool RemoteSizeHasBeenSet() const;

                private:

                    /**
                     * 列：DatabaseName
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 列：TableName
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 列：Size
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 列：RemoteSize
                     */
                    std::string m_remoteSize;
                    bool m_remoteSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNTABLEDATAINFO_H_
