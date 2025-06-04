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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWROW_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Hbase的TableMetric Overview返回
                */
                class OverviewRow : public AbstractModel
                {
                public:
                    OverviewRow();
                    ~OverviewRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名字
                     * @return Table 表名字
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表名字
                     * @param _table 表名字
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取读请求次数
                     * @return ReadRequestCount 读请求次数
                     * 
                     */
                    double GetReadRequestCount() const;

                    /**
                     * 设置读请求次数
                     * @param _readRequestCount 读请求次数
                     * 
                     */
                    void SetReadRequestCount(const double& _readRequestCount);

                    /**
                     * 判断参数 ReadRequestCount 是否已赋值
                     * @return ReadRequestCount 是否已赋值
                     * 
                     */
                    bool ReadRequestCountHasBeenSet() const;

                    /**
                     * 获取写请求次数
                     * @return WriteRequestCount 写请求次数
                     * 
                     */
                    double GetWriteRequestCount() const;

                    /**
                     * 设置写请求次数
                     * @param _writeRequestCount 写请求次数
                     * 
                     */
                    void SetWriteRequestCount(const double& _writeRequestCount);

                    /**
                     * 判断参数 WriteRequestCount 是否已赋值
                     * @return WriteRequestCount 是否已赋值
                     * 
                     */
                    bool WriteRequestCountHasBeenSet() const;

                    /**
                     * 获取当前memstore的size
                     * @return MemstoreSize 当前memstore的size
                     * 
                     */
                    double GetMemstoreSize() const;

                    /**
                     * 设置当前memstore的size
                     * @param _memstoreSize 当前memstore的size
                     * 
                     */
                    void SetMemstoreSize(const double& _memstoreSize);

                    /**
                     * 判断参数 MemstoreSize 是否已赋值
                     * @return MemstoreSize 是否已赋值
                     * 
                     */
                    bool MemstoreSizeHasBeenSet() const;

                    /**
                     * 获取当前region中StroreFile的size
                     * @return StoreFileSize 当前region中StroreFile的size
                     * 
                     */
                    double GetStoreFileSize() const;

                    /**
                     * 设置当前region中StroreFile的size
                     * @param _storeFileSize 当前region中StroreFile的size
                     * 
                     */
                    void SetStoreFileSize(const double& _storeFileSize);

                    /**
                     * 判断参数 StoreFileSize 是否已赋值
                     * @return StoreFileSize 是否已赋值
                     * 
                     */
                    bool StoreFileSizeHasBeenSet() const;

                    /**
                     * 获取regions，点击可跳转
                     * @return Operation regions，点击可跳转
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置regions，点击可跳转
                     * @param _operation regions，点击可跳转
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取StoreFile数量
                     * @return StoreFileNum StoreFile数量
                     * 
                     */
                    double GetStoreFileNum() const;

                    /**
                     * 设置StoreFile数量
                     * @param _storeFileNum StoreFile数量
                     * 
                     */
                    void SetStoreFileNum(const double& _storeFileNum);

                    /**
                     * 判断参数 StoreFileNum 是否已赋值
                     * @return StoreFileNum 是否已赋值
                     * 
                     */
                    bool StoreFileNumHasBeenSet() const;

                private:

                    /**
                     * 表名字
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 读请求次数
                     */
                    double m_readRequestCount;
                    bool m_readRequestCountHasBeenSet;

                    /**
                     * 写请求次数
                     */
                    double m_writeRequestCount;
                    bool m_writeRequestCountHasBeenSet;

                    /**
                     * 当前memstore的size
                     */
                    double m_memstoreSize;
                    bool m_memstoreSizeHasBeenSet;

                    /**
                     * 当前region中StroreFile的size
                     */
                    double m_storeFileSize;
                    bool m_storeFileSizeHasBeenSet;

                    /**
                     * regions，点击可跳转
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * StoreFile数量
                     */
                    double m_storeFileNum;
                    bool m_storeFileNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OVERVIEWROW_H_
