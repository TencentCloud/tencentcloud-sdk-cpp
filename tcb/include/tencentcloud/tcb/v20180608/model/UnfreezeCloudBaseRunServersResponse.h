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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_UNFREEZECLOUDBASERUNSERVERSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_UNFREEZECLOUDBASERUNSERVERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * UnfreezeCloudBaseRunServers返回参数结构体
                */
                class UnfreezeCloudBaseRunServersResponse : public AbstractModel
                {
                public:
                    UnfreezeCloudBaseRunServersResponse();
                    ~UnfreezeCloudBaseRunServersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量执行结果
成功：succ
失败：fail
部分：partial（部分成功、部分失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 批量执行结果
成功：succ
失败：fail
部分：partial（部分成功、部分失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取解冻失败列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailServerList 解冻失败列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailServerList() const;

                    /**
                     * 判断参数 FailServerList 是否已赋值
                     * @return FailServerList 是否已赋值
                     * 
                     */
                    bool FailServerListHasBeenSet() const;

                private:

                    /**
                     * 批量执行结果
成功：succ
失败：fail
部分：partial（部分成功、部分失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 解冻失败列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failServerList;
                    bool m_failServerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UNFREEZECLOUDBASERUNSERVERSRESPONSE_H_
