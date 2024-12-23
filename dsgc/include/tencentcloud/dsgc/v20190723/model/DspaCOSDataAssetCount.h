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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDATAASSETCOUNT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDATAASSETCOUNT_H_

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
                * COS对象存储敏感数据资产统计
                */
                class DspaCOSDataAssetCount : public AbstractModel
                {
                public:
                    DspaCOSDataAssetCount();
                    ~DspaCOSDataAssetCount() = default;
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
                     * 获取已扫描的存储桶的个数
                     * @return TotalBucketCnt 已扫描的存储桶的个数
                     * 
                     */
                    int64_t GetTotalBucketCnt() const;

                    /**
                     * 设置已扫描的存储桶的个数
                     * @param _totalBucketCnt 已扫描的存储桶的个数
                     * 
                     */
                    void SetTotalBucketCnt(const int64_t& _totalBucketCnt);

                    /**
                     * 判断参数 TotalBucketCnt 是否已赋值
                     * @return TotalBucketCnt 是否已赋值
                     * 
                     */
                    bool TotalBucketCntHasBeenSet() const;

                    /**
                     * 获取对象总数
                     * @return TotalObjectCnt 对象总数
                     * 
                     */
                    int64_t GetTotalObjectCnt() const;

                    /**
                     * 设置对象总数
                     * @param _totalObjectCnt 对象总数
                     * 
                     */
                    void SetTotalObjectCnt(const int64_t& _totalObjectCnt);

                    /**
                     * 判断参数 TotalObjectCnt 是否已赋值
                     * @return TotalObjectCnt 是否已赋值
                     * 
                     */
                    bool TotalObjectCntHasBeenSet() const;

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
                     * 获取敏感数据条数
                     * @return SensitiveDataCnt 敏感数据条数
                     * 
                     */
                    int64_t GetSensitiveDataCnt() const;

                    /**
                     * 设置敏感数据条数
                     * @param _sensitiveDataCnt 敏感数据条数
                     * 
                     */
                    void SetSensitiveDataCnt(const int64_t& _sensitiveDataCnt);

                    /**
                     * 判断参数 SensitiveDataCnt 是否已赋值
                     * @return SensitiveDataCnt 是否已赋值
                     * 
                     */
                    bool SensitiveDataCntHasBeenSet() const;

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
                     * 获取敏感存储桶个数
                     * @return SensitiveBucketCnt 敏感存储桶个数
                     * 
                     */
                    int64_t GetSensitiveBucketCnt() const;

                    /**
                     * 设置敏感存储桶个数
                     * @param _sensitiveBucketCnt 敏感存储桶个数
                     * 
                     */
                    void SetSensitiveBucketCnt(const int64_t& _sensitiveBucketCnt);

                    /**
                     * 判断参数 SensitiveBucketCnt 是否已赋值
                     * @return SensitiveBucketCnt 是否已赋值
                     * 
                     */
                    bool SensitiveBucketCntHasBeenSet() const;

                    /**
                     * 获取敏感对象个数
                     * @return SensitiveObjectCnt 敏感对象个数
                     * 
                     */
                    int64_t GetSensitiveObjectCnt() const;

                    /**
                     * 设置敏感对象个数
                     * @param _sensitiveObjectCnt 敏感对象个数
                     * 
                     */
                    void SetSensitiveObjectCnt(const int64_t& _sensitiveObjectCnt);

                    /**
                     * 判断参数 SensitiveObjectCnt 是否已赋值
                     * @return SensitiveObjectCnt 是否已赋值
                     * 
                     */
                    bool SensitiveObjectCntHasBeenSet() const;

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
                     * 已扫描的存储桶的个数
                     */
                    int64_t m_totalBucketCnt;
                    bool m_totalBucketCntHasBeenSet;

                    /**
                     * 对象总数
                     */
                    int64_t m_totalObjectCnt;
                    bool m_totalObjectCntHasBeenSet;

                    /**
                     * 敏感数据类型个数
                     */
                    int64_t m_sensitiveCategoryCnt;
                    bool m_sensitiveCategoryCntHasBeenSet;

                    /**
                     * 敏感数据条数
                     */
                    int64_t m_sensitiveDataCnt;
                    bool m_sensitiveDataCntHasBeenSet;

                    /**
                     * 敏感等级分布
                     */
                    std::vector<SensitiveLevel> m_sensitiveLevel;
                    bool m_sensitiveLevelHasBeenSet;

                    /**
                     * 敏感存储桶个数
                     */
                    int64_t m_sensitiveBucketCnt;
                    bool m_sensitiveBucketCntHasBeenSet;

                    /**
                     * 敏感对象个数
                     */
                    int64_t m_sensitiveObjectCnt;
                    bool m_sensitiveObjectCntHasBeenSet;

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

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDATAASSETCOUNT_H_
