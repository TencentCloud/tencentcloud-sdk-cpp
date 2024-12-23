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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ESDATAASSETCOUNTDTO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ESDATAASSETCOUNTDTO_H_

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
                * ES的概览页统计数据
                */
                class ESDataAssetCountDto : public AbstractModel
                {
                public:
                    ESDataAssetCountDto();
                    ~ESDataAssetCountDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取es
                     * @return DataAssetType es
                     * 
                     */
                    int64_t GetDataAssetType() const;

                    /**
                     * 设置es
                     * @param _dataAssetType es
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
                     * 获取敏感索引个数
                     * @return SensitiveIndexCnt 敏感索引个数
                     * 
                     */
                    int64_t GetSensitiveIndexCnt() const;

                    /**
                     * 设置敏感索引个数
                     * @param _sensitiveIndexCnt 敏感索引个数
                     * 
                     */
                    void SetSensitiveIndexCnt(const int64_t& _sensitiveIndexCnt);

                    /**
                     * 判断参数 SensitiveIndexCnt 是否已赋值
                     * @return SensitiveIndexCnt 是否已赋值
                     * 
                     */
                    bool SensitiveIndexCntHasBeenSet() const;

                    /**
                     * 获取总的索引个数
                     * @return TotalIndexCnt 总的索引个数
                     * 
                     */
                    int64_t GetTotalIndexCnt() const;

                    /**
                     * 设置总的索引个数
                     * @param _totalIndexCnt 总的索引个数
                     * 
                     */
                    void SetTotalIndexCnt(const int64_t& _totalIndexCnt);

                    /**
                     * 判断参数 TotalIndexCnt 是否已赋值
                     * @return TotalIndexCnt 是否已赋值
                     * 
                     */
                    bool TotalIndexCntHasBeenSet() const;

                    /**
                     * 获取敏感字段个数
                     * @return SensitiveFieldCnt 敏感字段个数
                     * 
                     */
                    int64_t GetSensitiveFieldCnt() const;

                    /**
                     * 设置敏感字段个数
                     * @param _sensitiveFieldCnt 敏感字段个数
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
                     * 获取总的字段个数
                     * @return TotalFieldCnt 总的字段个数
                     * 
                     */
                    int64_t GetTotalFieldCnt() const;

                    /**
                     * 设置总的字段个数
                     * @param _totalFieldCnt 总的字段个数
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
                     * 获取敏感分类的个数
                     * @return SensitiveCategoryCnt 敏感分类的个数
                     * 
                     */
                    int64_t GetSensitiveCategoryCnt() const;

                    /**
                     * 设置敏感分类的个数
                     * @param _sensitiveCategoryCnt 敏感分类的个数
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
                     * 获取敏感分级的分布
                     * @return SensitiveLevel 敏感分级的分布
                     * 
                     */
                    std::vector<SensitiveLevel> GetSensitiveLevel() const;

                    /**
                     * 设置敏感分级的分布
                     * @param _sensitiveLevel 敏感分级的分布
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
                     * 获取敏感分类的分布
                     * @return CategoryDistributed 敏感分类的分布
                     * 
                     */
                    std::vector<DspaDataCategoryDistributed> GetCategoryDistributed() const;

                    /**
                     * 设置敏感分类的分布
                     * @param _categoryDistributed 敏感分类的分布
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
                     * es
                     */
                    int64_t m_dataAssetType;
                    bool m_dataAssetTypeHasBeenSet;

                    /**
                     * 敏感索引个数
                     */
                    int64_t m_sensitiveIndexCnt;
                    bool m_sensitiveIndexCntHasBeenSet;

                    /**
                     * 总的索引个数
                     */
                    int64_t m_totalIndexCnt;
                    bool m_totalIndexCntHasBeenSet;

                    /**
                     * 敏感字段个数
                     */
                    int64_t m_sensitiveFieldCnt;
                    bool m_sensitiveFieldCntHasBeenSet;

                    /**
                     * 总的字段个数
                     */
                    int64_t m_totalFieldCnt;
                    bool m_totalFieldCntHasBeenSet;

                    /**
                     * 敏感分类的个数
                     */
                    int64_t m_sensitiveCategoryCnt;
                    bool m_sensitiveCategoryCntHasBeenSet;

                    /**
                     * 敏感分级的分布
                     */
                    std::vector<SensitiveLevel> m_sensitiveLevel;
                    bool m_sensitiveLevelHasBeenSet;

                    /**
                     * 敏感分类的分布
                     */
                    std::vector<DspaDataCategoryDistributed> m_categoryDistributed;
                    bool m_categoryDistributedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ESDATAASSETCOUNTDTO_H_
