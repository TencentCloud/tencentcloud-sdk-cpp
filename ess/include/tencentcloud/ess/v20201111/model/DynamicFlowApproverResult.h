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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DYNAMICFLOWAPPROVERRESULT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DYNAMICFLOWAPPROVERRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 动态添加签署人的结果信息
                */
                class DynamicFlowApproverResult : public AbstractModel
                {
                public:
                    DynamicFlowApproverResult();
                    ~DynamicFlowApproverResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署方角色编号，签署方角色编号是用于区分同一个流程中不同签署方的唯一标识。不同的流程会出现同样的签署方角色编号。

填写控件和签署控件都与特定的角色编号关联。

在进行新增签署方操作时，建议记录下该签署方的角色编号。后续可以拉取流程信息，用来判断该签署方的当前状态。

                     * @return RecipientId 签署方角色编号，签署方角色编号是用于区分同一个流程中不同签署方的唯一标识。不同的流程会出现同样的签署方角色编号。

填写控件和签署控件都与特定的角色编号关联。

在进行新增签署方操作时，建议记录下该签署方的角色编号。后续可以拉取流程信息，用来判断该签署方的当前状态。

                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署方角色编号，签署方角色编号是用于区分同一个流程中不同签署方的唯一标识。不同的流程会出现同样的签署方角色编号。

填写控件和签署控件都与特定的角色编号关联。

在进行新增签署方操作时，建议记录下该签署方的角色编号。后续可以拉取流程信息，用来判断该签署方的当前状态。

                     * @param _recipientId 签署方角色编号，签署方角色编号是用于区分同一个流程中不同签署方的唯一标识。不同的流程会出现同样的签署方角色编号。

填写控件和签署控件都与特定的角色编号关联。

在进行新增签署方操作时，建议记录下该签署方的角色编号。后续可以拉取流程信息，用来判断该签署方的当前状态。

                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。

可以使用签署方的唯一编号来生成签署链接（也可以通过RecipientId来生成签署链接）。
                     * @return SignId 签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。

可以使用签署方的唯一编号来生成签署链接（也可以通过RecipientId来生成签署链接）。
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。

可以使用签署方的唯一编号来生成签署链接（也可以通过RecipientId来生成签署链接）。
                     * @param _signId 签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。

可以使用签署方的唯一编号来生成签署链接（也可以通过RecipientId来生成签署链接）。
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取签署方当前状态，会出现下面的状态

2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
8：待填写
9：因为各种原因（签署人改名等）而终止
10：填写完成
15：已解除
19：转他人处理
                     * @return ApproverStatus 签署方当前状态，会出现下面的状态

2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
8：待填写
9：因为各种原因（签署人改名等）而终止
10：填写完成
15：已解除
19：转他人处理
                     * 
                     */
                    int64_t GetApproverStatus() const;

                    /**
                     * 设置签署方当前状态，会出现下面的状态

2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
8：待填写
9：因为各种原因（签署人改名等）而终止
10：填写完成
15：已解除
19：转他人处理
                     * @param _approverStatus 签署方当前状态，会出现下面的状态

2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
8：待填写
9：因为各种原因（签署人改名等）而终止
10：填写完成
15：已解除
19：转他人处理
                     * 
                     */
                    void SetApproverStatus(const int64_t& _approverStatus);

                    /**
                     * 判断参数 ApproverStatus 是否已赋值
                     * @return ApproverStatus 是否已赋值
                     * 
                     */
                    bool ApproverStatusHasBeenSet() const;

                private:

                    /**
                     * 签署方角色编号，签署方角色编号是用于区分同一个流程中不同签署方的唯一标识。不同的流程会出现同样的签署方角色编号。

填写控件和签署控件都与特定的角色编号关联。

在进行新增签署方操作时，建议记录下该签署方的角色编号。后续可以拉取流程信息，用来判断该签署方的当前状态。

                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。

可以使用签署方的唯一编号来生成签署链接（也可以通过RecipientId来生成签署链接）。
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 签署方当前状态，会出现下面的状态

2：待签署
3：已签署
4：已拒绝
5：已过期
6：已撤销
8：待填写
9：因为各种原因（签署人改名等）而终止
10：填写完成
15：已解除
19：转他人处理
                     */
                    int64_t m_approverStatus;
                    bool m_approverStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DYNAMICFLOWAPPROVERRESULT_H_
