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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGESTDOUTLOGV2_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGESTDOUTLOGV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/StdoutLogV2.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 标准输出日志列表
                */
                class TsfPageStdoutLogV2 : public AbstractModel
                {
                public:
                    TsfPageStdoutLogV2();
                    ~TsfPageStdoutLogV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总条数
                     * @param _totalCount 总条数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取标准输出日志列表
                     * @return Content 标准输出日志列表
                     * 
                     */
                    std::vector<StdoutLogV2> GetContent() const;

                    /**
                     * 设置标准输出日志列表
                     * @param _content 标准输出日志列表
                     * 
                     */
                    void SetContent(const std::vector<StdoutLogV2>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取游标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScrollId 游标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScrollId() const;

                    /**
                     * 设置游标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scrollId 游标ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScrollId(const std::string& _scrollId);

                    /**
                     * 判断参数 ScrollId 是否已赋值
                     * @return ScrollId 是否已赋值
                     * 
                     */
                    bool ScrollIdHasBeenSet() const;

                    /**
                     * 获取查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 查询状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取游标ID
                     * @return SearchAfter 游标ID
                     * 
                     */
                    std::vector<std::string> GetSearchAfter() const;

                    /**
                     * 设置游标ID
                     * @param _searchAfter 游标ID
                     * 
                     */
                    void SetSearchAfter(const std::vector<std::string>& _searchAfter);

                    /**
                     * 判断参数 SearchAfter 是否已赋值
                     * @return SearchAfter 是否已赋值
                     * 
                     */
                    bool SearchAfterHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 标准输出日志列表
                     */
                    std::vector<StdoutLogV2> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 游标ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scrollId;
                    bool m_scrollIdHasBeenSet;

                    /**
                     * 查询状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 游标ID
                     */
                    std::vector<std::string> m_searchAfter;
                    bool m_searchAfterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGESTDOUTLOGV2_H_
