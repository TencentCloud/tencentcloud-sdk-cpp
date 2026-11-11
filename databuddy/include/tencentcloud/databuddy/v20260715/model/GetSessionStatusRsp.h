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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETSESSIONSTATUSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETSESSIONSTATUSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/SessionStatusItem.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 查询会话任务状态响应
                */
                class GetSessionStatusRsp : public AbstractModel
                {
                public:
                    GetSessionStatusRsp();
                    ~GetSessionStatusRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果列表，与请求 Items 顺序一致
                     * @return Items 结果列表，与请求 Items 顺序一致
                     * 
                     */
                    std::vector<SessionStatusItem> GetItems() const;

                    /**
                     * 设置结果列表，与请求 Items 顺序一致
                     * @param _items 结果列表，与请求 Items 顺序一致
                     * 
                     */
                    void SetItems(const std::vector<SessionStatusItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 结果列表，与请求 Items 顺序一致
                     */
                    std::vector<SessionStatusItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETSESSIONSTATUSRSP_H_
