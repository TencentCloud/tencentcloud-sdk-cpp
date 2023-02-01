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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWRECORDS_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWRECORDS_H_

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
                * 催办接口返回详细信息
                */
                class RemindFlowRecords : public AbstractModel
                {
                public:
                    RemindFlowRecords();
                    ~RemindFlowRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否能够催办
                     * @return CanRemind 是否能够催办
                     */
                    bool GetCanRemind() const;

                    /**
                     * 设置是否能够催办
                     * @param CanRemind 是否能够催办
                     */
                    void SetCanRemind(const bool& _canRemind);

                    /**
                     * 判断参数 CanRemind 是否已赋值
                     * @return CanRemind 是否已赋值
                     */
                    bool CanRemindHasBeenSet() const;

                    /**
                     * 获取合同id
                     * @return FlowId 合同id
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同id
                     * @param FlowId 合同id
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取催办详情
                     * @return RemindMessage 催办详情
                     */
                    std::string GetRemindMessage() const;

                    /**
                     * 设置催办详情
                     * @param RemindMessage 催办详情
                     */
                    void SetRemindMessage(const std::string& _remindMessage);

                    /**
                     * 判断参数 RemindMessage 是否已赋值
                     * @return RemindMessage 是否已赋值
                     */
                    bool RemindMessageHasBeenSet() const;

                private:

                    /**
                     * 是否能够催办
                     */
                    bool m_canRemind;
                    bool m_canRemindHasBeenSet;

                    /**
                     * 合同id
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 催办详情
                     */
                    std::string m_remindMessage;
                    bool m_remindMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWRECORDS_H_
