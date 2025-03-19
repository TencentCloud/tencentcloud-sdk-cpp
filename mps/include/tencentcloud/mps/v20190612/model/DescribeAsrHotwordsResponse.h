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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AsrHotwordsSetItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAsrHotwords返回参数结构体
                */
                class DescribeAsrHotwordsResponse : public AbstractModel
                {
                public:
                    DescribeAsrHotwordsResponse();
                    ~DescribeAsrHotwordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的热词库 id
                     * @return HotwordsId 需要查询的热词库 id
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

                    /**
                     * 获取当前热词库 id 状态，为 0 表示查询的时刻，没有模板绑定这个热词库，可以删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 当前热词库 id 状态，为 0 表示查询的时刻，没有模板绑定这个热词库，可以删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取热词库的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 热词库的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取临时热词库为 0，返回创建时候的字符串
文件热词库为 1，返回创建是上传的文件内容


注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 临时热词库为 0，返回创建时候的字符串
文件热词库为 1，返回创建是上传的文件内容


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取查询返回的热词库列表
                     * @return HotWords 查询返回的热词库列表
                     * 
                     */
                    std::vector<AsrHotwordsSetItem> GetHotWords() const;

                    /**
                     * 判断参数 HotWords 是否已赋值
                     * @return HotWords 是否已赋值
                     * 
                     */
                    bool HotWordsHasBeenSet() const;

                    /**
                     * 获取热词库文本，根据 Type 区分
如果 Type 为 0，是热词库字符串
如果 Type 是 1，是热词库文本文件的文件内容 base64 编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 热词库文本，根据 Type 区分
如果 Type 为 0，是热词库字符串
如果 Type 是 1，是热词库文本文件的文件内容 base64 编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取当前热词库包含的词语数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordCount 当前热词库包含的词语数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWordCount() const;

                    /**
                     * 判断参数 WordCount 是否已赋值
                     * @return WordCount 是否已赋值
                     * 
                     */
                    bool WordCountHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 分页偏移量，默认值：0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：100。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取热词库创建时间 ISOUTC 格式 "2006-01-02T15:04:05Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 热词库创建时间 ISOUTC 格式 "2006-01-02T15:04:05Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取热词库修改时间 ISOUTC 格式 "2006-01-02T15:04:05Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 热词库修改时间 ISOUTC 格式 "2006-01-02T15:04:05Z"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 需要查询的热词库 id
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * 当前热词库 id 状态，为 0 表示查询的时刻，没有模板绑定这个热词库，可以删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 热词库的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 临时热词库为 0，返回创建时候的字符串
文件热词库为 1，返回创建是上传的文件内容


注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 查询返回的热词库列表
                     */
                    std::vector<AsrHotwordsSetItem> m_hotWords;
                    bool m_hotWordsHasBeenSet;

                    /**
                     * 热词库文本，根据 Type 区分
如果 Type 为 0，是热词库字符串
如果 Type 是 1，是热词库文本文件的文件内容 base64 编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 当前热词库包含的词语数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_wordCount;
                    bool m_wordCountHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 热词库创建时间 ISOUTC 格式 "2006-01-02T15:04:05Z"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 热词库修改时间 ISOUTC 格式 "2006-01-02T15:04:05Z"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEASRHOTWORDSRESPONSE_H_
