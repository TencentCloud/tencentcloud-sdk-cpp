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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_COMPLIANCEGROUPDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_COMPLIANCEGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 模板详情
                */
                class ComplianceGroupDetail : public AbstractModel
                {
                public:
                    ComplianceGroupDetail();
                    ~ComplianceGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板id
                     * @return Id 模板id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置模板id
                     * @param _id 模板id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return Name 模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
                     * @param _name 模板名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模板类型
                     * @return ComplianceGroupType 模板类型
                     * 
                     */
                    int64_t GetComplianceGroupType() const;

                    /**
                     * 设置模板类型
                     * @param _complianceGroupType 模板类型
                     * 
                     */
                    void SetComplianceGroupType(const int64_t& _complianceGroupType);

                    /**
                     * 判断参数 ComplianceGroupType 是否已赋值
                     * @return ComplianceGroupType 是否已赋值
                     * 
                     */
                    bool ComplianceGroupTypeHasBeenSet() const;

                    /**
                     * 获取模板分级方案id
                     * @return LevelGroupId 模板分级方案id
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 设置模板分级方案id
                     * @param _levelGroupId 模板分级方案id
                     * 
                     */
                    void SetLevelGroupId(const uint64_t& _levelGroupId);

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                    /**
                     * 获取模板分级方案名称
                     * @return LevelGroupName 模板分级方案名称
                     * 
                     */
                    std::string GetLevelGroupName() const;

                    /**
                     * 设置模板分级方案名称
                     * @param _levelGroupName 模板分级方案名称
                     * 
                     */
                    void SetLevelGroupName(const std::string& _levelGroupName);

                    /**
                     * 判断参数 LevelGroupName 是否已赋值
                     * @return LevelGroupName 是否已赋值
                     * 
                     */
                    bool LevelGroupNameHasBeenSet() const;

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
                     * 获取更新时间
                     * @return ModifyTime 更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
                     * @param _modifyTime 更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取是否开启别名
                     * @return IsAlias 是否开启别名
                     * 
                     */
                    bool GetIsAlias() const;

                    /**
                     * 设置是否开启别名
                     * @param _isAlias 是否开启别名
                     * 
                     */
                    void SetIsAlias(const bool& _isAlias);

                    /**
                     * 判断参数 IsAlias 是否已赋值
                     * @return IsAlias 是否已赋值
                     * 
                     */
                    bool IsAliasHasBeenSet() const;

                private:

                    /**
                     * 模板id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模板类型
                     */
                    int64_t m_complianceGroupType;
                    bool m_complianceGroupTypeHasBeenSet;

                    /**
                     * 模板分级方案id
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                    /**
                     * 模板分级方案名称
                     */
                    std::string m_levelGroupName;
                    bool m_levelGroupNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 是否开启别名
                     */
                    bool m_isAlias;
                    bool m_isAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_COMPLIANCEGROUPDETAIL_H_
