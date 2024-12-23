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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MONGOASSETDBDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MONGOASSETDBDETAIL_H_

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
                * mongo敏感资产详情列表
                */
                class MongoAssetDBDetail : public AbstractModel
                {
                public:
                    MongoAssetDBDetail();
                    ~MongoAssetDBDetail() = default;
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
                     * 获取集合的数量
                     * @return ColNums 集合的数量
                     * 
                     */
                    int64_t GetColNums() const;

                    /**
                     * 设置集合的数量
                     * @param _colNums 集合的数量
                     * 
                     */
                    void SetColNums(const int64_t& _colNums);

                    /**
                     * 判断参数 ColNums 是否已赋值
                     * @return ColNums 是否已赋值
                     * 
                     */
                    bool ColNumsHasBeenSet() const;

                    /**
                     * 获取敏感集合数量
                     * @return SensitiveColNums 敏感集合数量
                     * 
                     */
                    int64_t GetSensitiveColNums() const;

                    /**
                     * 设置敏感集合数量
                     * @param _sensitiveColNums 敏感集合数量
                     * 
                     */
                    void SetSensitiveColNums(const int64_t& _sensitiveColNums);

                    /**
                     * 判断参数 SensitiveColNums 是否已赋值
                     * @return SensitiveColNums 是否已赋值
                     * 
                     */
                    bool SensitiveColNumsHasBeenSet() const;

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
                     * 集合的数量
                     */
                    int64_t m_colNums;
                    bool m_colNumsHasBeenSet;

                    /**
                     * 敏感集合数量
                     */
                    int64_t m_sensitiveColNums;
                    bool m_sensitiveColNumsHasBeenSet;

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

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MONGOASSETDBDETAIL_H_
