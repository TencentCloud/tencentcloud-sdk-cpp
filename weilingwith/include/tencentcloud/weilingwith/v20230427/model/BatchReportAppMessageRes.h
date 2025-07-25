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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHREPORTAPPMESSAGERES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHREPORTAPPMESSAGERES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ReportMsgRes.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 批量消息上报结果
                */
                class BatchReportAppMessageRes : public AbstractModel
                {
                public:
                    BatchReportAppMessageRes();
                    ~BatchReportAppMessageRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上报数量

                     * @return TotalElements 上报数量

                     * 
                     */
                    int64_t GetTotalElements() const;

                    /**
                     * 设置上报数量

                     * @param _totalElements 上报数量

                     * 
                     */
                    void SetTotalElements(const int64_t& _totalElements);

                    /**
                     * 判断参数 TotalElements 是否已赋值
                     * @return TotalElements 是否已赋值
                     * 
                     */
                    bool TotalElementsHasBeenSet() const;

                    /**
                     * 获取提交数量（推送成功）
                     * @return Commit 提交数量（推送成功）
                     * 
                     */
                    int64_t GetCommit() const;

                    /**
                     * 设置提交数量（推送成功）
                     * @param _commit 提交数量（推送成功）
                     * 
                     */
                    void SetCommit(const int64_t& _commit);

                    /**
                     * 判断参数 Commit 是否已赋值
                     * @return Commit 是否已赋值
                     * 
                     */
                    bool CommitHasBeenSet() const;

                    /**
                     * 获取消息推送结果列表
                     * @return SpanMap 消息推送结果列表
                     * 
                     */
                    std::vector<ReportMsgRes> GetSpanMap() const;

                    /**
                     * 设置消息推送结果列表
                     * @param _spanMap 消息推送结果列表
                     * 
                     */
                    void SetSpanMap(const std::vector<ReportMsgRes>& _spanMap);

                    /**
                     * 判断参数 SpanMap 是否已赋值
                     * @return SpanMap 是否已赋值
                     * 
                     */
                    bool SpanMapHasBeenSet() const;

                private:

                    /**
                     * 上报数量

                     */
                    int64_t m_totalElements;
                    bool m_totalElementsHasBeenSet;

                    /**
                     * 提交数量（推送成功）
                     */
                    int64_t m_commit;
                    bool m_commitHasBeenSet;

                    /**
                     * 消息推送结果列表
                     */
                    std::vector<ReportMsgRes> m_spanMap;
                    bool m_spanMapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHREPORTAPPMESSAGERES_H_
