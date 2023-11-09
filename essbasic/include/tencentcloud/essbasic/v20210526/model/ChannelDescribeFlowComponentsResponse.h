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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEFLOWCOMPONENTSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEFLOWCOMPONENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/RecipientComponentInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeFlowComponents返回参数结构体
                */
                class ChannelDescribeFlowComponentsResponse : public AbstractModel
                {
                public:
                    ChannelDescribeFlowComponentsResponse();
                    ~ChannelDescribeFlowComponentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同填写控件信息列表，填写控件会按照参与方角色进行分类。
                     * @return RecipientComponentInfos 合同填写控件信息列表，填写控件会按照参与方角色进行分类。
                     * 
                     */
                    std::vector<RecipientComponentInfo> GetRecipientComponentInfos() const;

                    /**
                     * 判断参数 RecipientComponentInfos 是否已赋值
                     * @return RecipientComponentInfos 是否已赋值
                     * 
                     */
                    bool RecipientComponentInfosHasBeenSet() const;

                private:

                    /**
                     * 合同填写控件信息列表，填写控件会按照参与方角色进行分类。
                     */
                    std::vector<RecipientComponentInfo> m_recipientComponentInfos;
                    bool m_recipientComponentInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEFLOWCOMPONENTSRESPONSE_H_
