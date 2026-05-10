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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateRecordingRuleYamlTask返回参数结构体
                */
                class CreateRecordingRuleYamlTaskResponse : public AbstractModel
                {
                public:
                    CreateRecordingRuleYamlTaskResponse();
                    ~CreateRecordingRuleYamlTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Yaml配置id， 可以关联多子任务</p>
                     * @return YamlId <p>Yaml配置id， 可以关联多子任务</p>
                     * 
                     */
                    std::string GetYamlId() const;

                    /**
                     * 判断参数 YamlId 是否已赋值
                     * @return YamlId 是否已赋值
                     * 
                     */
                    bool YamlIdHasBeenSet() const;

                private:

                    /**
                     * <p>Yaml配置id， 可以关联多子任务</p>
                     */
                    std::string m_yamlId;
                    bool m_yamlIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATERECORDINGRULEYAMLTASKRESPONSE_H_
