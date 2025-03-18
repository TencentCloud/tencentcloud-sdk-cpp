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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCEINFORESPONSE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/SimpleInstanceInfo.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeInstanceInfo返回参数结构体
                */
                class DescribeInstanceInfoResponse : public AbstractModel
                {
                public:
                    DescribeInstanceInfoResponse();
                    ~DescribeInstanceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群描述信息
                     * @return SimpleInstanceInfo 集群描述信息
                     * 
                     */
                    SimpleInstanceInfo GetSimpleInstanceInfo() const;

                    /**
                     * 判断参数 SimpleInstanceInfo 是否已赋值
                     * @return SimpleInstanceInfo 是否已赋值
                     * 
                     */
                    bool SimpleInstanceInfoHasBeenSet() const;

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
                     * 集群描述信息
                     */
                    SimpleInstanceInfo m_simpleInstanceInfo;
                    bool m_simpleInstanceInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCEINFORESPONSE_H_
