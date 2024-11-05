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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BUGINFODETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BUGINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞详细信息
                */
                class BugInfoDetail : public AbstractModel
                {
                public:
                    BugInfoDetail();
                    ~BugInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞编号
                     * @return Id 漏洞编号
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置漏洞编号
                     * @param _id 漏洞编号
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
                     * 获取漏洞对应pocId
                     * @return PatchId 漏洞对应pocId
                     * 
                     */
                    std::string GetPatchId() const;

                    /**
                     * 设置漏洞对应pocId
                     * @param _patchId 漏洞对应pocId
                     * 
                     */
                    void SetPatchId(const std::string& _patchId);

                    /**
                     * 判断参数 PatchId 是否已赋值
                     * @return PatchId 是否已赋值
                     * 
                     */
                    bool PatchIdHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VULName 漏洞名称
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vULName 漏洞名称
                     * 
                     */
                    void SetVULName(const std::string& _vULName);

                    /**
                     * 判断参数 VULName 是否已赋值
                     * @return VULName 是否已赋值
                     * 
                     */
                    bool VULNameHasBeenSet() const;

                    /**
                     * 获取漏洞严重性：high,middle，low，info
                     * @return Level 漏洞严重性：high,middle，low，info
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置漏洞严重性：high,middle，low，info
                     * @param _level 漏洞严重性：high,middle，low，info
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取cvss评分
                     * @return CVSSScore cvss评分
                     * 
                     */
                    std::string GetCVSSScore() const;

                    /**
                     * 设置cvss评分
                     * @param _cVSSScore cvss评分
                     * 
                     */
                    void SetCVSSScore(const std::string& _cVSSScore);

                    /**
                     * 判断参数 CVSSScore 是否已赋值
                     * @return CVSSScore 是否已赋值
                     * 
                     */
                    bool CVSSScoreHasBeenSet() const;

                    /**
                     * 获取cve编号
                     * @return CVEId cve编号
                     * 
                     */
                    std::string GetCVEId() const;

                    /**
                     * 设置cve编号
                     * @param _cVEId cve编号
                     * 
                     */
                    void SetCVEId(const std::string& _cVEId);

                    /**
                     * 判断参数 CVEId 是否已赋值
                     * @return CVEId 是否已赋值
                     * 
                     */
                    bool CVEIdHasBeenSet() const;

                    /**
                     * 获取漏洞标签
                     * @return Tag 漏洞标签
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置漏洞标签
                     * @param _tag 漏洞标签
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取漏洞种类，1:web应用，2:系统组件漏洞，3:配置风险
                     * @return VULCategory 漏洞种类，1:web应用，2:系统组件漏洞，3:配置风险
                     * 
                     */
                    uint64_t GetVULCategory() const;

                    /**
                     * 设置漏洞种类，1:web应用，2:系统组件漏洞，3:配置风险
                     * @param _vULCategory 漏洞种类，1:web应用，2:系统组件漏洞，3:配置风险
                     * 
                     */
                    void SetVULCategory(const uint64_t& _vULCategory);

                    /**
                     * 判断参数 VULCategory 是否已赋值
                     * @return VULCategory 是否已赋值
                     * 
                     */
                    bool VULCategoryHasBeenSet() const;

                    /**
                     * 获取漏洞影响系统
                     * @return ImpactOs 漏洞影响系统
                     * 
                     */
                    std::string GetImpactOs() const;

                    /**
                     * 设置漏洞影响系统
                     * @param _impactOs 漏洞影响系统
                     * 
                     */
                    void SetImpactOs(const std::string& _impactOs);

                    /**
                     * 判断参数 ImpactOs 是否已赋值
                     * @return ImpactOs 是否已赋值
                     * 
                     */
                    bool ImpactOsHasBeenSet() const;

                    /**
                     * 获取漏洞影响组件
                     * @return ImpactCOMPENT 漏洞影响组件
                     * 
                     */
                    std::string GetImpactCOMPENT() const;

                    /**
                     * 设置漏洞影响组件
                     * @param _impactCOMPENT 漏洞影响组件
                     * 
                     */
                    void SetImpactCOMPENT(const std::string& _impactCOMPENT);

                    /**
                     * 判断参数 ImpactCOMPENT 是否已赋值
                     * @return ImpactCOMPENT 是否已赋值
                     * 
                     */
                    bool ImpactCOMPENTHasBeenSet() const;

                    /**
                     * 获取漏洞影响版本
                     * @return ImpactVersion 漏洞影响版本
                     * 
                     */
                    std::string GetImpactVersion() const;

                    /**
                     * 设置漏洞影响版本
                     * @param _impactVersion 漏洞影响版本
                     * 
                     */
                    void SetImpactVersion(const std::string& _impactVersion);

                    /**
                     * 判断参数 ImpactVersion 是否已赋值
                     * @return ImpactVersion 是否已赋值
                     * 
                     */
                    bool ImpactVersionHasBeenSet() const;

                    /**
                     * 获取链接
                     * @return Reference 链接
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置链接
                     * @param _reference 链接
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取漏洞描述
                     * @return VULDescribe 漏洞描述
                     * 
                     */
                    std::string GetVULDescribe() const;

                    /**
                     * 设置漏洞描述
                     * @param _vULDescribe 漏洞描述
                     * 
                     */
                    void SetVULDescribe(const std::string& _vULDescribe);

                    /**
                     * 判断参数 VULDescribe 是否已赋值
                     * @return VULDescribe 是否已赋值
                     * 
                     */
                    bool VULDescribeHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return Fix 修复建议
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置修复建议
                     * @param _fix 修复建议
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取产品支持状态，实时返回
                     * @return ProSupport 产品支持状态，实时返回
                     * 
                     */
                    uint64_t GetProSupport() const;

                    /**
                     * 设置产品支持状态，实时返回
                     * @param _proSupport 产品支持状态，实时返回
                     * 
                     */
                    void SetProSupport(const uint64_t& _proSupport);

                    /**
                     * 判断参数 ProSupport 是否已赋值
                     * @return ProSupport 是否已赋值
                     * 
                     */
                    bool ProSupportHasBeenSet() const;

                    /**
                     * 获取是否公开，0为未发布，1为发布
                     * @return IsPublish 是否公开，0为未发布，1为发布
                     * 
                     */
                    uint64_t GetIsPublish() const;

                    /**
                     * 设置是否公开，0为未发布，1为发布
                     * @param _isPublish 是否公开，0为未发布，1为发布
                     * 
                     */
                    void SetIsPublish(const uint64_t& _isPublish);

                    /**
                     * 判断参数 IsPublish 是否已赋值
                     * @return IsPublish 是否已赋值
                     * 
                     */
                    bool IsPublishHasBeenSet() const;

                    /**
                     * 获取释放时间
                     * @return ReleaseTime 释放时间
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置释放时间
                     * @param _releaseTime 释放时间
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

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
                     * 获取漏洞子类别
                     * @return SubCategory 漏洞子类别
                     * 
                     */
                    std::string GetSubCategory() const;

                    /**
                     * 设置漏洞子类别
                     * @param _subCategory 漏洞子类别
                     * 
                     */
                    void SetSubCategory(const std::string& _subCategory);

                    /**
                     * 判断参数 SubCategory 是否已赋值
                     * @return SubCategory 是否已赋值
                     * 
                     */
                    bool SubCategoryHasBeenSet() const;

                private:

                    /**
                     * 漏洞编号
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 漏洞对应pocId
                     */
                    std::string m_patchId;
                    bool m_patchIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * 漏洞严重性：high,middle，low，info
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * cvss评分
                     */
                    std::string m_cVSSScore;
                    bool m_cVSSScoreHasBeenSet;

                    /**
                     * cve编号
                     */
                    std::string m_cVEId;
                    bool m_cVEIdHasBeenSet;

                    /**
                     * 漏洞标签
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 漏洞种类，1:web应用，2:系统组件漏洞，3:配置风险
                     */
                    uint64_t m_vULCategory;
                    bool m_vULCategoryHasBeenSet;

                    /**
                     * 漏洞影响系统
                     */
                    std::string m_impactOs;
                    bool m_impactOsHasBeenSet;

                    /**
                     * 漏洞影响组件
                     */
                    std::string m_impactCOMPENT;
                    bool m_impactCOMPENTHasBeenSet;

                    /**
                     * 漏洞影响版本
                     */
                    std::string m_impactVersion;
                    bool m_impactVersionHasBeenSet;

                    /**
                     * 链接
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_vULDescribe;
                    bool m_vULDescribeHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * 产品支持状态，实时返回
                     */
                    uint64_t m_proSupport;
                    bool m_proSupportHasBeenSet;

                    /**
                     * 是否公开，0为未发布，1为发布
                     */
                    uint64_t m_isPublish;
                    bool m_isPublishHasBeenSet;

                    /**
                     * 释放时间
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 漏洞子类别
                     */
                    std::string m_subCategory;
                    bool m_subCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BUGINFODETAIL_H_
