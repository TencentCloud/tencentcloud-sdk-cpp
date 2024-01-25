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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CodeMatchInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 代码搜索信息
                */
                class CodeSearchInfo : public AbstractModel
                {
                public:
                    CodeSearchInfo();
                    ~CodeSearchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件或任务ID
                     * @return Id 文件或任务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置文件或任务ID
                     * @param _id 文件或任务ID
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
                     * 获取文件或任务名称
                     * @return Name 文件或任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件或任务名称
                     * @param _name 文件或任务名称
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
                     * 获取文件或任务类型
                     * @return Type 文件或任务类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件或任务类型
                     * @param _type 文件或任务类型
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
                     * 获取命中内容，包括行号和文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 命中内容，包括行号和文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CodeMatchInfo> GetContent() const;

                    /**
                     * 设置命中内容，包括行号和文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 命中内容，包括行号和文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::vector<CodeMatchInfo>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取责任人名称
                     * @return OwnerName 责任人名称
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置责任人名称
                     * @param _ownerName 责任人名称
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取命中行数
                     * @return MatchRows 命中行数
                     * 
                     */
                    uint64_t GetMatchRows() const;

                    /**
                     * 设置命中行数
                     * @param _matchRows 命中行数
                     * 
                     */
                    void SetMatchRows(const uint64_t& _matchRows);

                    /**
                     * 判断参数 MatchRows 是否已赋值
                     * @return MatchRows 是否已赋值
                     * 
                     */
                    bool MatchRowsHasBeenSet() const;

                    /**
                     * 获取提交调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitTime 提交调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置提交调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitTime 提交调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayType 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayType() const;

                    /**
                     * 设置展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayType 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayType(const std::string& _displayType);

                    /**
                     * 判断参数 DisplayType 是否已赋值
                     * @return DisplayType 是否已赋值
                     * 
                     */
                    bool DisplayTypeHasBeenSet() const;

                    /**
                     * 获取Cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPath Cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置Cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPath Cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                private:

                    /**
                     * 文件或任务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 文件或任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件或任务类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 命中内容，包括行号和文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodeMatchInfo> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 责任人名称
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 命中行数
                     */
                    uint64_t m_matchRows;
                    bool m_matchRowsHasBeenSet;

                    /**
                     * 提交调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayType;
                    bool m_displayTypeHasBeenSet;

                    /**
                     * Cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHINFO_H_
