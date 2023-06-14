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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CREATEPROJECTRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CREATEPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/RtmpPushInputInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * CreateProject返回参数结构体
                */
                class CreateProjectResponse : public AbstractModel
                {
                public:
                    CreateProjectResponse();
                    ~CreateProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取项目 Id。
                     * @return ProjectId 项目 Id。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<li> 当 Catagory 为 STREAM_CONNECT 时，数组返回长度为2 ，第0个代表主输入源推流信息，第1个代表备输入源推流信息。只有当各自输入源类型为推流时才有有效内容。</li>
                     * @return RtmpPushInputInfoSet <li> 当 Catagory 为 STREAM_CONNECT 时，数组返回长度为2 ，第0个代表主输入源推流信息，第1个代表备输入源推流信息。只有当各自输入源类型为推流时才有有效内容。</li>
                     * 
                     */
                    std::vector<RtmpPushInputInfo> GetRtmpPushInputInfoSet() const;

                    /**
                     * 判断参数 RtmpPushInputInfoSet 是否已赋值
                     * @return RtmpPushInputInfoSet 是否已赋值
                     * 
                     */
                    bool RtmpPushInputInfoSetHasBeenSet() const;

                private:

                    /**
                     * 项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <li> 当 Catagory 为 STREAM_CONNECT 时，数组返回长度为2 ，第0个代表主输入源推流信息，第1个代表备输入源推流信息。只有当各自输入源类型为推流时才有有效内容。</li>
                     */
                    std::vector<RtmpPushInputInfo> m_rtmpPushInputInfoSet;
                    bool m_rtmpPushInputInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CREATEPROJECTRESPONSE_H_
