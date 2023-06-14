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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAUTOCALLOUTTASKRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAUTOCALLOUTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AutoCalloutTaskCalleeInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAutoCalloutTask返回参数结构体
                */
                class DescribeAutoCalloutTaskResponse : public AbstractModel
                {
                public:
                    DescribeAutoCalloutTaskResponse();
                    ~DescribeAutoCalloutTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名
                     * @return Name 任务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取任务描述
                     * @return Description 任务描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取任务起始时间戳
                     * @return NotBefore 任务起始时间戳
                     * 
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取任务结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotAfter 任务结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取主叫列表
                     * @return Callers 主叫列表
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取被叫信息列表
                     * @return Callees 被叫信息列表
                     * 
                     */
                    std::vector<AutoCalloutTaskCalleeInfo> GetCallees() const;

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取任务使用的IvrId
                     * @return IvrId 任务使用的IvrId
                     * 
                     */
                    uint64_t GetIvrId() const;

                    /**
                     * 判断参数 IvrId 是否已赋值
                     * @return IvrId 是否已赋值
                     * 
                     */
                    bool IvrIdHasBeenSet() const;

                    /**
                     * 获取任务状态 0初始 1运行中 2已完成 3结束中 4已终止
                     * @return State 任务状态 0初始 1运行中 2已完成 3结束中 4已终止
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 任务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务起始时间戳
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * 任务结束时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * 主叫列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 被叫信息列表
                     */
                    std::vector<AutoCalloutTaskCalleeInfo> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * 任务使用的IvrId
                     */
                    uint64_t m_ivrId;
                    bool m_ivrIdHasBeenSet;

                    /**
                     * 任务状态 0初始 1运行中 2已完成 3结束中 4已终止
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAUTOCALLOUTTASKRESPONSE_H_
