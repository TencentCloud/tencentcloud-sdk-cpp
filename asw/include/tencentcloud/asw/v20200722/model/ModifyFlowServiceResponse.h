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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_MODIFYFLOWSERVICERESPONSE_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_MODIFYFLOWSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * ModifyFlowService返回参数结构体
                */
                class ModifyFlowServiceResponse : public AbstractModel
                {
                public:
                    ModifyFlowServiceResponse();
                    ~ModifyFlowServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态机资源名
                     * @return FlowServiceResource 状态机资源名
                     * 
                     */
                    std::string GetFlowServiceResource() const;

                    /**
                     * 判断参数 FlowServiceResource 是否已赋值
                     * @return FlowServiceResource 是否已赋值
                     * 
                     */
                    bool FlowServiceResourceHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateDate 更新时间
                     * 
                     */
                    std::string GetUpdateDate() const;

                    /**
                     * 判断参数 UpdateDate 是否已赋值
                     * @return UpdateDate 是否已赋值
                     * 
                     */
                    bool UpdateDateHasBeenSet() const;

                private:

                    /**
                     * 状态机资源名
                     */
                    std::string m_flowServiceResource;
                    bool m_flowServiceResourceHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateDate;
                    bool m_updateDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_MODIFYFLOWSERVICERESPONSE_H_
