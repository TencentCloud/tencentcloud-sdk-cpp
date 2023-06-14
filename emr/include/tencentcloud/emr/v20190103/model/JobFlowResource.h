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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_JOBFLOWRESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_JOBFLOWRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/DiskGroup.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 机器资源描述。
                */
                class JobFlowResource : public AbstractModel
                {
                public:
                    JobFlowResource();
                    ~JobFlowResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器类型描述。
                     * @return Spec 机器类型描述。
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置机器类型描述。
                     * @param _spec 机器类型描述。
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取机器类型描述，可参考CVM的该含义。
                     * @return InstanceType 机器类型描述，可参考CVM的该含义。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机器类型描述，可参考CVM的该含义。
                     * @param _instanceType 机器类型描述，可参考CVM的该含义。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取标签KV对。
                     * @return Tags 标签KV对。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签KV对。
                     * @param _tags 标签KV对。
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
                     * 获取磁盘描述列表。
                     * @return DiskGroups 磁盘描述列表。
                     * 
                     */
                    std::vector<DiskGroup> GetDiskGroups() const;

                    /**
                     * 设置磁盘描述列表。
                     * @param _diskGroups 磁盘描述列表。
                     * 
                     */
                    void SetDiskGroups(const std::vector<DiskGroup>& _diskGroups);

                    /**
                     * 判断参数 DiskGroups 是否已赋值
                     * @return DiskGroups 是否已赋值
                     * 
                     */
                    bool DiskGroupsHasBeenSet() const;

                private:

                    /**
                     * 机器类型描述。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 机器类型描述，可参考CVM的该含义。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 标签KV对。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 磁盘描述列表。
                     */
                    std::vector<DiskGroup> m_diskGroups;
                    bool m_diskGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_JOBFLOWRESOURCE_H_
