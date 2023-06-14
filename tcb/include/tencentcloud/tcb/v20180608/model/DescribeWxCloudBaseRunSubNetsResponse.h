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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNSUBNETSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNSUBNETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeWxCloudBaseRunSubNets返回参数结构体
                */
                class DescribeWxCloudBaseRunSubNetsResponse : public AbstractModel
                {
                public:
                    DescribeWxCloudBaseRunSubNetsResponse();
                    ~DescribeWxCloudBaseRunSubNetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子网Id列表
                     * @return SubNetIds 子网Id列表
                     * 
                     */
                    std::vector<std::string> GetSubNetIds() const;

                    /**
                     * 判断参数 SubNetIds 是否已赋值
                     * @return SubNetIds 是否已赋值
                     * 
                     */
                    bool SubNetIdsHasBeenSet() const;

                private:

                    /**
                     * 子网Id列表
                     */
                    std::vector<std::string> m_subNetIds;
                    bool m_subNetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNSUBNETSRESPONSE_H_
