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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_CALLDETAILS_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_CALLDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apcas/v20201127/model/CallDetailItem.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 调用明细返回数据体
                */
                class CallDetails : public AbstractModel
                {
                public:
                    CallDetails();
                    ~CallDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取符合条件的总条数
                     * @return TotalCount 符合条件的总条数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置符合条件的总条数
                     * @param TotalCount 符合条件的总条数
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取调用明细数组
                     * @return CallDetailSet 调用明细数组
                     */
                    std::vector<CallDetailItem> GetCallDetailSet() const;

                    /**
                     * 设置调用明细数组
                     * @param CallDetailSet 调用明细数组
                     */
                    void SetCallDetailSet(const std::vector<CallDetailItem>& _callDetailSet);

                    /**
                     * 判断参数 CallDetailSet 是否已赋值
                     * @return CallDetailSet 是否已赋值
                     */
                    bool CallDetailSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 调用明细数组
                     */
                    std::vector<CallDetailItem> m_callDetailSet;
                    bool m_callDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_CALLDETAILS_H_
