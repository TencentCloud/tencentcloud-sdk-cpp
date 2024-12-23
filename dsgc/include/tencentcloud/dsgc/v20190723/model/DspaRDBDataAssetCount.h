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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPARDBDATAASSETCOUNT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPARDBDATAASSETCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/SensitiveLevel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDataCategoryDistributed.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * RDB关系型数据库敏感数据资产统计
                */
                class DspaRDBDataAssetCount : public AbstractModel
                {
                public:
                    DspaRDBDataAssetCount();
                    ~DspaRDBDataAssetCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数组资产类型，0代表关系型数据库资产，1代表对象存储COS资产
                     * @return DataAssetType 数组资产类型，0代表关系型数据库资产，1代表对象存储COS资产
                     * 
                     */
                    int64_t GetDataAssetType() const;

                    /**
                     * 设置数组资产类型，0代表关系型数据库资产，1代表对象存储COS资产
                     * @param _dataAssetType 数组资产类型，0代表关系型数据库资产，1代表对象存储COS资产
                     * 
                     */
                    void SetDataAssetType(const int64_t& _dataAssetType);

                    /**
                     * 判断参数 DataAssetType 是否已赋值
                     * @return DataAssetType 是否已赋值
                     * 
                     */
                    bool DataAssetTypeHasBeenSet() const;

                    /**
                     * 获取已扫描的数据库的个数
                     * @return TotalDbCnt 已扫描的数据库的个数
                     * 
                     */
                    int64_t GetTotalDbCnt() const;

                    /**
                     * 设置已扫描的数据库的个数
                     * @param _totalDbCnt 已扫描的数据库的个数
                     * 
                     */
                    void SetTotalDbCnt(const int64_t& _totalDbCnt);

                    /**
                     * 判断参数 TotalDbCnt 是否已赋值
                     * @return TotalDbCnt 是否已赋值
                     * 
                     */
                    bool TotalDbCntHasBeenSet() const;

                    /**
                     * 获取数据库表的个数
                     * @return TotalTableCnt 数据库表的个数
                     * 
                     */
                    int64_t GetTotalTableCnt() const;

                    /**
                     * 设置数据库表的个数
                     * @param _totalTableCnt 数据库表的个数
                     * 
                     */
                    void SetTotalTableCnt(const int64_t& _totalTableCnt);

                    /**
                     * 判断参数 TotalTableCnt 是否已赋值
                     * @return TotalTableCnt 是否已赋值
                     * 
                     */
                    bool TotalTableCntHasBeenSet() const;

                    /**
                     * 获取敏感数据类型个数
                     * @return SensitiveCategoryCnt 敏感数据类型个数
                     * 
                     */
                    int64_t GetSensitiveCategoryCnt() const;

                    /**
                     * 设置敏感数据类型个数
                     * @param _sensitiveCategoryCnt 敏感数据类型个数
                     * 
                     */
                    void SetSensitiveCategoryCnt(const int64_t& _sensitiveCategoryCnt);

                    /**
                     * 判断参数 SensitiveCategoryCnt 是否已赋值
                     * @return SensitiveCategoryCnt 是否已赋值
                     * 
                     */
                    bool SensitiveCategoryCntHasBeenSet() const;

                    /**
                     * 获取敏感字段的个数
                     * @return SensitiveFieldCnt 敏感字段的个数
                     * 
                     */
                    int64_t GetSensitiveFieldCnt() const;

                    /**
                     * 设置敏感字段的个数
                     * @param _sensitiveFieldCnt 敏感字段的个数
                     * 
                     */
                    void SetSensitiveFieldCnt(const int64_t& _sensitiveFieldCnt);

                    /**
                     * 判断参数 SensitiveFieldCnt 是否已赋值
                     * @return SensitiveFieldCnt 是否已赋值
                     * 
                     */
                    bool SensitiveFieldCntHasBeenSet() const;

                    /**
                     * 获取敏感等级分布
                     * @return SensitiveLevel 敏感等级分布
                     * 
                     */
                    std::vector<SensitiveLevel> GetSensitiveLevel() const;

                    /**
                     * 设置敏感等级分布
                     * @param _sensitiveLevel 敏感等级分布
                     * 
                     */
                    void SetSensitiveLevel(const std::vector<SensitiveLevel>& _sensitiveLevel);

                    /**
                     * 判断参数 SensitiveLevel 是否已赋值
                     * @return SensitiveLevel 是否已赋值
                     * 
                     */
                    bool SensitiveLevelHasBeenSet() const;

                    /**
                     * 获取敏感数据库的个数
                     * @return SensitiveDbCnt 敏感数据库的个数
                     * 
                     */
                    int64_t GetSensitiveDbCnt() const;

                    /**
                     * 设置敏感数据库的个数
                     * @param _sensitiveDbCnt 敏感数据库的个数
                     * 
                     */
                    void SetSensitiveDbCnt(const int64_t& _sensitiveDbCnt);

                    /**
                     * 判断参数 SensitiveDbCnt 是否已赋值
                     * @return SensitiveDbCnt 是否已赋值
                     * 
                     */
                    bool SensitiveDbCntHasBeenSet() const;

                    /**
                     * 获取敏感数据库表的个数
                     * @return SensitiveTableCnt 敏感数据库表的个数
                     * 
                     */
                    int64_t GetSensitiveTableCnt() const;

                    /**
                     * 设置敏感数据库表的个数
                     * @param _sensitiveTableCnt 敏感数据库表的个数
                     * 
                     */
                    void SetSensitiveTableCnt(const int64_t& _sensitiveTableCnt);

                    /**
                     * 判断参数 SensitiveTableCnt 是否已赋值
                     * @return SensitiveTableCnt 是否已赋值
                     * 
                     */
                    bool SensitiveTableCntHasBeenSet() const;

                    /**
                     * 获取扫描字段的个数
                     * @return TotalFieldCnt 扫描字段的个数
                     * 
                     */
                    int64_t GetTotalFieldCnt() const;

                    /**
                     * 设置扫描字段的个数
                     * @param _totalFieldCnt 扫描字段的个数
                     * 
                     */
                    void SetTotalFieldCnt(const int64_t& _totalFieldCnt);

                    /**
                     * 判断参数 TotalFieldCnt 是否已赋值
                     * @return TotalFieldCnt 是否已赋值
                     * 
                     */
                    bool TotalFieldCntHasBeenSet() const;

                    /**
                     * 获取数据分类分布
                     * @return CategoryDistributed 数据分类分布
                     * 
                     */
                    std::vector<DspaDataCategoryDistributed> GetCategoryDistributed() const;

                    /**
                     * 设置数据分类分布
                     * @param _categoryDistributed 数据分类分布
                     * 
                     */
                    void SetCategoryDistributed(const std::vector<DspaDataCategoryDistributed>& _categoryDistributed);

                    /**
                     * 判断参数 CategoryDistributed 是否已赋值
                     * @return CategoryDistributed 是否已赋值
                     * 
                     */
                    bool CategoryDistributedHasBeenSet() const;

                private:

                    /**
                     * 数组资产类型，0代表关系型数据库资产，1代表对象存储COS资产
                     */
                    int64_t m_dataAssetType;
                    bool m_dataAssetTypeHasBeenSet;

                    /**
                     * 已扫描的数据库的个数
                     */
                    int64_t m_totalDbCnt;
                    bool m_totalDbCntHasBeenSet;

                    /**
                     * 数据库表的个数
                     */
                    int64_t m_totalTableCnt;
                    bool m_totalTableCntHasBeenSet;

                    /**
                     * 敏感数据类型个数
                     */
                    int64_t m_sensitiveCategoryCnt;
                    bool m_sensitiveCategoryCntHasBeenSet;

                    /**
                     * 敏感字段的个数
                     */
                    int64_t m_sensitiveFieldCnt;
                    bool m_sensitiveFieldCntHasBeenSet;

                    /**
                     * 敏感等级分布
                     */
                    std::vector<SensitiveLevel> m_sensitiveLevel;
                    bool m_sensitiveLevelHasBeenSet;

                    /**
                     * 敏感数据库的个数
                     */
                    int64_t m_sensitiveDbCnt;
                    bool m_sensitiveDbCntHasBeenSet;

                    /**
                     * 敏感数据库表的个数
                     */
                    int64_t m_sensitiveTableCnt;
                    bool m_sensitiveTableCntHasBeenSet;

                    /**
                     * 扫描字段的个数
                     */
                    int64_t m_totalFieldCnt;
                    bool m_totalFieldCntHasBeenSet;

                    /**
                     * 数据分类分布
                     */
                    std::vector<DspaDataCategoryDistributed> m_categoryDistributed;
                    bool m_categoryDistributedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPARDBDATAASSETCOUNT_H_
