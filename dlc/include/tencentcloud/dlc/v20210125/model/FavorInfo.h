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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_FAVORINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_FAVORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * FavorInfo
                */
                class FavorInfo : public AbstractModel
                {
                public:
                    FavorInfo();
                    ~FavorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取优先事项
                     * @return Priority 优先事项
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先事项
                     * @param _priority 优先事项
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Catalog名称
                     * @return Catalog Catalog名称
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Catalog名称
                     * @param _catalog Catalog名称
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取DataBase名称
                     * @return DataBase DataBase名称
                     * 
                     */
                    std::string GetDataBase() const;

                    /**
                     * 设置DataBase名称
                     * @param _dataBase DataBase名称
                     * 
                     */
                    void SetDataBase(const std::string& _dataBase);

                    /**
                     * 判断参数 DataBase 是否已赋值
                     * @return DataBase 是否已赋值
                     * 
                     */
                    bool DataBaseHasBeenSet() const;

                    /**
                     * 获取Table名称
                     * @return Table Table名称
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table名称
                     * @param _table Table名称
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * 优先事项
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Catalog名称
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * DataBase名称
                     */
                    std::string m_dataBase;
                    bool m_dataBaseHasBeenSet;

                    /**
                     * Table名称
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_FAVORINFO_H_
