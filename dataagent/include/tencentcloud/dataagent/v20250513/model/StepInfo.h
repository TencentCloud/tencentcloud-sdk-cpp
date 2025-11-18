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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_STEPINFO_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_STEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/StepExpand.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 任务步骤
                */
                class StepInfo : public AbstractModel
                {
                public:
                    StepInfo();
                    ~StepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤id
                     * @return Id 步骤id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置步骤id
                     * @param _id 步骤id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取步骤名称
                     * @return Name 步骤名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置步骤名称
                     * @param _name 步骤名称
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
                     * 获取步骤状态
                     * @return Status 步骤状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置步骤状态
                     * @param _status 步骤状态
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
                     * 获取类型(text/expand)
                     * @return Type 类型(text/expand)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型(text/expand)
                     * @param _type 类型(text/expand)
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
                     * 获取总结
                     * @return Summary 总结
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置总结
                     * @param _summary 总结
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取步骤扩展结构
                     * @return Expand 步骤扩展结构
                     * 
                     */
                    StepExpand GetExpand() const;

                    /**
                     * 设置步骤扩展结构
                     * @param _expand 步骤扩展结构
                     * 
                     */
                    void SetExpand(const StepExpand& _expand);

                    /**
                     * 判断参数 Expand 是否已赋值
                     * @return Expand 是否已赋值
                     * 
                     */
                    bool ExpandHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 步骤id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 步骤名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 步骤状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 类型(text/expand)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 总结
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 步骤扩展结构
                     */
                    StepExpand m_expand;
                    bool m_expandHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_STEPINFO_H_
