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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_UPDATETRANSFORMATIONREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_UPDATETRANSFORMATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Transformation.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * UpdateTransformation请求参数结构体
                */
                class UpdateTransformationRequest : public AbstractModel
                {
                public:
                    UpdateTransformationRequest();
                    ~UpdateTransformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取转换器id
                     * @return TransformationId 转换器id
                     * 
                     */
                    std::string GetTransformationId() const;

                    /**
                     * 设置转换器id
                     * @param _transformationId 转换器id
                     * 
                     */
                    void SetTransformationId(const std::string& _transformationId);

                    /**
                     * 判断参数 TransformationId 是否已赋值
                     * @return TransformationId 是否已赋值
                     * 
                     */
                    bool TransformationIdHasBeenSet() const;

                    /**
                     * 获取一个转换规则列表，当前仅限定一个
                     * @return Transformations 一个转换规则列表，当前仅限定一个
                     * 
                     */
                    std::vector<Transformation> GetTransformations() const;

                    /**
                     * 设置一个转换规则列表，当前仅限定一个
                     * @param _transformations 一个转换规则列表，当前仅限定一个
                     * 
                     */
                    void SetTransformations(const std::vector<Transformation>& _transformations);

                    /**
                     * 判断参数 Transformations 是否已赋值
                     * @return Transformations 是否已赋值
                     * 
                     */
                    bool TransformationsHasBeenSet() const;

                private:

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 转换器id
                     */
                    std::string m_transformationId;
                    bool m_transformationIdHasBeenSet;

                    /**
                     * 一个转换规则列表，当前仅限定一个
                     */
                    std::vector<Transformation> m_transformations;
                    bool m_transformationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_UPDATETRANSFORMATIONREQUEST_H_
