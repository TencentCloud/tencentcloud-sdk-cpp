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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERPERSONALRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERPERSONALRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TriggerResp.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 拉取触发器列表返回值
                */
                class DescribeApplicationTriggerPersonalResp : public AbstractModel
                {
                public:
                    DescribeApplicationTriggerPersonalResp();
                    ~DescribeApplicationTriggerPersonalResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回条目总数
                     * @return TotalCount 返回条目总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置返回条目总数
                     * @param _totalCount 返回条目总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取触发器列表
                     * @return TriggerInfo 触发器列表
                     * 
                     */
                    std::vector<TriggerResp> GetTriggerInfo() const;

                    /**
                     * 设置触发器列表
                     * @param _triggerInfo 触发器列表
                     * 
                     */
                    void SetTriggerInfo(const std::vector<TriggerResp>& _triggerInfo);

                    /**
                     * 判断参数 TriggerInfo 是否已赋值
                     * @return TriggerInfo 是否已赋值
                     * 
                     */
                    bool TriggerInfoHasBeenSet() const;

                private:

                    /**
                     * 返回条目总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 触发器列表
                     */
                    std::vector<TriggerResp> m_triggerInfo;
                    bool m_triggerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERPERSONALRESP_H_
