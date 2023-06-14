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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PREPAREFLOWSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PREPAREFLOWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * PrepareFlows返回参数结构体
                */
                class PrepareFlowsResponse : public AbstractModel
                {
                public:
                    PrepareFlowsResponse();
                    ~PrepareFlowsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取待发起文件确认页
                     * @return ConfirmUrl 待发起文件确认页
                     * 
                     */
                    std::string GetConfirmUrl() const;

                    /**
                     * 判断参数 ConfirmUrl 是否已赋值
                     * @return ConfirmUrl 是否已赋值
                     * 
                     */
                    bool ConfirmUrlHasBeenSet() const;

                private:

                    /**
                     * 待发起文件确认页
                     */
                    std::string m_confirmUrl;
                    bool m_confirmUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PREPAREFLOWSRESPONSE_H_
