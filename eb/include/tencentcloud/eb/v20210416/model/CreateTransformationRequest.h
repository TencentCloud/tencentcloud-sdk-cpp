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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONREQUEST_H_

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
                * CreateTransformation请求参数结构体
                */
                class CreateTransformationRequest : public AbstractModel
                {
                public:
                    CreateTransformationRequest();
                    ~CreateTransformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件总线 id
                     * @return EventBusId 事件总线 id
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件总线 id
                     * @param _eventBusId 事件总线 id
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
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
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
                     * 获取一个转换规则列表，当前仅限定一个;示例如下：[{"Extraction":{"ExtractionInputPath":"$.data.payload","Format":"JSON"},"EtlFilter":{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"},"Transform":{"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"},{"Key":"table","Value":"$.source.table","ValueType":"JSONPATH"},{"Key":"id","Value":"$.after.id","ValueType":"JSONPATH"},{"Key":"app_id","Value":"$.after.app_id","ValueType":"JSONPATH"},{"Key":"spu_id","Value":"$.after.spu_id","ValueType":"JSONPATH"}]}}]
                     * @return Transformations 一个转换规则列表，当前仅限定一个;示例如下：[{"Extraction":{"ExtractionInputPath":"$.data.payload","Format":"JSON"},"EtlFilter":{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"},"Transform":{"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"},{"Key":"table","Value":"$.source.table","ValueType":"JSONPATH"},{"Key":"id","Value":"$.after.id","ValueType":"JSONPATH"},{"Key":"app_id","Value":"$.after.app_id","ValueType":"JSONPATH"},{"Key":"spu_id","Value":"$.after.spu_id","ValueType":"JSONPATH"}]}}]
                     * 
                     */
                    std::vector<Transformation> GetTransformations() const;

                    /**
                     * 设置一个转换规则列表，当前仅限定一个;示例如下：[{"Extraction":{"ExtractionInputPath":"$.data.payload","Format":"JSON"},"EtlFilter":{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"},"Transform":{"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"},{"Key":"table","Value":"$.source.table","ValueType":"JSONPATH"},{"Key":"id","Value":"$.after.id","ValueType":"JSONPATH"},{"Key":"app_id","Value":"$.after.app_id","ValueType":"JSONPATH"},{"Key":"spu_id","Value":"$.after.spu_id","ValueType":"JSONPATH"}]}}]
                     * @param _transformations 一个转换规则列表，当前仅限定一个;示例如下：[{"Extraction":{"ExtractionInputPath":"$.data.payload","Format":"JSON"},"EtlFilter":{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"},"Transform":{"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"},{"Key":"table","Value":"$.source.table","ValueType":"JSONPATH"},{"Key":"id","Value":"$.after.id","ValueType":"JSONPATH"},{"Key":"app_id","Value":"$.after.app_id","ValueType":"JSONPATH"},{"Key":"spu_id","Value":"$.after.spu_id","ValueType":"JSONPATH"}]}}]
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
                     * 事件总线 id
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 规则id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 一个转换规则列表，当前仅限定一个;示例如下：[{"Extraction":{"ExtractionInputPath":"$.data.payload","Format":"JSON"},"EtlFilter":{"Filter":"{\"source\":\"ckafka.cloud.tencent\"}"},"Transform":{"OutputStructs":[{"Key":"op","Value":"$.op","ValueType":"JSONPATH"},{"Key":"table","Value":"$.source.table","ValueType":"JSONPATH"},{"Key":"id","Value":"$.after.id","ValueType":"JSONPATH"},{"Key":"app_id","Value":"$.after.app_id","ValueType":"JSONPATH"},{"Key":"spu_id","Value":"$.after.spu_id","ValueType":"JSONPATH"}]}}]
                     */
                    std::vector<Transformation> m_transformations;
                    bool m_transformationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONREQUEST_H_
