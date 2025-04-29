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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_DOCUMENTUSAGE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_DOCUMENTUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 文档拆分任务的用量
                */
                class DocumentUsage : public AbstractModel
                {
                public:
                    DocumentUsage();
                    ~DocumentUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档拆分任务的页数
                     * @return PageNumber 文档拆分任务的页数
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置文档拆分任务的页数
                     * @param _pageNumber 文档拆分任务的页数
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取文档拆分任务消耗的总token数
                     * @return TotalToken 文档拆分任务消耗的总token数
                     * @deprecated
                     */
                    int64_t GetTotalToken() const;

                    /**
                     * 设置文档拆分任务消耗的总token数
                     * @param _totalToken 文档拆分任务消耗的总token数
                     * @deprecated
                     */
                    void SetTotalToken(const int64_t& _totalToken);

                    /**
                     * 判断参数 TotalToken 是否已赋值
                     * @return TotalToken 是否已赋值
                     * @deprecated
                     */
                    bool TotalTokenHasBeenSet() const;

                    /**
                     * 获取文档拆分任务消耗的总token数
                     * @return TotalTokens 文档拆分任务消耗的总token数
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置文档拆分任务消耗的总token数
                     * @param _totalTokens 文档拆分任务消耗的总token数
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取拆分消耗的token数
                     * @return SplitTokens 拆分消耗的token数
                     * 
                     */
                    int64_t GetSplitTokens() const;

                    /**
                     * 设置拆分消耗的token数
                     * @param _splitTokens 拆分消耗的token数
                     * 
                     */
                    void SetSplitTokens(const int64_t& _splitTokens);

                    /**
                     * 判断参数 SplitTokens 是否已赋值
                     * @return SplitTokens 是否已赋值
                     * 
                     */
                    bool SplitTokensHasBeenSet() const;

                    /**
                     * 获取mllm消耗的token数
                     * @return MllmTokens mllm消耗的token数
                     * 
                     */
                    int64_t GetMllmTokens() const;

                    /**
                     * 设置mllm消耗的token数
                     * @param _mllmTokens mllm消耗的token数
                     * 
                     */
                    void SetMllmTokens(const int64_t& _mllmTokens);

                    /**
                     * 判断参数 MllmTokens 是否已赋值
                     * @return MllmTokens 是否已赋值
                     * 
                     */
                    bool MllmTokensHasBeenSet() const;

                private:

                    /**
                     * 文档拆分任务的页数
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 文档拆分任务消耗的总token数
                     */
                    int64_t m_totalToken;
                    bool m_totalTokenHasBeenSet;

                    /**
                     * 文档拆分任务消耗的总token数
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * 拆分消耗的token数
                     */
                    int64_t m_splitTokens;
                    bool m_splitTokensHasBeenSet;

                    /**
                     * mllm消耗的token数
                     */
                    int64_t m_mllmTokens;
                    bool m_mllmTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_DOCUMENTUSAGE_H_
