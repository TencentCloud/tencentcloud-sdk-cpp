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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPPLANMODIFY_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPPLANMODIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>
#include <tencentcloud/iss/v20230517/model/ChannelInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 修改录像上云计划数据结构
                */
                class UpdateRecordBackupPlanModify : public AbstractModel
                {
                public:
                    UpdateRecordBackupPlanModify();
                    ~UpdateRecordBackupPlanModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录像上云计划名称（仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复，不修改名称时，不需要该字段）
                     * @return PlanName 录像上云计划名称（仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复，不修改名称时，不需要该字段）
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置录像上云计划名称（仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复，不修改名称时，不需要该字段）
                     * @param _planName 录像上云计划名称（仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复，不修改名称时，不需要该字段）
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取录制模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取，不修改模板ID时，不需要该字段）
                     * @return TemplateId 录制模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取，不修改模板ID时，不需要该字段）
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置录制模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取，不修改模板ID时，不需要该字段）
                     * @param _templateId 录制模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取，不修改模板ID时，不需要该字段）
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取录像上云计划描述（仅支持中文、英文、数字、_、-，长度不超过128个字符， 不修改描述时，不需要该字段）
                     * @return Describe 录像上云计划描述（仅支持中文、英文、数字、_、-，长度不超过128个字符， 不修改描述时，不需要该字段）
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置录像上云计划描述（仅支持中文、英文、数字、_、-，长度不超过128个字符， 不修改描述时，不需要该字段）
                     * @param _describe 录像上云计划描述（仅支持中文、英文、数字、_、-，长度不超过128个字符， 不修改描述时，不需要该字段）
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取生命周期（录像文件生命周期设置，管理文件冷、热存储的时间，不修改生命周期时，不需要该字段）
                     * @return LifeCycle 生命周期（录像文件生命周期设置，管理文件冷、热存储的时间，不修改生命周期时，不需要该字段）
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置生命周期（录像文件生命周期设置，管理文件冷、热存储的时间，不修改生命周期时，不需要该字段）
                     * @param _lifeCycle 生命周期（录像文件生命周期设置，管理文件冷、热存储的时间，不修改生命周期时，不需要该字段）
                     * 
                     */
                    void SetLifeCycle(const LifeCycleData& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取要新增的设备通道（Json数组，没有新增时，不需要该字段，一次添加通道总数不超过5000个，包括组织目录下的通道数量）
                     * @return Add 要新增的设备通道（Json数组，没有新增时，不需要该字段，一次添加通道总数不超过5000个，包括组织目录下的通道数量）
                     * 
                     */
                    std::vector<ChannelInfo> GetAdd() const;

                    /**
                     * 设置要新增的设备通道（Json数组，没有新增时，不需要该字段，一次添加通道总数不超过5000个，包括组织目录下的通道数量）
                     * @param _add 要新增的设备通道（Json数组，没有新增时，不需要该字段，一次添加通道总数不超过5000个，包括组织目录下的通道数量）
                     * 
                     */
                    void SetAdd(const std::vector<ChannelInfo>& _add);

                    /**
                     * 判断参数 Add 是否已赋值
                     * @return Add 是否已赋值
                     * 
                     */
                    bool AddHasBeenSet() const;

                    /**
                     * 获取要删除的设备通道（Json数组，内容为要删除的设备通道id，没有删除设备通道时，不需要该字段）
                     * @return Del 要删除的设备通道（Json数组，内容为要删除的设备通道id，没有删除设备通道时，不需要该字段）
                     * 
                     */
                    std::vector<std::string> GetDel() const;

                    /**
                     * 设置要删除的设备通道（Json数组，内容为要删除的设备通道id，没有删除设备通道时，不需要该字段）
                     * @param _del 要删除的设备通道（Json数组，内容为要删除的设备通道id，没有删除设备通道时，不需要该字段）
                     * 
                     */
                    void SetDel(const std::vector<std::string>& _del);

                    /**
                     * 判断参数 Del 是否已赋值
                     * @return Del 是否已赋值
                     * 
                     */
                    bool DelHasBeenSet() const;

                    /**
                     * 获取添加组织目录下所有设备通道（Json数组，可以为空，并且通道总数量不超过5000个（包括Add字段通道数量））
                     * @return OrganizationId 添加组织目录下所有设备通道（Json数组，可以为空，并且通道总数量不超过5000个（包括Add字段通道数量））
                     * 
                     */
                    std::vector<std::string> GetOrganizationId() const;

                    /**
                     * 设置添加组织目录下所有设备通道（Json数组，可以为空，并且通道总数量不超过5000个（包括Add字段通道数量））
                     * @param _organizationId 添加组织目录下所有设备通道（Json数组，可以为空，并且通道总数量不超过5000个（包括Add字段通道数量））
                     * 
                     */
                    void SetOrganizationId(const std::vector<std::string>& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                private:

                    /**
                     * 录像上云计划名称（仅支持中文、英文、数字、_、-，长度不超过32个字符，计划名称全局唯一，不能为空，不能重复，不修改名称时，不需要该字段）
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 录制模板ID（从查询录像上云模板列表接口ListRecordBackupTemplates中获取，不修改模板ID时，不需要该字段）
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 录像上云计划描述（仅支持中文、英文、数字、_、-，长度不超过128个字符， 不修改描述时，不需要该字段）
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 生命周期（录像文件生命周期设置，管理文件冷、热存储的时间，不修改生命周期时，不需要该字段）
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * 要新增的设备通道（Json数组，没有新增时，不需要该字段，一次添加通道总数不超过5000个，包括组织目录下的通道数量）
                     */
                    std::vector<ChannelInfo> m_add;
                    bool m_addHasBeenSet;

                    /**
                     * 要删除的设备通道（Json数组，内容为要删除的设备通道id，没有删除设备通道时，不需要该字段）
                     */
                    std::vector<std::string> m_del;
                    bool m_delHasBeenSet;

                    /**
                     * 添加组织目录下所有设备通道（Json数组，可以为空，并且通道总数量不超过5000个（包括Add字段通道数量））
                     */
                    std::vector<std::string> m_organizationId;
                    bool m_organizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATERECORDBACKUPPLANMODIFY_H_
