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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DOCSEGMENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DOCSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 文档片段
                */
                class DocSegment : public AbstractModel
                {
                public:
                    DocSegment();
                    ~DocSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片段ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 片段ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置片段ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 片段ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessId 业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessId 业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取文件类型(markdown,word,txt)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 文件类型(markdown,word,txt)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型(markdown,word,txt)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType 文件类型(markdown,word,txt)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取文档切片类型(segment-文档切片 table-表格)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentType 文档切片类型(segment-文档切片 table-表格)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置文档切片类型(segment-文档切片 table-表格)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentType 文档切片类型(segment-文档切片 table-表格)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取段落内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageContent 段落内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPageContent() const;

                    /**
                     * 设置段落内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageContent 段落内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageContent(const std::string& _pageContent);

                    /**
                     * 判断参数 PageContent 是否已赋值
                     * @return PageContent 是否已赋值
                     * 
                     */
                    bool PageContentHasBeenSet() const;

                    /**
                     * 获取段落原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgData 段落原文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgData() const;

                    /**
                     * 设置段落原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgData 段落原文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgData(const std::string& _orgData);

                    /**
                     * 判断参数 OrgData 是否已赋值
                     * @return OrgData 是否已赋值
                     * 
                     */
                    bool OrgDataHasBeenSet() const;

                    /**
                     * 获取文章ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocId 文章ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置文章ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docId 文章ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocBizId 文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docBizId 文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocUrl 文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocUrl() const;

                    /**
                     * 设置文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docUrl 文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocUrl(const std::string& _docUrl);

                    /**
                     * 判断参数 DocUrl 是否已赋值
                     * @return DocUrl 是否已赋值
                     * 
                     */
                    bool DocUrlHasBeenSet() const;

                private:

                    /**
                     * 片段ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 文件类型(markdown,word,txt)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文档切片类型(segment-文档切片 table-表格)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * 标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 段落内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pageContent;
                    bool m_pageContentHasBeenSet;

                    /**
                     * 段落原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgData;
                    bool m_orgDataHasBeenSet;

                    /**
                     * 文章ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * 文档业务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 文档链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docUrl;
                    bool m_docUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DOCSEGMENT_H_
