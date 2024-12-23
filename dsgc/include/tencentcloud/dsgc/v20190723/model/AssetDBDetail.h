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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETDBDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETDBDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/Note.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * RDB敏感资产详情列表
                */
                class AssetDBDetail : public AbstractModel
                {
                public:
                    AssetDBDetail();
                    ~AssetDBDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DdName 数据库名称
                     * 
                     */
                    std::string GetDdName() const;

                    /**
                     * 设置数据库名称
                     * @param _ddName 数据库名称
                     * 
                     */
                    void SetDdName(const std::string& _ddName);

                    /**
                     * 判断参数 DdName 是否已赋值
                     * @return DdName 是否已赋值
                     * 
                     */
                    bool DdNameHasBeenSet() const;

                    /**
                     * 获取数据库类型
                     * @return DataType 数据库类型
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置数据库类型
                     * @param _dataType 数据库类型
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取表的数量
                     * @return TableNums 表的数量
                     * 
                     */
                    int64_t GetTableNums() const;

                    /**
                     * 设置表的数量
                     * @param _tableNums 表的数量
                     * 
                     */
                    void SetTableNums(const int64_t& _tableNums);

                    /**
                     * 判断参数 TableNums 是否已赋值
                     * @return TableNums 是否已赋值
                     * 
                     */
                    bool TableNumsHasBeenSet() const;

                    /**
                     * 获取敏感表数量
                     * @return SensitiveTableNums 敏感表数量
                     * 
                     */
                    int64_t GetSensitiveTableNums() const;

                    /**
                     * 设置敏感表数量
                     * @param _sensitiveTableNums 敏感表数量
                     * 
                     */
                    void SetSensitiveTableNums(const int64_t& _sensitiveTableNums);

                    /**
                     * 判断参数 SensitiveTableNums 是否已赋值
                     * @return SensitiveTableNums 是否已赋值
                     * 
                     */
                    bool SensitiveTableNumsHasBeenSet() const;

                    /**
                     * 获取字段的数量
                     * @return FieldNums 字段的数量
                     * 
                     */
                    int64_t GetFieldNums() const;

                    /**
                     * 设置字段的数量
                     * @param _fieldNums 字段的数量
                     * 
                     */
                    void SetFieldNums(const int64_t& _fieldNums);

                    /**
                     * 判断参数 FieldNums 是否已赋值
                     * @return FieldNums 是否已赋值
                     * 
                     */
                    bool FieldNumsHasBeenSet() const;

                    /**
                     * 获取敏感字段的数量
                     * @return SensitiveFieldNums 敏感字段的数量
                     * 
                     */
                    int64_t GetSensitiveFieldNums() const;

                    /**
                     * 设置敏感字段的数量
                     * @param _sensitiveFieldNums 敏感字段的数量
                     * 
                     */
                    void SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums);

                    /**
                     * 判断参数 SensitiveFieldNums 是否已赋值
                     * @return SensitiveFieldNums 是否已赋值
                     * 
                     */
                    bool SensitiveFieldNumsHasBeenSet() const;

                    /**
                     * 获取敏感数据分布
                     * @return DistributionData 敏感数据分布
                     * 
                     */
                    std::vector<Note> GetDistributionData() const;

                    /**
                     * 设置敏感数据分布
                     * @param _distributionData 敏感数据分布
                     * 
                     */
                    void SetDistributionData(const std::vector<Note>& _distributionData);

                    /**
                     * 判断参数 DistributionData 是否已赋值
                     * @return DistributionData 是否已赋值
                     * 
                     */
                    bool DistributionDataHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_ddName;
                    bool m_ddNameHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 表的数量
                     */
                    int64_t m_tableNums;
                    bool m_tableNumsHasBeenSet;

                    /**
                     * 敏感表数量
                     */
                    int64_t m_sensitiveTableNums;
                    bool m_sensitiveTableNumsHasBeenSet;

                    /**
                     * 字段的数量
                     */
                    int64_t m_fieldNums;
                    bool m_fieldNumsHasBeenSet;

                    /**
                     * 敏感字段的数量
                     */
                    int64_t m_sensitiveFieldNums;
                    bool m_sensitiveFieldNumsHasBeenSet;

                    /**
                     * 敏感数据分布
                     */
                    std::vector<Note> m_distributionData;
                    bool m_distributionDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSETDBDETAIL_H_
