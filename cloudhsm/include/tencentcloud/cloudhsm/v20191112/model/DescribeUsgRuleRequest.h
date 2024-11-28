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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRULEREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeUsgRule请求参数结构体
                */
                class DescribeUsgRuleRequest : public AbstractModel
                {
                public:
                    DescribeUsgRuleRequest();
                    ~DescribeUsgRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组Id列表
                     * @return SgIds 安全组Id列表
                     * 
                     */
                    std::vector<std::string> GetSgIds() const;

                    /**
                     * 设置安全组Id列表
                     * @param _sgIds 安全组Id列表
                     * 
                     */
                    void SetSgIds(const std::vector<std::string>& _sgIds);

                    /**
                     * 判断参数 SgIds 是否已赋值
                     * @return SgIds 是否已赋值
                     * 
                     */
                    bool SgIdsHasBeenSet() const;

                private:

                    /**
                     * 安全组Id列表
                     */
                    std::vector<std::string> m_sgIds;
                    bool m_sgIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRULEREQUEST_H_
