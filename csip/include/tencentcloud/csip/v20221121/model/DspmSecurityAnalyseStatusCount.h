/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSECURITYANALYSESTATUSCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSECURITYANALYSESTATUSCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetTypeCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm 资产安全分析状态统计数
                */
                class DspmSecurityAnalyseStatusCount : public AbstractModel
                {
                public:
                    DspmSecurityAnalyseStatusCount();
                    ~DspmSecurityAnalyseStatusCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产安全分析开启数
                     * @return OpenCount 资产安全分析开启数
                     * 
                     */
                    int64_t GetOpenCount() const;

                    /**
                     * 设置资产安全分析开启数
                     * @param _openCount 资产安全分析开启数
                     * 
                     */
                    void SetOpenCount(const int64_t& _openCount);

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取资产安全分析开启中数
                     * @return OpeningCount 资产安全分析开启中数
                     * 
                     */
                    int64_t GetOpeningCount() const;

                    /**
                     * 设置资产安全分析开启中数
                     * @param _openingCount 资产安全分析开启中数
                     * 
                     */
                    void SetOpeningCount(const int64_t& _openingCount);

                    /**
                     * 判断参数 OpeningCount 是否已赋值
                     * @return OpeningCount 是否已赋值
                     * 
                     */
                    bool OpeningCountHasBeenSet() const;

                    /**
                     * 获取资产安全分析关闭中数
                     * @return ClosingCount 资产安全分析关闭中数
                     * 
                     */
                    int64_t GetClosingCount() const;

                    /**
                     * 设置资产安全分析关闭中数
                     * @param _closingCount 资产安全分析关闭中数
                     * 
                     */
                    void SetClosingCount(const int64_t& _closingCount);

                    /**
                     * 判断参数 ClosingCount 是否已赋值
                     * @return ClosingCount 是否已赋值
                     * 
                     */
                    bool ClosingCountHasBeenSet() const;

                    /**
                     * 获取资产安全分析未开启数
                     * @return CloseCount 资产安全分析未开启数
                     * 
                     */
                    int64_t GetCloseCount() const;

                    /**
                     * 设置资产安全分析未开启数
                     * @param _closeCount 资产安全分析未开启数
                     * 
                     */
                    void SetCloseCount(const int64_t& _closeCount);

                    /**
                     * 判断参数 CloseCount 是否已赋值
                     * @return CloseCount 是否已赋值
                     * 
                     */
                    bool CloseCountHasBeenSet() const;

                    /**
                     * 获取按照资产类型分组的资产安全分析状态统计数
                     * @return AssetTypeCountSet 按照资产类型分组的资产安全分析状态统计数
                     * 
                     */
                    std::vector<DspmAssetTypeCount> GetAssetTypeCountSet() const;

                    /**
                     * 设置按照资产类型分组的资产安全分析状态统计数
                     * @param _assetTypeCountSet 按照资产类型分组的资产安全分析状态统计数
                     * 
                     */
                    void SetAssetTypeCountSet(const std::vector<DspmAssetTypeCount>& _assetTypeCountSet);

                    /**
                     * 判断参数 AssetTypeCountSet 是否已赋值
                     * @return AssetTypeCountSet 是否已赋值
                     * 
                     */
                    bool AssetTypeCountSetHasBeenSet() const;

                private:

                    /**
                     * 资产安全分析开启数
                     */
                    int64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * 资产安全分析开启中数
                     */
                    int64_t m_openingCount;
                    bool m_openingCountHasBeenSet;

                    /**
                     * 资产安全分析关闭中数
                     */
                    int64_t m_closingCount;
                    bool m_closingCountHasBeenSet;

                    /**
                     * 资产安全分析未开启数
                     */
                    int64_t m_closeCount;
                    bool m_closeCountHasBeenSet;

                    /**
                     * 按照资产类型分组的资产安全分析状态统计数
                     */
                    std::vector<DspmAssetTypeCount> m_assetTypeCountSet;
                    bool m_assetTypeCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSECURITYANALYSESTATUSCOUNT_H_
