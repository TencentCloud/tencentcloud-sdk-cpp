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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PIPELINEINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PIPELINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * mongo输出聚合设置。输出默认 Change Event
                */
                class PipelineInfo : public AbstractModel
                {
                public:
                    PipelineInfo();
                    ~PipelineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取聚合运算符：$addFields、$match、$project、$replaceRoot、$redact、$replaceWith、$set、$unset。其中 $replaceWith、$set、$unset 只有当订阅实例是4.2及以上版本可选。
                     * @return AggOp 聚合运算符：$addFields、$match、$project、$replaceRoot、$redact、$replaceWith、$set、$unset。其中 $replaceWith、$set、$unset 只有当订阅实例是4.2及以上版本可选。
                     * 
                     */
                    std::string GetAggOp() const;

                    /**
                     * 设置聚合运算符：$addFields、$match、$project、$replaceRoot、$redact、$replaceWith、$set、$unset。其中 $replaceWith、$set、$unset 只有当订阅实例是4.2及以上版本可选。
                     * @param _aggOp 聚合运算符：$addFields、$match、$project、$replaceRoot、$redact、$replaceWith、$set、$unset。其中 $replaceWith、$set、$unset 只有当订阅实例是4.2及以上版本可选。
                     * 
                     */
                    void SetAggOp(const std::string& _aggOp);

                    /**
                     * 判断参数 AggOp 是否已赋值
                     * @return AggOp 是否已赋值
                     * 
                     */
                    bool AggOpHasBeenSet() const;

                    /**
                     * 获取聚合表达式。必须是json格式
                     * @return AggCmd 聚合表达式。必须是json格式
                     * 
                     */
                    std::string GetAggCmd() const;

                    /**
                     * 设置聚合表达式。必须是json格式
                     * @param _aggCmd 聚合表达式。必须是json格式
                     * 
                     */
                    void SetAggCmd(const std::string& _aggCmd);

                    /**
                     * 判断参数 AggCmd 是否已赋值
                     * @return AggCmd 是否已赋值
                     * 
                     */
                    bool AggCmdHasBeenSet() const;

                private:

                    /**
                     * 聚合运算符：$addFields、$match、$project、$replaceRoot、$redact、$replaceWith、$set、$unset。其中 $replaceWith、$set、$unset 只有当订阅实例是4.2及以上版本可选。
                     */
                    std::string m_aggOp;
                    bool m_aggOpHasBeenSet;

                    /**
                     * 聚合表达式。必须是json格式
                     */
                    std::string m_aggCmd;
                    bool m_aggCmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PIPELINEINFO_H_
