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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_PSAREGULATION_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_PSAREGULATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/Tag.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 一条预授权规则
                */
                class PsaRegulation : public AbstractModel
                {
                public:
                    PsaRegulation();
                    ~PsaRegulation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return PsaId 规则ID
                     * 
                     */
                    std::string GetPsaId() const;

                    /**
                     * 设置规则ID
                     * @param _psaId 规则ID
                     * 
                     */
                    void SetPsaId(const std::string& _psaId);

                    /**
                     * 判断参数 PsaId 是否已赋值
                     * @return PsaId 是否已赋值
                     * 
                     */
                    bool PsaIdHasBeenSet() const;

                    /**
                     * 获取规则别名
                     * @return PsaName 规则别名
                     * 
                     */
                    std::string GetPsaName() const;

                    /**
                     * 设置规则别名
                     * @param _psaName 规则别名
                     * 
                     */
                    void SetPsaName(const std::string& _psaName);

                    /**
                     * 判断参数 PsaName 是否已赋值
                     * @return PsaName 是否已赋值
                     * 
                     */
                    bool PsaNameHasBeenSet() const;

                    /**
                     * 获取关联标签数量
                     * @return TagCount 关联标签数量
                     * 
                     */
                    uint64_t GetTagCount() const;

                    /**
                     * 设置关联标签数量
                     * @param _tagCount 关联标签数量
                     * 
                     */
                    void SetTagCount(const uint64_t& _tagCount);

                    /**
                     * 判断参数 TagCount 是否已赋值
                     * @return TagCount 是否已赋值
                     * 
                     */
                    bool TagCountHasBeenSet() const;

                    /**
                     * 获取关联实例数量
                     * @return InstanceCount 关联实例数量
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置关联实例数量
                     * @param _instanceCount 关联实例数量
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取故障实例数量
                     * @return RepairCount 故障实例数量
                     * 
                     */
                    uint64_t GetRepairCount() const;

                    /**
                     * 设置故障实例数量
                     * @param _repairCount 故障实例数量
                     * 
                     */
                    void SetRepairCount(const uint64_t& _repairCount);

                    /**
                     * 判断参数 RepairCount 是否已赋值
                     * @return RepairCount 是否已赋值
                     * 
                     */
                    bool RepairCountHasBeenSet() const;

                    /**
                     * 获取故障实例上限
                     * @return RepairLimit 故障实例上限
                     * 
                     */
                    uint64_t GetRepairLimit() const;

                    /**
                     * 设置故障实例上限
                     * @param _repairLimit 故障实例上限
                     * 
                     */
                    void SetRepairLimit(const uint64_t& _repairLimit);

                    /**
                     * 判断参数 RepairLimit 是否已赋值
                     * @return RepairLimit 是否已赋值
                     * 
                     */
                    bool RepairLimitHasBeenSet() const;

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
                     * 获取规则备注
                     * @return PsaDescription 规则备注
                     * 
                     */
                    std::string GetPsaDescription() const;

                    /**
                     * 设置规则备注
                     * @param _psaDescription 规则备注
                     * 
                     */
                    void SetPsaDescription(const std::string& _psaDescription);

                    /**
                     * 判断参数 PsaDescription 是否已赋值
                     * @return PsaDescription 是否已赋值
                     * 
                     */
                    bool PsaDescriptionHasBeenSet() const;

                    /**
                     * 获取关联标签
                     * @return Tags 关联标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置关联标签
                     * @param _tags 关联标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取关联故障类型id
                     * @return TaskTypeIds 关联故障类型id
                     * 
                     */
                    std::vector<uint64_t> GetTaskTypeIds() const;

                    /**
                     * 设置关联故障类型id
                     * @param _taskTypeIds 关联故障类型id
                     * 
                     */
                    void SetTaskTypeIds(const std::vector<uint64_t>& _taskTypeIds);

                    /**
                     * 判断参数 TaskTypeIds 是否已赋值
                     * @return TaskTypeIds 是否已赋值
                     * 
                     */
                    bool TaskTypeIdsHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_psaId;
                    bool m_psaIdHasBeenSet;

                    /**
                     * 规则别名
                     */
                    std::string m_psaName;
                    bool m_psaNameHasBeenSet;

                    /**
                     * 关联标签数量
                     */
                    uint64_t m_tagCount;
                    bool m_tagCountHasBeenSet;

                    /**
                     * 关联实例数量
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 故障实例数量
                     */
                    uint64_t m_repairCount;
                    bool m_repairCountHasBeenSet;

                    /**
                     * 故障实例上限
                     */
                    uint64_t m_repairLimit;
                    bool m_repairLimitHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则备注
                     */
                    std::string m_psaDescription;
                    bool m_psaDescriptionHasBeenSet;

                    /**
                     * 关联标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 关联故障类型id
                     */
                    std::vector<uint64_t> m_taskTypeIds;
                    bool m_taskTypeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_PSAREGULATION_H_
