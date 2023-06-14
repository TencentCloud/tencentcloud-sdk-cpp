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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (FlowInfo) 用于描述流程信息。
                */
                class FlowInfo : public AbstractModel
                {
                public:
                    FlowInfo();
                    ~FlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同名字
                     * @return FlowName 合同名字
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同名字
                     * @param _flowName 合同名字
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取签署截止时间戳，超过有效签署时间则该签署流程失败
                     * @return Deadline 签署截止时间戳，超过有效签署时间则该签署流程失败
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署截止时间戳，超过有效签署时间则该签署流程失败
                     * @param _deadline 签署截止时间戳，超过有效签署时间则该签署流程失败
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取合同描述
                     * @return FlowDescription 合同描述
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同描述
                     * @param _flowDescription 合同描述
                     * 
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     * 
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     * @return FlowType 合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     * @param _flowType 合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取回调地址
                     * @return CallbackUrl 回调地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址
                     * @param _callbackUrl 回调地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取用户自定义数据
                     * @return UserData 用户自定义数据
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置用户自定义数据
                     * @param _userData 用户自定义数据
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                private:

                    /**
                     * 合同名字
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 签署截止时间戳，超过有效签署时间则该签署流程失败
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 合同描述
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 用户自定义数据
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FLOWINFO_H_
