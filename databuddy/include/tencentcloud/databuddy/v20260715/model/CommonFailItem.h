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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONFAILITEM_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONFAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 通用错误信息
                */
                class CommonFailItem : public AbstractModel
                {
                public:
                    CommonFailItem();
                    ~CommonFailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>uin或者groupId</p>
                     * @return Item <p>uin或者groupId</p>
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置<p>uin或者groupId</p>
                     * @param _item <p>uin或者groupId</p>
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return FailReason <p>错误信息</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _failReason <p>错误信息</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                private:

                    /**
                     * <p>uin或者groupId</p>
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONFAILITEM_H_
