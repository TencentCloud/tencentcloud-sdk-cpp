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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWGROUPRECORD_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWGROUPRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/RemindFlowGroupDetail.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同组催办接口返回的详细信息。
                */
                class RemindFlowGroupRecord : public AbstractModel
                {
                public:
                    RemindFlowGroupRecord();
                    ~RemindFlowGroupRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>对应签署人出现的合同列表</p>
                     * @return FlowIds <p>对应签署人出现的合同列表</p>
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置<p>对应签署人出现的合同列表</p>
                     * @param _flowIds <p>对应签署人出现的合同列表</p>
                     * 
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取<p>对应签署人出现的合同名</p>
                     * @return FlowNames <p>对应签署人出现的合同名</p>
                     * 
                     */
                    std::vector<std::string> GetFlowNames() const;

                    /**
                     * 设置<p>对应签署人出现的合同名</p>
                     * @param _flowNames <p>对应签署人出现的合同名</p>
                     * 
                     */
                    void SetFlowNames(const std::vector<std::string>& _flowNames);

                    /**
                     * 判断参数 FlowNames 是否已赋值
                     * @return FlowNames 是否已赋值
                     * 
                     */
                    bool FlowNamesHasBeenSet() const;

                    /**
                     * 获取<p>签署人姓名</p>
                     * @return ApproverName <p>签署人姓名</p>
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>签署人姓名</p>
                     * @param _approverName <p>签署人姓名</p>
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取<p>签署人手机号</p>
                     * @return Mobile <p>签署人手机号</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>签署人手机号</p>
                     * @param _mobile <p>签署人手机号</p>
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取<p>催办合同组下签署人维度详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemindMessageList <p>催办合同组下签署人维度详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RemindFlowGroupDetail> GetRemindMessageList() const;

                    /**
                     * 设置<p>催办合同组下签署人维度详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remindMessageList <p>催办合同组下签署人维度详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemindMessageList(const std::vector<RemindFlowGroupDetail>& _remindMessageList);

                    /**
                     * 判断参数 RemindMessageList 是否已赋值
                     * @return RemindMessageList 是否已赋值
                     * 
                     */
                    bool RemindMessageListHasBeenSet() const;

                private:

                    /**
                     * <p>对应签署人出现的合同列表</p>
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * <p>对应签署人出现的合同名</p>
                     */
                    std::vector<std::string> m_flowNames;
                    bool m_flowNamesHasBeenSet;

                    /**
                     * <p>签署人姓名</p>
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>签署人手机号</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>催办合同组下签署人维度详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RemindFlowGroupDetail> m_remindMessageList;
                    bool m_remindMessageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWGROUPRECORD_H_
