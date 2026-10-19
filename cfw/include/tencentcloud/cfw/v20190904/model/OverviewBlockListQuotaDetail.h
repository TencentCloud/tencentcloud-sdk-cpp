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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWBLOCKLISTQUOTADETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWBLOCKLISTQUOTADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览封禁列表配额详情
                */
                class OverviewBlockListQuotaDetail : public AbstractModel
                {
                public:
                    OverviewBlockListQuotaDetail();
                    ~OverviewBlockListQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>封禁列表总配额数量。</p>
                     * @return TotalCnt <p>封禁列表总配额数量。</p>
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 设置<p>封禁列表总配额数量。</p>
                     * @param _totalCnt <p>封禁列表总配额数量。</p>
                     * 
                     */
                    void SetTotalCnt(const int64_t& _totalCnt);

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取<p>封禁列表已使用数量。</p>
                     * @return UsedCnt <p>封禁列表已使用数量。</p>
                     * 
                     */
                    int64_t GetUsedCnt() const;

                    /**
                     * 设置<p>封禁列表已使用数量。</p>
                     * @param _usedCnt <p>封禁列表已使用数量。</p>
                     * 
                     */
                    void SetUsedCnt(const int64_t& _usedCnt);

                    /**
                     * 判断参数 UsedCnt 是否已赋值
                     * @return UsedCnt 是否已赋值
                     * 
                     */
                    bool UsedCntHasBeenSet() const;

                    /**
                     * 获取<p>封禁列表剩余配额数量。</p>
                     * @return RemainCnt <p>封禁列表剩余配额数量。</p>
                     * 
                     */
                    int64_t GetRemainCnt() const;

                    /**
                     * 设置<p>封禁列表剩余配额数量。</p>
                     * @param _remainCnt <p>封禁列表剩余配额数量。</p>
                     * 
                     */
                    void SetRemainCnt(const int64_t& _remainCnt);

                    /**
                     * 判断参数 RemainCnt 是否已赋值
                     * @return RemainCnt 是否已赋值
                     * 
                     */
                    bool RemainCntHasBeenSet() const;

                    /**
                     * 获取<p>基础配额总数量。</p>
                     * @return BaseTotalCnt <p>基础配额总数量。</p>
                     * 
                     */
                    int64_t GetBaseTotalCnt() const;

                    /**
                     * 设置<p>基础配额总数量。</p>
                     * @param _baseTotalCnt <p>基础配额总数量。</p>
                     * 
                     */
                    void SetBaseTotalCnt(const int64_t& _baseTotalCnt);

                    /**
                     * 判断参数 BaseTotalCnt 是否已赋值
                     * @return BaseTotalCnt 是否已赋值
                     * 
                     */
                    bool BaseTotalCntHasBeenSet() const;

                    /**
                     * 获取<p>基础配额已使用数量。</p>
                     * @return BaseUsedCnt <p>基础配额已使用数量。</p>
                     * 
                     */
                    int64_t GetBaseUsedCnt() const;

                    /**
                     * 设置<p>基础配额已使用数量。</p>
                     * @param _baseUsedCnt <p>基础配额已使用数量。</p>
                     * 
                     */
                    void SetBaseUsedCnt(const int64_t& _baseUsedCnt);

                    /**
                     * 判断参数 BaseUsedCnt 是否已赋值
                     * @return BaseUsedCnt 是否已赋值
                     * 
                     */
                    bool BaseUsedCntHasBeenSet() const;

                    /**
                     * 获取<p>基础配额剩余数量。</p>
                     * @return BaseRemainCnt <p>基础配额剩余数量。</p>
                     * 
                     */
                    int64_t GetBaseRemainCnt() const;

                    /**
                     * 设置<p>基础配额剩余数量。</p>
                     * @param _baseRemainCnt <p>基础配额剩余数量。</p>
                     * 
                     */
                    void SetBaseRemainCnt(const int64_t& _baseRemainCnt);

                    /**
                     * 判断参数 BaseRemainCnt 是否已赋值
                     * @return BaseRemainCnt 是否已赋值
                     * 
                     */
                    bool BaseRemainCntHasBeenSet() const;

                    /**
                     * 获取<p>扩容配额总数量。</p>
                     * @return ExtensionTotalCnt <p>扩容配额总数量。</p>
                     * 
                     */
                    int64_t GetExtensionTotalCnt() const;

                    /**
                     * 设置<p>扩容配额总数量。</p>
                     * @param _extensionTotalCnt <p>扩容配额总数量。</p>
                     * 
                     */
                    void SetExtensionTotalCnt(const int64_t& _extensionTotalCnt);

                    /**
                     * 判断参数 ExtensionTotalCnt 是否已赋值
                     * @return ExtensionTotalCnt 是否已赋值
                     * 
                     */
                    bool ExtensionTotalCntHasBeenSet() const;

                    /**
                     * 获取<p>扩容配额已使用数量。</p>
                     * @return ExtensionUsedCnt <p>扩容配额已使用数量。</p>
                     * 
                     */
                    int64_t GetExtensionUsedCnt() const;

                    /**
                     * 设置<p>扩容配额已使用数量。</p>
                     * @param _extensionUsedCnt <p>扩容配额已使用数量。</p>
                     * 
                     */
                    void SetExtensionUsedCnt(const int64_t& _extensionUsedCnt);

                    /**
                     * 判断参数 ExtensionUsedCnt 是否已赋值
                     * @return ExtensionUsedCnt 是否已赋值
                     * 
                     */
                    bool ExtensionUsedCntHasBeenSet() const;

                    /**
                     * 获取<p>扩容配额剩余数量。</p>
                     * @return ExtensionRemainCnt <p>扩容配额剩余数量。</p>
                     * 
                     */
                    int64_t GetExtensionRemainCnt() const;

                    /**
                     * 设置<p>扩容配额剩余数量。</p>
                     * @param _extensionRemainCnt <p>扩容配额剩余数量。</p>
                     * 
                     */
                    void SetExtensionRemainCnt(const int64_t& _extensionRemainCnt);

                    /**
                     * 判断参数 ExtensionRemainCnt 是否已赋值
                     * @return ExtensionRemainCnt 是否已赋值
                     * 
                     */
                    bool ExtensionRemainCntHasBeenSet() const;

                private:

                    /**
                     * <p>封禁列表总配额数量。</p>
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * <p>封禁列表已使用数量。</p>
                     */
                    int64_t m_usedCnt;
                    bool m_usedCntHasBeenSet;

                    /**
                     * <p>封禁列表剩余配额数量。</p>
                     */
                    int64_t m_remainCnt;
                    bool m_remainCntHasBeenSet;

                    /**
                     * <p>基础配额总数量。</p>
                     */
                    int64_t m_baseTotalCnt;
                    bool m_baseTotalCntHasBeenSet;

                    /**
                     * <p>基础配额已使用数量。</p>
                     */
                    int64_t m_baseUsedCnt;
                    bool m_baseUsedCntHasBeenSet;

                    /**
                     * <p>基础配额剩余数量。</p>
                     */
                    int64_t m_baseRemainCnt;
                    bool m_baseRemainCntHasBeenSet;

                    /**
                     * <p>扩容配额总数量。</p>
                     */
                    int64_t m_extensionTotalCnt;
                    bool m_extensionTotalCntHasBeenSet;

                    /**
                     * <p>扩容配额已使用数量。</p>
                     */
                    int64_t m_extensionUsedCnt;
                    bool m_extensionUsedCntHasBeenSet;

                    /**
                     * <p>扩容配额剩余数量。</p>
                     */
                    int64_t m_extensionRemainCnt;
                    bool m_extensionRemainCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWBLOCKLISTQUOTADETAIL_H_
