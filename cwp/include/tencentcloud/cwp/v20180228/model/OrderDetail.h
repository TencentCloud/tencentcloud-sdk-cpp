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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ORDERDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ORDERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 订单详情
                */
                class OrderDetail : public AbstractModel
                {
                public:
                    OrderDetail();
                    ~OrderDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceID 资源ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置资源ID
                     * @param _resourceID 资源ID
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取计费项
                     * @return InquireKey 计费项
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置计费项
                     * @param _inquireKey 计费项
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取订单状态
- 1 正常
- 2 隔离期
- 3 已销毁
                     * @return Status 订单状态
- 1 正常
- 2 隔离期
- 3 已销毁
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置订单状态
- 1 正常
- 2 隔离期
- 3 已销毁
                     * @param _status 订单状态
- 1 正常
- 2 隔离期
- 3 已销毁
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 计费项
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * 订单状态
- 1 正常
- 2 隔离期
- 3 已销毁
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ORDERDETAIL_H_
