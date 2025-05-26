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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESULTITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 用户组的输出结果
                */
                class ResultItem : public AbstractModel
                {
                public:
                    ResultItem();
                    ~ResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取此处为用户组名
                     * @return Item 此处为用户组名
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置此处为用户组名
                     * @param _item 此处为用户组名
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
                     * 获取创建用户组是否成功
                     * @return Result 创建用户组是否成功
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置创建用户组是否成功
                     * @param _result 创建用户组是否成功
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取若是创建失败, 提供失败原因
                     * @return Reason 若是创建失败, 提供失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置若是创建失败, 提供失败原因
                     * @param _reason 若是创建失败, 提供失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 此处为用户组名
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 创建用户组是否成功
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 若是创建失败, 提供失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESULTITEM_H_
