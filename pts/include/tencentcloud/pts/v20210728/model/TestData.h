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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_TESTDATA_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_TESTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 测试数据集
                */
                class TestData : public AbstractModel
                {
                public:
                    TestData();
                    ~TestData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取测试数据集所在的文件名
                     * @return Name 测试数据集所在的文件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置测试数据集所在的文件名
                     * @param _name 测试数据集所在的文件名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取测试数据集是否分片
                     * @return Split 测试数据集是否分片
                     * 
                     */
                    bool GetSplit() const;

                    /**
                     * 设置测试数据集是否分片
                     * @param _split 测试数据集是否分片
                     * 
                     */
                    void SetSplit(const bool& _split);

                    /**
                     * 判断参数 Split 是否已赋值
                     * @return Split 是否已赋值
                     * 
                     */
                    bool SplitHasBeenSet() const;

                    /**
                     * 获取首行是否为参数名
                     * @return HeaderInFile 首行是否为参数名
                     * 
                     */
                    bool GetHeaderInFile() const;

                    /**
                     * 设置首行是否为参数名
                     * @param _headerInFile 首行是否为参数名
                     * 
                     */
                    void SetHeaderInFile(const bool& _headerInFile);

                    /**
                     * 判断参数 HeaderInFile 是否已赋值
                     * @return HeaderInFile 是否已赋值
                     * 
                     */
                    bool HeaderInFileHasBeenSet() const;

                    /**
                     * 获取参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderColumns 参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHeaderColumns() const;

                    /**
                     * 设置参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerColumns 参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderColumns(const std::vector<std::string>& _headerColumns);

                    /**
                     * 判断参数 HeaderColumns 是否已赋值
                     * @return HeaderColumns 是否已赋值
                     * 
                     */
                    bool HeaderColumnsHasBeenSet() const;

                    /**
                     * 获取文件行数
                     * @return LineCount 文件行数
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置文件行数
                     * @param _lineCount 文件行数
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取文件字节数
                     * @return Size 文件字节数
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件字节数
                     * @param _size 文件字节数
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadLines 头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHeadLines() const;

                    /**
                     * 设置头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headLines 头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeadLines(const std::vector<std::string>& _headLines);

                    /**
                     * 判断参数 HeadLines 是否已赋值
                     * @return HeadLines 是否已赋值
                     * 
                     */
                    bool HeadLinesHasBeenSet() const;

                    /**
                     * 获取尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TailLines 尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTailLines() const;

                    /**
                     * 设置尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tailLines 尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTailLines(const std::vector<std::string>& _tailLines);

                    /**
                     * 判断参数 TailLines 是否已赋值
                     * @return TailLines 是否已赋值
                     * 
                     */
                    bool TailLinesHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return Type 文件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件类型
                     * @param _type 文件类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取文件 ID
                     * @return FileId 文件 ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件 ID
                     * @param _fileId 文件 ID
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * 测试数据集所在的文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 测试数据集是否分片
                     */
                    bool m_split;
                    bool m_splitHasBeenSet;

                    /**
                     * 首行是否为参数名
                     */
                    bool m_headerInFile;
                    bool m_headerInFileHasBeenSet;

                    /**
                     * 参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_headerColumns;
                    bool m_headerColumnsHasBeenSet;

                    /**
                     * 文件行数
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 文件字节数
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_headLines;
                    bool m_headLinesHasBeenSet;

                    /**
                     * 尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tailLines;
                    bool m_tailLinesHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文件 ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_TESTDATA_H_
