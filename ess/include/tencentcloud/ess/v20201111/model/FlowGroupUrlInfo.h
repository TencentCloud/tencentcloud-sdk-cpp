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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPURLINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FlowGroupApproverInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                */
                class FlowGroupUrlInfo : public AbstractModel
                {
                public:
                    FlowGroupUrlInfo();
                    ~FlowGroupUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同组子合同和签署方的信息，用于补充动态签署人。
                     * @return FlowGroupApproverInfos 合同组子合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    std::vector<FlowGroupApproverInfo> GetFlowGroupApproverInfos() const;

                    /**
                     * 设置合同组子合同和签署方的信息，用于补充动态签署人。
                     * @param _flowGroupApproverInfos 合同组子合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    void SetFlowGroupApproverInfos(const std::vector<FlowGroupApproverInfo>& _flowGroupApproverInfos);

                    /**
                     * 判断参数 FlowGroupApproverInfos 是否已赋值
                     * @return FlowGroupApproverInfos 是否已赋值
                     * 
                     */
                    bool FlowGroupApproverInfosHasBeenSet() const;

                private:

                    /**
                     * 合同组子合同和签署方的信息，用于补充动态签署人。
                     */
                    std::vector<FlowGroupApproverInfo> m_flowGroupApproverInfos;
                    bool m_flowGroupApproverInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPURLINFO_H_
