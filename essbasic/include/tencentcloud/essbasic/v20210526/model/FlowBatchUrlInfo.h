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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWBATCHURLINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWBATCHURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowBatchApproverInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 批量签署合同相关信息，指定批量签署合同和签署方的信息，用于补充动态签署人。
                */
                class FlowBatchUrlInfo : public AbstractModel
                {
                public:
                    FlowBatchUrlInfo();
                    ~FlowBatchUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量签署合同和签署方的信息，用于补充动态签署人。
                     * @return FlowBatchApproverInfos 批量签署合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    std::vector<FlowBatchApproverInfo> GetFlowBatchApproverInfos() const;

                    /**
                     * 设置批量签署合同和签署方的信息，用于补充动态签署人。
                     * @param _flowBatchApproverInfos 批量签署合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    void SetFlowBatchApproverInfos(const std::vector<FlowBatchApproverInfo>& _flowBatchApproverInfos);

                    /**
                     * 判断参数 FlowBatchApproverInfos 是否已赋值
                     * @return FlowBatchApproverInfos 是否已赋值
                     * 
                     */
                    bool FlowBatchApproverInfosHasBeenSet() const;

                private:

                    /**
                     * 批量签署合同和签署方的信息，用于补充动态签署人。
                     */
                    std::vector<FlowBatchApproverInfo> m_flowBatchApproverInfos;
                    bool m_flowBatchApproverInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWBATCHURLINFO_H_
