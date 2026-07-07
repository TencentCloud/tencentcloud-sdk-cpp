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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYCOMPLIANCEGROUPDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYCOMPLIANCEGROUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceCategoryRelation.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyComplianceGroupDetail返回参数结构体
                */
                class DescribeDspmIdentifyComplianceGroupDetailResponse : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyComplianceGroupDetailResponse();
                    ~DescribeDspmIdentifyComplianceGroupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>识别模板ID</p>
                     * @return Id <p>识别模板ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>识别模板名称</p>
                     * @return Name <p>识别模板名称</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>模板类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     * @return Type <p>模板类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
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
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
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
                     * 获取<p>关联级别组ID</p>
                     * @return LevelGroupId <p>关联级别组ID</p>
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return Detail <p>无</p>
                     * 
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>关联级别组名称</p>
                     * @return LevelGroupName <p>关联级别组名称</p>
                     * 
                     */
                    std::string GetLevelGroupName() const;

                    /**
                     * 判断参数 LevelGroupName 是否已赋值
                     * @return LevelGroupName 是否已赋值
                     * 
                     */
                    bool LevelGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>识别模板ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>识别模板名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模板类型</p><p>枚举值：</p><ul><li>0： 内置</li><li>1： 自定义</li></ul>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>0： 未启用</li><li>1： 启用</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>关联级别组ID</p>
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::vector<DspmIdentifyComplianceCategoryRelation> m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>关联级别组名称</p>
                     */
                    std::string m_levelGroupName;
                    bool m_levelGroupNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYCOMPLIANCEGROUPDETAILRESPONSE_H_
