/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEIDCSRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEIDCSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/Idc.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeIdcs返回参数结构体
                */
                class DescribeIdcsResponse : public AbstractModel
                {
                public:
                    DescribeIdcsResponse();
                    ~DescribeIdcsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机房管理单元列表
                     * @return IdcSet 机房管理单元列表
                     * 
                     */
                    std::vector<Idc> GetIdcSet() const;

                    /**
                     * 判断参数 IdcSet 是否已赋值
                     * @return IdcSet 是否已赋值
                     * 
                     */
                    bool IdcSetHasBeenSet() const;

                private:

                    /**
                     * 机房管理单元列表
                     */
                    std::vector<Idc> m_idcSet;
                    bool m_idcSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEIDCSRESPONSE_H_
