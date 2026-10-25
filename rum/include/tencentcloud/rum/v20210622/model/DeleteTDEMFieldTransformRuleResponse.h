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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETETDEMFIELDTRANSFORMRULERESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETETDEMFIELDTRANSFORMRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DeleteTDEMFieldTransformRule返回参数结构体
                */
                class DeleteTDEMFieldTransformRuleResponse : public AbstractModel
                {
                public:
                    DeleteTDEMFieldTransformRuleResponse();
                    ~DeleteTDEMFieldTransformRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则 ID</p>
                     * @return Id <p>规则 ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>是否已删除</p>
                     * @return Deleted <p>是否已删除</p>
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取<p>提示信息</p>
                     * @return Message <p>提示信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>规则 ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>是否已删除</p>
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * <p>提示信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETETDEMFIELDTRANSFORMRULERESPONSE_H_
