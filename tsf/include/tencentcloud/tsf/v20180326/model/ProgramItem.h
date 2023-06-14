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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAMITEM_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Resource.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * tsf-privilege模块，数据项
                */
                class ProgramItem : public AbstractModel
                {
                public:
                    ProgramItem();
                    ~ProgramItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramItemId 数据项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgramItemId() const;

                    /**
                     * 设置数据项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programItemId 数据项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgramItemId(const std::string& _programItemId);

                    /**
                     * 判断参数 ProgramItemId 是否已赋值
                     * @return ProgramItemId 是否已赋值
                     * 
                     */
                    bool ProgramItemIdHasBeenSet() const;

                    /**
                     * 获取资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取数据值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueList 数据值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValueList() const;

                    /**
                     * 设置数据值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueList 数据值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueList(const std::vector<std::string>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                    /**
                     * 获取全选标识，true: 全选；false: 非全选
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAll 全选标识，true: 全选；false: 非全选
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置全选标识，true: 全选；false: 非全选
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAll 全选标识，true: 全选；false: 非全选
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreationTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTime(const int64_t& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdateTime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdateTime(const int64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取删除标识，true: 可删除；false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 删除标识，true: 可删除；false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置删除标识，true: 可删除；false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteFlag 删除标识，true: 可删除；false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteFlag(const bool& _deleteFlag);

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     * 
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramId 数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programId 数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                private:

                    /**
                     * 数据项ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_programItemId;
                    bool m_programItemIdHasBeenSet;

                    /**
                     * 资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 数据值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_valueList;
                    bool m_valueListHasBeenSet;

                    /**
                     * 全选标识，true: 全选；false: 非全选
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 删除标识，true: 可删除；false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 数据集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAMITEM_H_
