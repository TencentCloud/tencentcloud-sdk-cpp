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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NEWRESOURCESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NEWRESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Resource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 资源描述
                */
                class NewResourceSpec : public AbstractModel
                {
                public:
                    NewResourceSpec();
                    ~NewResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述Master节点资源
                     * @return MasterResourceSpec 描述Master节点资源
                     * 
                     */
                    Resource GetMasterResourceSpec() const;

                    /**
                     * 设置描述Master节点资源
                     * @param _masterResourceSpec 描述Master节点资源
                     * 
                     */
                    void SetMasterResourceSpec(const Resource& _masterResourceSpec);

                    /**
                     * 判断参数 MasterResourceSpec 是否已赋值
                     * @return MasterResourceSpec 是否已赋值
                     * 
                     */
                    bool MasterResourceSpecHasBeenSet() const;

                    /**
                     * 获取描述Core节点资源
                     * @return CoreResourceSpec 描述Core节点资源
                     * 
                     */
                    Resource GetCoreResourceSpec() const;

                    /**
                     * 设置描述Core节点资源
                     * @param _coreResourceSpec 描述Core节点资源
                     * 
                     */
                    void SetCoreResourceSpec(const Resource& _coreResourceSpec);

                    /**
                     * 判断参数 CoreResourceSpec 是否已赋值
                     * @return CoreResourceSpec 是否已赋值
                     * 
                     */
                    bool CoreResourceSpecHasBeenSet() const;

                    /**
                     * 获取描述Task节点资源
                     * @return TaskResourceSpec 描述Task节点资源
                     * 
                     */
                    Resource GetTaskResourceSpec() const;

                    /**
                     * 设置描述Task节点资源
                     * @param _taskResourceSpec 描述Task节点资源
                     * 
                     */
                    void SetTaskResourceSpec(const Resource& _taskResourceSpec);

                    /**
                     * 判断参数 TaskResourceSpec 是否已赋值
                     * @return TaskResourceSpec 是否已赋值
                     * 
                     */
                    bool TaskResourceSpecHasBeenSet() const;

                    /**
                     * 获取Master节点数量
                     * @return MasterCount Master节点数量
                     * 
                     */
                    int64_t GetMasterCount() const;

                    /**
                     * 设置Master节点数量
                     * @param _masterCount Master节点数量
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
                     * 获取Task节点数量
                     * @return TaskCount Task节点数量
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 设置Task节点数量
                     * @param _taskCount Task节点数量
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
                     * 获取描述Common节点资源
                     * @return CommonResourceSpec 描述Common节点资源
                     * 
                     */
                    Resource GetCommonResourceSpec() const;

                    /**
                     * 设置描述Common节点资源
                     * @param _commonResourceSpec 描述Common节点资源
                     * 
                     */
                    void SetCommonResourceSpec(const Resource& _commonResourceSpec);

                    /**
                     * 判断参数 CommonResourceSpec 是否已赋值
                     * @return CommonResourceSpec 是否已赋值
                     * 
                     */
                    bool CommonResourceSpecHasBeenSet() const;

                    /**
                     * 获取Common节点数量
                     * @return CommonCount Common节点数量
                     * 
                     */
                    int64_t GetCommonCount() const;

                    /**
                     * 设置Common节点数量
                     * @param _commonCount Common节点数量
                     * 
                     */
                    void SetCommonCount(const int64_t& _commonCount);

                    /**
                     * 判断参数 CommonCount 是否已赋值
                     * @return CommonCount 是否已赋值
                     * 
                     */
                    bool CommonCountHasBeenSet() const;

                private:

                    /**
                     * 描述Master节点资源
                     */
                    Resource m_masterResourceSpec;
                    bool m_masterResourceSpecHasBeenSet;

                    /**
                     * 描述Core节点资源
                     */
                    Resource m_coreResourceSpec;
                    bool m_coreResourceSpecHasBeenSet;

                    /**
                     * 描述Task节点资源
                     */
                    Resource m_taskResourceSpec;
                    bool m_taskResourceSpecHasBeenSet;

                    /**
                     * Master节点数量
                     */
                    int64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * Core节点数量
                     */
                    int64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Task节点数量
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 描述Common节点资源
                     */
                    Resource m_commonResourceSpec;
                    bool m_commonResourceSpecHasBeenSet;

                    /**
                     * Common节点数量
                     */
                    int64_t m_commonCount;
                    bool m_commonCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NEWRESOURCESPEC_H_
