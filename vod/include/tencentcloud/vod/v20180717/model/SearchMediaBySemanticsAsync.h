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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSASYNC_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSASYNC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SemanticsSearchResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 异步按语义搜索媒体任务信息
                */
                class SearchMediaBySemanticsAsync : public AbstractModel
                {
                public:
                    SearchMediaBySemanticsAsync();
                    ~SearchMediaBySemanticsAsync() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID。</p>
                     * @return TaskId <p>任务ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID。</p>
                     * @param _taskId <p>任务ID。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     * @return Status <p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     * @param _status <p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     * @return ErrCode <p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     * @param _errCode <p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>扩展错误码。</p>
                     * @return ErrCodeExt <p>扩展错误码。</p>
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置<p>扩展错误码。</p>
                     * @param _errCodeExt <p>扩展错误码。</p>
                     * 
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     * 
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取<p>错误信息。</p>
                     * @return Message <p>错误信息。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>错误信息。</p>
                     * @param _message <p>错误信息。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>本次查询文本（图片查询时为空）。</p>
                     * @return QueryText <p>本次查询文本（图片查询时为空）。</p>
                     * 
                     */
                    std::string GetQueryText() const;

                    /**
                     * 设置<p>本次查询文本（图片查询时为空）。</p>
                     * @param _queryText <p>本次查询文本（图片查询时为空）。</p>
                     * 
                     */
                    void SetQueryText(const std::string& _queryText);

                    /**
                     * 判断参数 QueryText 是否已赋值
                     * @return QueryText 是否已赋值
                     * 
                     */
                    bool QueryTextHasBeenSet() const;

                    /**
                     * 获取<p>召回列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchResults <p>召回列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SemanticsSearchResult> GetSearchResults() const;

                    /**
                     * 设置<p>召回列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchResults <p>召回列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchResults(const std::vector<SemanticsSearchResult>& _searchResults);

                    /**
                     * 判断参数 SearchResults 是否已赋值
                     * @return SearchResults 是否已赋值
                     * 
                     */
                    bool SearchResultsHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务状态，取值：<li>PROCESSING：处理中；</li><li>FINISH：已完成。</li></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码。源异常时返回非0错误码，返回0时请使用各个具体任务的 ErrCode。</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>扩展错误码。</p>
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * <p>错误信息。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>本次查询文本（图片查询时为空）。</p>
                     */
                    std::string m_queryText;
                    bool m_queryTextHasBeenSet;

                    /**
                     * <p>召回列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SemanticsSearchResult> m_searchResults;
                    bool m_searchResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSASYNC_H_
