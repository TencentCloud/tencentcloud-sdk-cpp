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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSET_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 热词库查询返回结果集
                */
                class AsrHotwordsSet : public AbstractModel
                {
                public:
                    AsrHotwordsSet();
                    ~AsrHotwordsSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取热词库 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HotwordsId 热词库 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 设置热词库 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hotwordsId 热词库 Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHotwordsId(const std::string& _hotwordsId);

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

                    /**
                     * 获取当前热词库状态，数值表示绑定该热词库的智能字幕模板数量。
Status 为 0 ，表示该热词库没有被智能字幕模板引用可以删除；
Status 不为 0，表示该热词库不能被删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 当前热词库状态，数值表示绑定该热词库的智能字幕模板数量。
Status 为 0 ，表示该热词库没有被智能字幕模板引用可以删除；
Status 不为 0，表示该热词库不能被删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置当前热词库状态，数值表示绑定该热词库的智能字幕模板数量。
Status 为 0 ，表示该热词库没有被智能字幕模板引用可以删除；
Status 不为 0，表示该热词库不能被删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 当前热词库状态，数值表示绑定该热词库的智能字幕模板数量。
Status 为 0 ，表示该热词库没有被智能字幕模板引用可以删除；
Status 不为 0，表示该热词库不能被删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取热词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 热词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置热词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 热词库名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取热词库中的热词数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordCount 热词库中的热词数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWordCount() const;

                    /**
                     * 设置热词库中的热词数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordCount 热词库中的热词数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWordCount(const uint64_t& _wordCount);

                    /**
                     * 判断参数 WordCount 是否已赋值
                     * @return WordCount 是否已赋值
                     * 
                     */
                    bool WordCountHasBeenSet() const;

                    /**
                     * 获取热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取0：临时热词库
1：文件热词库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 0：临时热词库
1：文件热词库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0：临时热词库
1：文件热词库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 0：临时热词库
1：文件热词库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 热词库 Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * 当前热词库状态，数值表示绑定该热词库的智能字幕模板数量。
Status 为 0 ，表示该热词库没有被智能字幕模板引用可以删除；
Status 不为 0，表示该热词库不能被删除。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 热词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 热词库中的热词数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_wordCount;
                    bool m_wordCountHasBeenSet;

                    /**
                     * 热词文件上传时的文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 热词库创建时间 ISOUTC 时间格式  2006-01-02T15:04:05Z
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 0：临时热词库
1：文件热词库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSSET_H_
