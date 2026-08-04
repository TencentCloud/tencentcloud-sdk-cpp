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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MESSAGEITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MESSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 校验消息项
                */
                class MessageItem : public AbstractModel
                {
                public:
                    MessageItem();
                    ~MessageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计费项标识</p>
                     * @return BillingItem <p>计费项标识</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>计费项标识</p>
                     * @param _billingItem <p>计费项标识</p>
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取<p>校验失败描述信息</p>
                     * @return Message <p>校验失败描述信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>校验失败描述信息</p>
                     * @param _message <p>校验失败描述信息</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>计费项标识</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>校验失败描述信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MESSAGEITEM_H_
