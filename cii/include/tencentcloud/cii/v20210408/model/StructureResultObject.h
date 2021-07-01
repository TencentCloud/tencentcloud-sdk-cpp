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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_STRUCTURERESULTOBJECT_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_STRUCTURERESULTOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 结构化结果
                */
                class StructureResultObject : public AbstractModel
                {
                public:
                    StructureResultObject();
                    ~StructureResultObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0表示正常返回
                     * @return Code 0表示正常返回
                     */
                    uint64_t GetCode() const;

                    /**
                     * 设置0表示正常返回
                     * @param Code 0表示正常返回
                     */
                    void SetCode(const uint64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取报告类型
                     * @return TaskType 报告类型
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置报告类型
                     * @param TaskType 报告类型
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取结构化结果
                     * @return StructureResult 结构化结果
                     */
                    std::string GetStructureResult() const;

                    /**
                     * 设置结构化结果
                     * @param StructureResult 结构化结果
                     */
                    void SetStructureResult(const std::string& _structureResult);

                    /**
                     * 判断参数 StructureResult 是否已赋值
                     * @return StructureResult 是否已赋值
                     */
                    bool StructureResultHasBeenSet() const;

                private:

                    /**
                     * 0表示正常返回
                     */
                    uint64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 报告类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 结构化结果
                     */
                    std::string m_structureResult;
                    bool m_structureResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_STRUCTURERESULTOBJECT_H_
