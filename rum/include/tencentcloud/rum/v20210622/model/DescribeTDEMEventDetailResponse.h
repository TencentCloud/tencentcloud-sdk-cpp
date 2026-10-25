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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTDETAILRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/EventView.h>
#include <tencentcloud/rum/v20210622/model/SymbolicatedView.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMEventDetail返回参数结构体
                */
                class DescribeTDEMEventDetailResponse : public AbstractModel
                {
                public:
                    DescribeTDEMEventDetailResponse();
                    ~DescribeTDEMEventDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件主表视图</p>
                     * @return Event <p>事件主表视图</p>
                     * 
                     */
                    EventView GetEvent() const;

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取<p>符号化结果，未翻译时可省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Symbolicated <p>符号化结果，未翻译时可省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SymbolicatedView GetSymbolicated() const;

                    /**
                     * 判断参数 Symbolicated 是否已赋值
                     * @return Symbolicated 是否已赋值
                     * 
                     */
                    bool SymbolicatedHasBeenSet() const;

                private:

                    /**
                     * <p>事件主表视图</p>
                     */
                    EventView m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * <p>符号化结果，未翻译时可省略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SymbolicatedView m_symbolicated;
                    bool m_symbolicatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMEVENTDETAILRESPONSE_H_
