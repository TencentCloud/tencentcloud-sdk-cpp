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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_JOBFLOWRESOURCESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_JOBFLOWRESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/JobFlowResource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 流程作业资源描述
                */
                class JobFlowResourceSpec : public AbstractModel
                {
                public:
                    JobFlowResourceSpec();
                    ~JobFlowResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主节点数量。
                     * @return MasterCount 主节点数量。
                     * 
                     */
                    int64_t GetMasterCount() const;

                    /**
                     * 设置主节点数量。
                     * @param _masterCount 主节点数量。
                     * 
                     */
                    void SetMasterCount(const int64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     * 
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取主节点配置。
                     * @return MasterResourceSpec 主节点配置。
                     * 
                     */
                    JobFlowResource GetMasterResourceSpec() const;

                    /**
                     * 设置主节点配置。
                     * @param _masterResourceSpec 主节点配置。
                     * 
                     */
                    void SetMasterResourceSpec(const JobFlowResource& _masterResourceSpec);

                    /**
                     * 判断参数 MasterResourceSpec 是否已赋值
                     * @return MasterResourceSpec 是否已赋值
                     * 
                     */
                    bool MasterResourceSpecHasBeenSet() const;

                    /**
                     * 获取Core节点数量
                     * @return CoreCount Core节点数量
                     * 
                     */
                    int64_t GetCoreCount() const;

                    /**
                     * 设置Core节点数量
                     * @param _coreCount Core节点数量
                     * 
                     */
                    void SetCoreCount(const int64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取Core节点配置。
                     * @return CoreResourceSpec Core节点配置。
                     * 
                     */
                    JobFlowResource GetCoreResourceSpec() const;

                    /**
                     * 设置Core节点配置。
                     * @param _coreResourceSpec Core节点配置。
                     * 
                     */
                    void SetCoreResourceSpec(const JobFlowResource& _coreResourceSpec);

                    /**
                     * 判断参数 CoreResourceSpec 是否已赋值
                     * @return CoreResourceSpec 是否已赋值
                     * 
                     */
                    bool CoreResourceSpecHasBeenSet() const;

                    /**
                     * 获取Task节点数量。
                     * @return TaskCount Task节点数量。
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置Task节点数量。
                     * @param _taskCount Task节点数量。
                     * 
                     */
                    void SetTaskCount(const int64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取Common节点数量。
                     * @return CommonCount Common节点数量。
                     * 
                     */
                    int64_t GetCommonCount() const;

                    /**
                     * 设置Common节点数量。
                     * @param _commonCount Common节点数量。
                     * 
                     */
                    void SetCommonCount(const int64_t& _commonCount);

                    /**
                     * 判断参数 CommonCount 是否已赋值
                     * @return CommonCount 是否已赋值
                     * 
                     */
                    bool CommonCountHasBeenSet() const;

                    /**
                     * 获取Task节点配置。
                     * @return TaskResourceSpec Task节点配置。
                     * 
                     */
                    JobFlowResource GetTaskResourceSpec() const;

                    /**
                     * 设置Task节点配置。
                     * @param _taskResourceSpec Task节点配置。
                     * 
                     */
                    void SetTaskResourceSpec(const JobFlowResource& _taskResourceSpec);

                    /**
                     * 判断参数 TaskResourceSpec 是否已赋值
                     * @return TaskResourceSpec 是否已赋值
                     * 
                     */
                    bool TaskResourceSpecHasBeenSet() const;

                    /**
                     * 获取Common节点配置。
                     * @return CommonResourceSpec Common节点配置。
                     * 
                     */
                    JobFlowResource GetCommonResourceSpec() const;

                    /**
                     * 设置Common节点配置。
                     * @param _commonResourceSpec Common节点配置。
                     * 
                     */
                    void SetCommonResourceSpec(const JobFlowResource& _commonResourceSpec);

                    /**
                     * 判断参数 CommonResourceSpec 是否已赋值
                     * @return CommonResourceSpec 是否已赋值
                     * 
                     */
                    bool CommonResourceSpecHasBeenSet() const;

                private:

                    /**
                     * 主节点数量。
                     */
                    int64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * 主节点配置。
                     */
                    JobFlowResource m_masterResourceSpec;
                    bool m_masterResourceSpecHasBeenSet;

                    /**
                     * Core节点数量
                     */
                    int64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Core节点配置。
                     */
                    JobFlowResource m_coreResourceSpec;
                    bool m_coreResourceSpecHasBeenSet;

                    /**
                     * Task节点数量。
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Common节点数量。
                     */
                    int64_t m_commonCount;
                    bool m_commonCountHasBeenSet;

                    /**
                     * Task节点配置。
                     */
                    JobFlowResource m_taskResourceSpec;
                    bool m_taskResourceSpecHasBeenSet;

                    /**
                     * Common节点配置。
                     */
                    JobFlowResource m_commonResourceSpec;
                    bool m_commonResourceSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_JOBFLOWRESOURCESPEC_H_
