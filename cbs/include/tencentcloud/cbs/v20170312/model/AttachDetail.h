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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_ATTACHDETAIL_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_ATTACHDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述一个实例已挂载和可挂载数据盘的数量。
                */
                class AttachDetail : public AbstractModel
                {
                public:
                    AttachDetail();
                    ~AttachDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例已挂载数据盘的数量。
                     * @return AttachedDiskCount 实例已挂载数据盘的数量。
                     * 
                     */
                    uint64_t GetAttachedDiskCount() const;

                    /**
                     * 设置实例已挂载数据盘的数量。
                     * @param _attachedDiskCount 实例已挂载数据盘的数量。
                     * 
                     */
                    void SetAttachedDiskCount(const uint64_t& _attachedDiskCount);

                    /**
                     * 判断参数 AttachedDiskCount 是否已赋值
                     * @return AttachedDiskCount 是否已赋值
                     * 
                     */
                    bool AttachedDiskCountHasBeenSet() const;

                    /**
                     * 获取实例最大可挂载数据盘的数量。
                     * @return MaxAttachCount 实例最大可挂载数据盘的数量。
                     * 
                     */
                    uint64_t GetMaxAttachCount() const;

                    /**
                     * 设置实例最大可挂载数据盘的数量。
                     * @param _maxAttachCount 实例最大可挂载数据盘的数量。
                     * 
                     */
                    void SetMaxAttachCount(const uint64_t& _maxAttachCount);

                    /**
                     * 判断参数 MaxAttachCount 是否已赋值
                     * @return MaxAttachCount 是否已赋值
                     * 
                     */
                    bool MaxAttachCountHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例已挂载数据盘的数量。
                     */
                    uint64_t m_attachedDiskCount;
                    bool m_attachedDiskCountHasBeenSet;

                    /**
                     * 实例最大可挂载数据盘的数量。
                     */
                    uint64_t m_maxAttachCount;
                    bool m_maxAttachCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_ATTACHDETAIL_H_
