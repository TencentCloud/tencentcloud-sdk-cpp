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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEUSERBINDWORKLOADGROUPRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEUSERBINDWORKLOADGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/UserWorkloadGroup.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeUserBindWorkloadGroup返回参数结构体
                */
                class DescribeUserBindWorkloadGroupResponse : public AbstractModel
                {
                public:
                    DescribeUserBindWorkloadGroupResponse();
                    ~DescribeUserBindWorkloadGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户绑定资源组信息
                     * @return UserBindInfos 用户绑定资源组信息
                     * 
                     */
                    std::vector<UserWorkloadGroup> GetUserBindInfos() const;

                    /**
                     * 判断参数 UserBindInfos 是否已赋值
                     * @return UserBindInfos 是否已赋值
                     * 
                     */
                    bool UserBindInfosHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 用户绑定资源组信息
                     */
                    std::vector<UserWorkloadGroup> m_userBindInfos;
                    bool m_userBindInfosHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEUSERBINDWORKLOADGROUPRESPONSE_H_
