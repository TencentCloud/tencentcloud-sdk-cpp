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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEIDSWHITERULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEIDSWHITERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteIdsWhiteRule请求参数结构体
                */
                class DeleteIdsWhiteRuleRequest : public AbstractModel
                {
                public:
                    DeleteIdsWhiteRuleRequest();
                    ~DeleteIdsWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取入侵防御白名单id
参考DescribeIdsWhiteRule接口返回的Id字段
                     * @return Id 入侵防御白名单id
参考DescribeIdsWhiteRule接口返回的Id字段
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置入侵防御白名单id
参考DescribeIdsWhiteRule接口返回的Id字段
                     * @param _id 入侵防御白名单id
参考DescribeIdsWhiteRule接口返回的Id字段
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 入侵防御白名单id
参考DescribeIdsWhiteRule接口返回的Id字段
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEIDSWHITERULEREQUEST_H_
