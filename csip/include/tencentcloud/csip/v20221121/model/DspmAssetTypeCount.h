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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTYPECOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTYPECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm 资产按类型统计数
                */
                class DspmAssetTypeCount : public AbstractModel
                {
                public:
                    DspmAssetTypeCount();
                    ~DspmAssetTypeCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

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

                private:

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTYPECOUNT_H_
