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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UNATTACHSECURITYGROUPINOUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UNATTACHSECURITYGROUPINOUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 安全组解绑输入/输出请求信息。
                */
                class UnattachSecurityGroupInOutInfo : public AbstractModel
                {
                public:
                    UnattachSecurityGroupInOutInfo();
                    ~UnattachSecurityGroupInOutInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该安全组关联的FlowId。
                     * @return FlowId 该安全组关联的FlowId。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置该安全组关联的FlowId。
                     * @param _flowId 该安全组关联的FlowId。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取要解绑的输入/输出ID。
                     * @return InOutId 要解绑的输入/输出ID。
                     * 
                     */
                    std::string GetInOutId() const;

                    /**
                     * 设置要解绑的输入/输出ID。
                     * @param _inOutId 要解绑的输入/输出ID。
                     * 
                     */
                    void SetInOutId(const std::string& _inOutId);

                    /**
                     * 判断参数 InOutId 是否已赋值
                     * @return InOutId 是否已赋值
                     * 
                     */
                    bool InOutIdHasBeenSet() const;

                    /**
                     * 获取输入/输出类型，可选值：
Input：输入
Output：输出。
                     * @return InOutType 输入/输出类型，可选值：
Input：输入
Output：输出。
                     * 
                     */
                    std::string GetInOutType() const;

                    /**
                     * 设置输入/输出类型，可选值：
Input：输入
Output：输出。
                     * @param _inOutType 输入/输出类型，可选值：
Input：输入
Output：输出。
                     * 
                     */
                    void SetInOutType(const std::string& _inOutType);

                    /**
                     * 判断参数 InOutType 是否已赋值
                     * @return InOutType 是否已赋值
                     * 
                     */
                    bool InOutTypeHasBeenSet() const;

                    /**
                     * 获取Flow所在的Region，和input共用。
                     * @return FlowRegion Flow所在的Region，和input共用。
                     * 
                     */
                    std::string GetFlowRegion() const;

                    /**
                     * 设置Flow所在的Region，和input共用。
                     * @param _flowRegion Flow所在的Region，和input共用。
                     * 
                     */
                    void SetFlowRegion(const std::string& _flowRegion);

                    /**
                     * 判断参数 FlowRegion 是否已赋值
                     * @return FlowRegion 是否已赋值
                     * 
                     */
                    bool FlowRegionHasBeenSet() const;

                private:

                    /**
                     * 该安全组关联的FlowId。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 要解绑的输入/输出ID。
                     */
                    std::string m_inOutId;
                    bool m_inOutIdHasBeenSet;

                    /**
                     * 输入/输出类型，可选值：
Input：输入
Output：输出。
                     */
                    std::string m_inOutType;
                    bool m_inOutTypeHasBeenSet;

                    /**
                     * Flow所在的Region，和input共用。
                     */
                    std::string m_flowRegion;
                    bool m_flowRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UNATTACHSECURITYGROUPINOUTINFO_H_
