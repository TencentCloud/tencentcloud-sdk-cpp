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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_RISKDEALEDTRENDITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_RISKDEALEDTRENDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 风险趋势项
                */
                class RiskDealedTrendItem : public AbstractModel
                {
                public:
                    RiskDealedTrendItem();
                    ~RiskDealedTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取未解决数量
                     * @return Unhandled 未解决数量
                     * 
                     */
                    uint64_t GetUnhandled() const;

                    /**
                     * 设置未解决数量
                     * @param _unhandled 未解决数量
                     * 
                     */
                    void SetUnhandled(const uint64_t& _unhandled);

                    /**
                     * 判断参数 Unhandled 是否已赋值
                     * @return Unhandled 是否已赋值
                     * 
                     */
                    bool UnhandledHasBeenSet() const;

                    /**
                     * 获取已解决数量
                     * @return Handled 已解决数量
                     * 
                     */
                    uint64_t GetHandled() const;

                    /**
                     * 设置已解决数量
                     * @param _handled 已解决数量
                     * 
                     */
                    void SetHandled(const uint64_t& _handled);

                    /**
                     * 判断参数 Handled 是否已赋值
                     * @return Handled 是否已赋值
                     * 
                     */
                    bool HandledHasBeenSet() const;

                    /**
                     * 获取新发现
                     * @return NewDiscoveryHandled 新发现
                     * 
                     */
                    uint64_t GetNewDiscoveryHandled() const;

                    /**
                     * 设置新发现
                     * @param _newDiscoveryHandled 新发现
                     * 
                     */
                    void SetNewDiscoveryHandled(const uint64_t& _newDiscoveryHandled);

                    /**
                     * 判断参数 NewDiscoveryHandled 是否已赋值
                     * @return NewDiscoveryHandled 是否已赋值
                     * 
                     */
                    bool NewDiscoveryHandledHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 未解决数量
                     */
                    uint64_t m_unhandled;
                    bool m_unhandledHasBeenSet;

                    /**
                     * 已解决数量
                     */
                    uint64_t m_handled;
                    bool m_handledHasBeenSet;

                    /**
                     * 新发现
                     */
                    uint64_t m_newDiscoveryHandled;
                    bool m_newDiscoveryHandledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_RISKDEALEDTRENDITEM_H_
