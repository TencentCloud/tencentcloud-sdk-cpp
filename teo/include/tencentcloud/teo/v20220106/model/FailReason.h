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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_FAILREASON_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_FAILREASON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 失败原因
                */
                class FailReason : public AbstractModel
                {
                public:
                    FailReason();
                    ~FailReason() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取失败原因
                     * @return Reason 失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因
                     * @param _reason 失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取处理失败的资源列表。
该列表元素来源于输入参数中的Targets，因此格式和入参中的Targets保持一致
                     * @return Targets 处理失败的资源列表。
该列表元素来源于输入参数中的Targets，因此格式和入参中的Targets保持一致
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置处理失败的资源列表。
该列表元素来源于输入参数中的Targets，因此格式和入参中的Targets保持一致
                     * @param _targets 处理失败的资源列表。
该列表元素来源于输入参数中的Targets，因此格式和入参中的Targets保持一致
                     * 
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * 失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 处理失败的资源列表。
该列表元素来源于输入参数中的Targets，因此格式和入参中的Targets保持一致
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_FAILREASON_H_
