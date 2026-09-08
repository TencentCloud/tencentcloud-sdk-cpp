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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRESOURCEGRAPHPRODUCTINGESTTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRESOURCEGRAPHPRODUCTINGESTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EBPFCollectRule.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyResourceGraphProductIngestTask请求参数结构体
                */
                class ModifyResourceGraphProductIngestTaskRequest : public AbstractModel
                {
                public:
                    ModifyResourceGraphProductIngestTaskRequest();
                    ~ModifyResourceGraphProductIngestTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源图谱id</p>
                     * @return ResourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    std::string GetResourceGraphId() const;

                    /**
                     * 设置<p>资源图谱id</p>
                     * @param _resourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    void SetResourceGraphId(const std::string& _resourceGraphId);

                    /**
                     * 判断参数 ResourceGraphId 是否已赋值
                     * @return ResourceGraphId 是否已赋值
                     * 
                     */
                    bool ResourceGraphIdHasBeenSet() const;

                    /**
                     * 获取<p>待修改的任务id</p>
                     * @return TaskId <p>待修改的任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>待修改的任务id</p>
                     * @param _taskId <p>待修改的任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>实例选择方案</p><p>枚举值：</p><ul><li>0： 所有示例</li><li>1： 按标签选择</li><li>2： 手动选择</li></ul>
                     * @return SelectionMode <p>实例选择方案</p><p>枚举值：</p><ul><li>0： 所有示例</li><li>1： 按标签选择</li><li>2： 手动选择</li></ul>
                     * 
                     */
                    uint64_t GetSelectionMode() const;

                    /**
                     * 设置<p>实例选择方案</p><p>枚举值：</p><ul><li>0： 所有示例</li><li>1： 按标签选择</li><li>2： 手动选择</li></ul>
                     * @param _selectionMode <p>实例选择方案</p><p>枚举值：</p><ul><li>0： 所有示例</li><li>1： 按标签选择</li><li>2： 手动选择</li></ul>
                     * 
                     */
                    void SetSelectionMode(const uint64_t& _selectionMode);

                    /**
                     * 判断参数 SelectionMode 是否已赋值
                     * @return SelectionMode 是否已赋值
                     * 
                     */
                    bool SelectionModeHasBeenSet() const;

                    /**
                     * 获取<p>实例id。当选择方式使用“指定实例”时，需要填写</p>
                     * @return InstanceIds <p>实例id。当选择方式使用“指定实例”时，需要填写</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例id。当选择方式使用“指定实例”时，需要填写</p>
                     * @param _instanceIds <p>实例id。当选择方式使用“指定实例”时，需要填写</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>eBPF 采集规则（仅 EBPF 产品）</p>
                     * @return EBPFCollectRule <p>eBPF 采集规则（仅 EBPF 产品）</p>
                     * 
                     */
                    EBPFCollectRule GetEBPFCollectRule() const;

                    /**
                     * 设置<p>eBPF 采集规则（仅 EBPF 产品）</p>
                     * @param _eBPFCollectRule <p>eBPF 采集规则（仅 EBPF 产品）</p>
                     * 
                     */
                    void SetEBPFCollectRule(const EBPFCollectRule& _eBPFCollectRule);

                    /**
                     * 判断参数 EBPFCollectRule 是否已赋值
                     * @return EBPFCollectRule 是否已赋值
                     * 
                     */
                    bool EBPFCollectRuleHasBeenSet() const;

                    /**
                     * 获取<p>标签。当实例选择方案使用“按标签选择”时，需要填写</p>
                     * @return Tags <p>标签。当实例选择方案使用“按标签选择”时，需要填写</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签。当实例选择方案使用“按标签选择”时，需要填写</p>
                     * @param _tags <p>标签。当实例选择方案使用“按标签选择”时，需要填写</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>资源图谱id</p>
                     */
                    std::string m_resourceGraphId;
                    bool m_resourceGraphIdHasBeenSet;

                    /**
                     * <p>待修改的任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>实例选择方案</p><p>枚举值：</p><ul><li>0： 所有示例</li><li>1： 按标签选择</li><li>2： 手动选择</li></ul>
                     */
                    uint64_t m_selectionMode;
                    bool m_selectionModeHasBeenSet;

                    /**
                     * <p>实例id。当选择方式使用“指定实例”时，需要填写</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>eBPF 采集规则（仅 EBPF 产品）</p>
                     */
                    EBPFCollectRule m_eBPFCollectRule;
                    bool m_eBPFCollectRuleHasBeenSet;

                    /**
                     * <p>标签。当实例选择方案使用“按标签选择”时，需要填写</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYRESOURCEGRAPHPRODUCTINGESTTASKREQUEST_H_
