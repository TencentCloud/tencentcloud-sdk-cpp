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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAM_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ProgramItem.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * tsf-privilege模块 Program数据集
                */
                class Program : public AbstractModel
                {
                public:
                    Program();
                    ~Program() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据集ID
                     * @return ProgramId 数据集ID
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置数据集ID
                     * @param _programId 数据集ID
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取数据集名称
                     * @return ProgramName 数据集名称
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置数据集名称
                     * @param _programName 数据集名称
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取数据集描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProgramDesc 数据集描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProgramDesc() const;

                    /**
                     * 设置数据集描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _programDesc 数据集描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgramDesc(const std::string& _programDesc);

                    /**
                     * 判断参数 ProgramDesc 是否已赋值
                     * @return ProgramDesc 是否已赋值
                     * 
                     */
                    bool ProgramDescHasBeenSet() const;

                    /**
                     * 获取删除标识，true: 可以删除; false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 删除标识，true: 可以删除; false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置删除标识，true: 可以删除; false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteFlag 删除标识，true: 可以删除; false: 不可删除
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
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    int64_t GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
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
                     * @return LastUpdateTime 最后更新时间
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _lastUpdateTime 最后更新时间
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
                     * 获取数据项列表，无值时返回空数组
                     * @return ProgramItemList 数据项列表，无值时返回空数组
                     * 
                     */
                    std::vector<ProgramItem> GetProgramItemList() const;

                    /**
                     * 设置数据项列表，无值时返回空数组
                     * @param _programItemList 数据项列表，无值时返回空数组
                     * 
                     */
                    void SetProgramItemList(const std::vector<ProgramItem>& _programItemList);

                    /**
                     * 判断参数 ProgramItemList 是否已赋值
                     * @return ProgramItemList 是否已赋值
                     * 
                     */
                    bool ProgramItemListHasBeenSet() const;

                private:

                    /**
                     * 数据集ID
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * 数据集名称
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * 数据集描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_programDesc;
                    bool m_programDescHasBeenSet;

                    /**
                     * 删除标识，true: 可以删除; false: 不可删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 数据项列表，无值时返回空数组
                     */
                    std::vector<ProgramItem> m_programItemList;
                    bool m_programItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_PROGRAM_H_
