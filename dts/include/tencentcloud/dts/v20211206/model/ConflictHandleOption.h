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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFLICTHANDLEOPTION_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFLICTHANDLEOPTION_H_

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
                * 冲突处理里的详细描述
                */
                class ConflictHandleOption : public AbstractModel
                {
                public:
                    ConflictHandleOption();
                    ~ConflictHandleOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取条件覆盖的列
                     * @return ConditionColumn 条件覆盖的列
                     * 
                     */
                    std::string GetConditionColumn() const;

                    /**
                     * 设置条件覆盖的列
                     * @param _conditionColumn 条件覆盖的列
                     * 
                     */
                    void SetConditionColumn(const std::string& _conditionColumn);

                    /**
                     * 判断参数 ConditionColumn 是否已赋值
                     * @return ConditionColumn 是否已赋值
                     * 
                     */
                    bool ConditionColumnHasBeenSet() const;

                    /**
                     * 获取条件覆盖操作
                     * @return ConditionOperator 条件覆盖操作
                     * 
                     */
                    std::string GetConditionOperator() const;

                    /**
                     * 设置条件覆盖操作
                     * @param _conditionOperator 条件覆盖操作
                     * 
                     */
                    void SetConditionOperator(const std::string& _conditionOperator);

                    /**
                     * 判断参数 ConditionOperator 是否已赋值
                     * @return ConditionOperator 是否已赋值
                     * 
                     */
                    bool ConditionOperatorHasBeenSet() const;

                    /**
                     * 获取条件覆盖优先级处理
                     * @return ConditionOrderInSrcAndDst 条件覆盖优先级处理
                     * 
                     */
                    std::string GetConditionOrderInSrcAndDst() const;

                    /**
                     * 设置条件覆盖优先级处理
                     * @param _conditionOrderInSrcAndDst 条件覆盖优先级处理
                     * 
                     */
                    void SetConditionOrderInSrcAndDst(const std::string& _conditionOrderInSrcAndDst);

                    /**
                     * 判断参数 ConditionOrderInSrcAndDst 是否已赋值
                     * @return ConditionOrderInSrcAndDst 是否已赋值
                     * 
                     */
                    bool ConditionOrderInSrcAndDstHasBeenSet() const;

                private:

                    /**
                     * 条件覆盖的列
                     */
                    std::string m_conditionColumn;
                    bool m_conditionColumnHasBeenSet;

                    /**
                     * 条件覆盖操作
                     */
                    std::string m_conditionOperator;
                    bool m_conditionOperatorHasBeenSet;

                    /**
                     * 条件覆盖优先级处理
                     */
                    std::string m_conditionOrderInSrcAndDst;
                    bool m_conditionOrderInSrcAndDstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFLICTHANDLEOPTION_H_
