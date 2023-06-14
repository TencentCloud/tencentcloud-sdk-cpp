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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareObject.h>
#include <tencentcloud/dts/v20211206/model/CompareOptions.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifyCompareTask请求参数结构体
                */
                class ModifyCompareTaskRequest : public AbstractModel
                {
                public:
                    ModifyCompareTaskRequest();
                    ~ModifyCompareTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 Id
                     * @return JobId 任务 Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务 Id
                     * @param _jobId 任务 Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * @return CompareTaskId 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * @param _compareTaskId 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)、custom(自定义)，注意自定义对比对象必须是迁移对象的子集
                     * @return ObjectMode 数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)、custom(自定义)，注意自定义对比对象必须是迁移对象的子集
                     * 
                     */
                    std::string GetObjectMode() const;

                    /**
                     * 设置数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)、custom(自定义)，注意自定义对比对象必须是迁移对象的子集
                     * @param _objectMode 数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)、custom(自定义)，注意自定义对比对象必须是迁移对象的子集
                     * 
                     */
                    void SetObjectMode(const std::string& _objectMode);

                    /**
                     * 判断参数 ObjectMode 是否已赋值
                     * @return ObjectMode 是否已赋值
                     * 
                     */
                    bool ObjectModeHasBeenSet() const;

                    /**
                     * 获取对比对象，若CompareObjectMode取值为custom，则此项必填
                     * @return Objects 对比对象，若CompareObjectMode取值为custom，则此项必填
                     * 
                     */
                    CompareObject GetObjects() const;

                    /**
                     * 设置对比对象，若CompareObjectMode取值为custom，则此项必填
                     * @param _objects 对比对象，若CompareObjectMode取值为custom，则此项必填
                     * 
                     */
                    void SetObjects(const CompareObject& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取一致性校验选项
                     * @return Options 一致性校验选项
                     * 
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置一致性校验选项
                     * @param _options 一致性校验选项
                     * 
                     */
                    void SetOptions(const CompareOptions& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * 任务 Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 对比任务 ID，形如：dts-8yv4w2i1-cmp-37skmii9
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)、custom(自定义)，注意自定义对比对象必须是迁移对象的子集
                     */
                    std::string m_objectMode;
                    bool m_objectModeHasBeenSet;

                    /**
                     * 对比对象，若CompareObjectMode取值为custom，则此项必填
                     */
                    CompareObject m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 一致性校验选项
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYCOMPARETASKREQUEST_H_
